use std::io;
use std::path::{Path, PathBuf};

use iced::{Color, Element, Point, Size, keyboard, mouse};
use tiara_core::analysis_result_publishing::AnalysisResultManager;
use tiara_core::complex_parameter::ComplexPoint;
use tiara_core::curve_import::{
    CurveImport, CurveImportError, CurveImportObserver, CurveImportOutcome, CurveImportRequest,
    dispatch_curve_import,
};
use tiara_core::wav_audio::{AccumulatorMode, PcmAccumulator};

use crate::shared::window_shell;

pub const TITLE: &str = "Analysis results";
pub const SCREENSHOT: &str = "screenshots/Analysis_results_window.png";
pub const FORM_RESOURCE: &str = "DFWindow";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01a72620");
pub const COMMAND_SHORTCUT_IDS: [u16; 27] = [
    0x01f6, 0x01fe, 0x0206, 0x021a, 0x01f7, 0x01f8, 0x01f9, 0x01fa, 0x0218, 0x01fb, 0x01fc, 0x01fd,
    0x01ff, 0x0200, 0x0201, 0x0202, 0x0203, 0x021b, 0x021c, 0x0479, 0x047a, 0x047b, 0x021d, 0x021e,
    0x0208, 0x0204, 0x0205,
];
pub const SHARED_RESULT_SLOT_COUNT: usize = 7;
const READY_STATUS: &str = "Ready";
const PUBLISHED_STATUS: &str = "Result published";
const MENUS: &[(&str, &[&str])] = &[
    (
        "File",
        &[
            "Open...",
            "Save",
            "Save As...",
            "Export...",
            "Print...",
            "Close",
        ],
    ),
    ("Edit", &["Copy", "Copy all", "Select all"]),
    (
        "View",
        &[
            "Zoom in",
            "Zoom out",
            "Default curve width...",
            "Vector label style...",
            "Redraw",
        ],
    ),
    ("Process", &["Add curves...", "Evaluate...", "Fourier..."]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "Open", "Copy", "Select", "Zoom in", "Zoom out", "100%", "Grid", "Text", "Curve", "Cursor",
];

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VectorStyle {
    First,
    Second,
    Third,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GainMarginPhaseReference {
    ZeroDegrees,
    Negative180Degrees,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct WindowBounds {
    pub left: i32,
    pub top: i32,
    pub width: i32,
    pub height: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct StartupPreferences {
    pub bounds: WindowBounds,
    pub vector_style: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AnalysisSurfaceHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DiagramCanvasHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AnalysisObjectHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveSourceCatalogHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveAudioChannelMode {
    Mono,
    First,
    Second,
    Unsupported,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveAudioSourceKind {
    SelectedCurves,
    AllCurves,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisTabAppearance {
    Inactive,
    Active,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TabTextSize {
    pub width: i32,
    pub height: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveAudioCandidate {
    pub curve: AnalysisObjectHandle,
    pub channel_mode: CurveAudioChannelMode,
    pub value_index: usize,
    pub eligible: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct CurveAudioRow {
    pub time_seconds: f64,
    pub values: Vec<f64>,
}

#[derive(Debug, Clone, PartialEq)]
pub struct CurveAudioPlaybackInput {
    pub source_kind: CurveAudioSourceKind,
    pub candidates: Vec<CurveAudioCandidate>,
    pub rows: Vec<CurveAudioRow>,
    pub sample_rate: u32,
    pub sizing_factor: f64,
    pub source_start_seconds: f64,
    pub source_stop_seconds: f64,
    pub visible_start_seconds: f64,
    pub visible_stop_seconds: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveAudioExportDialogRequest {
    pub title: &'static str,
    pub default_extension: &'static str,
    pub initial_file_name: &'static str,
    pub filter: FileDialogFilter,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveImportFileDialogRequest {
    pub initial_file_name: &'static str,
    pub allow_multiple: bool,
    pub file_must_exist: bool,
    pub path_must_exist: bool,
    pub help_context: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CurveImportOptions {
    pub lines: Vec<String>,
    pub format_code: u8,
    pub display_format: u8,
    pub skip_rows: usize,
    pub delimiter: String,
    pub amplitude_in_decibels: bool,
    pub insert_into_active_diagram: bool,
    pub auto_import: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AutoImportSettings {
    pub file_name: PathBuf,
    pub file_type: u8,
    pub skip_rows: usize,
    pub delimiter: String,
    pub amplitude_in_decibels: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct AnalysisResultAnnotationRequest {
    pub lines: Vec<String>,
    pub curve: Option<AnalysisObjectHandle>,
    pub anchor: Point,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct SelectedCurvePoint {
    pub curve: AnalysisObjectHandle,
    pub anchor: Point,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct SelectedCurveCursor {
    pub curve: AnalysisObjectHandle,
    pub cursor: CursorKind,
    pub position: Point,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveSampleDirection {
    Zero,
    One,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CurveRenderSample {
    pub x: f64,
    pub y: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveRenderPixel {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CurveStatistics {
    pub average: f64,
    pub absolute_average: f64,
    pub rms: f64,
    pub covered_start: f64,
    pub covered_end: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CurveRipple {
    pub absolute: f64,
    pub relative: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct PhaseCrossingMagnitude {
    pub coordinate: f64,
    pub magnitude_decibels: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct PhaseMarginResult {
    pub coordinate: f64,
    pub margin_degrees: f64,
}

#[derive(Debug, Clone, Copy)]
struct CurveAudioChannels {
    first: Option<usize>,
    second: Option<usize>,
    last_eligible: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DiagramPanelHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DiagramPanelExportCandidate {
    pub panel: DiagramPanelHandle,
    pub member_count: usize,
    pub mode: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextExportDialogRequest {
    SelectedCurve,
    DiagramPanel { one_based_index: usize },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ClearAllConfirmation {
    Yes,
    No,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveDeletionOptions {
    pub confirm: bool,
    pub remove_empty_axes: bool,
    pub remove_empty_coordinate_systems: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AxisCreationOptions {
    pub enforce_layout: bool,
    pub enforce_twin_rules: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct XAxisCreationOptions {
    pub redraw: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AxisDeletionOptions {
    pub relayout: bool,
    pub redraw: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisNotice {
    DiagramSettingsCleared,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementResultNotice {
    FileNotFound,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MeasurementResultContext {
    pub circuit_path: String,
    pub analysis_type: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum NyquistFormat {
    #[default]
    Rectangular,
    PolarDegrees,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SmithMatrixLabelVisibility {
    pub real_imaginary: bool,
    pub magnitude_phase: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CursorHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CursorPair {
    pub a: Option<CursorHandle>,
    pub b: Option<CursorHandle>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorKind {
    A,
    B,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorCoordinate {
    X,
    Y,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorNavigationDirection {
    PreviousSample,
    NextSample,
    PreviousCurve,
    NextCurve,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum KeyDownRoute {
    Ignored,
    Cancelled,
    CursorMoved {
        cursor: CursorHandle,
        direction: CursorNavigationDirection,
    },
    AxisScrolled,
    SelectionDeleted,
    Repainted,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    Hide,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct WindowPosition {
    pub left: i32,
    pub top: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PageDeletionOutcome {
    NormalDiagramActive,
    EmptyOrDesignGrid,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PageNameDialogResult {
    Cancelled,
    Accepted(String),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TextDraftHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FigureDraftHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextEditorResult {
    Cancelled,
    Accepted { line_count: usize },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FourierAnalysisMode {
    Spectrum,
    Series,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DiagramPrintDialogRequest {
    pub page_count: u32,
    pub current_page: u32,
    pub copies: u32,
    pub help_context: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DiagramPrintRange {
    All,
    Current,
    Pages { first: u32, last: u32 },
    Unsupported,
}

#[derive(Debug, Default, Clone, Copy, PartialEq, Eq)]
pub enum PrintPreviewState {
    #[default]
    Normal,
    Preview,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AutoLegendKind {
    VectorLabels,
    CurveLegend,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AnalysisResultHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FileDialogFilter {
    pub name: &'static str,
    pub pattern: &'static str,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AutoTestResultDialogRequest {
    pub title: &'static str,
    pub default_extension: &'static str,
    pub initial_file_name: &'static str,
    pub filters: [FileDialogFilter; 3],
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PictureExportDialogRequest {
    pub title: &'static str,
    pub default_extension: &'static str,
    pub initial_file_name: &'static str,
    pub filters: [FileDialogFilter; 5],
    pub options: [PictureExportDialogOption; 4],
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PictureExportDialogOption {
    OverwritePrompt,
    HideReadOnly,
    ShowHelp,
    PathMustExist,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PictureExportSelection {
    pub path: PathBuf,
    pub filter_index: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PictureExportFormat {
    Emf,
    Bmp,
    Jpeg,
    Gif,
    Png,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DiagramOpenDialogRequest {
    pub default_extension: &'static str,
    pub initial_file_name: &'static str,
    pub filter: FileDialogFilter,
    pub allow_multiple: bool,
    pub file_must_exist: bool,
    pub help_context: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PropertiesTarget {
    Axis,
    Curve,
    Text,
    Arrow,
    PenFigure,
    Metafile,
    Unsupported,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CopySelectionFormat {
    EditableDiagramData,
    RenderedMetafile,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PasteClipboardFormat {
    DelphiPicture,
    Text,
    EditableDiagramData,
    EnhancedMetafile,
    MetafilePicture,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PasteObjectHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CursorCurveAlignmentInput {
    pub cursor_a_x: f64,
    pub cursor_b_x: f64,
    pub curve_shift: f64,
    pub data_min_x: f64,
    pub data_max_x: f64,
    pub allowed_min_x: f64,
    pub allowed_max_x: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CursorCurveAlignment {
    pub curve_shift: f64,
    pub allowed_min_x: f64,
    pub allowed_max_x: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveAxisCapacity {
    Independent {
        x_axis_count: usize,
        x_component_count: usize,
        y_axis_count: usize,
        y_component_count: usize,
    },
    XOnly {
        x_axis_count: usize,
        x_component_count: usize,
    },
    Unsupported,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AnalysisCommandStateInput {
    pub form_mode: u8,
    pub has_diagram: bool,
    pub post_processor_feature_enabled: bool,
    pub post_processor_blocked: bool,
    pub selected_curve_capacity: Option<CurveAxisCapacity>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(usize)]
pub enum AnalysisCommand {
    Edit,
    Cut,
    Copy,
    Paste,
    SelectAllCurves,
    PostProcessor,
    AddXAxis,
    AddYAxis,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AnalysisCommandStates {
    enabled: [bool; 8],
}

impl AnalysisCommandStates {
    #[must_use]
    pub const fn is_enabled(self, command: AnalysisCommand) -> bool {
        self.enabled[command as usize]
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum RefuseClickTimerState {
    Inactive,
    Active,
}

pub trait AnalysisWindowLifecycleHost {
    fn save_integer(&mut self, name: &str, value: i32);
    fn release_shared_result_slot(&mut self, index: usize);
}

pub trait AnalysisCloseHost {
    fn release_drawing_handle(&mut self);
    fn clear_transient_text(&mut self);
    fn close_associated_view(&mut self);
    fn close_cursor_window(&mut self);
}

pub trait AnalysisLayoutHost {
    fn move_cursor_window(&mut self, position: WindowPosition);
}

pub trait AnalysisResultTabHost {
    fn activate_result_page(&mut self, selected_index: usize, force_refresh: bool);
    fn refresh_analysis_scrollbars(&mut self);
}

#[derive(Debug, Clone, PartialEq)]
pub struct ResultTabHint {
    pub tab_index: usize,
    pub text: String,
    pub anchor: Point,
}

pub trait AnalysisTabHoverHost {
    fn result_tab_hint_at(&mut self, position: Point) -> Option<ResultTabHint>;
    fn show_result_tab_hint(&mut self, hint: &ResultTabHint);
    fn hide_result_tab_hint(&mut self);
    fn clear_result_tab_hint_text(&mut self);
}

pub trait AnalysisPageHost {
    fn record_command(&mut self, name: &str);
    fn delete_result_page(&mut self, selected_index: usize) -> PageDeletionOutcome;
    fn resize_active_diagram(&mut self);
    fn clear_analysis_canvas(&mut self);
}

pub trait AnalysisPageNameHost {
    fn record_command(&mut self, name: &str);
    fn active_page_index(&mut self) -> usize;
    fn page_caption(&mut self, index: usize) -> String;
    fn request_page_name(&mut self, initial_name: &str) -> PageNameDialogResult;
    fn synchronize_page_name(&mut self, index: usize, name: String);
    fn rebuild_window_caption(&mut self, index: usize);
}

pub trait AnalysisTextPlacementHost {
    fn record_command(&mut self, name: &str);
    fn set_text_tool_down(&mut self, down: bool);
    fn set_selection_tool_down(&mut self, down: bool);
    fn create_text_draft(&mut self, surface: AnalysisSurfaceHandle) -> TextDraftHandle;
    fn edit_text_draft(&mut self, draft: TextDraftHandle) -> TextEditorResult;
    fn discard_text_draft(&mut self, draft: TextDraftHandle);
    fn prepare_text_preview(
        &mut self,
        draft: TextDraftHandle,
        surface: AnalysisSurfaceHandle,
        origin: Point,
    ) -> Size;
    fn show_text_preview_outline(&mut self, origin: Point, size: Size);
}

pub trait AnalysisPrintHost {
    fn record_command(&mut self, command: &str);
    fn open_print_dialog(
        &mut self,
        request: DiagramPrintDialogRequest,
    ) -> Option<DiagramPrintRange>;
    fn open_printer_setup(&mut self, help_context: u32);
    fn set_print_preview_checked(&mut self, checked: bool);
    fn apply_embedded_print_preview(&mut self, enabled: bool, notebook_page: usize, page_mode: u8);
    fn suspend_print_preview(&mut self, surface: AnalysisSurfaceHandle) -> Option<u8>;
    fn begin_print_job(&mut self, title: &str);
    fn show_print_abort_dialog(&mut self);
    fn print_pages(&mut self, first: u32, last: u32);
    fn print_job_aborted(&self) -> bool;
    fn end_print_job(&mut self);
    fn close_print_abort_dialog(&mut self);
    fn restore_print_preview(&mut self, surface: AnalysisSurfaceHandle, page_mode: u8);
    fn clear_page_layout_caches(&mut self);
    fn refresh_analysis_layout(&mut self);
}

pub trait AnalysisMarginEditorHost {
    fn record_command(&mut self, command: &str);
    fn show_modeless_margin_editor(&mut self);
    fn refresh_margin_controls(&mut self);
}

pub trait AnalysisDiagramRenderHost {
    fn apply_export_viewport(&mut self, viewport: WindowBounds);
    fn replace_canvas(&mut self, canvas: DiagramCanvasHandle) -> DiagramCanvasHandle;
    fn recalculate_diagram_layout(&mut self);
    fn paint_full_diagram_on_white(&mut self);
    fn restore_live_viewport_and_repaint(&mut self);
}

pub trait AnalysisTextExportHost {
    fn record_command(&mut self, command: &str);
    fn selection_category(&mut self) -> u8;
    fn first_selected_object(&mut self) -> AnalysisObjectHandle;
    fn open_text_export_dialog(&mut self, request: TextExportDialogRequest) -> Option<PathBuf>;
    fn write_selected_curve_text(&mut self, path: &Path, curve: AnalysisObjectHandle);
    fn panel_candidates(&mut self) -> Vec<DiagramPanelExportCandidate>;
    fn write_panel_text(&mut self, path: &Path, panel: DiagramPanelHandle) -> bool;
    fn write_panel_csd(&mut self, path: &Path, panel: DiagramPanelHandle);
}

pub trait AnalysisGridColorHost {
    fn record_command(&mut self, command: &str);
    fn open_unseeded_grid_color_dialog(&mut self) -> Option<Color>;
    fn clear_all_page_render_caches(&mut self);
    fn set_all_coordinate_system_grid_colors(&mut self, color: Color);
    fn recalculate_active_diagram_layout(&mut self);
    fn redraw_active_page(&mut self);
}

pub trait AnalysisClearAllHost {
    fn record_command(&mut self, command: &str);
    fn confirmation_required(&mut self) -> bool;
    fn confirm_clear_all(&mut self) -> ClearAllConfirmation;
    fn invoke_save_as(&mut self);
    fn clear_allowed_after_save_as(&mut self) -> bool;
    fn clear_all_pages(&mut self);
    fn cursor_window_visible(&mut self) -> bool;
    fn hide_cursor_window(&mut self);
    fn repaint_window(&mut self);
    fn refresh_command_states(&mut self);
}

pub trait AnalysisCurveProcessHost: AnalysisTextExportHost {
    fn replace_decimal_separator(&mut self, separator: char) -> char;
    fn show_invalid_curve_selection(&mut self);
    fn session_working_path(&mut self) -> PathBuf;
    fn configure_process_curve(&mut self, working_path: &Path, source_curve: AnalysisObjectHandle);
    fn remove_stale_process_outputs(&mut self);
    fn open_process_curve_dialog(&mut self) -> bool;
    fn run_process_curve(&mut self);
}

pub trait AnalysisDiagramSaveHost {
    fn record_command(&mut self, command: &str);
    fn restore_default_diagram_tool(&mut self);
    fn document_path(&mut self, surface: AnalysisSurfaceHandle) -> PathBuf;
    fn invoke_demo_save_as(&mut self, surface: AnalysisSurfaceHandle);
    fn save_existing_document(&mut self, path: &Path);
}

pub trait AnalysisComponentParameterHost {
    fn record_command(&mut self, command: &str);
    fn open_component_parameter_viewer(&mut self, surface: AnalysisSurfaceHandle);
}

pub trait AnalysisWindowShowHost {
    fn refresh_active_diagram_commands(&mut self, surface: AnalysisSurfaceHandle);
    fn localize_analysis_window(&mut self);
    fn apply_image_scroll_box_show_state(&mut self, state: bool);
}

pub trait AnalysisCopyButtonMouseHost {
    fn copy_button_macro_position(&mut self, local_position: Point) -> Point;
    fn record_copy_button_mouse_down(&mut self, position: Point);
    fn current_working_directory(&mut self) -> PathBuf;
    fn write_active_diagram_ini(&mut self, surface: AnalysisSurfaceHandle, path: &Path);
}

pub trait AnalysisRippleReportHost {
    fn build_ripple_report(&mut self, surface: AnalysisSurfaceHandle) -> Option<TextDraftHandle>;
    fn configure_ripple_text(&mut self, draft: TextDraftHandle, font: &str, size: u16);
    fn edit_ripple_text(&mut self, draft: TextDraftHandle) -> TextEditorResult;
    fn apply_edited_ripple_text(&mut self, draft: TextDraftHandle);
    fn update_current_text_font(&mut self, draft: TextDraftHandle);
    fn discard_ripple_text(&mut self, draft: TextDraftHandle);
    fn prepare_ripple_preview(
        &mut self,
        draft: TextDraftHandle,
        surface: AnalysisSurfaceHandle,
        origin: Point,
    ) -> Size;
    fn show_ripple_preview_outline(&mut self, origin: Point, size: Size);
}

pub trait AnalysisVerticalScrollMouseHost {
    fn up_scroll_macro_position(&mut self, local_position: Point) -> Point;
    fn record_up_scroll_mouse_down(&mut self, position: Point);
    fn down_scroll_macro_position(&mut self, local_position: Point) -> Point;
    fn record_down_scroll_mouse_down(&mut self, position: Point);
    fn restore_default_diagram_tool(&mut self);
    fn scroll_vertical_range_up(&mut self, surface: AnalysisSurfaceHandle);
    fn shift_visible_y_window_up(&mut self, surface: AnalysisSurfaceHandle);
    fn reduce_visible_y_axis_count(&mut self, surface: AnalysisSurfaceHandle);
    fn scroll_vertical_range_down(&mut self, surface: AnalysisSurfaceHandle);
    fn shift_visible_y_window_down(&mut self, surface: AnalysisSurfaceHandle);
    fn increase_visible_y_axis_count(&mut self, surface: AnalysisSurfaceHandle);
    fn refresh_analysis_scrollbars(&mut self);
}

pub trait AnalysisAveragesReportHost {
    fn build_averages_report(&mut self, surface: AnalysisSurfaceHandle) -> Option<TextDraftHandle>;
    fn copy_current_font_to_averages_text(&mut self, draft: TextDraftHandle);
    fn edit_averages_text(&mut self, draft: TextDraftHandle) -> TextEditorResult;
    fn apply_edited_averages_text(&mut self, draft: TextDraftHandle);
    fn update_current_text_font(&mut self, draft: TextDraftHandle);
    fn discard_averages_text(&mut self, draft: TextDraftHandle);
    fn prepare_averages_preview(
        &mut self,
        draft: TextDraftHandle,
        surface: AnalysisSurfaceHandle,
        origin: Point,
    ) -> Size;
    fn show_averages_preview_outline(&mut self, origin: Point, size: Size);
}

pub trait AnalysisCrossoverFrequencyHost {
    fn stage_crossover_frequency_annotation(
        &mut self,
        surface: AnalysisSurfaceHandle,
    ) -> Option<TextDraftHandle>;
    fn edit_crossover_frequency_text(&mut self, draft: TextDraftHandle) -> TextEditorResult;
    fn commit_crossover_frequency_annotation(&mut self, draft: TextDraftHandle);
    fn discard_crossover_frequency_annotation(&mut self, draft: TextDraftHandle);
}

pub trait AnalysisGainMarginHost {
    fn gain_margin_phase_reference(&mut self) -> GainMarginPhaseReference;
    fn stage_gain_margin_annotation(
        &mut self,
        surface: AnalysisSurfaceHandle,
        phase_reference: GainMarginPhaseReference,
    ) -> Option<TextDraftHandle>;
    fn edit_gain_margin_text(&mut self, draft: TextDraftHandle) -> TextEditorResult;
    fn commit_gain_margin_annotation(&mut self, draft: TextDraftHandle);
    fn discard_gain_margin_annotation(&mut self, draft: TextDraftHandle);
}

pub trait AnalysisPhaseMarginHost {
    fn phase_margin_reference(&mut self) -> GainMarginPhaseReference;
    fn stage_phase_margin_annotation(
        &mut self,
        surface: AnalysisSurfaceHandle,
        phase_reference: GainMarginPhaseReference,
    ) -> Option<TextDraftHandle>;
    fn edit_phase_margin_text(&mut self, draft: TextDraftHandle) -> TextEditorResult;
    fn commit_phase_margin_annotation(&mut self, draft: TextDraftHandle);
    fn discard_phase_margin_annotation(&mut self, draft: TextDraftHandle);
}

pub trait AnalysisResultAnnotationHost {
    fn stage_result_annotation(&mut self, lines: &[String]) -> TextDraftHandle;
    fn edit_result_annotation(&mut self, draft: TextDraftHandle) -> TextEditorResult;
    fn apply_edited_result_annotation(&mut self, draft: TextDraftHandle);
    fn bind_result_annotation(
        &mut self,
        draft: TextDraftHandle,
        curve: AnalysisObjectHandle,
        anchor: Point,
    );
    fn register_result_annotation(
        &mut self,
        surface: AnalysisSurfaceHandle,
        draft: TextDraftHandle,
    );
    fn finalize_result_annotation(&mut self, draft: TextDraftHandle);
    fn prepare_result_annotation_preview(
        &mut self,
        draft: TextDraftHandle,
        surface: AnalysisSurfaceHandle,
        origin: Point,
    ) -> Size;
    fn repaint_result_annotation_preview(&mut self, origin: Point, size: Size);
    fn discard_result_annotation(&mut self, draft: TextDraftHandle);
}

pub trait AnalysisCurvePointAnnotationHost: AnalysisResultAnnotationHost {
    fn first_selected_curve_point(
        &mut self,
        surface: AnalysisSurfaceHandle,
    ) -> Option<SelectedCurvePoint>;
}

pub trait AnalysisSelectedCurveCursorHost {
    fn first_selected_curve_cursor(
        &mut self,
        surface: AnalysisSurfaceHandle,
    ) -> Option<SelectedCurveCursor>;
    fn curve_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<Point>;
    fn curve_samples_from(
        &mut self,
        curve: AnalysisObjectHandle,
        position: Point,
        direction: CurveSampleDirection,
    ) -> Vec<Point>;
    fn set_curve_cursor_x_position(
        &mut self,
        surface: AnalysisSurfaceHandle,
        cursor: CursorKind,
        position: f64,
    );
}

pub trait AnalysisCurveListHost {
    fn open_curve_list(&mut self);
}

pub trait AnalysisMeasurementResultHost {
    fn measurement_result_context(&mut self) -> Option<MeasurementResultContext>;
    fn measurement_result_exists(&mut self, path: &Path) -> bool;
    fn load_measurement_result(&mut self, path: &Path);
    fn show_measurement_result_notice(&mut self, notice: MeasurementResultNotice);
}

pub trait AnalysisFrequencySlopeHost {
    fn frequency_slope_checked(&mut self) -> bool;
    fn set_frequency_slope_checked(&mut self, checked: bool);
    fn refresh_cursor_frequency_slope(&mut self, surface: AnalysisSurfaceHandle);
}

pub trait AnalysisSmithMatrixFormatHost {
    fn smith_format_index(&mut self) -> i32;
    fn apply_smith_matrix_label_visibility(&mut self, visibility: SmithMatrixLabelVisibility);
}

pub trait AnalysisPictureExportDialogHost {
    fn selected_file_name(&mut self) -> PathBuf;
    fn selected_filter_index(&mut self) -> u32;
    fn set_selected_file_name(&mut self, path: &Path);
    fn refresh_native_file_name(&mut self, path: &Path);
}

pub trait AnalysisPictureExportHost: AnalysisDiagramRenderHost {
    fn record_command(&mut self, command: &str);
    fn open_picture_export_dialog(
        &mut self,
        request: PictureExportDialogRequest,
    ) -> Option<PictureExportSelection>;
    fn active_diagram_bounds(&mut self, surface: AnalysisSurfaceHandle) -> WindowBounds;
    fn create_picture_export_canvas(
        &mut self,
        format: PictureExportFormat,
        width: i32,
        height: i32,
    ) -> DiagramCanvasHandle;
    fn save_picture_export(
        &mut self,
        format: PictureExportFormat,
        canvas: DiagramCanvasHandle,
        path: &Path,
    );
}

pub trait AnalysisDefaultCurveWidthHost {
    fn persist_default_curve_width(&mut self, width: u8);
    fn set_curve_width_menu_checked(&mut self, width: u8, checked: bool);
}

pub trait AnalysisAxisVisibilityHost {
    fn axes_menu_checked(&mut self) -> bool;
    fn set_axes_menu_checked(&mut self, checked: bool);
    fn apply_axes_visibility(&mut self, surface: AnalysisSurfaceHandle, visible: bool);
}

pub trait AnalysisVectorStyleHost {
    fn set_vector_style_menu_checked(&mut self, style: VectorStyle, checked: bool);
    fn persist_vector_style(&mut self, value: u8);
}

pub trait AnalysisAddCurveDialogHost {
    fn collect_curve_source_catalog(&mut self) -> CurveSourceCatalogHandle;
    fn stage_active_result_context(&mut self);
    fn replace_add_curve_catalog(&mut self, catalog: CurveSourceCatalogHandle);
    fn related_editor_context_available(&mut self) -> bool;
    fn replace_related_editor_controller(&mut self, ui_sender: bool);
    fn internal_dialog_state_pending(&mut self) -> bool;
    fn reset_internal_dialog_state(&mut self);
    fn rebuild_available_curves(&mut self);
    fn show_add_curve_dialog_modelessly(&mut self);
    fn cleanup_add_curve_dialog(&mut self);
}

pub trait AnalysisScreenResolutionHost {
    fn screen_resolution_menu_checked(&mut self) -> bool;
    fn set_screen_resolution_menu_checked(&mut self, checked: bool);
    fn clear_cached_output_size(&mut self, surface: AnalysisSurfaceHandle);
    fn invoke_analysis_resize(&mut self);
}

pub trait AnalysisCurveRenderHost {
    fn draw_allowed(&mut self) -> bool;
    fn render_owner_is_current_window(&mut self) -> bool;
    fn screen_resolution_enabled(&mut self) -> bool;
    fn curve_requires_stored_samples(&mut self) -> bool;
    fn visible_x_bounds(&mut self) -> (f64, f64);
    fn map_x_to_pixel(&mut self, value: f64) -> i32;
    fn map_pixel_to_x(&mut self, pixel: i32) -> f64;
    fn map_y_to_pixel(&mut self, value: f64) -> i32;
    fn evaluate_curve(&mut self, x: f64) -> f64;
    fn stored_curve_samples(&mut self) -> Vec<CurveRenderSample>;
    fn emit_curve_pixel(&mut self, pixel: CurveRenderPixel);
}

pub trait AnalysisCurveStatisticsHost {
    fn curve_x_axis_range(&mut self, curve: AnalysisObjectHandle) -> (f64, f64);
    fn calculate_curve_statistics(
        &mut self,
        curve: AnalysisObjectHandle,
        lower: f64,
        upper: f64,
    ) -> CurveStatistics;
}

pub trait AnalysisCurveRippleHost {
    fn curve_x_axis_range(&mut self, curve: AnalysisObjectHandle) -> (f64, f64);
    fn calculate_curve_ripple(
        &mut self,
        curve: AnalysisObjectHandle,
        lower: f64,
        upper: f64,
    ) -> CurveRipple;
}

pub trait AnalysisQuickDrawHost {
    fn quick_draw_menu_checked(&mut self) -> bool;
    fn set_quick_draw_menu_checked(&mut self, checked: bool);
    fn persist_quick_draw(&mut self, enabled: bool);
}

pub trait AnalysisCurveAudioHost {
    fn prepare_curve_audio(&mut self) -> Option<CurveAudioPlaybackInput>;

    /// Replaces the application temporary `WAV` with the accumulated samples.
    ///
    /// # Errors
    ///
    /// Returns the file or stream error from the platform adapter.
    fn write_temporary_wave(&mut self, accumulator: &mut PcmAccumulator) -> io::Result<PathBuf>;
    fn start_curve_audio(&mut self, path: &Path, start_seconds: f64, stop_seconds: f64);
    fn stop_curve_audio(&mut self);
}

pub trait AnalysisCurveAudioCleanupHost {
    fn set_curve_audio_pressed(&mut self, pressed: bool);
    fn remove_curve_audio_position_timer(&mut self);
    fn curve_audio_curves(&mut self) -> Vec<AnalysisObjectHandle>;
    fn curve_audio_position_milliseconds(&mut self) -> i32;
    fn query_curve_audio_position_milliseconds(&mut self) -> i32;
    fn set_curve_audio_position_milliseconds(&mut self, position: i32);
    fn erase_curve_audio_indicator(&mut self, curve: AnalysisObjectHandle, position_seconds: f64);
    fn draw_curve_audio_indicator(&mut self, curve: AnalysisObjectHandle, position_seconds: f64);
    fn close_curve_audio(&mut self);
}

pub trait AnalysisCurveAudioExportHost {
    fn open_curve_audio_export_dialog(
        &mut self,
        request: CurveAudioExportDialogRequest,
    ) -> Option<PathBuf>;
    fn prepare_curve_audio_export(&mut self) -> CurveAudioPlaybackInput;
    fn show_empty_curve_audio_error(&mut self, source_kind: CurveAudioSourceKind);

    /// Writes the completed offline accumulator to the accepted path.
    ///
    /// # Errors
    ///
    /// Returns the file or stream error from the platform adapter.
    fn write_curve_audio_export(
        &mut self,
        path: &Path,
        accumulator: &mut PcmAccumulator,
    ) -> io::Result<()>;
}

pub trait AnalysisTabDrawHost {
    fn set_tab_background(&mut self, appearance: AnalysisTabAppearance);
    fn fill_tab_bounds(&mut self, bounds: WindowBounds);
    fn set_tab_text_background_transparent(&mut self);
    fn tab_caption(&mut self, index: usize) -> String;
    fn measure_tab_text(&mut self, caption: &str) -> TabTextSize;
    fn draw_tab_text(&mut self, caption: &str, origin: WindowPosition);
}

pub trait AnalysisToolNotebookHost {
    fn set_active_tool_page_width(&mut self, width: i32);
}

pub trait AnalysisCurveImportHost: CurveImportObserver {
    fn open_curve_import_file_dialog(
        &mut self,
        request: CurveImportFileDialogRequest,
    ) -> Option<PathBuf>;
    fn open_curve_import_options(&mut self, path: &Path) -> Option<CurveImportOptions>;
    fn set_curve_import_busy(&mut self, busy: bool);
    fn apply_curve_import(&mut self, imported: CurveImport) -> bool;
    fn persist_auto_import(&mut self, settings: AutoImportSettings);
}

pub trait AnalysisLegendHost {
    fn record_command(&mut self, command: &str);
    fn set_selection_tool_down(&mut self, down: bool);
    fn classify_auto_legend(&mut self, surface: AnalysisSurfaceHandle) -> AutoLegendKind;
    fn update_vector_labels(&mut self, surface: AnalysisSurfaceHandle);
    fn generate_curve_legend(
        &mut self,
        surface: AnalysisSurfaceHandle,
        maximum_entries_per_curve: usize,
    ) -> TextDraftHandle;
    fn prepare_legend_preview(
        &mut self,
        draft: TextDraftHandle,
        surface: AnalysisSurfaceHandle,
        origin: Point,
    ) -> Size;
    fn show_legend_preview_outline(&mut self, origin: Point, size: Size);
}

pub trait AnalysisResultExportHost {
    fn open_auto_test_result_save_dialog(&mut self, request: AutoTestResultDialogRequest) -> bool;
    fn first_curve_analysis_result(
        &mut self,
        surface: AnalysisSurfaceHandle,
    ) -> AnalysisResultHandle;
    fn selected_save_path(&mut self) -> PathBuf;
    fn serialize_analysis_result(
        &mut self,
        path: &Path,
        result: AnalysisResultHandle,
        contexts: [u64; 3],
    );
}

pub trait AnalysisDiagramOpenHost {
    fn record_command(&mut self, command: &str);
    fn open_diagram_dialog(&mut self, request: DiagramOpenDialogRequest) -> Option<Vec<PathBuf>>;
    fn load_diagram_archive(&mut self, path: &Path);
}

pub trait AnalysisHelpHost {
    fn record_command(&mut self, command: &str);
    fn resolve_localized_help_file(&mut self, base_path: &Path) -> PathBuf;
    fn open_help_context(&mut self, help_file: &Path, context: u32);
}

pub trait AnalysisCursorSynchronizationHost {
    fn alignment_input(&mut self, surface: AnalysisSurfaceHandle) -> CursorCurveAlignmentInput;
    fn apply_alignment(&mut self, surface: AnalysisSurfaceHandle, alignment: CursorCurveAlignment);
    fn redraw_surface(&mut self, surface: AnalysisSurfaceHandle);
}

pub trait AnalysisCursorPositionEditHost {
    type Error;

    /// Reads and validates one cursor-position editor value.
    ///
    /// # Errors
    ///
    /// Returns the editor validation error from the UI adapter.
    fn cursor_position_value(
        &mut self,
        cursor: CursorKind,
        coordinate: CursorCoordinate,
    ) -> Result<f64, Self::Error>;
    fn cursor_x_for_y(&mut self, cursor: CursorKind, x: f64, y: f64) -> Option<f64>;
    fn set_cursor_x_position(&mut self, cursor: CursorKind, position: f64);
}

pub trait AnalysisCommandStateHost {
    fn command_state_input(&mut self) -> AnalysisCommandStateInput;
    fn apply_command_states(&mut self, states: AnalysisCommandStates);
}

pub trait AnalysisClipboardHost {
    fn record_command(&mut self, command: &str);
    fn copy_selection_format(&mut self, surface: AnalysisSurfaceHandle) -> CopySelectionFormat;
    fn copy_editable_diagram_data(&mut self, surface: AnalysisSurfaceHandle);
    fn copy_rendered_metafile(&mut self, surface: AnalysisSurfaceHandle);
    fn set_selection_tool_down(&mut self, down: bool);
    fn select_tool(&mut self);
}

pub trait AnalysisCutHost: AnalysisClipboardHost {
    fn run_inherited_modal_form(&mut self);
}

pub trait AnalysisPasteHost {
    fn record_command(&mut self, command: &str);
    fn preferred_paste_format(&mut self) -> Option<PasteClipboardFormat>;
    fn paste_editable_diagram_data(&mut self, surface: AnalysisSurfaceHandle) -> bool;
    fn refresh_after_editable_paste(&mut self, surface: AnalysisSurfaceHandle);
    fn stage_paste_object(
        &mut self,
        surface: AnalysisSurfaceHandle,
        format: PasteClipboardFormat,
    ) -> Option<PasteObjectHandle>;
    fn set_selection_tool_down(&mut self, down: bool);
    fn select_tool(&mut self);
}

pub trait AnalysisPropertiesHost {
    fn record_command(&mut self, command: &str);
    fn selected_properties_target(&mut self, surface: AnalysisSurfaceHandle) -> PropertiesTarget;
    fn open_axis_properties(&mut self, surface: AnalysisSurfaceHandle);
    fn open_curve_properties(&mut self, surface: AnalysisSurfaceHandle);
    fn open_figure_properties(&mut self, surface: AnalysisSurfaceHandle, target: PropertiesTarget);
}

pub trait AnalysisCommandHost {
    fn record_command(&mut self, name: &str);
    fn open_axis_properties(&mut self, surface: AnalysisSurfaceHandle);
    fn open_curve_properties(&mut self, surface: AnalysisSurfaceHandle);
    fn open_curve_statistics(&mut self, surface: AnalysisSurfaceHandle);
    fn separate_curves(&mut self, surface: AnalysisSurfaceHandle, group_curves: bool);
    fn collect_curves(&mut self, surface: AnalysisSurfaceHandle);
    fn select_all_curves(&mut self, surface: AnalysisSurfaceHandle);
    fn delete_selected_curves(
        &mut self,
        surface: AnalysisSurfaceHandle,
        options: CurveDeletionOptions,
    );
    fn add_y_axis(&mut self, surface: AnalysisSurfaceHandle, options: AxisCreationOptions);
    fn add_x_axis(&mut self, surface: AnalysisSurfaceHandle, options: XAxisCreationOptions);
    fn delete_selected_axis(
        &mut self,
        surface: AnalysisSurfaceHandle,
        options: AxisDeletionOptions,
    );
    fn restore_selected_axis_auto_range(&mut self, surface: AnalysisSurfaceHandle);
    fn clear_active_selection(&mut self, surface: AnalysisSurfaceHandle);
    fn prepare_rectangle_zoom(&mut self, surface: AnalysisSurfaceHandle);
    fn set_circle_tool_down(&mut self, down: bool);
    fn set_cursor_auxiliary_tool_down(&mut self, down: bool);
    fn set_line_tool_down(&mut self, down: bool);
    fn set_normal_zoom_tool_down(&mut self, down: bool);
    fn set_selection_tool_down(&mut self, down: bool);
    fn set_zoom_tool_down(&mut self, down: bool);
    fn reset_diagram_settings(&mut self, surface: AnalysisSurfaceHandle);
    fn show_information(&mut self, notice: AnalysisNotice);
    fn refresh_cursor(&mut self, cursor: CursorHandle, format: NyquistFormat);
    fn refresh_cursor_readouts(&mut self, format: NyquistFormat);
    fn delete_selected_cursor(&mut self, surface: AnalysisSurfaceHandle);
    fn delete_selected_figures(&mut self, surface: AnalysisSurfaceHandle);
    fn create_circle_draft(&mut self, surface: AnalysisSurfaceHandle) -> FigureDraftHandle;
    fn create_line_draft(&mut self, surface: AnalysisSurfaceHandle) -> FigureDraftHandle;
    fn remove_cursor(&mut self, surface: AnalysisSurfaceHandle, cursor: CursorKind);
    fn reconcile_cursor_state(&mut self, surface: AnalysisSurfaceHandle);
    fn cancel_active_interaction(
        &mut self,
        interaction_mode: u8,
        pending_text: Option<TextDraftHandle>,
        pending_figure: Option<FigureDraftHandle>,
        pending_paste: Option<PasteObjectHandle>,
    );
    fn move_cursor(
        &mut self,
        surface: AnalysisSurfaceHandle,
        cursor: CursorHandle,
        direction: CursorNavigationDirection,
    );
    fn scroll_x_axis_left(&mut self, surface: AnalysisSurfaceHandle);
    fn scroll_x_axis_right(&mut self, surface: AnalysisSurfaceHandle);
    fn zoom_out_all_axes(&mut self, surface: AnalysisSurfaceHandle);
    fn restore_automatic_ranges(
        &mut self,
        surface: AnalysisSurfaceHandle,
        reset_stored_options: bool,
    );
    fn update_canvas_rectangle(&mut self, surface: AnalysisSurfaceHandle) -> bool;
    fn update_diagram_layout(&mut self, surface: AnalysisSurfaceHandle, canvas_changed: bool);
    fn repaint_diagram(&mut self, surface: AnalysisSurfaceHandle);
    fn shift_coordinate_systems_up(&mut self, surface: AnalysisSurfaceHandle);
    fn shift_coordinate_systems_down(&mut self, surface: AnalysisSurfaceHandle);
    fn refresh_analysis_scroll_controls(&mut self);
    fn open_fourier_analysis(&mut self, surface: AnalysisSurfaceHandle, mode: FourierAnalysisMode);
    fn save_diagram_options(&mut self, surface: AnalysisSurfaceHandle);
    fn redraw_analysis(&mut self);
    fn refresh_command_state(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PointerContext {
    pub overlay_active: bool,
    pub surface_active: bool,
    pub tool_mode: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseDownRoute {
    Overlay,
    NoSurface,
    ModifiedSelection,
    Tool(u8),
    FinishToolTen,
    Context,
    RefreshOnly,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseMoveRoute {
    Overlay,
    NoSurface,
    Tool(u8),
    StatusOnly,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseUpRoute {
    NoSurface,
    Tool(u8),
    Reset,
    RecordedOnly,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DoubleClickContext {
    pub surface_active: bool,
    pub surface_locked: bool,
    pub tool_mode: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DoubleClickRoute {
    Ignored,
    CategoryOne,
    CategoryTwo,
    ObjectClass(u8),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PaintRoute {
    Overlay,
    Surface,
    NoContent,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DeferredRefresh {
    Disabled,
    Idle,
    Pending,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PaintContext {
    pub overlay_active: bool,
    pub surface_active: bool,
    pub deferred_refresh: DeferredRefresh,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ResizeContext {
    pub overlay_active: bool,
    pub surface_active: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorPanelPage {
    Normal { computed_height: Option<i32> },
    Secondary,
    Tertiary,
    Other,
}

pub trait AnalysisPointerHost {
    fn delegate_overlay(&mut self, position: Point);
    fn begin_modified_selection(&mut self, position: Point);
    fn handle_tool_press(&mut self, tool_mode: u8, position: Point);
    fn finish_tool_ten(&mut self, position: Point);
    fn show_context_actions(&mut self, position: Point);
    fn refresh_tool_state(&mut self);
}

pub trait AnalysisPointerMoveHost {
    fn show_overlay_cursor(&mut self);
    fn show_coordinates(&mut self, position: Point);
    fn handle_tool_move(&mut self, tool_mode: u8, position: Point);
}

pub trait AnalysisPointerUpHost {
    fn record_release(&mut self, position: Point);
    fn finish_tool_release(&mut self, tool_mode: u8, position: Point);
    fn reset_tool(&mut self);
}

pub trait AnalysisDoubleClickHost {
    fn selection_category(&mut self) -> u8;
    fn selected_object_class(&mut self) -> Option<u8>;
    fn edit_category_one(&mut self);
    fn edit_category_two(&mut self);
    fn begin_object_edit(&mut self, object_class: u8);
    fn enter_object_edit_mode(&mut self, tool_mode: u8);
}

pub trait AnalysisPaintHost {
    fn set_busy_cursor(&mut self, busy: bool);
    fn paint_overlay(&mut self);
    fn paint_surface(&mut self);
    fn clear_deferred_refresh(&mut self);
    fn process_deferred_refresh(&mut self);
}

pub trait AnalysisResizeHost {
    fn record_bounds(&mut self, bounds: WindowBounds);
    fn resize_status_area(&mut self, width: i32);
    fn resize_and_paint_overlay(&mut self, client_size: Size);
    fn set_busy_cursor(&mut self, busy: bool);
    fn rebuild_surface_buffer(&mut self, client_size: Size);
    fn paint_surface(&mut self);
    fn store_surface_size(&mut self, client_size: Size);
}

pub trait CursorPanelHost: AnalysisResizeHost {
    fn set_cursor_panel_height(&mut self, height: i32);
    fn align_cursor_panels(&mut self);
}

#[derive(Debug)]
pub struct Window {
    command_selected: bool,
    result_manager: AnalysisResultManager,
    zoom_percent: u16,
    bounds: WindowBounds,
    vector_style: Option<VectorStyle>,
    startup_initialized: bool,
    keep_results: bool,
    interaction_mode: u8,
    refuse_click_timer_state: RefuseClickTimerState,
    nyquist_format: NyquistFormat,
    pending_text: Option<TextDraftHandle>,
    pending_figure: Option<FigureDraftHandle>,
    pending_paste: Option<PasteObjectHandle>,
    property_interaction_token: Option<u64>,
    print_preview_state: PrintPreviewState,
    default_curve_width: u8,
    hovered_result_tab: Option<usize>,
    result_tab_hint_text: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            command_selected: false,
            result_manager: AnalysisResultManager::default(),
            zoom_percent: 0,
            bounds: WindowBounds::default(),
            vector_style: None,
            startup_initialized: false,
            keep_results: true,
            interaction_mode: 0,
            refuse_click_timer_state: RefuseClickTimerState::Inactive,
            nyquist_format: NyquistFormat::default(),
            pending_text: None,
            pending_figure: None,
            pending_paste: None,
            property_interaction_token: None,
            print_preview_state: PrintPreviewState::default(),
            default_curve_width: 0,
            hovered_result_tab: None,
            result_tab_hint_text: String::new(),
        }
    }
}

/// Implements Ghidra function `FUN_01ab2f90` at `0x01AB2F90`.
///
/// Renders an allowed curve from per-pixel evaluations when the current-window
/// screen-resolution option applies. Otherwise, it maps stored samples and
/// suppresses consecutive samples that occupy the same output pixel.
pub fn render_sampled_curve(host: &mut impl AnalysisCurveRenderHost) {
    if !host.draw_allowed() {
        return;
    }

    render_sampled_curve_body(host);
}

/// Implements Ghidra function `FUN_01ab3990` at `0x01AB3990`.
///
/// Renders the sampled-curve variant selected by the dispatcher. It uses the
/// shared per-pixel or stored-sample algorithm without the separate visibility
/// guard used by `FUN_01ab2f90`.
pub fn render_dispatcher_selected_sampled_curve(host: &mut impl AnalysisCurveRenderHost) {
    render_sampled_curve_body(host);
}

/// Implements Ghidra function `FUN_01ab5580` at `0x01AB5580`.
///
/// Reads a curve's current X-axis range and delegates its data to the shared
/// statistics integrator. The returned values include the covered range,
/// signed average, absolute average, and RMS value.
pub fn calculate_curve_statistics_in_current_range(
    curve: AnalysisObjectHandle,
    host: &mut impl AnalysisCurveStatisticsHost,
) -> CurveStatistics {
    let (lower, upper) = host.curve_x_axis_range(curve);
    host.calculate_curve_statistics(curve, lower, upper)
}

/// Implements Ghidra function `FUN_01ab5600` at `0x01AB5600`.
///
/// Reads a curve's current X-axis range and delegates its data to the shared
/// ripple calculator, which returns absolute and relative ripple values.
pub fn calculate_curve_ripple_in_current_range(
    curve: AnalysisObjectHandle,
    host: &mut impl AnalysisCurveRippleHost,
) -> CurveRipple {
    let (lower, upper) = host.curve_x_axis_range(curve);
    host.calculate_curve_ripple(curve, lower, upper)
}

/// Implements Ghidra function `FUN_01abde90` at `0x01ABDE90`.
///
/// Integrates signed Y, absolute Y, and squared Y with the trapezoidal rule.
/// A segment contributes only when both endpoints are inside the requested X
/// range. The result keeps the recovered sentinel and zero-span behavior.
#[must_use]
pub fn compute_curve_statistics(
    samples: &[CurveRenderSample],
    lower: f64,
    upper: f64,
) -> CurveStatistics {
    let mut signed_integral = 0.0;
    let mut absolute_integral = 0.0;
    let mut squared_integral = 0.0;
    let mut covered_start: f64 = 1.0e50;
    let mut covered_end: f64 = -1.0e50;

    for segment in samples.windows(2) {
        let start = segment[0];
        let end = segment[1];
        if start.x < lower || end.x < lower || start.x > upper || end.x > upper {
            continue;
        }

        covered_start = covered_start.min(start.x).min(end.x);
        covered_end = covered_end.max(start.x).max(end.x);
        let width = end.x - start.x;
        signed_integral += width * (start.y + end.y) / 2.0;
        absolute_integral += width * (start.y.abs() + end.y.abs()) / 2.0;
        squared_integral += width * end.y.mul_add(end.y, start.y * start.y) / 2.0;
    }

    let covered_span = covered_end - covered_start;
    CurveStatistics {
        average: signed_integral / covered_span,
        absolute_average: absolute_integral / covered_span,
        rms: (squared_integral / covered_span).sqrt(),
        covered_start,
        covered_end,
    }
}

/// Implements Ghidra function `FUN_01abe230` at `0x01ABE230`.
///
/// Integrates each consecutive segment whose left X value is in the requested
/// inclusive range. Both endpoints update the covered X and Y extrema. The
/// relative result is absolute ripple divided by mean magnitude, as a percent.
/// The recovered empty-span and zero-mean division behavior is preserved.
#[must_use]
pub fn compute_curve_ripple(samples: &[CurveRenderSample], lower: f64, upper: f64) -> CurveRipple {
    let mut minimum_x: f64 = 1.0e50;
    let mut maximum_x: f64 = -1.0e50;
    let mut minimum_y: f64 = 1.0e50;
    let mut maximum_y: f64 = -1.0e50;
    let mut integral = 0.0;

    for segment in samples.windows(2) {
        let start = segment[0];
        let end = segment[1];
        if start.x < lower || start.x > upper {
            continue;
        }

        minimum_x = minimum_x.min(start.x).min(end.x);
        maximum_x = maximum_x.max(start.x).max(end.x);
        minimum_y = minimum_y.min(start.y).min(end.y);
        maximum_y = maximum_y.max(start.y).max(end.y);
        integral += (end.x - start.x) * (start.y + end.y) / 2.0;
    }

    let absolute = maximum_y - minimum_y;
    let mean_magnitude = (integral / (maximum_x - minimum_x)).abs();
    CurveRipple {
        absolute,
        relative: (absolute / mean_magnitude) * 100.0,
    }
}

/// Implements Ghidra function `FUN_01abe490` at `0x01ABE490`.
///
/// Converts ordered rectangular complex samples to phase degrees, unwraps
/// adjacent jumps greater than 180 degrees, and returns an exact target sample
/// or the first bounded sign-change interpolation.
#[must_use]
#[allow(clippy::float_cmp)]
pub fn find_phase_crossing(
    samples: &[ComplexPoint],
    target_degrees: f64,
    provider_lower: f64,
    provider_upper: f64,
) -> Option<f64> {
    let mut previous: Option<(f64, f64)> = None;
    for sample in samples {
        let mut phase = sample.second.atan2(sample.first).to_degrees();
        if let Some((_, previous_phase)) = previous {
            let jump = phase - previous_phase;
            if jump.abs() > 180.0 {
                phase = (jump / 360.0).round().mul_add(-360.0, phase);
            }
        }

        if phase == target_degrees {
            return Some(sample.frequency);
        }
        if let Some((previous_x, previous_phase)) = previous
            && (phase - target_degrees) * (previous_phase - target_degrees) < 0.0
        {
            let bracket_lower = previous_x.min(sample.frequency);
            let bracket_upper = previous_x.max(sample.frequency);
            if provider_lower <= bracket_lower && bracket_upper <= provider_upper {
                return Some(
                    previous_x
                        + (sample.frequency - previous_x) * (target_degrees - previous_phase)
                            / (phase - previous_phase),
                );
            }
            return None;
        }
        previous = Some((sample.frequency, phase));
    }
    None
}

/// Implements Ghidra function `FUN_01abe710` at `0x01ABE710`.
///
/// Returns an exact target-value sample or linearly interpolates the first
/// adjacent sign-change bracket whose two X coordinates are inside the
/// provider bounds.
#[must_use]
#[allow(clippy::float_cmp)]
pub fn find_value_crossing(
    samples: &[CurveRenderSample],
    target: f64,
    provider_lower: f64,
    provider_upper: f64,
) -> Option<f64> {
    let mut previous: Option<CurveRenderSample> = None;
    for sample in samples {
        if sample.y == target {
            return Some(sample.x);
        }
        if let Some(previous_sample) = previous
            && (sample.y - target) * (previous_sample.y - target) < 0.0
        {
            let bracket_lower = previous_sample.x.min(sample.x);
            let bracket_upper = previous_sample.x.max(sample.x);
            if provider_lower <= bracket_lower && bracket_upper <= provider_upper {
                return Some(
                    previous_sample.x
                        + (sample.x - previous_sample.x) * (target - previous_sample.y)
                            / (sample.y - previous_sample.y),
                );
            }
            return None;
        }
        previous = Some(*sample);
    }
    None
}

/// Implements Ghidra function `FUN_01abe920` at `0x01ABE920`.
///
/// Uses the borrowed Rust sample slice as the temporary curve-data adapter and
/// delegates a zero target to the shared bounded crossing finder. Rust RAII
/// releases any caller-owned adapter state after this call.
#[must_use]
pub fn find_zero_crossing(
    samples: &[CurveRenderSample],
    provider_lower: f64,
    provider_upper: f64,
) -> Option<f64> {
    find_value_crossing(samples, 0.0, provider_lower, provider_upper)
}

/// Implements Ghidra function `FUN_01abe9a0` at `0x01ABE9A0`.
///
/// Finds the requested phase crossing, evaluates the rectangular complex
/// response there, and converts its magnitude to decibels. A missing crossing
/// returns `None` without evaluating the response.
pub fn magnitude_at_phase_crossing(
    samples: &[ComplexPoint],
    target_degrees: f64,
    provider_lower: f64,
    provider_upper: f64,
    mut evaluate: impl FnMut(f64) -> (f64, f64),
) -> Option<PhaseCrossingMagnitude> {
    let coordinate = find_phase_crossing(samples, target_degrees, provider_lower, provider_upper)?;
    let (real, imaginary) = evaluate(coordinate);
    Some(PhaseCrossingMagnitude {
        coordinate,
        magnitude_decibels: response_magnitude_decibels(real, imaginary),
    })
}

/// Implements Ghidra function `FUN_01abeac0` at `0x01ABEAC0`.
///
/// Finds the first bounded zero-decibel magnitude crossing, evaluates the
/// rectangular complex response there, and reports its phase relative to the
/// supplied reference. A missing crossing returns `None` without evaluating
/// the response.
pub fn phase_margin_at_zero_db_crossing(
    samples: &[ComplexPoint],
    reference_degrees: f64,
    provider_lower: f64,
    provider_upper: f64,
    mut evaluate: impl FnMut(f64) -> (f64, f64),
) -> Option<PhaseMarginResult> {
    let magnitude_samples = samples
        .iter()
        .map(|sample| CurveRenderSample {
            x: sample.frequency,
            y: response_magnitude_decibels(sample.first, sample.second),
        })
        .collect::<Vec<_>>();
    let coordinate = find_zero_crossing(&magnitude_samples, provider_lower, provider_upper)?;
    let (real, imaginary) = evaluate(coordinate);
    Some(PhaseMarginResult {
        coordinate,
        margin_degrees: imaginary.atan2(real).to_degrees() - reference_degrees,
    })
}

fn response_magnitude_decibels(real: f64, imaginary: f64) -> f64 {
    let magnitude = real.hypot(imaginary);
    if magnitude > 0.0 {
        20.0 * magnitude.log10()
    } else {
        0.0
    }
}

fn render_sampled_curve_body(host: &mut impl AnalysisCurveRenderHost) {
    let use_pixel_columns = host.render_owner_is_current_window()
        && host.screen_resolution_enabled()
        && !host.curve_requires_stored_samples();
    if use_pixel_columns {
        let (lower, upper) = host.visible_x_bounds();
        let lower_pixel = host.map_x_to_pixel(lower);
        let Some(next_pixel) = lower_pixel.checked_add(1) else {
            return;
        };
        let upper_pixel = host.map_x_to_pixel(upper);
        let step = host.map_pixel_to_x(next_pixel) - host.map_pixel_to_x(lower_pixel);
        if !step.is_finite() || step <= 0.0 {
            return;
        }

        let mut x = lower;
        for _ in lower_pixel..upper_pixel {
            let y = host.evaluate_curve(x);
            let pixel = CurveRenderPixel {
                x: host.map_x_to_pixel(x),
                y: host.map_y_to_pixel(y),
            };
            host.emit_curve_pixel(pixel);
            x += step;
        }
        return;
    }

    let mut previous = None;
    for sample in host.stored_curve_samples() {
        let pixel = CurveRenderPixel {
            x: host.map_x_to_pixel(sample.x),
            y: host.map_y_to_pixel(sample.y),
        };
        if previous != Some(pixel) {
            host.emit_curve_pixel(pixel);
            previous = Some(pixel);
        }
    }
}

/// Implements Ghidra function `FUN_01ab5750` at `0x01AB5750`.
///
/// Uses the first provider sample as the initial result, then replaces it in
/// provider order whenever the comparator accepts a candidate Y value. An
/// empty Rust iterator returns `None` because the recovered empty-provider
/// result is not defined.
pub fn scan_curve_provider_extremum(
    samples: impl IntoIterator<Item = Point>,
    comparator: impl Fn(f32, f32) -> bool,
) -> Option<Point> {
    let mut samples = samples.into_iter();
    let mut result = samples.next()?;
    for candidate in samples {
        if comparator(candidate.y, result.y) {
            result = candidate;
        }
    }
    Some(result)
}

/// Implements Ghidra function `FUN_01abde70` at `0x01ABDE70`.
///
/// Accepts a minimum-search candidate when it is less than or equal to the
/// current value. Equality lets an ordered scan retain the later sample.
#[must_use]
pub fn sample_is_minimum_candidate(candidate: f32, current: f32) -> bool {
    candidate <= current
}

/// Implements Ghidra function `FUN_01abde80` at `0x01ABDE80`.
///
/// Accepts a maximum-search candidate when it is greater than or equal to the
/// current value. Equality lets an ordered scan retain the later sample.
#[must_use]
pub fn sample_is_maximum_candidate(candidate: f32, current: f32) -> bool {
    candidate >= current
}

/// Implements Ghidra function `FUN_01ab5810` at `0x01AB5810`.
///
/// Scans two provider directions while the comparator accepts each successive
/// Y value. It returns the last accepted point from the nearer direction and
/// selects direction one on an equal-distance tie. If neither direction has an
/// accepted point, Rust returns `None` instead of exposing sentinel data.
pub fn find_nearer_local_extremum(
    start: Point,
    directions: [Vec<Point>; 2],
    comparator: impl Fn(f32, f32) -> bool,
) -> Option<Point> {
    let candidates = directions.map(|samples| {
        let mut current = start;
        let mut accepted = None;
        for candidate in samples {
            if !comparator(candidate.y, current.y) {
                break;
            }
            current = candidate;
            accepted = Some(candidate);
        }
        accepted
    });

    match candidates {
        [Some(zero), Some(one)] if (one.x - start.x).abs() <= (zero.x - start.x).abs() => Some(one),
        [Some(zero), Some(_) | None] => Some(zero),
        [None, Some(one)] => Some(one),
        [None, None] => None,
    }
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    CommandSelected,
}

impl Window {
    /// Implements Ghidra function `FUN_01a7b8f0` at `0x01A7B8F0`.
    ///
    /// Presses the grouped Text tool and delegates to the shared staged text
    /// editor and one-shot placement workflow.
    pub fn activate_popup_text_tool(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisTextPlacementHost,
    ) {
        host.set_text_tool_down(true);
        self.stage_text_placement(surface, host);
    }

    /// Implements Ghidra function `FUN_01a7a4a0` at `0x01A7A4A0`.
    ///
    /// Edits a staged text draft and enters click-to-place mode for accepted,
    /// non-empty text. Cancelled and empty drafts are discarded. A missing
    /// surface restores the selection tool.
    pub fn stage_text_placement(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisTextPlacementHost,
    ) {
        host.record_command("DFTextBtn");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            host.record_command("DFSelectBtn");
            self.interaction_mode = 0;
            return;
        };

        let draft = host.create_text_draft(surface);
        match host.edit_text_draft(draft) {
            TextEditorResult::Cancelled | TextEditorResult::Accepted { line_count: 0 } => {
                host.discard_text_draft(draft);
                self.pending_text = None;
            }
            TextEditorResult::Accepted { .. } => {
                let origin = Point::new(-100.0, -100.0);
                let size = host.prepare_text_preview(draft, surface, origin);
                host.show_text_preview_outline(origin, size);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
        }
    }

    /// Implements Ghidra function `FUN_01a79c00` at `0x01A79C00`.
    ///
    /// Seeds the page-name dialog from the active caption. Cancellation is a
    /// no-op. Acceptance renames the newly active page and rebuilds the window
    /// caption without validating or trimming the entered text.
    pub fn rename_active_page(&mut self, host: &mut impl AnalysisPageNameHost) {
        host.record_command("PageNameMnu");
        let initial_index = host.active_page_index();
        let initial_name = host.page_caption(initial_index);
        let PageNameDialogResult::Accepted(name) = host.request_page_name(&initial_name) else {
            return;
        };

        let current_index = host.active_page_index();
        host.synchronize_page_name(current_index, name);
        host.rebuild_window_caption(current_index);
    }

    /// Implements Ghidra function `FUN_01a79ac0` at `0x01A79AC0`.
    ///
    /// Records and deletes the selected result page. It then resizes a normal
    /// active diagram or clears the canvas for an empty or design-grid page.
    pub fn delete_result_page(&mut self, selected_index: usize, host: &mut impl AnalysisPageHost) {
        host.record_command("DeletePageMnu");
        match host.delete_result_page(selected_index) {
            PageDeletionOutcome::NormalDiagramActive => host.resize_active_diagram(),
            PageDeletionOutcome::EmptyOrDesignGrid => host.clear_analysis_canvas(),
        }
    }

    /// Implements Ghidra function `FUN_01a79a60` at `0x01A79A60`.
    ///
    /// Delegates activation of the selected result page with forced refresh,
    /// then always recalculates the analysis scrollbars.
    pub fn result_tab_changed(
        &mut self,
        selected_index: usize,
        host: &mut impl AnalysisResultTabHost,
    ) {
        host.activate_result_page(selected_index, true);
        host.refresh_analysis_scrollbars();
    }

    /// Implements Ghidra function `FUN_01a8b050` at `0x01A8B050`.
    ///
    /// Allows an Iced result-tab selection change only in the recovered normal
    /// form mode. The callback has no other side effect.
    #[must_use]
    pub const fn result_tab_change_allowed(form_mode: u8) -> bool {
        form_mode == 1
    }

    /// Implements Ghidra function `FUN_01a8b130` at `0x01A8B130`.
    ///
    /// Hides the result-tab hover hint and clears its cached text when the
    /// pointer leaves the tab control.
    pub fn result_tab_mouse_left(&mut self, host: &mut impl AnalysisTabHoverHost) {
        host.hide_result_tab_hint();
        host.clear_result_tab_hint_text();
        self.result_tab_hint_text.clear();
    }

    /// Implements Ghidra function `FUN_01a8b160` at `0x01A8B160`.
    ///
    /// Resolves a supported result-tab hint under the pointer. It shows the
    /// hint only when its tab or text changes, retains the current hint for
    /// stable pointer movement, and clears the hint for unsupported tabs.
    pub fn result_tab_mouse_moved(
        &mut self,
        position: Point,
        host: &mut impl AnalysisTabHoverHost,
    ) {
        let Some(hint) = host.result_tab_hint_at(position) else {
            self.hovered_result_tab = None;
            self.result_tab_mouse_left(host);
            return;
        };
        if self.hovered_result_tab != Some(hint.tab_index) || self.result_tab_hint_text != hint.text
        {
            host.show_result_tab_hint(&hint);
            self.result_tab_hint_text.clone_from(&hint.text);
        }
        self.hovered_result_tab = Some(hint.tab_index);
    }

    /// Implements Ghidra function `FUN_01a799f0` at `0x01A799F0`.
    ///
    /// When the cursor window exists, aligns its top and right edges with the
    /// analysis window. A missing cursor window is a no-op.
    pub fn align_cursor_window_after_drag_drop(
        &mut self,
        cursor_window: Option<WindowBounds>,
        host: &mut impl AnalysisLayoutHost,
    ) {
        let Some(cursor_window) = cursor_window else {
            return;
        };

        host.move_cursor_window(WindowPosition {
            left: self.bounds.left + self.bounds.width - cursor_window.width,
            top: self.bounds.top,
        });
    }

    /// Implements Ghidra function `FUN_01a79840` at `0x01A79840`.
    ///
    /// Releases transient drawing state, closes the associated view, selects
    /// hide as the close disposition, and closes the cursor window.
    pub fn close_requested(&mut self, host: &mut impl AnalysisCloseHost) -> CloseDisposition {
        host.release_drawing_handle();
        host.clear_transient_text();
        host.close_associated_view();
        host.close_cursor_window();
        CloseDisposition::Hide
    }

    /// Implements Ghidra function `FUN_01a78c00` at `0x01A78C00`.
    ///
    /// Records the literal `AxisMnu` command and passes the active analysis
    /// surface to the shared axis-properties launcher.
    pub fn open_axis_properties(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("AxisMnu");
        host.open_axis_properties(surface);
    }

    /// Implements Ghidra function `FUN_01a78cb0` at `0x01A78CB0`.
    ///
    /// Records the literal `CurveMnu` command and passes the active analysis
    /// surface to the shared curve-properties launcher.
    pub fn open_curve_properties(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("CurveMnu");
        host.open_curve_properties(surface);
    }

    /// Implements Ghidra function `FUN_01a7fae0` at `0x01A7FAE0`.
    ///
    /// Records the popup Statistics command and delegates selection validation,
    /// calculation, and dialog display to the shared statistics launcher.
    pub fn open_curve_statistics_from_popup(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("StatisticsMnu");
        host.open_curve_statistics(surface);
    }

    /// Implements Ghidra function `FUN_01a841f0` at `0x01A841F0`.
    ///
    /// Records the `DFWindow` Statistics menu command and delegates curve
    /// selection, calculation, and dialog display to the shared launcher.
    pub fn open_curve_statistics_from_menu(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFStatisticsMnu");
        host.open_curve_statistics(surface);
    }

    /// Implements Ghidra function `FUN_01a78d60` at `0x01A78D60`.
    ///
    /// Records the menu command and toggles the session-resident result-page
    /// retention policy. The existing result pages stay unchanged.
    pub fn toggle_keep_results(&mut self, host: &mut impl AnalysisCommandHost) {
        host.record_command("KeepResultsMnu");
        self.keep_results = !self.keep_results;
    }

    /// Implements Ghidra function `FUN_01a78e30` at `0x01A78E30`.
    ///
    /// Records the command, separates every curve in the active analysis
    /// surface onto an individual Y axis, redraws, and refreshes command state.
    pub fn separate_curves(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("SeparateCurvesMnu");
        host.separate_curves(surface, false);
        host.redraw_analysis();
        host.refresh_command_state();
    }

    /// Implements Ghidra function `FUN_01a7e390` at `0x01A7E390`.
    ///
    /// Records the Select All Curves command, replaces the active surface
    /// selection with every draw element, and refreshes command state. It does
    /// not change visibility, cursor readouts, or persisted settings.
    pub fn select_all_curves(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFSelectAllCurvesMnu");
        host.select_all_curves(surface);
        host.refresh_command_state();
    }

    /// Implements Ghidra function `FUN_01a78f10` at `0x01A78F10`.
    ///
    /// Records the recovered curve-separation command, separates output groups
    /// in the active surface onto Y axes, redraws, and refreshes command state.
    pub fn separate_outputs(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("SeparateCurvesMnu");
        host.separate_curves(surface, true);
        host.redraw_analysis();
        host.refresh_command_state();
    }

    /// Implements Ghidra function `FUN_01a78ff0` at `0x01A78FF0`.
    ///
    /// Records the command, collects separated curves in each coordinate
    /// system onto one Y axis, redraws, and refreshes command state.
    pub fn collect_curves(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("CollectCurvesMnu");
        host.collect_curves(surface);
        host.redraw_analysis();
        host.refresh_command_state();
    }

    /// Implements Ghidra function `FUN_01a790d0` at `0x01A790D0`.
    ///
    /// Records the command and deletes the selected curves with confirmation
    /// and cleanup of empty axes and coordinate systems enabled.
    pub fn delete_selected_curves(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DeleteCurveMnu");
        host.delete_selected_curves(
            surface,
            CurveDeletionOptions {
                confirm: true,
                remove_empty_axes: true,
                remove_empty_coordinate_systems: true,
            },
        );
    }

    /// Implements Ghidra function `FUN_01a79190` at `0x01A79190`.
    ///
    /// Records the shared Add Y axis command, creates the axis with layout and
    /// twin guards enabled, and then saves the complete diagram options.
    pub fn add_y_axis(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("AddNewYAxisMnu");
        host.add_y_axis(
            surface,
            AxisCreationOptions {
                enforce_layout: true,
                enforce_twin_rules: true,
            },
        );
        host.save_diagram_options(surface);
    }

    /// Implements Ghidra function `FUN_01a79260` at `0x01A79260`.
    ///
    /// Records the shared Add X axis command, requests direct axis creation
    /// with redraw enabled, and then runs the diagram-options serializer.
    pub fn add_x_axis(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("AddNewXAxisMnu");
        host.add_x_axis(surface, XAxisCreationOptions { redraw: true });
        host.save_diagram_options(surface);
    }

    /// Implements Ghidra function `FUN_01a79330` at `0x01A79330`.
    ///
    /// Records the command, removes the selected axis with relayout and redraw
    /// enabled, and then runs the conditional diagram-options serializer.
    pub fn delete_selected_axis(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DeleteAxisMnu");
        host.delete_selected_axis(
            surface,
            AxisDeletionOptions {
                relayout: true,
                redraw: true,
            },
        );
        host.save_diagram_options(surface);
    }

    /// Implements Ghidra function `FUN_01a793f0` at `0x01A793F0`.
    ///
    /// Records the legacy Set Defaults command and restores automatic range
    /// for the first selected axis. It does not save defaults or settings.
    pub fn restore_selected_axis_auto_range(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("SetDefaultsMnu");
        host.restore_selected_axis_auto_range(surface);
    }

    /// Implements Ghidra function `FUN_01a794b0` at `0x01A794B0`.
    ///
    /// Records selection-tool activation, enters interaction mode zero, and
    /// clears the active surface selection when a surface exists.
    pub fn activate_selection_tool(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFSelectBtn");
        self.interaction_mode = 0;
        if let Some(surface) = surface {
            host.clear_active_selection(surface);
        }
    }

    /// Implements Ghidra function `FUN_01a79570` at `0x01A79570`.
    ///
    /// Arms single-use rectangle zoom when a surface exists. Without a
    /// surface, it presses and dispatches the selection tool instead.
    pub fn activate_rectangle_zoom(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFZoomBtn");
        if let Some(surface) = surface {
            self.interaction_mode = 1;
            host.prepare_rectangle_zoom(surface);
        } else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
        }
    }

    /// Implements Ghidra function `FUN_01a7e240` at `0x01A7E240`.
    ///
    /// Presses the grouped Zoom tool and delegates to the shared single-use
    /// rectangle-zoom activation and Select fallback workflow.
    pub fn activate_rectangle_zoom_from_menu(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.set_zoom_tool_down(true);
        self.activate_rectangle_zoom(surface, host);
    }

    /// Implements Ghidra function `FUN_01a7e270` at `0x01A7E270`.
    ///
    /// Expands every axis range in an active surface, updates the layout for
    /// the current canvas rectangle, and repaints. A missing surface selects
    /// the neutral tool. The live range change is not serialized here.
    pub fn zoom_out(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        host.zoom_out_all_axes(surface);
        let canvas_changed = host.update_canvas_rectangle(surface);
        host.update_diagram_layout(surface, canvas_changed);
        host.repaint_diagram(surface);
    }

    /// Implements Ghidra function `FUN_01a79660` at `0x01A79660`.
    ///
    /// Arms single-grid axis rebinding when a surface exists. Without a
    /// surface, it presses and dispatches the selection tool instead.
    pub fn activate_grid_rebinding(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFGridBtn");
        if let Some(surface) = surface {
            self.interaction_mode = 3;
            host.clear_active_selection(surface);
        } else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
        }
    }

    /// Implements Ghidra function `FUN_01a79760` at `0x01A79760`.
    ///
    /// Resets settings before it reports completion. A missing active surface
    /// is a silent no-op.
    pub fn forget_diagram_settings(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        let Some(surface) = surface else {
            return;
        };

        host.reset_diagram_settings(surface);
        host.show_information(AnalysisNotice::DiagramSettingsCleared);
    }

    /// Implements Ghidra function `FUN_01a797f0` at `0x01A797F0`.
    ///
    /// Stores the live Nyquist display format, refreshes cursor A and cursor B
    /// when present, and always refreshes the shared cursor readouts.
    pub fn select_nyquist_format(
        &mut self,
        format: NyquistFormat,
        cursors: CursorPair,
        host: &mut impl AnalysisCommandHost,
    ) {
        self.nyquist_format = format;
        if let Some(cursor) = cursors.a {
            host.refresh_cursor(cursor, format);
        }
        if let Some(cursor) = cursors.b {
            host.refresh_cursor(cursor, format);
        }
        host.refresh_cursor_readouts(format);
    }

    /// Implements Ghidra function `FUN_01a79e40` at `0x01A79E40`.
    ///
    /// Moves the selected X-axis view one major division toward lower values.
    /// Without a surface, it dispatches the selection tool instead.
    pub fn scroll_x_axis_left(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("LeftScrollBtn");
        if let Some(surface) = surface {
            host.scroll_x_axis_left(surface);
        } else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
        }
    }

    /// Implements Ghidra function `FUN_01a79f20` at `0x01A79F20`.
    ///
    /// Moves the applicable horizontal-axis view one major division toward
    /// higher values. Without a surface, it dispatches Select instead.
    pub fn scroll_x_axis_right(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("RightScrollBtn");
        if let Some(surface) = surface {
            host.scroll_x_axis_right(surface);
        } else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
        }
    }

    /// Implements Ghidra function `FUN_01a7a010` at `0x01A7A010`.
    ///
    /// Records the Up Scroll click. The separate mouse-down path owns the
    /// actual vertical-axis range change.
    pub fn record_up_scroll_click(&mut self, host: &mut impl AnalysisCommandHost) {
        host.record_command("UpScrollBtn");
    }

    /// Implements Ghidra function `FUN_01a7a0b0` at `0x01A7A0B0`.
    ///
    /// Records the Down Scroll click. The separate mouse-down path owns the
    /// actual vertical-axis range change.
    pub fn record_down_scroll_click(&mut self, host: &mut impl AnalysisCommandHost) {
        host.record_command("DownScrollBtn");
    }

    /// Implements Ghidra function `FUN_01a7a150` at `0x01A7A150`.
    ///
    /// Restores automatic ranges for every axis, updates canvas geometry,
    /// serializes diagram options, and repaints. Missing surfaces select the
    /// neutral tool instead.
    pub fn restore_normal_zoom(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("NormalZoomBtn");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        host.restore_automatic_ranges(surface, true);
        let canvas_changed = host.update_canvas_rectangle(surface);
        host.update_diagram_layout(surface, canvas_changed);
        host.save_diagram_options(surface);
        host.repaint_diagram(surface);
    }

    /// Implements Ghidra function `FUN_01a7e360` at `0x01A7E360`.
    ///
    /// Presses the grouped Normal Zoom tool and delegates to the shared range
    /// restoration, layout, serialization, repaint, and Select fallback path.
    pub fn restore_normal_zoom_from_menu(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.set_normal_zoom_tool_down(true);
        self.restore_normal_zoom(surface, host);
    }

    /// Implements Ghidra function `FUN_01a7a2b0` at `0x01A7A2B0`.
    ///
    /// Shifts every coordinate system up by one displayed Y-axis position and
    /// refreshes scroll controls. Missing surfaces select the neutral tool.
    pub fn shift_coordinate_systems_up(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("UpScrollCSBtn");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        host.shift_coordinate_systems_up(surface);
        host.refresh_analysis_scroll_controls();
    }

    /// Implements Ghidra function `FUN_01a7a3a0` at `0x01A7A3A0`.
    ///
    /// Shifts every coordinate system down by one displayed Y-axis position
    /// and refreshes scroll controls. Missing surfaces select the neutral tool.
    pub fn shift_coordinate_systems_down(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DownScrollCSBtn");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        host.shift_coordinate_systems_down(surface);
        host.refresh_analysis_scroll_controls();
    }

    /// Implements Ghidra function `FUN_01a7a800` at `0x01A7A800`.
    ///
    /// Records the popup Fourier command and delegates the current surface to
    /// the shared Fourier dispatcher in Series mode.
    pub fn open_fourier_series(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("FourierTHDMnu");
        host.open_fourier_analysis(surface, FourierAnalysisMode::Series);
    }

    /// Implements Ghidra function `FUN_01a84540` at `0x01A84540`.
    ///
    /// Records the `DFWindow` Fourier Series menu command and delegates the
    /// current surface to the shared Fourier dispatcher in Series mode.
    pub fn open_fourier_series_from_menu(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFFourierSeriesMnu");
        host.open_fourier_analysis(surface, FourierAnalysisMode::Series);
    }

    /// Implements Ghidra function `FUN_01a7a8b0` at `0x01A7A8B0`.
    ///
    /// Records the popup Fourier command and delegates the current surface to
    /// the shared Fourier dispatcher in Spectrum mode.
    pub fn open_fourier_spectrum(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("FourierSpeMnu");
        host.open_fourier_analysis(surface, FourierAnalysisMode::Spectrum);
    }

    /// Implements Ghidra function `FUN_01a84600` at `0x01A84600`.
    ///
    /// Records the `DFWindow` Fourier Spectrum menu command and delegates the
    /// current surface to the shared Fourier dispatcher in Spectrum mode.
    pub fn open_fourier_spectrum_from_menu(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFFourierSpectrumMnu");
        host.open_fourier_analysis(surface, FourierAnalysisMode::Spectrum);
    }

    /// Implements Ghidra function `FUN_01a7a990` at `0x01A7A990`.
    ///
    /// Records the popup Delete command and delegates classification and
    /// deletion of the first selected cursor to the shared cursor dispatcher.
    pub fn delete_selected_cursor(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DeleteCursorMnu");
        host.delete_selected_cursor(surface);
    }

    /// Implements Ghidra function `FUN_01a7aa50` at `0x01A7AA50`.
    ///
    /// Records the popup Delete command and delegates deletion of a pure
    /// figure selection to the shared figure-deletion helper.
    pub fn delete_selected_figures(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DeleteFigureMnu");
        host.delete_selected_figures(surface);
    }

    /// Implements Ghidra function `FUN_01a7ab10` at `0x01A7AB10`.
    ///
    /// Opens the diagram print dialog with the recovered defaults. An accepted
    /// request temporarily suspends print preview, prints the selected range,
    /// honors an aborted job, and restores preview. Every normal return clears
    /// page layout caches and refreshes the analysis layout.
    pub fn print_diagram(
        &mut self,
        surface: AnalysisSurfaceHandle,
        page_count: u32,
        current_page_index: u32,
        host: &mut impl AnalysisPrintHost,
    ) {
        host.record_command("DFPrintMnu");
        let request = DiagramPrintDialogRequest {
            page_count,
            current_page: current_page_index + 1,
            copies: 1,
            help_context: 0x1fc,
        };

        if let Some(range) = host.open_print_dialog(request) {
            let preview_mode = host.suspend_print_preview(surface);
            host.begin_print_job("TINA Diagram");
            host.show_print_abort_dialog();
            match range {
                DiagramPrintRange::All => host.print_pages(1, page_count),
                DiagramPrintRange::Current => {
                    let page = current_page_index + 1;
                    host.print_pages(page, page);
                }
                DiagramPrintRange::Pages { first, last } => host.print_pages(first, last),
                DiagramPrintRange::Unsupported => {}
            }
            if !host.print_job_aborted() {
                host.end_print_job();
            }
            host.close_print_abort_dialog();
            if let Some(page_mode) = preview_mode {
                host.restore_print_preview(surface, page_mode);
            }
        }

        host.clear_page_layout_caches();
        host.refresh_analysis_layout();
    }

    /// Implements Ghidra function `FUN_01a7b2b0` at `0x01A7B2B0`.
    ///
    /// Opens printer setup with the recovered help context. The native dialog
    /// owns acceptance behavior. Every normal result clears the page layout
    /// caches and refreshes the analysis layout.
    pub fn open_printer_setup(&mut self, host: &mut impl AnalysisPrintHost) {
        host.record_command("DFPrintSetupMnu");
        host.open_printer_setup(0x1fd);
        host.clear_page_layout_caches();
        host.refresh_analysis_layout();
    }

    /// Implements Ghidra function `FUN_01a80db0` at `0x01A80DB0`.
    ///
    /// Shows and activates the persistent modeless page-margin editor, then
    /// refreshes its four controls from the current page layout.
    pub fn open_margin_editor(&mut self, host: &mut impl AnalysisMarginEditorHost) {
        host.record_command("DFMarginsBtn");
        host.show_modeless_margin_editor();
        host.refresh_margin_controls();
    }

    /// Implements Ghidra function `FUN_01a80e70` at `0x01A80E70`.
    ///
    /// Renders the full diagram on white to a temporary canvas with an export
    /// viewport at the origin. It then restores the live canvas and refreshes
    /// its viewport, layout, and display. It does not crop to a selection.
    pub fn render_full_diagram_to_canvas(
        &mut self,
        canvas: DiagramCanvasHandle,
        width: i32,
        height: i32,
        host: &mut impl AnalysisDiagramRenderHost,
    ) {
        host.apply_export_viewport(WindowBounds {
            left: 0,
            top: 0,
            width,
            height,
        });
        let live_canvas = host.replace_canvas(canvas);
        host.recalculate_diagram_layout();
        host.paint_full_diagram_on_white();
        host.replace_canvas(live_canvas);
        host.restore_live_viewport_and_repaint();
    }

    /// Implements Ghidra function `FUN_01a810b0` at `0x01A810B0`.
    ///
    /// Exports only the first curve for exact selection category 2. Other
    /// categories offer one TXT/CSD dialog for each eligible diagram panel.
    /// A canceled panel continues the scan. CSD and the recovered dB text case
    /// stop it. Writer errors propagate through the host without rollback.
    pub fn export_diagram_as_text(&mut self, host: &mut impl AnalysisTextExportHost) {
        host.record_command("DFAsTextMnu");
        if host.selection_category() == 2 {
            let curve = host.first_selected_object();
            if let Some(path) = host.open_text_export_dialog(TextExportDialogRequest::SelectedCurve)
            {
                host.write_selected_curve_text(&path, curve);
            }
            return;
        }

        for (index, candidate) in host.panel_candidates().into_iter().enumerate() {
            if candidate.member_count != 1 || (candidate.mode == 2 && index != 0) {
                continue;
            }
            let Some(path) = host.open_text_export_dialog(TextExportDialogRequest::DiagramPanel {
                one_based_index: index + 1,
            }) else {
                continue;
            };
            let is_csd = path
                .extension()
                .and_then(|extension| extension.to_str())
                .is_some_and(|extension| extension.eq_ignore_ascii_case("csd"));
            if is_csd {
                host.write_panel_csd(&path, candidate.panel);
                return;
            }
            if host.write_panel_text(&path, candidate.panel) {
                return;
            }
        }
    }

    /// Implements Ghidra function `FUN_01a83910` at `0x01A83910`.
    ///
    /// Writes the first selected curve to the caller-supplied process input
    /// path and returns that curve. Any category other than exact curve
    /// category 2 is a no-op and returns no curve.
    pub fn export_first_selected_curve(
        &mut self,
        path: &Path,
        host: &mut impl AnalysisTextExportHost,
    ) -> Option<AnalysisObjectHandle> {
        if host.selection_category() != 2 {
            return None;
        }
        let curve = host.first_selected_object();
        host.write_selected_curve_text(path, curve);
        Some(curve)
    }

    /// Implements Ghidra function `FUN_01a83d70` at `0x01A83D70`.
    ///
    /// Opens an unseeded color dialog. Acceptance clears the render caches on
    /// every page, applies the color to every coordinate-system grid, updates
    /// the active layout, and redraws it. Cancellation changes no model state.
    pub fn set_document_grid_color(&mut self, host: &mut impl AnalysisGridColorHost) {
        host.record_command("DFSetgridcolorMnu");
        let Some(color) = host.open_unseeded_grid_color_dialog() else {
            return;
        };
        host.clear_all_page_render_caches();
        host.set_all_coordinate_system_grid_colors(color);
        host.recalculate_active_diagram_layout();
        host.redraw_active_page();
    }

    /// Implements Ghidra function `FUN_01a83f90` at `0x01A83F90`.
    ///
    /// Clears all pages immediately when confirmation is not required. For a
    /// confirmation, No clears, Cancel preserves the document, and Yes invokes
    /// Save As before it checks the recovered clear gate. Every normal return
    /// refreshes command states. A completed clear hides the cursor window and
    /// repaints the analysis window.
    pub fn clear_all_pages(&mut self, host: &mut impl AnalysisClearAllHost) {
        host.record_command("DFClearAllMnu");
        let should_clear = if host.confirmation_required() {
            match host.confirm_clear_all() {
                ClearAllConfirmation::No => true,
                ClearAllConfirmation::Cancel => false,
                ClearAllConfirmation::Yes => {
                    host.invoke_save_as();
                    host.clear_allowed_after_save_as()
                }
            }
        } else {
            true
        };

        if should_clear {
            host.clear_all_pages();
            if host.cursor_window_visible() {
                host.hide_cursor_window();
            }
            host.repaint_window();
        }
        host.refresh_command_states();
    }

    /// Implements Ghidra function `FUN_01a842b0` at `0x01A842B0`.
    ///
    /// Filters the first curve in a pure curve selection through the bundled
    /// Process curve workflow. It writes private `tcurve.txt` input, removes
    /// stale runner outputs, and runs only after modal acceptance. Invalid
    /// selections and cancellation publish no result. The source stays intact.
    pub fn filter_first_selected_curve(&mut self, host: &mut impl AnalysisCurveProcessHost) {
        let previous_separator = host.replace_decimal_separator('.');
        if host.selection_category() != 2 {
            host.show_invalid_curve_selection();
            host.replace_decimal_separator(previous_separator);
            return;
        }

        let working_path = host.session_working_path();
        let input_path = working_path.join("tcurve.txt");
        let Some(source_curve) = self.export_first_selected_curve(&input_path, host) else {
            host.replace_decimal_separator(previous_separator);
            return;
        };
        host.configure_process_curve(&working_path, source_curve);
        host.remove_stale_process_outputs();
        if host.open_process_curve_dialog() {
            host.run_process_curve();
        }
        host.replace_decimal_separator(previous_separator);
    }

    /// Implements Ghidra function `FUN_01a846c0` at `0x01A846C0`.
    ///
    /// Saves an active analysis document to its existing path without checking
    /// its modified state. Exact path `Noname` delegates to the disabled Demo
    /// Save As path. A missing surface restores the default diagram tool and
    /// performs no file access.
    pub fn save_diagram(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisDiagramSaveHost,
    ) {
        host.record_command("DFSaveMnu");
        let Some(surface) = surface else {
            host.restore_default_diagram_tool();
            return;
        };
        let path = host.document_path(surface);
        if path == Path::new("Noname") {
            host.invoke_demo_save_as(surface);
        } else {
            host.save_existing_document(&path);
        }
    }

    /// Implements Ghidra function `FUN_01a847f0` at `0x01A847F0`.
    ///
    /// Arms Modified components mode and immediately asks the shared viewer
    /// launcher to inspect the current selection. The mode remains armed when
    /// that selection is ineligible so a later diagram click can retry.
    pub fn open_component_parameters(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisComponentParameterHost,
    ) {
        host.record_command("DFTableMnu");
        self.interaction_mode = 0x15;
        host.open_component_parameter_viewer(surface);
    }

    /// Implements Ghidra function `FUN_01a848a0` at `0x01A848A0`.
    ///
    /// Refreshes application command state when a diagram is active, applies
    /// localization to the shown analysis window, then invokes the recovered
    /// `ImageSB` scroll-box show-state hook with `false`. The Delphi name of
    /// that final virtual setter is not recovered.
    pub fn show_analysis_window(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisWindowShowHost,
    ) {
        if let Some(surface) = surface {
            host.refresh_active_diagram_commands(surface);
        }
        host.localize_analysis_window();
        host.apply_image_scroll_box_show_state(false);
    }

    /// Implements Ghidra function `FUN_01a84900` at `0x01A84900`.
    ///
    /// Records the Copy toolbar mouse-down position after layout translation.
    /// When Control is held, it also writes the active diagram's recovered
    /// string-list snapshot to `diagram.ini` in the current working directory.
    pub fn copy_button_mouse_down(
        &mut self,
        surface: AnalysisSurfaceHandle,
        local_position: Point,
        modifiers: keyboard::Modifiers,
        host: &mut impl AnalysisCopyButtonMouseHost,
    ) {
        let macro_position = host.copy_button_macro_position(local_position);
        host.record_copy_button_mouse_down(macro_position);
        if modifiers.control() {
            let path = host.current_working_directory().join("diagram.ini");
            host.write_active_diagram_ini(surface, &path);
        }
    }

    /// Implements Ghidra function `FUN_01a85470` at `0x01A85470`.
    ///
    /// Builds an editable absolute- and relative-ripple report for compatible
    /// curves in the current pure curve selection. Accepted nonempty text is
    /// staged at `(-100,-100)` in placement mode 6. Cancellation, empty text,
    /// and an unsupported selection leave the diagram unchanged.
    pub fn create_ripple_report(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisRippleReportHost,
    ) {
        let Some(draft) = host.build_ripple_report(surface) else {
            return;
        };
        host.configure_ripple_text(draft, "Courier", 10);
        match host.edit_ripple_text(draft) {
            TextEditorResult::Accepted { line_count } if line_count > 0 => {
                host.apply_edited_ripple_text(draft);
                host.update_current_text_font(draft);
                let origin = Point::new(-100.0, -100.0);
                let size = host.prepare_ripple_preview(draft, surface, origin);
                host.show_ripple_preview_outline(origin, size);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
            TextEditorResult::Cancelled | TextEditorResult::Accepted { .. } => {
                host.discard_ripple_text(draft);
            }
        }
    }

    /// Implements Ghidra function `FUN_01a857b0` at `0x01A857B0`.
    ///
    /// Records the Up Scroll mouse-down position. Without Shift, it moves the
    /// vertical range and displayed-Y window upward. With Shift, it reduces the
    /// displayed Y-axis count. Both active paths rebuild the scrollbars. A
    /// missing diagram restores the default tool without a range operation.
    pub fn up_scroll_mouse_down(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        local_position: Point,
        modifiers: keyboard::Modifiers,
        host: &mut impl AnalysisVerticalScrollMouseHost,
    ) {
        let macro_position = host.up_scroll_macro_position(local_position);
        host.record_up_scroll_mouse_down(macro_position);
        let Some(surface) = surface else {
            self.interaction_mode = 0;
            host.restore_default_diagram_tool();
            return;
        };
        if modifiers.shift() {
            host.reduce_visible_y_axis_count(surface);
        } else {
            host.scroll_vertical_range_up(surface);
            host.shift_visible_y_window_up(surface);
        }
        host.refresh_analysis_scrollbars();
    }

    /// Implements Ghidra function `FUN_01a858e0` at `0x01A858E0`.
    ///
    /// Records the Down Scroll mouse-down position. Without Shift, it moves the
    /// vertical range and displayed-Y window downward. With Shift, it increases
    /// the displayed Y-axis count. Both active paths rebuild the scrollbars. A
    /// missing diagram restores the default tool without a range operation.
    pub fn down_scroll_mouse_down(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        local_position: Point,
        modifiers: keyboard::Modifiers,
        host: &mut impl AnalysisVerticalScrollMouseHost,
    ) {
        let macro_position = host.down_scroll_macro_position(local_position);
        host.record_down_scroll_mouse_down(macro_position);
        let Some(surface) = surface else {
            self.interaction_mode = 0;
            host.restore_default_diagram_tool();
            return;
        };
        if modifiers.shift() {
            host.increase_visible_y_axis_count(surface);
        } else {
            host.scroll_vertical_range_down(surface);
            host.shift_visible_y_window_down(surface);
        }
        host.refresh_analysis_scrollbars();
    }

    /// Implements Ghidra function `FUN_01a85a10` at `0x01A85A10`.
    ///
    /// Builds an editable five-line average, absolute-average, RMS, and covered
    /// X-range report for the first curve in a pure curve selection. Accepted
    /// nonempty text is staged at `(-100,-100)` in placement mode 6. Cancel,
    /// empty text, and an unsupported selection leave the diagram unchanged.
    pub fn create_averages_report(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisAveragesReportHost,
    ) {
        let Some(draft) = host.build_averages_report(surface) else {
            return;
        };
        host.copy_current_font_to_averages_text(draft);
        match host.edit_averages_text(draft) {
            TextEditorResult::Accepted { line_count } if line_count > 0 => {
                host.apply_edited_averages_text(draft);
                host.update_current_text_font(draft);
                let origin = Point::new(-100.0, -100.0);
                let size = host.prepare_averages_preview(draft, surface, origin);
                host.show_averages_preview_outline(origin, size);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
            TextEditorResult::Cancelled | TextEditorResult::Accepted { .. } => {
                host.discard_averages_text(draft);
            }
        }
    }

    /// Implements Ghidra function `FUN_01a860e0` at `0x01A860E0`.
    ///
    /// Calculates the first selected curve's 0 dB crossover frequency and
    /// stages a localized, curve-bound annotation at the calculated anchor.
    /// A failed selection or crossing reports its error through the host and
    /// creates no draft. Cancel and empty text discard the staged annotation.
    pub fn create_crossover_frequency_annotation(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCrossoverFrequencyHost,
    ) {
        let Some(draft) = host.stage_crossover_frequency_annotation(surface) else {
            return;
        };
        match host.edit_crossover_frequency_text(draft) {
            TextEditorResult::Accepted { line_count } if line_count > 0 => {
                host.commit_crossover_frequency_annotation(draft);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
            TextEditorResult::Cancelled | TextEditorResult::Accepted { .. } => {
                host.discard_crossover_frequency_annotation(draft);
            }
        }
    }

    /// Implements Ghidra function `FUN_01a86430` at `0x01A86430`.
    ///
    /// Uses the configured zero- or negative-180-degree phase reference to
    /// calculate the first selected curve's gain value and crossing coordinate.
    /// It stages the two localized result lines as a curve-bound annotation.
    /// Calculation failure, Cancel, and empty text create no annotation.
    pub fn create_gain_margin_annotation(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisGainMarginHost,
    ) {
        let phase_reference = host.gain_margin_phase_reference();
        let Some(draft) = host.stage_gain_margin_annotation(surface, phase_reference) else {
            return;
        };
        match host.edit_gain_margin_text(draft) {
            TextEditorResult::Accepted { line_count } if line_count > 0 => {
                host.commit_gain_margin_annotation(draft);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
            TextEditorResult::Cancelled | TextEditorResult::Accepted { .. } => {
                host.discard_gain_margin_annotation(draft);
            }
        }
    }

    /// Implements Ghidra function `FUN_01a86890` at `0x01A86890`.
    ///
    /// Finds the first selected curve's first 0 dB magnitude crossing, reports
    /// its phase relative to the configured zero- or negative-180-degree
    /// reference, and stages the two localized lines as a curve-bound text
    /// annotation. Calculation failure, Cancel, and empty text add no object.
    pub fn create_phase_margin_annotation(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisPhaseMarginHost,
    ) {
        let phase_reference = host.phase_margin_reference();
        let Some(draft) = host.stage_phase_margin_annotation(surface, phase_reference) else {
            return;
        };
        match host.edit_phase_margin_text(draft) {
            TextEditorResult::Accepted { line_count } if line_count > 0 => {
                host.commit_phase_margin_annotation(draft);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
            TextEditorResult::Cancelled | TextEditorResult::Accepted { .. } => {
                host.discard_phase_margin_annotation(draft);
            }
        }
    }

    /// Implements Ghidra function `FUN_01a8a3c0` at `0x01A8A3C0`.
    ///
    /// Edits and commits a shared analysis-result text annotation. Acceptance
    /// requires at least one text line. An optional curve and data anchor are
    /// bound before diagram registration and finalization. The committed object
    /// enters placement mode 6 with an off-screen preview; rejection discards
    /// it and restores tool mode zero. A missing diagram is a no-op.
    pub fn edit_analysis_result_annotation(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        request: &AnalysisResultAnnotationRequest,
        host: &mut impl AnalysisResultAnnotationHost,
    ) {
        let Some(surface) = surface else {
            return;
        };
        let draft = host.stage_result_annotation(&request.lines);
        match host.edit_result_annotation(draft) {
            TextEditorResult::Accepted { line_count } if line_count > 0 => {
                host.apply_edited_result_annotation(draft);
                if let Some(curve) = request.curve {
                    host.bind_result_annotation(draft, curve, request.anchor);
                }
                host.register_result_annotation(surface, draft);
                host.finalize_result_annotation(draft);
                let origin = Point::new(-100.0, -100.0);
                let size = host.prepare_result_annotation_preview(draft, surface, origin);
                host.repaint_result_annotation_preview(origin, size);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
            TextEditorResult::Cancelled | TextEditorResult::Accepted { .. } => {
                host.discard_result_annotation(draft);
                self.pending_text = None;
                self.interaction_mode = 0;
            }
        }
    }

    /// Implements Ghidra function `FUN_01a8a700` at `0x01A8A700`.
    ///
    /// Starts an empty text annotation for the first selected curve-point
    /// marker when the selection has the exact supported category and a curve
    /// link. Other selection states are silent no-ops.
    pub fn annotate_first_selected_curve_point(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCurvePointAnnotationHost,
    ) {
        let Some(point) = host.first_selected_curve_point(surface) else {
            return;
        };
        self.edit_analysis_result_annotation(
            Some(surface),
            &AnalysisResultAnnotationRequest {
                lines: Vec::new(),
                curve: Some(point.curve),
                anchor: point.anchor,
            },
            host,
        );
    }

    /// Implements Ghidra function `FUN_01a8a780` at `0x01A8A780`.
    ///
    /// Moves the first selected curve cursor to the last sample with the
    /// greatest Y value. Unsupported selections, missing curve links, and
    /// empty sample sequences are silent no-ops.
    pub fn move_first_selected_cursor_to_global_maximum(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisSelectedCurveCursorHost,
    ) {
        let Some(selected) = host.first_selected_curve_cursor(surface) else {
            return;
        };
        let Some(maximum) = scan_curve_provider_extremum(
            host.curve_samples(selected.curve),
            sample_is_maximum_candidate,
        ) else {
            return;
        };
        host.set_curve_cursor_x_position(surface, selected.cursor, f64::from(maximum.x));
    }

    /// Implements Ghidra function `FUN_01a8a820` at `0x01A8A820`.
    ///
    /// Moves the first selected curve cursor to the last sample with the least
    /// Y value. Unsupported selections, missing curve links, and empty sample
    /// sequences are silent no-ops.
    pub fn move_first_selected_cursor_to_global_minimum(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisSelectedCurveCursorHost,
    ) {
        let Some(selected) = host.first_selected_curve_cursor(surface) else {
            return;
        };
        let Some(minimum) = scan_curve_provider_extremum(
            host.curve_samples(selected.curve),
            sample_is_minimum_candidate,
        ) else {
            return;
        };
        host.set_curve_cursor_x_position(surface, selected.cursor, f64::from(minimum.x));
    }

    /// Implements Ghidra function `FUN_01a8a8c0` at `0x01A8A8C0`.
    ///
    /// Scans away from the first selected curve cursor in both provider
    /// directions while sample values do not decrease. It moves the cursor to
    /// the closer local maximum and prefers direction one for an equal-distance
    /// tie. Unsupported selections and searches without a candidate are no-ops.
    pub fn move_first_selected_cursor_to_local_maximum(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisSelectedCurveCursorHost,
    ) {
        let Some(selected) = host.first_selected_curve_cursor(surface) else {
            return;
        };
        let direction_zero = host.curve_samples_from(
            selected.curve,
            selected.position,
            CurveSampleDirection::Zero,
        );
        let direction_one =
            host.curve_samples_from(selected.curve, selected.position, CurveSampleDirection::One);
        let Some(candidate) = find_nearer_local_extremum(
            selected.position,
            [direction_zero, direction_one],
            sample_is_maximum_candidate,
        ) else {
            return;
        };
        host.set_curve_cursor_x_position(surface, selected.cursor, f64::from(candidate.x));
    }

    /// Implements Ghidra function `FUN_01a8a960` at `0x01A8A960`.
    ///
    /// Scans away from the first selected curve cursor in both provider
    /// directions while sample values do not increase. It moves the cursor to
    /// the closer local minimum and prefers direction one for an equal-distance
    /// tie. Unsupported selections and searches without a candidate are no-ops.
    pub fn move_first_selected_cursor_to_local_minimum(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisSelectedCurveCursorHost,
    ) {
        let Some(selected) = host.first_selected_curve_cursor(surface) else {
            return;
        };
        let direction_zero = host.curve_samples_from(
            selected.curve,
            selected.position,
            CurveSampleDirection::Zero,
        );
        let direction_one =
            host.curve_samples_from(selected.curve, selected.position, CurveSampleDirection::One);
        let Some(candidate) = find_nearer_local_extremum(
            selected.position,
            [direction_zero, direction_one],
            sample_is_minimum_candidate,
        ) else {
            return;
        };
        host.set_curve_cursor_x_position(surface, selected.cursor, f64::from(candidate.x));
    }

    /// Implements Ghidra function `FUN_01a8aa00` at `0x01A8AA00`.
    ///
    /// Routes the toolbar command to the shared modeless curve-list opener.
    /// The opener owns all active-diagram and singleton guards.
    pub fn open_curve_list_from_toolbar(&mut self, host: &mut impl AnalysisCurveListHost) {
        host.open_curve_list();
    }

    /// Implements Ghidra function `FUN_01a8ac10` at `0x01A8AC10`.
    ///
    /// Loads the contiguous numbered measurement-result archives for the
    /// active analysis type. Missing diagram context is a silent no-op. A
    /// missing first archive reports the recovered typed notice.
    pub fn load_measurement_results(&mut self, host: &mut impl AnalysisMeasurementResultHost) {
        let Some(context) = host.measurement_result_context() else {
            return;
        };
        let suffix = format!("_meas_{}_%%.tdr", context.analysis_type);
        let template = context.circuit_path.replacen(".tsc", &suffix, 1);
        for sequence in 1_u32.. {
            let path = PathBuf::from(template.replace("%%", &sequence.to_string()));
            if !host.measurement_result_exists(&path) {
                if sequence == 1 {
                    host.show_measurement_result_notice(MeasurementResultNotice::FileNotFound);
                }
                break;
            }
            host.load_measurement_result(&path);
        }
    }

    /// Implements Ghidra function `FUN_01a86d00` at `0x01A86D00`.
    ///
    /// Synchronizes the picture-export file extension with filter indexes 1
    /// through 5. It preserves the directory and extension-free base name,
    /// writes the result back to the dialog, and refreshes the native file-name
    /// field. An unsupported filter keeps the complete original file name.
    pub fn synchronize_picture_export_extension(host: &mut impl AnalysisPictureExportDialogHost) {
        let original_path = host.selected_file_name();
        let path = match host.selected_filter_index() {
            1 => original_path.with_extension("EMF"),
            2 => original_path.with_extension("BMP"),
            3 => original_path.with_extension("JPG"),
            4 => original_path.with_extension("GIF"),
            5 => original_path.with_extension("PNG"),
            _ => original_path,
        };
        host.set_selected_file_name(&path);
        host.refresh_native_file_name(&path);
    }

    /// Implements Ghidra function `FUN_01a86fd0` at `0x01A86FD0`.
    ///
    /// Opens the recovered five-format image dialog and exports the full active
    /// diagram at its current drawing size. EMF and BMP use direct writers;
    /// JPEG, GIF, and PNG use the matching host encoder. Cancel and unsupported
    /// filters do not render. An empty accepted path renders but does not save.
    pub fn export_diagram_picture(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisPictureExportHost,
    ) {
        host.record_command("DFPictureMnu");
        let request = PictureExportDialogRequest {
            title: "Save diagram as image",
            default_extension: "emf",
            initial_file_name: "tinadiag.emf",
            filters: [
                FileDialogFilter {
                    name: "Windows Metafile",
                    pattern: "*.EMF",
                },
                FileDialogFilter {
                    name: "Bitmap File",
                    pattern: "*.BMP",
                },
                FileDialogFilter {
                    name: "JPEG File",
                    pattern: "*.JPG",
                },
                FileDialogFilter {
                    name: "GIF File",
                    pattern: "*.GIF",
                },
                FileDialogFilter {
                    name: "PNG File",
                    pattern: "*.PNG",
                },
            ],
            options: [
                PictureExportDialogOption::OverwritePrompt,
                PictureExportDialogOption::HideReadOnly,
                PictureExportDialogOption::ShowHelp,
                PictureExportDialogOption::PathMustExist,
            ],
        };
        let Some(selection) = host.open_picture_export_dialog(request) else {
            return;
        };
        let format = match selection.filter_index {
            1 => PictureExportFormat::Emf,
            2 => PictureExportFormat::Bmp,
            3 => PictureExportFormat::Jpeg,
            4 => PictureExportFormat::Gif,
            5 => PictureExportFormat::Png,
            _ => return,
        };
        let bounds = host.active_diagram_bounds(surface);
        let canvas = host.create_picture_export_canvas(format, bounds.width, bounds.height);
        self.render_full_diagram_to_canvas(canvas, bounds.width, bounds.height, host);
        if !selection.path.as_os_str().is_empty() {
            host.save_picture_export(format, canvas, &selection.path);
        }
    }

    /// Implements Ghidra function `FUN_01a87970` at `0x01A87970`.
    ///
    /// Stores the default curve width, optionally persists it as the page-setup
    /// setting, clears all seven width-menu checks, and checks the matching item.
    /// It does not change existing curves or request a diagram repaint.
    pub fn set_default_curve_width(
        &mut self,
        width: u8,
        persist: bool,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.default_curve_width = width;
        if persist {
            host.persist_default_curve_width(width);
        }
        for menu_width in 0..=6 {
            host.set_curve_width_menu_checked(menu_width, menu_width == width);
        }
    }

    /// Implements Ghidra function `FUN_01a87af0` at `0x01A87AF0`.
    ///
    /// Selects stored width 0 as the persistent hairline default. Existing
    /// curves and the current diagram remain unchanged.
    pub fn select_hairline_default_curve_width(
        &mut self,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.set_default_curve_width(0, true, host);
    }

    /// Implements Ghidra function `FUN_01a87b10` at `0x01A87B10`.
    ///
    /// Selects stored width 1 as the persistent single-line default. Existing
    /// curves, document state, and the current diagram remain unchanged.
    pub fn select_single_line_default_curve_width(
        &mut self,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.set_default_curve_width(1, true, host);
    }

    /// Implements Ghidra function `FUN_01a87b30` at `0x01A87B30`.
    ///
    /// Selects stored width 2 as the persistent double-line default. Existing
    /// curves, document state, and the current diagram remain unchanged.
    pub fn select_double_line_default_curve_width(
        &mut self,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.set_default_curve_width(2, true, host);
    }

    /// Implements Ghidra function `FUN_01a87b50` at `0x01A87B50`.
    ///
    /// Selects stored width 3 as the persistent triple-line default. Existing
    /// curves and the current diagram remain unchanged.
    pub fn select_triple_line_default_curve_width(
        &mut self,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.set_default_curve_width(3, true, host);
    }

    /// Implements Ghidra function `FUN_01a87b70` at `0x01A87B70`.
    ///
    /// Selects stored width 4 as the persistent four-point default. Existing
    /// curves and the current diagram remain unchanged.
    pub fn select_four_point_default_curve_width(
        &mut self,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.set_default_curve_width(4, true, host);
    }

    /// Implements Ghidra function `FUN_01a87b90` at `0x01A87B90`.
    ///
    /// Selects stored width 5 as the persistent five-point default. Existing
    /// curves and the current diagram remain unchanged.
    pub fn select_five_point_default_curve_width(
        &mut self,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.set_default_curve_width(5, true, host);
    }

    /// Implements Ghidra function `FUN_01a87bb0` at `0x01A87BB0`.
    ///
    /// Selects stored width 6 as the persistent six-point default. Existing
    /// curves and the current diagram remain unchanged.
    pub fn select_six_point_default_curve_width(
        &mut self,
        host: &mut impl AnalysisDefaultCurveWidthHost,
    ) {
        self.set_default_curve_width(6, true, host);
    }

    /// Implements Ghidra function `FUN_01a87bd0` at `0x01A87BD0`.
    ///
    /// Inverts the Display Axes menu check and applies the resulting visibility
    /// to every matching coordinate system in the active diagram. The host owns
    /// the required layout and redraw after it updates those systems.
    pub fn toggle_active_diagram_axes(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisAxisVisibilityHost,
    ) {
        let visible = !host.axes_menu_checked();
        host.set_axes_menu_checked(visible);
        host.apply_axes_visibility(surface, visible);
    }

    /// Implements Ghidra function `FUN_01a87c20` at `0x01A87C20`.
    ///
    /// Selects amplitude-only vector-label formatting, updates the three menu
    /// checks, and persists vector-style value 1. It does not require a selected
    /// vector, rebuild cached labels, or redraw the diagram.
    pub fn select_amplitude_vector_style(&mut self, host: &mut impl AnalysisVectorStyleHost) {
        self.vector_style = Some(VectorStyle::First);
        for style in [VectorStyle::First, VectorStyle::Second, VectorStyle::Third] {
            host.set_vector_style_menu_checked(style, style == VectorStyle::First);
        }
        host.persist_vector_style(1);
    }

    /// Implements Ghidra function `FUN_01a87ca0` at `0x01A87CA0`.
    ///
    /// Selects real-plus-imaginary vector-label formatting, updates the three
    /// menu checks, and persists vector-style value 2. It does not rebuild
    /// cached labels or redraw the diagram.
    pub fn select_real_imaginary_vector_style(&mut self, host: &mut impl AnalysisVectorStyleHost) {
        self.vector_style = Some(VectorStyle::Second);
        for style in [VectorStyle::First, VectorStyle::Second, VectorStyle::Third] {
            host.set_vector_style_menu_checked(style, style == VectorStyle::Second);
        }
        host.persist_vector_style(2);
    }

    /// Implements Ghidra function `FUN_01a87d20` at `0x01A87D20`.
    ///
    /// Selects amplitude-plus-phase vector-label formatting, updates the three
    /// menu checks, and persists vector-style value 3. It does not rebuild
    /// cached labels, mark the document, or redraw the diagram.
    pub fn select_amplitude_phase_vector_style(&mut self, host: &mut impl AnalysisVectorStyleHost) {
        self.vector_style = Some(VectorStyle::Third);
        for style in [VectorStyle::First, VectorStyle::Second, VectorStyle::Third] {
            host.set_vector_style_menu_checked(style, style == VectorStyle::Third);
        }
        host.persist_vector_style(3);
    }

    /// Implements Ghidra function `FUN_01a7ce40` at `0x01A7CE40`.
    ///
    /// Toggles embedded print preview, applies the matching notebook page,
    /// canvas colors, and page render mode, then clears page layout caches and
    /// refreshes the analysis layout. It does not create a window or print.
    pub fn toggle_print_preview(&mut self, host: &mut impl AnalysisPrintHost) {
        host.record_command("DFPrintPreviewMnu");
        self.print_preview_state = match self.print_preview_state {
            PrintPreviewState::Normal => PrintPreviewState::Preview,
            PrintPreviewState::Preview => PrintPreviewState::Normal,
        };
        let enabled = self.print_preview_state == PrintPreviewState::Preview;
        host.set_print_preview_checked(enabled);
        host.apply_embedded_print_preview(enabled, usize::from(enabled), u8::from(enabled));
        host.clear_page_layout_caches();
        host.refresh_analysis_layout();
    }

    /// Implements Ghidra function `FUN_01a7b400` at `0x01A7B400`.
    ///
    /// Activates the two-point circle tool for an active surface by creating a
    /// pending figure and entering interaction mode 7. Without a surface, it
    /// returns to the Select tool and leaves no pending figure.
    pub fn activate_circle_tool(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFCircleBtn");
        let Some(surface) = surface else {
            self.pending_figure = None;
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        self.pending_figure = Some(host.create_circle_draft(surface));
        self.interaction_mode = 7;
    }

    /// Implements Ghidra function `FUN_01a7b4f0` at `0x01A7B4F0`.
    ///
    /// Activates the click-defined line tool for an active surface by creating
    /// a pending figure and entering interaction mode 9. Without a surface, it
    /// returns to the Select tool and leaves no pending figure.
    pub fn activate_line_tool(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFLineBtn");
        let Some(surface) = surface else {
            self.pending_figure = None;
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        self.pending_figure = Some(host.create_line_draft(surface));
        self.interaction_mode = 9;
    }

    /// Implements Ghidra function `FUN_01a7b920` at `0x01A7B920`.
    ///
    /// Presses the grouped Line tool and delegates to the shared line draft
    /// activation and Select fallback workflow.
    pub fn activate_popup_line_tool(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.set_line_tool_down(true);
        self.activate_line_tool(surface, host);
    }

    /// Implements Ghidra function `FUN_01a7b950` at `0x01A7B950`.
    ///
    /// Presses the grouped Circle tool and delegates to the shared circle draft
    /// activation and Select fallback workflow.
    pub fn activate_popup_circle_tool(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.set_circle_tool_down(true);
        self.activate_circle_tool(surface, host);
    }

    /// Implements Ghidra function `FUN_01a7fb90` at `0x01A7FB90`.
    ///
    /// Shifts cursor B's curve by the effective X delta from B to A, expands
    /// its allowed X limits to include the shifted data extent, applies the
    /// curve update, and redraws the active surface.
    pub fn synchronize_cursor_b_curve(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisCursorSynchronizationHost,
    ) {
        let input = host.alignment_input(surface);
        let curve_shift = input.curve_shift + input.cursor_a_x - input.cursor_b_x;
        host.apply_alignment(
            surface,
            CursorCurveAlignment {
                curve_shift,
                allowed_min_x: input.allowed_min_x.min(input.data_min_x + curve_shift),
                allowed_max_x: input.allowed_max_x.max(input.data_max_x + curve_shift),
            },
        );
        host.redraw_surface(surface);
    }

    /// Implements Ghidra function `FUN_01a7b980` at `0x01A7B980`.
    ///
    /// Arms one-shot Cursor A placement when its button is down. A released
    /// button removes Cursor A and returns to neutral selection. A missing
    /// surface uses the Select fallback. Both active-surface paths reconcile
    /// the cursor controls and readouts.
    pub fn toggle_cursor_a(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        button_down: bool,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("CursorABtn");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        if button_down {
            host.set_cursor_auxiliary_tool_down(true);
            self.interaction_mode = 12;
        } else {
            host.remove_cursor(surface, CursorKind::A);
            host.set_selection_tool_down(true);
            self.interaction_mode = 0;
        }
        host.reconcile_cursor_state(surface);
    }

    /// Implements Ghidra function `FUN_01a7bac0` at `0x01A7BAC0`.
    ///
    /// Arms one-shot Cursor B placement when its button is down. A released
    /// button removes Cursor B and returns to neutral selection. A missing
    /// surface uses the Select fallback. Both active-surface paths reconcile
    /// the cursor controls and readouts.
    pub fn toggle_cursor_b(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        button_down: bool,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("CursorBBtn");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
            return;
        };

        if button_down {
            host.set_cursor_auxiliary_tool_down(true);
            self.interaction_mode = 13;
        } else {
            host.remove_cursor(surface, CursorKind::B);
            host.set_selection_tool_down(true);
            self.interaction_mode = 0;
        }
        host.reconcile_cursor_state(surface);
    }

    /// Implements Ghidra function `FUN_01a7bc00` at `0x01A7BC00`.
    ///
    /// Arms the two-click arrow-to-curve rebinding mode for an active surface.
    /// Without a surface, it returns to the Select tool. Object selection and
    /// attachment changes remain deferred to pointer input.
    pub fn activate_arrow_rebinding(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("ArrowBtn");
        if surface.is_some() {
            self.interaction_mode = 14;
        } else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
        }
    }

    /// Implements Ghidra function `FUN_01a7bce0` at `0x01A7BCE0`.
    ///
    /// Arms one-object coordinate auto-label mode for an active surface.
    /// Without a surface, it returns to the Select tool. Hit testing, label
    /// creation, display, and final mode reset remain deferred to pointer input.
    pub fn activate_auto_label(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("AutoLabelBtn");
        if surface.is_some() {
            self.interaction_mode = 20;
        } else {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
        }
    }

    /// Implements Ghidra function `FUN_01a7bdc0` at `0x01A7BDC0`.
    ///
    /// Updates diagram-wide vector labels immediately, or stages a generated
    /// curve legend for one-shot text placement. Generated legend content is
    /// limited to 20 result entries for each curve. A missing surface returns
    /// to the Select tool without generating labels.
    pub fn create_auto_legend(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisLegendHost,
    ) {
        host.record_command("DFAutoCurveLabelsBtn");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            host.record_command("DFSelectBtn");
            self.interaction_mode = 0;
            return;
        };

        match host.classify_auto_legend(surface) {
            AutoLegendKind::VectorLabels => {
                host.update_vector_labels(surface);
                host.set_selection_tool_down(true);
                self.interaction_mode = 0;
            }
            AutoLegendKind::CurveLegend => {
                let draft = host.generate_curve_legend(surface, 20);
                let origin = Point::new(-100.0, -100.0);
                let size = host.prepare_legend_preview(draft, surface, origin);
                host.show_legend_preview_outline(origin, size);
                self.pending_text = Some(draft);
                self.interaction_mode = 6;
            }
        }
    }

    /// Implements Ghidra function `FUN_01a7e460` at `0x01A7E460`.
    ///
    /// Opens the recovered multi-select TINA diagram dialog and appends every
    /// selected archive in dialog order. Cancellation changes no pages. Loader
    /// failures propagate without local rollback.
    pub fn open_diagram_archives(&mut self, host: &mut impl AnalysisDiagramOpenHost) {
        host.record_command("DFOpenMnu");
        let Some(paths) = host.open_diagram_dialog(DiagramOpenDialogRequest {
            default_extension: "tdr",
            initial_file_name: "*.tdr",
            filter: FileDialogFilter {
                name: "Tina diagram",
                pattern: "*.tdr",
            },
            allow_multiple: true,
            file_must_exist: true,
            help_context: 0x1f7,
        }) else {
            return;
        };

        for path in paths {
            host.load_diagram_archive(&path);
        }
    }

    /// Implements Ghidra function `FUN_01a7f990` at `0x01A7F990`.
    ///
    /// Resolves the localized `TINA.CHM` file below the installation folder and
    /// asks the application help service to open Diagram Window context 501.
    pub fn open_diagram_window_help(
        &mut self,
        install_folder: &Path,
        host: &mut impl AnalysisHelpHost,
    ) {
        host.record_command("DFDiagramViewerMnu");
        let help_file = host.resolve_localized_help_file(&install_folder.join("TINA.CHM"));
        host.open_help_context(&help_file, 501);
    }

    /// Implements Ghidra function `FUN_01a7e680` at `0x01A7E680`.
    ///
    /// Records the recovered Save As command but performs no file operation
    /// for an active surface. Without a surface, it restores Select mode.
    pub fn save_as_demo_path(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCommandHost,
    ) {
        host.record_command("DFSaveAsMnu");
        if surface.is_none() {
            host.set_selection_tool_down(true);
            self.activate_selection_tool(None, host);
        }
    }

    /// Implements Ghidra function `FUN_01a7e760` at `0x01A7E760`.
    ///
    /// Copies an exact curve or figure selection as editable diagram data. All
    /// other active selections use a rendered metafile. A missing surface
    /// restores Select mode. Source objects stay unchanged.
    pub fn copy_selection(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisClipboardHost,
    ) {
        host.record_command("DFCopyMnu");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            host.select_tool();
            self.interaction_mode = 0;
            return;
        };

        match host.copy_selection_format(surface) {
            CopySelectionFormat::EditableDiagramData => host.copy_editable_diagram_data(surface),
            CopySelectionFormat::RenderedMetafile => host.copy_rendered_metafile(surface),
        }
    }

    /// Implements Ghidra function `FUN_01a87da0` at `0x01A87DA0`.
    ///
    /// Runs the complete Copy dispatcher and then invokes inherited modal-form
    /// handling. The recovered path does not delete or detach selected objects,
    /// mark the diagram, persist state, or provide rollback.
    pub fn cut_via_copy_and_modal_form(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisCutHost,
    ) {
        self.copy_selection(surface, host);
        host.run_inherited_modal_form();
    }

    /// Implements Ghidra function `FUN_01a87dd0` at `0x01A87DD0`.
    ///
    /// Replaces the shared Add Curve dialog's source catalog, stages the active
    /// result context, and prepares its related editor when available. A UI
    /// sender shows the dialog modelessly. The internal route only resets any
    /// pending dialog state and rebuilds the available-curve list.
    pub fn prepare_add_curve_post_processor(
        &mut self,
        ui_sender: bool,
        host: &mut impl AnalysisAddCurveDialogHost,
    ) {
        let catalog = host.collect_curve_source_catalog();
        host.stage_active_result_context();
        host.replace_add_curve_catalog(catalog);
        if host.related_editor_context_available() {
            host.replace_related_editor_controller(ui_sender);
        }
        if ui_sender {
            host.show_add_curve_dialog_modelessly();
        } else {
            if host.internal_dialog_state_pending() {
                host.reset_internal_dialog_state();
            }
            host.rebuild_available_curves();
        }
    }

    /// Implements Ghidra function `FUN_01a88060` at `0x01A88060`.
    ///
    /// When the Probe button is down, prepares the Add Curve dialog through its
    /// internal background route. When the button is up, releases the dialog's
    /// temporary state and editor controller through the cleanup host.
    pub fn toggle_curve_probe_mode(
        &mut self,
        down: bool,
        host: &mut impl AnalysisAddCurveDialogHost,
    ) {
        if down {
            self.prepare_add_curve_post_processor(false, host);
        } else {
            host.cleanup_add_curve_dialog();
        }
    }

    /// Implements Ghidra function `FUN_01a88200` at `0x01A88200`.
    ///
    /// Toggles per-output-pixel curve sampling. An active diagram has its cached
    /// output width and height cleared. The analysis resize path always runs so
    /// the current view can rebuild with the new sampling mode.
    pub fn toggle_screen_resolution_sampling(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisScreenResolutionHost,
    ) {
        let enabled = !host.screen_resolution_menu_checked();
        host.set_screen_resolution_menu_checked(enabled);
        if let Some(surface) = surface {
            host.clear_cached_output_size(surface);
        }
        host.invoke_analysis_resize();
    }

    /// Implements Ghidra function `FUN_01a88390` at `0x01A88390`.
    ///
    /// Toggles the global `QuickDraw` curve-rendering option and persists the new
    /// value. The setting affects later curve painting; this action does not
    /// require an active diagram and does not request a redraw.
    pub fn toggle_quick_draw(&mut self, host: &mut impl AnalysisQuickDrawHost) {
        let enabled = !host.quick_draw_menu_checked();
        host.set_quick_draw_menu_checked(enabled);
        host.persist_quick_draw(enabled);
    }

    /// Implements Ghidra function `FUN_01a88400` at `0x01A88400`.
    ///
    /// Releases the temporary Probe and Add Curve state when the analysis
    /// results window is hidden while Probe is active. An inactive Probe makes
    /// this lifecycle event a no-op.
    pub fn hidden(&mut self, probe_active: bool, host: &mut impl AnalysisAddCurveDialogHost) {
        if probe_active {
            host.cleanup_add_curve_dialog();
        }
    }

    /// Implements Ghidra function `FUN_01a88440` at `0x01A88440`.
    ///
    /// Rebuilds the eligible curve-audio source list. A released Play button
    /// stops playback. A pressed button maps curve channel modes, uses the
    /// shared offline PCM accumulator to replace the temporary `WAV`, and
    /// starts playback over the intersection of source and visible X bounds.
    /// Unsupported or ineligible inputs are silent no-ops.
    ///
    /// # Errors
    ///
    /// Returns the temporary `WAV` write error without local rollback.
    pub fn toggle_curve_audio(
        &mut self,
        play_pressed: bool,
        host: &mut impl AnalysisCurveAudioHost,
    ) -> io::Result<()> {
        let Some(input) = host.prepare_curve_audio() else {
            return Ok(());
        };
        let Some(channels) = Self::curve_audio_channels(&input.candidates) else {
            return Ok(());
        };
        if !channels.last_eligible {
            return Ok(());
        }
        if !play_pressed {
            host.stop_curve_audio();
            return Ok(());
        }

        let mut accumulator = Self::curve_audio_accumulator(&input, channels);
        let path = host.write_temporary_wave(&mut accumulator)?;
        host.start_curve_audio(
            &path,
            input.source_start_seconds.max(input.visible_start_seconds),
            input.source_stop_seconds.min(input.visible_stop_seconds),
        );
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a88cd0` at `0x01A88CD0`.
    ///
    /// Opens the diagram `WAV` save dialog and exports mapped mono or stereo
    /// curve values through the shared offline PCM accumulator. Cancel performs
    /// no source work. An empty source reports the selected-curve or all-curve
    /// error and does not create a file.
    ///
    /// # Errors
    ///
    /// Returns the accepted-path `WAV` write error without local rollback.
    pub fn export_curve_audio(
        &mut self,
        host: &mut impl AnalysisCurveAudioExportHost,
    ) -> io::Result<()> {
        let request = CurveAudioExportDialogRequest {
            title: "Save diagram to WAV",
            default_extension: "wav",
            initial_file_name: "tcurve.wav",
            filter: FileDialogFilter {
                name: "WAV files",
                pattern: "*.wav",
            },
        };
        let Some(path) = host.open_curve_audio_export_dialog(request) else {
            return Ok(());
        };
        let input = host.prepare_curve_audio_export();
        let Some(channels) = Self::curve_audio_channels(&input.candidates) else {
            host.show_empty_curve_audio_error(input.source_kind);
            return Ok(());
        };
        let mut accumulator = Self::curve_audio_accumulator(&input, channels);
        host.write_curve_audio_export(&path, &mut accumulator)
    }

    fn curve_audio_channels(candidates: &[CurveAudioCandidate]) -> Option<CurveAudioChannels> {
        let mut first = None;
        let mut second = None;
        let mut last_eligible = None;
        for candidate in candidates {
            last_eligible = Some(candidate.eligible);
            match candidate.channel_mode {
                CurveAudioChannelMode::Mono => {
                    first = Some(candidate.value_index);
                    second = first;
                    break;
                }
                CurveAudioChannelMode::First => first = Some(candidate.value_index),
                CurveAudioChannelMode::Second => second = Some(candidate.value_index),
                CurveAudioChannelMode::Unsupported => {}
            }
        }
        last_eligible.map(|last_eligible| CurveAudioChannels {
            first,
            second,
            last_eligible,
        })
    }

    fn curve_audio_accumulator(
        input: &CurveAudioPlaybackInput,
        channels: CurveAudioChannels,
    ) -> PcmAccumulator {
        let requested_channels = if channels.first == channels.second {
            1
        } else {
            2
        };
        let mut accumulator = PcmAccumulator::new(
            requested_channels,
            input.sample_rate,
            input.sizing_factor,
            AccumulatorMode::Offline,
        );
        for row in &input.rows {
            let first = channels
                .first
                .and_then(|index| row.values.get(index))
                .copied()
                .unwrap_or_default();
            let second = channels
                .second
                .and_then(|index| row.values.get(index))
                .copied()
                .unwrap_or_default();
            accumulator.resample_point(row.time_seconds, first, second);
        }
        accumulator
    }

    /// Implements Ghidra function `FUN_01a893a0` at `0x01A893A0`.
    ///
    /// Draws one owner-drawn result tab. The active state selects the themed
    /// background. The caption uses a transparent text background and is
    /// centered with integer layout in the supplied tab bounds.
    pub fn draw_result_tab(
        &mut self,
        index: usize,
        bounds: WindowBounds,
        active: bool,
        host: &mut impl AnalysisTabDrawHost,
    ) {
        let appearance = if active {
            AnalysisTabAppearance::Active
        } else {
            AnalysisTabAppearance::Inactive
        };
        host.set_tab_background(appearance);
        host.fill_tab_bounds(bounds);
        host.set_tab_text_background_transparent();
        let caption = host.tab_caption(index);
        let text = host.measure_tab_text(&caption);
        let origin = WindowPosition {
            left: bounds.left + (bounds.width - text.width) / 2,
            top: bounds.top + (bounds.height - text.height) / 2,
        };
        host.draw_tab_text(&caption, origin);
    }

    /// Implements Ghidra function `FUN_01a894f0` at `0x01A894F0`.
    ///
    /// Selects one text file, obtains modal curve-import options, dispatches the
    /// maintained parser, and applies an imported result. Auto-import settings
    /// are persisted only after successful application and when selected.
    /// Cancellation of either dialog performs no parsing or persistence.
    ///
    /// # Errors
    ///
    /// Returns the parser error. As in the recovered handler, this path does
    /// not guarantee that the busy state is reset after an error.
    pub fn import_curves(
        &mut self,
        host: &mut impl AnalysisCurveImportHost,
    ) -> Result<(), CurveImportError> {
        let request = CurveImportFileDialogRequest {
            initial_file_name: "*.txt",
            allow_multiple: false,
            file_must_exist: true,
            path_must_exist: true,
            help_context: 0x1f7,
        };
        let Some(path) = host.open_curve_import_file_dialog(request) else {
            return Ok(());
        };
        let Some(options) = host.open_curve_import_options(&path) else {
            return Ok(());
        };
        host.set_curve_import_busy(true);
        let outcome = dispatch_curve_import(
            &CurveImportRequest {
                format_code: options.format_code,
                lines: &options.lines,
                skip_rows: options.skip_rows,
                delimiter: &options.delimiter,
                amplitude_in_decibels: options.amplitude_in_decibels,
                display_format: options.display_format,
                insert_into_active_diagram: options.insert_into_active_diagram,
            },
            host,
        )?;
        let imported = match outcome {
            CurveImportOutcome::Imported(imported) => host.apply_curve_import(imported),
            CurveImportOutcome::Cancelled | CurveImportOutcome::UnsupportedFormat(_) => false,
        };
        host.set_curve_import_busy(false);
        if imported && options.auto_import {
            host.persist_auto_import(AutoImportSettings {
                file_name: path,
                file_type: options.format_code,
                skip_rows: options.skip_rows,
                delimiter: options.delimiter,
                amplitude_in_decibels: options.amplitude_in_decibels,
            });
        }
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a89be0` at `0x01A89BE0`.
    ///
    /// Applies the recovered page-control `OnChange` layout adjustment by setting
    /// the active tool page width to 150 logical units. The adapter performs no
    /// page-specific command or diagram update.
    pub fn tool_notebook_changed(&mut self, host: &mut impl AnalysisToolNotebookHost) {
        host.set_active_tool_page_width(150);
    }

    /// Implements Ghidra function `FUN_01a88980` at `0x01A88980`.
    ///
    /// Clears the Play button, removes the position timer, erases the current
    /// indicator from every playback curve, and closes the audio device. Empty
    /// playback lists still run the surrounding cleanup steps.
    pub fn complete_curve_audio_playback(&mut self, host: &mut impl AnalysisCurveAudioCleanupHost) {
        host.set_curve_audio_pressed(false);
        host.remove_curve_audio_position_timer();
        let curves = host.curve_audio_curves();
        let position_milliseconds = host.curve_audio_position_milliseconds();
        let position_seconds = f64::from(position_milliseconds) / 1_000.0;
        for curve in curves {
            host.erase_curve_audio_indicator(curve, position_seconds);
        }
        host.close_curve_audio();
    }

    /// Implements Ghidra function `FUN_01a88bf0` at `0x01A88BF0`.
    ///
    /// Moves all curve playback indicators on a periodic timer tick. A
    /// nonnegative prior position is erased first. The device position is then
    /// queried, stored, converted from milliseconds to seconds, and drawn for
    /// every curve in the current playback list.
    pub fn update_curve_audio_position(&mut self, host: &mut impl AnalysisCurveAudioCleanupHost) {
        let old_position = host.curve_audio_position_milliseconds();
        if old_position >= 0 {
            let old_seconds = f64::from(old_position) / 1_000.0;
            for curve in host.curve_audio_curves() {
                host.erase_curve_audio_indicator(curve, old_seconds);
            }
        }
        let new_position = host.query_curve_audio_position_milliseconds();
        host.set_curve_audio_position_milliseconds(new_position);
        let new_seconds = f64::from(new_position) / 1_000.0;
        for curve in host.curve_audio_curves() {
            host.draw_curve_audio_indicator(curve, new_seconds);
        }
    }

    /// Implements Ghidra function `FUN_01a88a30` at `0x01A88A30`.
    ///
    /// Commits cursor A's X editor value only for carriage return. A successful
    /// commit consumes the character. Other characters are ignored, and a
    /// validation error propagates before the character is consumed.
    ///
    /// # Errors
    ///
    /// Returns the editor validation error from the host.
    pub fn commit_cursor_a_x_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        Self::commit_cursor_x_on_key_press(character, CursorKind::A, host)
    }

    /// Implements Ghidra function `FUN_01a8b070` at `0x01A8B070`.
    ///
    /// Routes the Nyquist Cursor A frequency editor to the shared Cursor A X
    /// commit path. Only carriage return validates, moves, and consumes input.
    ///
    /// # Errors
    ///
    /// Returns the editor validation error from the host.
    pub fn commit_nyquist_cursor_a_frequency_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        self.commit_cursor_a_x_on_key_press(character, host)
    }

    /// Implements Ghidra function `FUN_01a8b480` at `0x01A8B480`.
    ///
    /// Validates the changed Smith Cursor A selector value and delegates it to
    /// the shared Cursor A position update.
    ///
    /// # Errors
    ///
    /// Returns the selector validation error from the host.
    pub fn commit_smith_cursor_a_selection<H: AnalysisCursorPositionEditHost>(
        &mut self,
        host: &mut H,
    ) -> Result<(), H::Error> {
        let position = host.cursor_position_value(CursorKind::A, CursorCoordinate::X)?;
        host.set_cursor_x_position(CursorKind::A, position);
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a8b4b0` at `0x01A8B4B0`.
    ///
    /// Routes the Smith Cursor A frequency editor to the shared Cursor A X
    /// commit path. Only carriage return validates, moves, and consumes input.
    ///
    /// # Errors
    ///
    /// Returns the editor validation error from the host.
    pub fn commit_smith_cursor_a_frequency_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        self.commit_cursor_a_x_on_key_press(character, host)
    }

    /// Implements Ghidra function `FUN_01a88a70` at `0x01A88A70`.
    ///
    /// On carriage return, validates cursor A's X and Y editor values and asks
    /// the selected curve to convert Y to an X position. When conversion is
    /// unavailable, it rereads and uses the X editor value. A successful move
    /// consumes the character; other characters are ignored.
    ///
    /// # Errors
    ///
    /// Returns either editor validation error before the character is consumed.
    pub fn commit_cursor_a_y_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        Self::commit_cursor_y_on_key_press(character, CursorKind::A, host)
    }

    /// Implements Ghidra function `FUN_01a88b10` at `0x01A88B10`.
    ///
    /// Commits cursor B's X editor value only for carriage return. A successful
    /// commit consumes the character. Other characters are ignored, and a
    /// validation error propagates before the character is consumed.
    ///
    /// # Errors
    ///
    /// Returns the editor validation error from the host.
    pub fn commit_cursor_b_x_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        Self::commit_cursor_x_on_key_press(character, CursorKind::B, host)
    }

    /// Implements Ghidra function `FUN_01a8b0f0` at `0x01A8B0F0`.
    ///
    /// Routes the Nyquist Cursor B frequency editor to the shared Cursor B X
    /// commit path. Only carriage return validates, moves, and consumes input.
    ///
    /// # Errors
    ///
    /// Returns the editor validation error from the host.
    pub fn commit_nyquist_cursor_b_frequency_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        self.commit_cursor_b_x_on_key_press(character, host)
    }

    /// Implements Ghidra function `FUN_01a8b4f0` at `0x01A8B4F0`.
    ///
    /// Validates the changed Smith Cursor B selector value and delegates it to
    /// the shared Cursor B position update.
    ///
    /// # Errors
    ///
    /// Returns the selector validation error from the host.
    pub fn commit_smith_cursor_b_selection<H: AnalysisCursorPositionEditHost>(
        &mut self,
        host: &mut H,
    ) -> Result<(), H::Error> {
        let position = host.cursor_position_value(CursorKind::B, CursorCoordinate::X)?;
        host.set_cursor_x_position(CursorKind::B, position);
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a8b520` at `0x01A8B520`.
    ///
    /// Routes the Smith Cursor B frequency editor to the shared Cursor B X
    /// commit path. Only carriage return validates, moves, and consumes input.
    ///
    /// # Errors
    ///
    /// Returns the editor validation error from the host.
    pub fn commit_smith_cursor_b_frequency_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        self.commit_cursor_b_x_on_key_press(character, host)
    }

    /// Implements Ghidra function `FUN_01a88b50` at `0x01A88B50`.
    ///
    /// On carriage return, validates cursor B's X and Y editor values and asks
    /// the selected curve to convert Y to an X position. When conversion is
    /// unavailable, it rereads and uses the X editor value. A successful move
    /// consumes the character; other characters are ignored.
    ///
    /// # Errors
    ///
    /// Returns either editor validation error before the character is consumed.
    pub fn commit_cursor_b_y_on_key_press<H: AnalysisCursorPositionEditHost>(
        &mut self,
        character: char,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        Self::commit_cursor_y_on_key_press(character, CursorKind::B, host)
    }

    fn commit_cursor_x_on_key_press<H: AnalysisCursorPositionEditHost>(
        character: char,
        cursor: CursorKind,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        if character != '\r' {
            return Ok(false);
        }
        let position = host.cursor_position_value(cursor, CursorCoordinate::X)?;
        host.set_cursor_x_position(cursor, position);
        Ok(true)
    }

    fn commit_cursor_y_on_key_press<H: AnalysisCursorPositionEditHost>(
        character: char,
        cursor: CursorKind,
        host: &mut H,
    ) -> Result<bool, H::Error> {
        if character != '\r' {
            return Ok(false);
        }
        let x = host.cursor_position_value(cursor, CursorCoordinate::X)?;
        let y = host.cursor_position_value(cursor, CursorCoordinate::Y)?;
        let position = if let Some(position) = host.cursor_x_for_y(cursor, x, y) {
            position
        } else {
            host.cursor_position_value(cursor, CursorCoordinate::X)?
        };
        host.set_cursor_x_position(cursor, position);
        Ok(true)
    }

    /// Implements Ghidra function `FUN_01a7ee10` at `0x01A7EE10`.
    ///
    /// Uses the first supported clipboard format selected by the host. Editable
    /// diagram data is reconstructed and refreshed immediately. Pictures and
    /// text enter placement mode 6, while metafiles enter placement mode 16.
    /// Unsupported data and unavailable handles are silent no-ops.
    pub fn paste(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisPasteHost,
    ) {
        host.record_command("DFPasteMnu");
        let Some(surface) = surface else {
            host.set_selection_tool_down(true);
            host.select_tool();
            self.interaction_mode = 0;
            return;
        };
        let Some(format) = host.preferred_paste_format() else {
            return;
        };

        if format == PasteClipboardFormat::EditableDiagramData {
            if host.paste_editable_diagram_data(surface) {
                host.refresh_after_editable_paste(surface);
            }
            return;
        }

        let Some(draft) = host.stage_paste_object(surface, format) else {
            return;
        };
        self.pending_paste = Some(draft);
        self.interaction_mode = match format {
            PasteClipboardFormat::DelphiPicture | PasteClipboardFormat::Text => 6,
            PasteClipboardFormat::EnhancedMetafile | PasteClipboardFormat::MetafilePicture => 16,
            PasteClipboardFormat::EditableDiagramData => unreachable!(),
        };
    }

    /// Implements Ghidra function `FUN_01a7c950` at `0x01A7C950`.
    ///
    /// Opens the recovered auto-test result save dialog. On acceptance, it
    /// serializes the first curve's backing analysis result with three empty
    /// context values. Cancellation does not inspect the diagram model.
    pub fn export_auto_test_result(
        &mut self,
        surface: AnalysisSurfaceHandle,
        host: &mut impl AnalysisResultExportHost,
    ) {
        let request = AutoTestResultDialogRequest {
            title: "Save auto test result",
            default_extension: "tr",
            initial_file_name: "",
            filters: [
                FileDialogFilter {
                    name: "TR result",
                    pattern: "*.tr",
                },
                FileDialogFilter {
                    name: "DC result",
                    pattern: "*.dc",
                },
                FileDialogFilter {
                    name: "AC result",
                    pattern: "*.ac",
                },
            ],
        };
        if !host.open_auto_test_result_save_dialog(request) {
            return;
        }

        let result = host.first_curve_analysis_result(surface);
        let path = host.selected_save_path();
        host.serialize_analysis_result(&path, result, [0; 3]);
    }

    /// Implements Ghidra function `FUN_01a7cb70` at `0x01A7CB70`.
    ///
    /// Opens the property editor for an exact axis, curve, or supported figure
    /// selection. Unsupported and missing selections are no-ops. Every
    /// recognized figure editor is followed by recovered interaction mode 19
    /// and the one-shot refused-click timer, independent of its dialog result.
    pub fn open_selected_properties(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisPropertiesHost,
    ) {
        host.record_command("PropertiesMnu");
        let Some(surface) = surface else {
            return;
        };

        let target = host.selected_properties_target(surface);
        match target {
            PropertiesTarget::Axis => {
                host.record_command("AxisMnu");
                host.open_axis_properties(surface);
            }
            PropertiesTarget::Curve => {
                host.record_command("CurveMnu");
                host.open_curve_properties(surface);
            }
            PropertiesTarget::Text
            | PropertiesTarget::Arrow
            | PropertiesTarget::PenFigure
            | PropertiesTarget::Metafile => {
                host.open_figure_properties(surface, target);
                self.property_interaction_token = None;
                self.interaction_mode = 19;
                self.start_refuse_click_timer();
            }
            PropertiesTarget::Unsupported => {}
        }
    }

    /// Implements Ghidra function `FUN_01a7a960` at `0x01A7A960`.
    ///
    /// Stops the one-shot refused-click timer. It also returns object-edit
    /// interaction mode 19 to the neutral mode and preserves every other mode.
    pub const fn refuse_click_timer_elapsed(&mut self) {
        self.refuse_click_timer_state = RefuseClickTimerState::Inactive;
        if self.interaction_mode == 19 {
            self.interaction_mode = 0;
        }
    }

    pub const fn start_refuse_click_timer(&mut self) {
        self.refuse_click_timer_state = RefuseClickTimerState::Active;
    }

    /// Implements Ghidra function `FUN_01a72620` at `0x01A72620`.
    ///
    /// Initializes the analysis window with 100 percent zoom, the persisted
    /// vector style, saved bounds limited to the current screen, the recovered
    /// command shortcuts, disabled startup tools, and installed host hooks.
    /// The recovered drawing font is represented by `drawing_font`.
    pub fn initialize(&mut self, preferences: StartupPreferences, screen: WindowBounds) {
        self.zoom_percent = 100;
        self.vector_style = match preferences.vector_style {
            1 => Some(VectorStyle::First),
            2 => Some(VectorStyle::Second),
            3 => Some(VectorStyle::Third),
            _ => None,
        };
        let width = preferences.bounds.width.min(screen.width);
        let height = preferences.bounds.height.min(screen.height);
        self.bounds = WindowBounds {
            left: preferences.bounds.left.min(screen.width - width),
            top: preferences.bounds.top.min(screen.height - height),
            width,
            height,
        };
        self.startup_initialized = true;
    }

    /// Implements Ghidra function `FUN_01a72e30` at `0x01A72E30`.
    ///
    /// Persists the current analysis-window bounds, releases the seven shared
    /// result slots through the host, and consumes the window. Rust ownership
    /// then releases all window-owned managers, hooks, and drawing resources.
    pub fn destroy(self, host: &mut impl AnalysisWindowLifecycleHost) {
        for (name, value) in [
            ("WinLeft", self.bounds.left),
            ("WinTop", self.bounds.top),
            ("WinWidth", self.bounds.width),
            ("WinHeight", self.bounds.height),
        ] {
            host.save_integer(name, value);
        }
        for index in 0..SHARED_RESULT_SLOT_COUNT {
            host.release_shared_result_slot(index);
        }
        drop(self);
    }

    /// Implements Ghidra function `FUN_01a7fc90` at `0x01A7FC90`.
    ///
    /// Recalculates the recovered Edit-menu command states from form mode,
    /// diagram presence, post-processor gates, and selected-curve axis
    /// capacity. It does not inspect clipboard data or execute a command.
    pub fn refresh_edit_command_states(&mut self, host: &mut impl AnalysisCommandStateHost) {
        let input = host.command_state_input();
        let axis_commands_enabled = if input.has_diagram {
            match input.selected_curve_capacity {
                Some(CurveAxisCapacity::Independent {
                    x_axis_count,
                    x_component_count,
                    y_axis_count,
                    y_component_count,
                }) => [
                    x_axis_count < 3 && x_component_count > 1,
                    y_axis_count < 3 && y_component_count > 1,
                ],
                Some(CurveAxisCapacity::XOnly {
                    x_axis_count,
                    x_component_count,
                }) => [x_axis_count < 3 && x_component_count > 1, false],
                Some(CurveAxisCapacity::Unsupported) | None => [false, false],
            }
        } else {
            [false, false]
        };
        let diagram_enabled = input.has_diagram;
        host.apply_command_states(AnalysisCommandStates {
            enabled: [
                input.form_mode == 1,
                diagram_enabled,
                diagram_enabled,
                diagram_enabled,
                diagram_enabled,
                diagram_enabled
                    && input.post_processor_feature_enabled
                    && !input.post_processor_blocked,
                axis_commands_enabled[0],
                axis_commands_enabled[1],
            ],
        });
    }

    /// Implements Ghidra function `FUN_01a88430` at `0x01A88430`.
    ///
    /// Refreshes the shared command states when the Edit menu opens. This
    /// adapter does not execute any child command.
    pub fn open_edit_menu(&mut self, host: &mut impl AnalysisCommandStateHost) {
        self.refresh_edit_command_states(host);
    }

    /// Implements Ghidra function `FUN_01a8b060` at `0x01A8B060`.
    ///
    /// Refreshes the shared command states when the View menu opens. This
    /// adapter does not execute any child command.
    pub fn open_view_menu(&mut self, host: &mut impl AnalysisCommandStateHost) {
        self.refresh_edit_command_states(host);
    }

    /// Implements Ghidra function `FUN_01a8b0b0` at `0x01A8B0B0`.
    ///
    /// Inverts the frequency-and-slope readout option. An active diagram then
    /// receives the shared cursor readout, layout, and repaint refresh. Without
    /// a diagram, only the check state changes.
    pub fn toggle_frequency_slope_readouts(
        &mut self,
        surface: Option<AnalysisSurfaceHandle>,
        host: &mut impl AnalysisFrequencySlopeHost,
    ) {
        let checked = !host.frequency_slope_checked();
        host.set_frequency_slope_checked(checked);
        if let Some(surface) = surface {
            host.refresh_cursor_frequency_slope(surface);
        }
    }

    /// Implements Ghidra function `FUN_01a8b560` at `0x01A8B560`.
    ///
    /// Applies one Smith matrix label mode to the A, B, and A-minus-B groups.
    /// Index zero shows real and imaginary labels. Every other index shows
    /// magnitude and phase labels.
    pub fn synchronize_smith_matrix_format(
        &mut self,
        host: &mut impl AnalysisSmithMatrixFormatHost,
    ) {
        let real_imaginary = host.smith_format_index() == 0;
        host.apply_smith_matrix_label_visibility(SmithMatrixLabelVisibility {
            real_imaginary,
            magnitude_phase: !real_imaginary,
        });
    }

    /// Implements Ghidra function `FUN_01a8b860` at `0x01A8B860`.
    ///
    /// Handles the Smith format selection event by applying the shared label
    /// visibility rule. The event does not calculate or persist matrix data.
    pub fn smith_matrix_format_selected(&mut self, host: &mut impl AnalysisSmithMatrixFormatHost) {
        self.synchronize_smith_matrix_format(host);
    }

    /// Implements Ghidra function `FUN_01a7d460` at `0x01A7D460`.
    ///
    /// Routes the recovered analysis-window shortcuts through Iced key and
    /// modifier values. Unmodified arrows move cursor A, Control+arrows move
    /// cursor B, and Shift+Left or Shift+Right scrolls the X axis. Up and Down
    /// repaint after cursor-curve navigation. Escape cancels the active tool,
    /// Delete removes supported selections, and F5 repaints the diagram.
    pub fn key_down(
        &mut self,
        key: &keyboard::Key,
        modifiers: keyboard::Modifiers,
        surface: Option<AnalysisSurfaceHandle>,
        cursors: CursorPair,
        host: &mut impl AnalysisCommandHost,
    ) -> KeyDownRoute {
        use keyboard::{Key, key::Named};

        match key {
            Key::Named(Named::Escape) => {
                host.cancel_active_interaction(
                    self.interaction_mode,
                    self.pending_text.take(),
                    self.pending_figure.take(),
                    self.pending_paste.take(),
                );
                self.interaction_mode = 0;
                if surface.is_some() {
                    host.refresh_command_state();
                }
                KeyDownRoute::Cancelled
            }
            Key::Named(Named::ArrowLeft | Named::ArrowRight) => {
                let right = matches!(key, Key::Named(Named::ArrowRight));
                if modifiers.shift() && !modifiers.control() {
                    if right {
                        self.scroll_x_axis_right(surface, host);
                    } else {
                        self.scroll_x_axis_left(surface, host);
                    }
                    return KeyDownRoute::AxisScrolled;
                }

                let cursor = if modifiers.control() && !modifiers.shift() {
                    cursors.b
                } else if !modifiers.control() && !modifiers.shift() {
                    cursors.a
                } else {
                    None
                };
                let Some((surface, cursor)) = surface.zip(cursor) else {
                    return KeyDownRoute::Ignored;
                };
                let direction = if right {
                    CursorNavigationDirection::NextSample
                } else {
                    CursorNavigationDirection::PreviousSample
                };
                host.move_cursor(surface, cursor, direction);
                KeyDownRoute::CursorMoved { cursor, direction }
            }
            Key::Named(Named::ArrowUp | Named::ArrowDown) => {
                let down = matches!(key, Key::Named(Named::ArrowDown));
                let cursor = if modifiers.control() && !modifiers.shift() {
                    cursors.b
                } else if !modifiers.control() && !modifiers.shift() {
                    cursors.a
                } else {
                    None
                };
                let Some(surface) = surface else {
                    return KeyDownRoute::Ignored;
                };
                let route = if let Some(cursor) = cursor {
                    let direction = if down {
                        CursorNavigationDirection::NextCurve
                    } else {
                        CursorNavigationDirection::PreviousCurve
                    };
                    host.move_cursor(surface, cursor, direction);
                    KeyDownRoute::CursorMoved { cursor, direction }
                } else if modifiers.shift() && !modifiers.control() {
                    if down {
                        self.record_down_scroll_click(host);
                    } else {
                        self.record_up_scroll_click(host);
                    }
                    KeyDownRoute::AxisScrolled
                } else {
                    KeyDownRoute::Repainted
                };
                host.repaint_diagram(surface);
                route
            }
            Key::Named(Named::Delete) => {
                if let Some(surface) = surface {
                    host.delete_selected_figures(surface);
                    host.delete_selected_curves(
                        surface,
                        CurveDeletionOptions {
                            confirm: true,
                            remove_empty_axes: true,
                            remove_empty_coordinate_systems: true,
                        },
                    );
                }
                KeyDownRoute::SelectionDeleted
            }
            Key::Named(Named::F5) => {
                let Some(surface) = surface else {
                    return KeyDownRoute::Ignored;
                };
                host.repaint_diagram(surface);
                KeyDownRoute::Repainted
            }
            _ => KeyDownRoute::Ignored,
        }
    }

    /// Implements Ghidra function `FUN_01a730e0` at `0x01A730E0`.
    ///
    /// Routes an Iced mouse-down event to the active analysis drawing tool.
    /// An overlay receives the event first. No active surface is a no-op.
    /// Shift+left in neutral mode starts modified selection; other left clicks
    /// go to the current tool. Right-click completes tool mode ten or opens the
    /// general context path. Active-surface routes finish with a state refresh.
    pub fn mouse_down(
        &mut self,
        button: mouse::Button,
        modifiers: keyboard::Modifiers,
        position: Point,
        context: PointerContext,
        host: &mut impl AnalysisPointerHost,
    ) -> MouseDownRoute {
        if context.overlay_active {
            host.delegate_overlay(position);
            return MouseDownRoute::Overlay;
        }
        if !context.surface_active {
            return MouseDownRoute::NoSurface;
        }

        let route = match button {
            mouse::Button::Left if modifiers.shift() && context.tool_mode == 0 => {
                host.begin_modified_selection(position);
                MouseDownRoute::ModifiedSelection
            }
            mouse::Button::Left => {
                host.handle_tool_press(context.tool_mode, position);
                MouseDownRoute::Tool(context.tool_mode)
            }
            mouse::Button::Right if context.tool_mode == 10 => {
                host.finish_tool_ten(position);
                MouseDownRoute::FinishToolTen
            }
            mouse::Button::Right => {
                host.show_context_actions(position);
                MouseDownRoute::Context
            }
            _ => MouseDownRoute::RefreshOnly,
        };
        host.refresh_tool_state();
        route
    }

    /// Implements Ghidra function `FUN_01a74a50` at `0x01A74A50`.
    ///
    /// Routes an Iced pointer move for the analysis surface. An active overlay
    /// selects its cursor and stops. A missing surface is a no-op. Otherwise,
    /// the coordinate status is updated before supported drawing-tool preview
    /// modes are dispatched. Unhandled mode bytes only update the coordinates.
    pub fn mouse_move(
        &mut self,
        position: Point,
        context: PointerContext,
        host: &mut impl AnalysisPointerMoveHost,
    ) -> MouseMoveRoute {
        if context.overlay_active {
            host.show_overlay_cursor();
            return MouseMoveRoute::Overlay;
        }
        if !context.surface_active {
            return MouseMoveRoute::NoSurface;
        }

        host.show_coordinates(position);
        if matches!(context.tool_mode, 0..=10 | 12..=18 | 20..=22) {
            host.handle_tool_move(context.tool_mode, position);
            MouseMoveRoute::Tool(context.tool_mode)
        } else {
            MouseMoveRoute::StatusOnly
        }
    }

    /// Implements Ghidra function `FUN_01a77260` at `0x01A77260`.
    ///
    /// Records a pointer release for an active analysis surface and finalizes
    /// only the recovered release-driven tool modes. Mode 19 only resets to
    /// neutral. Other modes retain the recorded release without a tool action.
    /// The recovered handler does not branch on the released mouse button.
    pub fn mouse_up(
        &mut self,
        position: Point,
        context: PointerContext,
        host: &mut impl AnalysisPointerUpHost,
    ) -> MouseUpRoute {
        if !context.surface_active {
            return MouseUpRoute::NoSurface;
        }

        host.record_release(position);
        if matches!(context.tool_mode, 2 | 4 | 5 | 8 | 17 | 18 | 22) {
            host.finish_tool_release(context.tool_mode, position);
            MouseUpRoute::Tool(context.tool_mode)
        } else if context.tool_mode == 19 {
            host.reset_tool();
            MouseUpRoute::Reset
        } else {
            MouseUpRoute::RecordedOnly
        }
    }

    /// Implements Ghidra function `FUN_01a77cc0` at `0x01A77CC0`.
    ///
    /// Handles a neutral-mode double click on an unlocked analysis surface.
    /// Selection categories one and two use their general edit paths. Category
    /// eight dispatches four supported runtime object classes and then enters
    /// edit mode 19. All guard failures and other selections are no-ops.
    pub fn double_click(
        &mut self,
        context: DoubleClickContext,
        host: &mut impl AnalysisDoubleClickHost,
    ) -> DoubleClickRoute {
        if context.tool_mode != 0 || !context.surface_active || context.surface_locked {
            return DoubleClickRoute::Ignored;
        }

        match host.selection_category() {
            1 => {
                host.edit_category_one();
                DoubleClickRoute::CategoryOne
            }
            2 => {
                host.edit_category_two();
                DoubleClickRoute::CategoryTwo
            }
            8 => {
                let Some(object_class @ 0..=3) = host.selected_object_class() else {
                    return DoubleClickRoute::Ignored;
                };
                host.begin_object_edit(object_class);
                host.enter_object_edit_mode(19);
                DoubleClickRoute::ObjectClass(object_class)
            }
            _ => DoubleClickRoute::Ignored,
        }
    }

    /// Implements Ghidra function `FUN_01a77ef0` at `0x01A77EF0`.
    ///
    /// Paints an overlay in preference to the active analysis surface and
    /// brackets either render with the recovered busy-cursor state. After the
    /// render decision, one deferred refresh is cleared and processed only
    /// when both its global enable and pending flags are set.
    pub fn paint(
        &mut self,
        context: PaintContext,
        host: &mut impl AnalysisPaintHost,
    ) -> PaintRoute {
        let route = if context.overlay_active {
            host.set_busy_cursor(true);
            host.paint_overlay();
            host.set_busy_cursor(false);
            PaintRoute::Overlay
        } else if context.surface_active {
            host.set_busy_cursor(true);
            host.paint_surface();
            host.set_busy_cursor(false);
            PaintRoute::Surface
        } else {
            PaintRoute::NoContent
        };

        if context.deferred_refresh == DeferredRefresh::Pending {
            host.clear_deferred_refresh();
            host.process_deferred_refresh();
        }
        route
    }

    /// Implements Ghidra function `FUN_01a77f90` at `0x01A77F90`.
    ///
    /// Records the resized window and updates the status area before content
    /// handling. An overlay receives resize and paint priority. Otherwise, an
    /// active analysis surface rebuilds its backing buffer and paints under a
    /// busy cursor, then stores the new client size. No content stops after the
    /// common bounds and status updates.
    pub fn resize(
        &mut self,
        bounds: WindowBounds,
        client_size: Size,
        context: ResizeContext,
        host: &mut impl AnalysisResizeHost,
    ) -> PaintRoute {
        self.bounds = bounds;
        host.record_bounds(bounds);
        host.resize_status_area(bounds.width);

        if context.overlay_active {
            host.resize_and_paint_overlay(client_size);
            return PaintRoute::Overlay;
        }
        if !context.surface_active {
            return PaintRoute::NoContent;
        }

        host.set_busy_cursor(true);
        host.rebuild_surface_buffer(client_size);
        host.paint_surface();
        host.store_surface_size(client_size);
        host.set_busy_cursor(false);
        PaintRoute::Surface
    }

    /// Implements Ghidra function `FUN_01a789f0` at `0x01A789F0`.
    ///
    /// Applies the selected cursor-page height, aligns the stacked panels, and
    /// then runs the common analysis-window resize path. The normal page uses
    /// 90 pixels unless its single nested page supplies a computed height; the
    /// other two recovered pages use 67 and 119 pixels.
    pub fn cursor_panel_changed(
        &mut self,
        page: CursorPanelPage,
        client_size: Size,
        resize_context: ResizeContext,
        host: &mut impl CursorPanelHost,
    ) -> PaintRoute {
        match page {
            CursorPanelPage::Normal { computed_height } => {
                host.set_cursor_panel_height(computed_height.unwrap_or(90));
            }
            CursorPanelPage::Secondary => host.set_cursor_panel_height(67),
            CursorPanelPage::Tertiary => host.set_cursor_panel_height(119),
            CursorPanelPage::Other => {}
        }
        host.align_cursor_panels();
        self.resize(self.bounds, client_size, resize_context, host)
    }

    pub const fn update(&mut self, _message: Message) {
        self.command_selected = true;
    }

    #[must_use]
    pub const fn result_manager(&self) -> &AnalysisResultManager {
        &self.result_manager
    }

    pub const fn result_manager_mut(&mut self) -> &mut AnalysisResultManager {
        &mut self.result_manager
    }

    #[must_use]
    pub const fn zoom_percent(&self) -> u16 {
        self.zoom_percent
    }

    #[must_use]
    pub const fn default_curve_width(&self) -> u8 {
        self.default_curve_width
    }

    #[must_use]
    pub const fn bounds(&self) -> WindowBounds {
        self.bounds
    }

    #[must_use]
    pub const fn vector_style(&self) -> Option<VectorStyle> {
        self.vector_style
    }

    #[must_use]
    pub const fn drawing_font(&self) -> (&'static str, u16) {
        ("Arial", 12)
    }

    #[must_use]
    pub const fn command_shortcuts_installed(&self) -> bool {
        self.startup_initialized
    }

    #[must_use]
    pub const fn keep_results(&self) -> bool {
        self.keep_results
    }

    #[must_use]
    pub const fn interaction_mode(&self) -> u8 {
        self.interaction_mode
    }

    #[must_use]
    pub const fn refuse_click_timer_active(&self) -> bool {
        matches!(self.refuse_click_timer_state, RefuseClickTimerState::Active)
    }

    #[must_use]
    pub const fn pending_figure(&self) -> Option<FigureDraftHandle> {
        self.pending_figure
    }

    #[must_use]
    pub const fn pending_paste(&self) -> Option<PasteObjectHandle> {
        self.pending_paste
    }

    #[must_use]
    pub const fn property_interaction_token(&self) -> Option<u64> {
        self.property_interaction_token
    }

    #[must_use]
    pub const fn print_preview_state(&self) -> PrintPreviewState {
        self.print_preview_state
    }

    #[must_use]
    pub const fn nyquist_format(&self) -> NyquistFormat {
        self.nyquist_format
    }

    #[must_use]
    pub const fn pending_text(&self) -> Option<TextDraftHandle> {
        self.pending_text
    }

    #[must_use]
    pub const fn startup_tools_enabled(&self) -> bool {
        false
    }

    #[must_use]
    pub const fn host_hooks_installed(&self) -> bool {
        self.startup_initialized
    }

    #[must_use]
    pub fn active_result_title(&self) -> Option<&str> {
        self.result_manager
            .active_result()
            .map(|result| result.title.as_str())
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let surface = self.active_result_title().unwrap_or({
            if self.command_selected {
                "Analysis diagram - command selected"
            } else {
                "Analysis diagram"
            }
        });
        let status = if self.result_manager.refresh_generation() == 0 {
            READY_STATUS
        } else {
            PUBLISHED_STATUS
        };

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            window_shell::surface(surface),
            status,
        )
    }
}

#[cfg(test)]
mod tests {
    use std::collections::VecDeque;
    use std::path::{Path, PathBuf};

    use tiara_core::analysis_result_publishing::{AnalysisPoint, AnalysisSeries, AxisLabels};
    use tiara_core::complex_parameter::ComplexPoint;
    use tiara_core::curve_import::{CurveImport, CurveImportObserver};
    use tiara_core::wav_audio::PcmAccumulator;

    use iced::{Color, Point, Size, keyboard, mouse};

    use super::{
        AnalysisAddCurveDialogHost, AnalysisAveragesReportHost, AnalysisAxisVisibilityHost,
        AnalysisClearAllHost, AnalysisClipboardHost, AnalysisCloseHost, AnalysisCommand,
        AnalysisCommandHost, AnalysisCommandStateHost, AnalysisCommandStateInput,
        AnalysisCommandStates, AnalysisComponentParameterHost, AnalysisCopyButtonMouseHost,
        AnalysisCrossoverFrequencyHost, AnalysisCursorPositionEditHost,
        AnalysisCursorSynchronizationHost, AnalysisCurveAudioCleanupHost,
        AnalysisCurveAudioExportHost, AnalysisCurveAudioHost, AnalysisCurveImportHost,
        AnalysisCurveListHost, AnalysisCurvePointAnnotationHost, AnalysisCurveProcessHost,
        AnalysisCurveRenderHost, AnalysisCurveRippleHost, AnalysisCurveStatisticsHost,
        AnalysisCutHost, AnalysisDefaultCurveWidthHost, AnalysisDiagramOpenHost,
        AnalysisDiagramRenderHost, AnalysisDiagramSaveHost, AnalysisDoubleClickHost,
        AnalysisFrequencySlopeHost, AnalysisGainMarginHost, AnalysisGridColorHost,
        AnalysisHelpHost, AnalysisLayoutHost, AnalysisLegendHost, AnalysisMarginEditorHost,
        AnalysisMeasurementResultHost, AnalysisNotice, AnalysisObjectHandle, AnalysisPageHost,
        AnalysisPageNameHost, AnalysisPaintHost, AnalysisPasteHost, AnalysisPhaseMarginHost,
        AnalysisPictureExportDialogHost, AnalysisPictureExportHost, AnalysisPointerHost,
        AnalysisPointerMoveHost, AnalysisPointerUpHost, AnalysisPrintHost, AnalysisPropertiesHost,
        AnalysisQuickDrawHost, AnalysisResizeHost, AnalysisResultAnnotationHost,
        AnalysisResultAnnotationRequest, AnalysisResultExportHost, AnalysisResultHandle,
        AnalysisResultTabHost, AnalysisRippleReportHost, AnalysisScreenResolutionHost,
        AnalysisSelectedCurveCursorHost, AnalysisSmithMatrixFormatHost, AnalysisSurfaceHandle,
        AnalysisTabAppearance, AnalysisTabDrawHost, AnalysisTabHoverHost, AnalysisTextExportHost,
        AnalysisTextPlacementHost, AnalysisToolNotebookHost, AnalysisVectorStyleHost,
        AnalysisVerticalScrollMouseHost, AnalysisWindowLifecycleHost, AnalysisWindowShowHost,
        AutoImportSettings, AutoLegendKind, AutoTestResultDialogRequest, AxisCreationOptions,
        AxisDeletionOptions, ClearAllConfirmation, CloseDisposition, CopySelectionFormat,
        CursorCoordinate, CursorCurveAlignment, CursorCurveAlignmentInput, CursorHandle,
        CursorKind, CursorNavigationDirection, CursorPair, CursorPanelHost, CursorPanelPage,
        CurveAudioCandidate, CurveAudioChannelMode, CurveAudioExportDialogRequest,
        CurveAudioPlaybackInput, CurveAudioRow, CurveAudioSourceKind, CurveAxisCapacity,
        CurveDeletionOptions, CurveImportFileDialogRequest, CurveImportOptions, CurveRenderPixel,
        CurveRenderSample, CurveRipple, CurveSampleDirection, CurveSourceCatalogHandle,
        CurveStatistics, DeferredRefresh, DiagramCanvasHandle, DiagramOpenDialogRequest,
        DiagramPanelExportCandidate, DiagramPanelHandle, DiagramPrintDialogRequest,
        DiagramPrintRange, DoubleClickContext, DoubleClickRoute, FigureDraftHandle,
        FourierAnalysisMode, GainMarginPhaseReference, KeyDownRoute, MeasurementResultContext,
        MeasurementResultNotice, Message, MouseDownRoute, MouseMoveRoute, MouseUpRoute,
        NyquistFormat, PageDeletionOutcome, PageNameDialogResult, PaintContext, PaintRoute,
        PasteClipboardFormat, PasteObjectHandle, PhaseMarginResult, PictureExportDialogOption,
        PictureExportDialogRequest, PictureExportFormat, PictureExportSelection, PointerContext,
        PrintPreviewState, PropertiesTarget, ResizeContext, ResultTabHint, SelectedCurveCursor,
        SelectedCurvePoint, SmithMatrixLabelVisibility, StartupPreferences, TabTextSize,
        TextDraftHandle, TextEditorResult, TextExportDialogRequest, VectorStyle, Window,
        WindowBounds, WindowPosition, XAxisCreationOptions,
        calculate_curve_ripple_in_current_range, calculate_curve_statistics_in_current_range,
        compute_curve_ripple, compute_curve_statistics, find_nearer_local_extremum,
        find_phase_crossing, find_value_crossing, find_zero_crossing, magnitude_at_phase_crossing,
        phase_margin_at_zero_db_crossing, render_dispatcher_selected_sampled_curve,
        render_sampled_curve, sample_is_maximum_candidate, sample_is_minimum_candidate,
        scan_curve_provider_extremum,
    };

    #[derive(Default)]
    struct LifecycleHost {
        settings: Vec<(String, i32)>,
        released_slots: Vec<usize>,
    }

    impl AnalysisWindowLifecycleHost for LifecycleHost {
        fn save_integer(&mut self, name: &str, value: i32) {
            self.settings.push((name.to_owned(), value));
        }

        fn release_shared_result_slot(&mut self, index: usize) {
            self.released_slots.push(index);
        }
    }

    #[derive(Default)]
    struct CloseHost(Vec<&'static str>);

    impl AnalysisCloseHost for CloseHost {
        fn release_drawing_handle(&mut self) {
            self.0.push("release-drawing-handle");
        }

        fn clear_transient_text(&mut self) {
            self.0.push("clear-transient-text");
        }

        fn close_associated_view(&mut self) {
            self.0.push("close-associated-view");
        }

        fn close_cursor_window(&mut self) {
            self.0.push("close-cursor-window");
        }
    }

    #[derive(Default)]
    struct LayoutHost(Vec<WindowPosition>);

    impl AnalysisLayoutHost for LayoutHost {
        fn move_cursor_window(&mut self, position: WindowPosition) {
            self.0.push(position);
        }
    }

    #[derive(Default)]
    struct ResultTabHost(Vec<String>);

    impl AnalysisResultTabHost for ResultTabHost {
        fn activate_result_page(&mut self, selected_index: usize, force_refresh: bool) {
            self.0
                .push(format!("activate:{selected_index}:{force_refresh}"));
        }

        fn refresh_analysis_scrollbars(&mut self) {
            self.0.push("refresh-scrollbars".to_owned());
        }
    }

    #[derive(Default)]
    struct TabHoverHost {
        hint: Option<ResultTabHint>,
        events: Vec<String>,
    }

    impl AnalysisTabHoverHost for TabHoverHost {
        fn result_tab_hint_at(&mut self, position: Point) -> Option<ResultTabHint> {
            self.events
                .push(format!("resolve:{}:{}", position.x, position.y));
            self.hint.clone()
        }

        fn show_result_tab_hint(&mut self, hint: &ResultTabHint) {
            self.events.push(format!(
                "show:{}:{}:{}:{}",
                hint.tab_index, hint.text, hint.anchor.x, hint.anchor.y
            ));
        }

        fn hide_result_tab_hint(&mut self) {
            self.events.push("hide-hint".to_owned());
        }

        fn clear_result_tab_hint_text(&mut self) {
            self.events.push("clear-hint-text".to_owned());
        }
    }

    struct PageHost {
        outcome: PageDeletionOutcome,
        events: Vec<String>,
    }

    impl AnalysisPageHost for PageHost {
        fn record_command(&mut self, name: &str) {
            self.events.push(format!("record:{name}"));
        }

        fn delete_result_page(&mut self, selected_index: usize) -> PageDeletionOutcome {
            self.events.push(format!("delete-page:{selected_index}"));
            self.outcome
        }

        fn resize_active_diagram(&mut self) {
            self.events.push("resize".to_owned());
        }

        fn clear_analysis_canvas(&mut self) {
            self.events.push("clear-white".to_owned());
        }
    }

    struct PageNameHost {
        initial_index: usize,
        current_index: usize,
        index_reads: usize,
        result: PageNameDialogResult,
        events: Vec<String>,
    }

    impl AnalysisPageNameHost for PageNameHost {
        fn record_command(&mut self, name: &str) {
            self.events.push(format!("record:{name}"));
        }

        fn active_page_index(&mut self) -> usize {
            let index = if self.index_reads == 0 {
                self.initial_index
            } else {
                self.current_index
            };
            self.index_reads += 1;
            self.events.push(format!("index:{index}"));
            index
        }

        fn page_caption(&mut self, index: usize) -> String {
            self.events.push(format!("caption:{index}"));
            format!("Page {index}")
        }

        fn request_page_name(&mut self, initial_name: &str) -> PageNameDialogResult {
            self.events.push(format!("dialog:{initial_name}"));
            self.result.clone()
        }

        fn synchronize_page_name(&mut self, index: usize, name: String) {
            self.events.push(format!("rename:{index}:{name}"));
        }

        fn rebuild_window_caption(&mut self, index: usize) {
            self.events.push(format!("window-caption:{index}"));
        }
    }

    struct TextPlacementHost {
        result: TextEditorResult,
        events: Vec<String>,
    }

    impl AnalysisTextPlacementHost for TextPlacementHost {
        fn record_command(&mut self, name: &str) {
            self.events.push(format!("record:{name}"));
        }

        fn set_text_tool_down(&mut self, down: bool) {
            self.events.push(format!("text-down:{down}"));
        }

        fn set_selection_tool_down(&mut self, down: bool) {
            self.events.push(format!("select-down:{down}"));
        }

        fn create_text_draft(&mut self, surface: AnalysisSurfaceHandle) -> TextDraftHandle {
            self.events.push(format!("create:{}", surface.0));
            TextDraftHandle(211)
        }

        fn edit_text_draft(&mut self, draft: TextDraftHandle) -> TextEditorResult {
            self.events.push(format!("edit:{}", draft.0));
            self.result
        }

        fn discard_text_draft(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("discard:{}", draft.0));
        }

        fn prepare_text_preview(
            &mut self,
            draft: TextDraftHandle,
            surface: AnalysisSurfaceHandle,
            origin: Point,
        ) -> Size {
            self.events.push(format!(
                "prepare:{}:{}:{}:{}",
                draft.0, surface.0, origin.x, origin.y
            ));
            Size::new(80.0, 30.0)
        }

        fn show_text_preview_outline(&mut self, origin: Point, size: Size) {
            self.events.push(format!(
                "outline:{}:{}:{}:{}",
                origin.x, origin.y, size.width, size.height
            ));
        }
    }

    #[derive(Default)]
    struct MarginEditorHost(Vec<String>);

    impl AnalysisMarginEditorHost for MarginEditorHost {
        fn record_command(&mut self, command: &str) {
            self.0.push(format!("record:{command}"));
        }

        fn show_modeless_margin_editor(&mut self) {
            self.0.push("show".to_owned());
        }

        fn refresh_margin_controls(&mut self) {
            self.0.push("refresh".to_owned());
        }
    }

    struct DiagramRenderHost {
        current_canvas: DiagramCanvasHandle,
        events: Vec<String>,
    }

    impl AnalysisDiagramRenderHost for DiagramRenderHost {
        fn apply_export_viewport(&mut self, viewport: WindowBounds) {
            self.events.push(format!(
                "viewport:{}:{}:{}:{}",
                viewport.left, viewport.top, viewport.width, viewport.height
            ));
        }

        fn replace_canvas(&mut self, canvas: DiagramCanvasHandle) -> DiagramCanvasHandle {
            let previous = self.current_canvas;
            self.current_canvas = canvas;
            self.events
                .push(format!("canvas:{}->{}", previous.0, canvas.0));
            previous
        }

        fn recalculate_diagram_layout(&mut self) {
            self.events.push("layout".to_owned());
        }

        fn paint_full_diagram_on_white(&mut self) {
            self.events.push("paint-full-white".to_owned());
        }

        fn restore_live_viewport_and_repaint(&mut self) {
            self.events.push("restore-live-and-repaint".to_owned());
        }
    }

    struct TextExportHost {
        category: u8,
        panels: Vec<DiagramPanelExportCandidate>,
        dialog_results: VecDeque<Option<PathBuf>>,
        stop_text_panel: Option<DiagramPanelHandle>,
        events: Vec<String>,
    }

    impl AnalysisTextExportHost for TextExportHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn selection_category(&mut self) -> u8 {
            self.events.push(format!("category:{}", self.category));
            self.category
        }

        fn first_selected_object(&mut self) -> AnalysisObjectHandle {
            self.events.push("first-selected".to_owned());
            AnalysisObjectHandle(521)
        }

        fn open_text_export_dialog(&mut self, request: TextExportDialogRequest) -> Option<PathBuf> {
            self.events.push(format!("dialog:{request:?}"));
            self.dialog_results.pop_front().flatten()
        }

        fn write_selected_curve_text(&mut self, path: &Path, curve: AnalysisObjectHandle) {
            self.events
                .push(format!("curve:{}:{}", curve.0, path.display()));
        }

        fn panel_candidates(&mut self) -> Vec<DiagramPanelExportCandidate> {
            self.events.push("panels".to_owned());
            self.panels.clone()
        }

        fn write_panel_text(&mut self, path: &Path, panel: DiagramPanelHandle) -> bool {
            self.events
                .push(format!("text:{}:{}", panel.0, path.display()));
            self.stop_text_panel == Some(panel)
        }

        fn write_panel_csd(&mut self, path: &Path, panel: DiagramPanelHandle) {
            self.events
                .push(format!("csd:{}:{}", panel.0, path.display()));
        }
    }

    struct GridColorHost {
        selection: Option<Color>,
        events: Vec<String>,
    }

    impl AnalysisGridColorHost for GridColorHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn open_unseeded_grid_color_dialog(&mut self) -> Option<Color> {
            self.events.push("dialog-unseeded".to_owned());
            self.selection
        }

        fn clear_all_page_render_caches(&mut self) {
            self.events.push("clear-all-page-caches".to_owned());
        }

        fn set_all_coordinate_system_grid_colors(&mut self, color: Color) {
            self.events.push(format!(
                "set-grid:{:.1}:{:.1}:{:.1}:{:.1}",
                color.r, color.g, color.b, color.a
            ));
        }

        fn recalculate_active_diagram_layout(&mut self) {
            self.events.push("layout".to_owned());
        }

        fn redraw_active_page(&mut self) {
            self.events.push("redraw".to_owned());
        }
    }

    struct ClearAllHost {
        confirmation_required: bool,
        confirmation: ClearAllConfirmation,
        clear_after_save_as: bool,
        cursor_visible: bool,
        events: Vec<String>,
    }

    impl AnalysisClearAllHost for ClearAllHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn confirmation_required(&mut self) -> bool {
            self.events.push(format!(
                "confirmation-required:{}",
                self.confirmation_required
            ));
            self.confirmation_required
        }

        fn confirm_clear_all(&mut self) -> ClearAllConfirmation {
            self.events.push(format!("confirm:{:?}", self.confirmation));
            self.confirmation
        }

        fn invoke_save_as(&mut self) {
            self.events.push("save-as".to_owned());
        }

        fn clear_allowed_after_save_as(&mut self) -> bool {
            self.events
                .push(format!("clear-gate:{}", self.clear_after_save_as));
            self.clear_after_save_as
        }

        fn clear_all_pages(&mut self) {
            self.events.push("clear-all".to_owned());
        }

        fn cursor_window_visible(&mut self) -> bool {
            self.events
                .push(format!("cursor-visible:{}", self.cursor_visible));
            self.cursor_visible
        }

        fn hide_cursor_window(&mut self) {
            self.events.push("hide-cursor".to_owned());
        }

        fn repaint_window(&mut self) {
            self.events.push("repaint".to_owned());
        }

        fn refresh_command_states(&mut self) {
            self.events.push("refresh-commands".to_owned());
        }
    }

    struct CurveProcessHost {
        categories: VecDeque<u8>,
        accepted: bool,
        events: Vec<String>,
    }

    impl AnalysisTextExportHost for CurveProcessHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn selection_category(&mut self) -> u8 {
            let category = self.categories.pop_front().unwrap_or_default();
            self.events.push(format!("category:{category}"));
            category
        }

        fn first_selected_object(&mut self) -> AnalysisObjectHandle {
            self.events.push("first-selected".to_owned());
            AnalysisObjectHandle(563)
        }

        fn open_text_export_dialog(
            &mut self,
            _request: TextExportDialogRequest,
        ) -> Option<PathBuf> {
            unreachable!()
        }

        fn write_selected_curve_text(&mut self, path: &Path, curve: AnalysisObjectHandle) {
            self.events
                .push(format!("write:{}:{}", curve.0, path.display()));
        }

        fn panel_candidates(&mut self) -> Vec<DiagramPanelExportCandidate> {
            unreachable!()
        }

        fn write_panel_text(&mut self, _path: &Path, _panel: DiagramPanelHandle) -> bool {
            unreachable!()
        }

        fn write_panel_csd(&mut self, _path: &Path, _panel: DiagramPanelHandle) {
            unreachable!()
        }
    }

    impl AnalysisCurveProcessHost for CurveProcessHost {
        fn replace_decimal_separator(&mut self, separator: char) -> char {
            self.events.push(format!("separator:{separator}"));
            if separator == '.' { ',' } else { '.' }
        }

        fn show_invalid_curve_selection(&mut self) {
            self.events.push("invalid-selection".to_owned());
        }

        fn session_working_path(&mut self) -> PathBuf {
            self.events.push("working-path".to_owned());
            PathBuf::from("session")
        }

        fn configure_process_curve(
            &mut self,
            working_path: &Path,
            source_curve: AnalysisObjectHandle,
        ) {
            self.events.push(format!(
                "configure:{}:{}",
                source_curve.0,
                working_path.display()
            ));
        }

        fn remove_stale_process_outputs(&mut self) {
            self.events.push("remove-stale".to_owned());
        }

        fn open_process_curve_dialog(&mut self) -> bool {
            self.events.push(format!("dialog:{}", self.accepted));
            self.accepted
        }

        fn run_process_curve(&mut self) {
            self.events.push("run-and-publish".to_owned());
        }
    }

    struct DiagramSaveHost {
        path: PathBuf,
        events: Vec<String>,
    }

    impl AnalysisDiagramSaveHost for DiagramSaveHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn restore_default_diagram_tool(&mut self) {
            self.events.push("default-tool".to_owned());
        }

        fn document_path(&mut self, surface: AnalysisSurfaceHandle) -> PathBuf {
            self.events.push(format!("path:{}", surface.0));
            self.path.clone()
        }

        fn invoke_demo_save_as(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("demo-save-as:{}", surface.0));
        }

        fn save_existing_document(&mut self, path: &Path) {
            self.events.push(format!("save:{}", path.display()));
        }
    }

    #[derive(Default)]
    struct ComponentParameterHost(Vec<String>);

    impl AnalysisComponentParameterHost for ComponentParameterHost {
        fn record_command(&mut self, command: &str) {
            self.0.push(format!("record:{command}"));
        }

        fn open_component_parameter_viewer(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("open:{}", surface.0));
        }
    }

    #[derive(Default)]
    struct WindowShowHost(Vec<String>);

    impl AnalysisWindowShowHost for WindowShowHost {
        fn refresh_active_diagram_commands(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("refresh-commands:{}", surface.0));
        }

        fn localize_analysis_window(&mut self) {
            self.0.push("localize".to_owned());
        }

        fn apply_image_scroll_box_show_state(&mut self, state: bool) {
            self.0.push(format!("image-scroll-box:{state}"));
        }
    }

    #[derive(Default)]
    struct CopyButtonMouseHost(Vec<String>);

    impl AnalysisCopyButtonMouseHost for CopyButtonMouseHost {
        fn copy_button_macro_position(&mut self, local_position: Point) -> Point {
            self.0.push(format!(
                "translate:{}:{}",
                local_position.x, local_position.y
            ));
            Point::new(local_position.x + 30.0, local_position.y + 40.0)
        }

        fn record_copy_button_mouse_down(&mut self, position: Point) {
            self.0.push(format!("record:{}:{}", position.x, position.y));
        }

        fn current_working_directory(&mut self) -> PathBuf {
            self.0.push("working-directory".to_owned());
            PathBuf::from("work")
        }

        fn write_active_diagram_ini(&mut self, surface: AnalysisSurfaceHandle, path: &Path) {
            self.0
                .push(format!("write:{}:{}", surface.0, path.display()));
        }
    }

    struct RippleReportHost {
        draft: Option<TextDraftHandle>,
        result: TextEditorResult,
        events: Vec<String>,
    }

    impl AnalysisRippleReportHost for RippleReportHost {
        fn build_ripple_report(
            &mut self,
            surface: AnalysisSurfaceHandle,
        ) -> Option<TextDraftHandle> {
            self.events.push(format!("build:{}", surface.0));
            self.draft
        }

        fn configure_ripple_text(&mut self, draft: TextDraftHandle, font: &str, size: u16) {
            self.events
                .push(format!("configure:{}:{font}:{size}", draft.0));
        }

        fn edit_ripple_text(&mut self, draft: TextDraftHandle) -> TextEditorResult {
            self.events.push(format!("edit:{}", draft.0));
            self.result
        }

        fn apply_edited_ripple_text(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("apply:{}", draft.0));
        }

        fn update_current_text_font(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("font:{}", draft.0));
        }

        fn discard_ripple_text(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("discard:{}", draft.0));
        }

        fn prepare_ripple_preview(
            &mut self,
            draft: TextDraftHandle,
            surface: AnalysisSurfaceHandle,
            origin: Point,
        ) -> Size {
            self.events.push(format!(
                "prepare:{}:{}:{}:{}",
                draft.0, surface.0, origin.x, origin.y
            ));
            Size::new(120.0, 50.0)
        }

        fn show_ripple_preview_outline(&mut self, origin: Point, size: Size) {
            self.events.push(format!(
                "outline:{}:{}:{}:{}",
                origin.x, origin.y, size.width, size.height
            ));
        }
    }

    #[derive(Default)]
    struct VerticalScrollMouseHost(Vec<String>);

    impl AnalysisVerticalScrollMouseHost for VerticalScrollMouseHost {
        fn up_scroll_macro_position(&mut self, local_position: Point) -> Point {
            self.0.push(format!(
                "translate:{}:{}",
                local_position.x, local_position.y
            ));
            Point::new(local_position.x + 10.0, local_position.y + 20.0)
        }

        fn record_up_scroll_mouse_down(&mut self, position: Point) {
            self.0.push(format!("record:{}:{}", position.x, position.y));
        }

        fn down_scroll_macro_position(&mut self, local_position: Point) -> Point {
            self.0.push(format!(
                "translate-down:{}:{}",
                local_position.x, local_position.y
            ));
            Point::new(local_position.x + 30.0, local_position.y + 40.0)
        }

        fn record_down_scroll_mouse_down(&mut self, position: Point) {
            self.0
                .push(format!("record-down:{}:{}", position.x, position.y));
        }

        fn restore_default_diagram_tool(&mut self) {
            self.0.push("default-tool".to_owned());
        }

        fn scroll_vertical_range_up(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("range-up:{}", surface.0));
        }

        fn shift_visible_y_window_up(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("window-up:{}", surface.0));
        }

        fn reduce_visible_y_axis_count(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("reduce-axis-count:{}", surface.0));
        }

        fn scroll_vertical_range_down(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("range-down:{}", surface.0));
        }

        fn shift_visible_y_window_down(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("window-down:{}", surface.0));
        }

        fn increase_visible_y_axis_count(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("increase-axis-count:{}", surface.0));
        }

        fn refresh_analysis_scrollbars(&mut self) {
            self.0.push("refresh-scrollbars".to_owned());
        }
    }

    struct AveragesReportHost {
        draft: Option<TextDraftHandle>,
        result: TextEditorResult,
        events: Vec<String>,
    }

    impl AnalysisAveragesReportHost for AveragesReportHost {
        fn build_averages_report(
            &mut self,
            surface: AnalysisSurfaceHandle,
        ) -> Option<TextDraftHandle> {
            self.events.push(format!("build:{}", surface.0));
            self.draft
        }

        fn copy_current_font_to_averages_text(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("copy-font:{}", draft.0));
        }

        fn edit_averages_text(&mut self, draft: TextDraftHandle) -> TextEditorResult {
            self.events.push(format!("edit:{}", draft.0));
            self.result
        }

        fn apply_edited_averages_text(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("apply:{}", draft.0));
        }

        fn update_current_text_font(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("update-font:{}", draft.0));
        }

        fn discard_averages_text(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("discard:{}", draft.0));
        }

        fn prepare_averages_preview(
            &mut self,
            draft: TextDraftHandle,
            surface: AnalysisSurfaceHandle,
            origin: Point,
        ) -> Size {
            self.events.push(format!(
                "prepare:{}:{}:{}:{}",
                draft.0, surface.0, origin.x, origin.y
            ));
            Size::new(130.0, 60.0)
        }

        fn show_averages_preview_outline(&mut self, origin: Point, size: Size) {
            self.events.push(format!(
                "outline:{}:{}:{}:{}",
                origin.x, origin.y, size.width, size.height
            ));
        }
    }

    struct CrossoverFrequencyHost {
        draft: Option<TextDraftHandle>,
        result: TextEditorResult,
        events: Vec<String>,
    }

    impl AnalysisCrossoverFrequencyHost for CrossoverFrequencyHost {
        fn stage_crossover_frequency_annotation(
            &mut self,
            surface: AnalysisSurfaceHandle,
        ) -> Option<TextDraftHandle> {
            self.events.push(format!("stage:{}", surface.0));
            self.draft
        }

        fn edit_crossover_frequency_text(&mut self, draft: TextDraftHandle) -> TextEditorResult {
            self.events.push(format!("edit:{}", draft.0));
            self.result
        }

        fn commit_crossover_frequency_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("commit:{}", draft.0));
        }

        fn discard_crossover_frequency_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("discard:{}", draft.0));
        }
    }

    struct GainMarginHost {
        phase_reference: GainMarginPhaseReference,
        draft: Option<TextDraftHandle>,
        result: TextEditorResult,
        events: Vec<String>,
    }

    impl AnalysisGainMarginHost for GainMarginHost {
        fn gain_margin_phase_reference(&mut self) -> GainMarginPhaseReference {
            self.events.push("phase-reference".to_owned());
            self.phase_reference
        }

        fn stage_gain_margin_annotation(
            &mut self,
            surface: AnalysisSurfaceHandle,
            phase_reference: GainMarginPhaseReference,
        ) -> Option<TextDraftHandle> {
            self.events
                .push(format!("stage:{}:{phase_reference:?}", surface.0));
            self.draft
        }

        fn edit_gain_margin_text(&mut self, draft: TextDraftHandle) -> TextEditorResult {
            self.events.push(format!("edit:{}", draft.0));
            self.result
        }

        fn commit_gain_margin_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("commit:{}", draft.0));
        }

        fn discard_gain_margin_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("discard:{}", draft.0));
        }
    }

    struct PhaseMarginHost {
        phase_reference: GainMarginPhaseReference,
        draft: Option<TextDraftHandle>,
        result: TextEditorResult,
        events: Vec<String>,
    }

    impl AnalysisPhaseMarginHost for PhaseMarginHost {
        fn phase_margin_reference(&mut self) -> GainMarginPhaseReference {
            self.events.push("phase-reference".to_owned());
            self.phase_reference
        }

        fn stage_phase_margin_annotation(
            &mut self,
            surface: AnalysisSurfaceHandle,
            phase_reference: GainMarginPhaseReference,
        ) -> Option<TextDraftHandle> {
            self.events
                .push(format!("stage:{}:{phase_reference:?}", surface.0));
            self.draft
        }

        fn edit_phase_margin_text(&mut self, draft: TextDraftHandle) -> TextEditorResult {
            self.events.push(format!("edit:{}", draft.0));
            self.result
        }

        fn commit_phase_margin_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("commit:{}", draft.0));
        }

        fn discard_phase_margin_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("discard:{}", draft.0));
        }
    }

    struct PictureExportDialogHost {
        file_name: PathBuf,
        filter_index: u32,
        events: Vec<String>,
    }

    impl AnalysisPictureExportDialogHost for PictureExportDialogHost {
        fn selected_file_name(&mut self) -> PathBuf {
            self.events.push("file-name".to_owned());
            self.file_name.clone()
        }

        fn selected_filter_index(&mut self) -> u32 {
            self.events.push("filter-index".to_owned());
            self.filter_index
        }

        fn set_selected_file_name(&mut self, path: &Path) {
            self.events.push(format!("set:{}", path.display()));
            self.file_name = path.to_path_buf();
        }

        fn refresh_native_file_name(&mut self, path: &Path) {
            self.events.push(format!("refresh:{}", path.display()));
        }
    }

    struct PictureExportHost {
        selection: Option<PictureExportSelection>,
        requests: Vec<PictureExportDialogRequest>,
        events: Vec<String>,
    }

    impl AnalysisDiagramRenderHost for PictureExportHost {
        fn apply_export_viewport(&mut self, viewport: WindowBounds) {
            self.events.push(format!(
                "viewport:{}:{}:{}:{}",
                viewport.left, viewport.top, viewport.width, viewport.height
            ));
        }

        fn replace_canvas(&mut self, canvas: DiagramCanvasHandle) -> DiagramCanvasHandle {
            self.events.push(format!("canvas:{}", canvas.0));
            DiagramCanvasHandle(997)
        }

        fn recalculate_diagram_layout(&mut self) {
            self.events.push("layout".to_owned());
        }

        fn paint_full_diagram_on_white(&mut self) {
            self.events.push("paint-white".to_owned());
        }

        fn restore_live_viewport_and_repaint(&mut self) {
            self.events.push("restore".to_owned());
        }
    }

    impl AnalysisPictureExportHost for PictureExportHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn open_picture_export_dialog(
            &mut self,
            request: PictureExportDialogRequest,
        ) -> Option<PictureExportSelection> {
            self.events.push("dialog".to_owned());
            self.requests.push(request);
            self.selection.clone()
        }

        fn active_diagram_bounds(&mut self, surface: AnalysisSurfaceHandle) -> WindowBounds {
            self.events.push(format!("bounds:{}", surface.0));
            WindowBounds {
                left: 20,
                top: 30,
                width: 800,
                height: 600,
            }
        }

        fn create_picture_export_canvas(
            &mut self,
            format: PictureExportFormat,
            width: i32,
            height: i32,
        ) -> DiagramCanvasHandle {
            self.events
                .push(format!("create:{format:?}:{width}:{height}"));
            DiagramCanvasHandle(991)
        }

        fn save_picture_export(
            &mut self,
            format: PictureExportFormat,
            canvas: DiagramCanvasHandle,
            path: &Path,
        ) {
            self.events
                .push(format!("save:{format:?}:{}:{}", canvas.0, path.display()));
        }
    }

    #[derive(Default)]
    struct DefaultCurveWidthHost(Vec<String>);

    impl AnalysisDefaultCurveWidthHost for DefaultCurveWidthHost {
        fn persist_default_curve_width(&mut self, width: u8) {
            self.0.push(format!("persist:{width}"));
        }

        fn set_curve_width_menu_checked(&mut self, width: u8, checked: bool) {
            self.0.push(format!("check:{width}:{checked}"));
        }
    }

    struct AxisVisibilityHost {
        checked: bool,
        events: Vec<String>,
    }

    impl AnalysisAxisVisibilityHost for AxisVisibilityHost {
        fn axes_menu_checked(&mut self) -> bool {
            self.events.push("checked".to_owned());
            self.checked
        }

        fn set_axes_menu_checked(&mut self, checked: bool) {
            self.events.push(format!("set:{checked}"));
            self.checked = checked;
        }

        fn apply_axes_visibility(&mut self, surface: AnalysisSurfaceHandle, visible: bool) {
            self.events.push(format!("apply:{}:{visible}", surface.0));
        }
    }

    #[derive(Default)]
    struct VectorStyleHost(Vec<String>);

    impl AnalysisVectorStyleHost for VectorStyleHost {
        fn set_vector_style_menu_checked(&mut self, style: VectorStyle, checked: bool) {
            self.0.push(format!("check:{style:?}:{checked}"));
        }

        fn persist_vector_style(&mut self, value: u8) {
            self.0.push(format!("persist:{value}"));
        }
    }

    struct AddCurveDialogHost {
        related_context: bool,
        pending_state: bool,
        events: Vec<String>,
    }

    impl AnalysisAddCurveDialogHost for AddCurveDialogHost {
        fn collect_curve_source_catalog(&mut self) -> CurveSourceCatalogHandle {
            self.events.push("collect".to_owned());
            CurveSourceCatalogHandle(839)
        }

        fn stage_active_result_context(&mut self) {
            self.events.push("stage-context".to_owned());
        }

        fn replace_add_curve_catalog(&mut self, catalog: CurveSourceCatalogHandle) {
            self.events.push(format!("catalog:{}", catalog.0));
        }

        fn related_editor_context_available(&mut self) -> bool {
            self.events.push("related-context".to_owned());
            self.related_context
        }

        fn replace_related_editor_controller(&mut self, ui_sender: bool) {
            self.events.push(format!("editor:{ui_sender}"));
        }

        fn internal_dialog_state_pending(&mut self) -> bool {
            self.events.push("pending".to_owned());
            self.pending_state
        }

        fn reset_internal_dialog_state(&mut self) {
            self.events.push("reset".to_owned());
        }

        fn rebuild_available_curves(&mut self) {
            self.events.push("rebuild".to_owned());
        }

        fn show_add_curve_dialog_modelessly(&mut self) {
            self.events.push("show-modeless".to_owned());
        }

        fn cleanup_add_curve_dialog(&mut self) {
            self.events.push("cleanup".to_owned());
        }
    }

    struct ScreenResolutionHost {
        checked: bool,
        events: Vec<String>,
    }

    impl AnalysisScreenResolutionHost for ScreenResolutionHost {
        fn screen_resolution_menu_checked(&mut self) -> bool {
            self.events.push("checked".to_owned());
            self.checked
        }

        fn set_screen_resolution_menu_checked(&mut self, checked: bool) {
            self.events.push(format!("set:{checked}"));
            self.checked = checked;
        }

        fn clear_cached_output_size(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("clear-size:{}", surface.0));
        }

        fn invoke_analysis_resize(&mut self) {
            self.events.push("resize".to_owned());
        }
    }

    #[derive(Clone, Copy)]
    enum CurveRenderMode {
        Blocked,
        PixelColumns,
        StoredSamples,
    }

    struct CurveRenderHost {
        mode: CurveRenderMode,
        bounds: (f64, f64),
        samples: Vec<CurveRenderSample>,
        evaluated: Vec<f64>,
        emitted: Vec<CurveRenderPixel>,
    }

    impl AnalysisCurveRenderHost for CurveRenderHost {
        fn draw_allowed(&mut self) -> bool {
            !matches!(self.mode, CurveRenderMode::Blocked)
        }

        fn render_owner_is_current_window(&mut self) -> bool {
            matches!(self.mode, CurveRenderMode::PixelColumns)
        }

        fn screen_resolution_enabled(&mut self) -> bool {
            true
        }

        fn curve_requires_stored_samples(&mut self) -> bool {
            false
        }

        fn visible_x_bounds(&mut self) -> (f64, f64) {
            self.bounds
        }

        fn map_x_to_pixel(&mut self, value: f64) -> i32 {
            if value < 0.5 {
                0
            } else if value < 1.5 {
                1
            } else if value < 2.5 {
                2
            } else {
                3
            }
        }

        fn map_pixel_to_x(&mut self, pixel: i32) -> f64 {
            f64::from(pixel)
        }

        fn map_y_to_pixel(&mut self, value: f64) -> i32 {
            if value < 10.5 {
                10
            } else if value < 11.5 {
                11
            } else {
                12
            }
        }

        fn evaluate_curve(&mut self, x: f64) -> f64 {
            self.evaluated.push(x);
            x + 10.0
        }

        fn stored_curve_samples(&mut self) -> Vec<CurveRenderSample> {
            self.samples.clone()
        }

        fn emit_curve_pixel(&mut self, pixel: CurveRenderPixel) {
            self.emitted.push(pixel);
        }
    }

    #[derive(Default)]
    struct CurveStatisticsHost {
        events: Vec<String>,
    }

    impl AnalysisCurveStatisticsHost for CurveStatisticsHost {
        fn curve_x_axis_range(&mut self, curve: AnalysisObjectHandle) -> (f64, f64) {
            self.events.push(format!("range:{}", curve.0));
            (2.5, 8.5)
        }

        fn calculate_curve_statistics(
            &mut self,
            curve: AnalysisObjectHandle,
            lower: f64,
            upper: f64,
        ) -> CurveStatistics {
            self.events
                .push(format!("calculate:{}:{lower}:{upper}", curve.0));
            CurveStatistics {
                average: 3.0,
                absolute_average: 4.0,
                rms: 5.0,
                covered_start: 3.0,
                covered_end: 8.0,
            }
        }
    }

    #[derive(Default)]
    struct CurveRippleHost {
        events: Vec<String>,
    }

    impl AnalysisCurveRippleHost for CurveRippleHost {
        fn curve_x_axis_range(&mut self, curve: AnalysisObjectHandle) -> (f64, f64) {
            self.events.push(format!("range:{}", curve.0));
            (4.5, 9.5)
        }

        fn calculate_curve_ripple(
            &mut self,
            curve: AnalysisObjectHandle,
            lower: f64,
            upper: f64,
        ) -> CurveRipple {
            self.events
                .push(format!("calculate:{}:{lower}:{upper}", curve.0));
            CurveRipple {
                absolute: 0.25,
                relative: 0.05,
            }
        }
    }

    struct QuickDrawHost {
        checked: bool,
        events: Vec<String>,
    }

    impl AnalysisQuickDrawHost for QuickDrawHost {
        fn quick_draw_menu_checked(&mut self) -> bool {
            self.events.push("checked".to_owned());
            self.checked
        }

        fn set_quick_draw_menu_checked(&mut self, checked: bool) {
            self.events.push(format!("set:{checked}"));
            self.checked = checked;
        }

        fn persist_quick_draw(&mut self, enabled: bool) {
            self.events.push(format!("persist:{enabled}"));
        }
    }

    struct CurveAudioHost {
        input: Option<CurveAudioPlaybackInput>,
        wave: Vec<u8>,
        events: Vec<String>,
    }

    impl AnalysisCurveAudioHost for CurveAudioHost {
        fn prepare_curve_audio(&mut self) -> Option<CurveAudioPlaybackInput> {
            self.events.push("prepare".to_owned());
            self.input.take()
        }

        fn write_temporary_wave(
            &mut self,
            accumulator: &mut PcmAccumulator,
        ) -> std::io::Result<PathBuf> {
            self.events.push("write".to_owned());
            accumulator.finish_to_writer(&mut self.wave)?;
            Ok(PathBuf::from("temp.wav"))
        }

        fn start_curve_audio(&mut self, path: &Path, start_seconds: f64, stop_seconds: f64) {
            self.events.push(format!(
                "start:{}:{start_seconds}:{stop_seconds}",
                path.display()
            ));
        }

        fn stop_curve_audio(&mut self) {
            self.events.push("stop".to_owned());
        }
    }

    struct CurveAudioExportHost {
        path: Option<PathBuf>,
        input: Option<CurveAudioPlaybackInput>,
        requests: Vec<CurveAudioExportDialogRequest>,
        wave: Vec<u8>,
        events: Vec<String>,
    }

    impl AnalysisCurveAudioExportHost for CurveAudioExportHost {
        fn open_curve_audio_export_dialog(
            &mut self,
            request: CurveAudioExportDialogRequest,
        ) -> Option<PathBuf> {
            self.events.push("dialog".to_owned());
            self.requests.push(request);
            self.path.clone()
        }

        fn prepare_curve_audio_export(&mut self) -> CurveAudioPlaybackInput {
            self.events.push("prepare".to_owned());
            self.input.take().expect("test input must exist")
        }

        fn show_empty_curve_audio_error(&mut self, source_kind: CurveAudioSourceKind) {
            self.events.push(format!("empty:{source_kind:?}"));
        }

        fn write_curve_audio_export(
            &mut self,
            path: &Path,
            accumulator: &mut PcmAccumulator,
        ) -> std::io::Result<()> {
            self.events.push(format!("write:{}", path.display()));
            accumulator.finish_to_writer(&mut self.wave)
        }
    }

    struct TabDrawHost {
        text_size: TabTextSize,
        events: Vec<String>,
    }

    impl AnalysisTabDrawHost for TabDrawHost {
        fn set_tab_background(&mut self, appearance: AnalysisTabAppearance) {
            self.events.push(format!("background:{appearance:?}"));
        }

        fn fill_tab_bounds(&mut self, bounds: WindowBounds) {
            self.events.push(format!(
                "fill:{}:{}:{}:{}",
                bounds.left, bounds.top, bounds.width, bounds.height
            ));
        }

        fn set_tab_text_background_transparent(&mut self) {
            self.events.push("transparent".to_owned());
        }

        fn tab_caption(&mut self, index: usize) -> String {
            self.events.push(format!("caption:{index}"));
            "Transient".to_owned()
        }

        fn measure_tab_text(&mut self, caption: &str) -> TabTextSize {
            self.events.push(format!("measure:{caption}"));
            self.text_size
        }

        fn draw_tab_text(&mut self, caption: &str, origin: WindowPosition) {
            self.events
                .push(format!("draw:{caption}:{}:{}", origin.left, origin.top));
        }
    }

    struct ResultAnnotationHost {
        selected_point: Option<SelectedCurvePoint>,
        edit_result: TextEditorResult,
        events: Vec<String>,
    }

    impl AnalysisResultAnnotationHost for ResultAnnotationHost {
        fn stage_result_annotation(&mut self, lines: &[String]) -> TextDraftHandle {
            self.events.push(format!("stage:{}", lines.join("|")));
            TextDraftHandle(911)
        }

        fn edit_result_annotation(&mut self, draft: TextDraftHandle) -> TextEditorResult {
            self.events.push(format!("edit:{}", draft.0));
            self.edit_result
        }

        fn apply_edited_result_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("apply:{}", draft.0));
        }

        fn bind_result_annotation(
            &mut self,
            draft: TextDraftHandle,
            curve: AnalysisObjectHandle,
            anchor: Point,
        ) {
            self.events.push(format!(
                "bind:{}:{}:{}:{}",
                draft.0, curve.0, anchor.x, anchor.y
            ));
        }

        fn register_result_annotation(
            &mut self,
            surface: AnalysisSurfaceHandle,
            draft: TextDraftHandle,
        ) {
            self.events
                .push(format!("register:{}:{}", surface.0, draft.0));
        }

        fn finalize_result_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("finalize:{}", draft.0));
        }

        fn prepare_result_annotation_preview(
            &mut self,
            draft: TextDraftHandle,
            surface: AnalysisSurfaceHandle,
            origin: Point,
        ) -> Size {
            self.events.push(format!(
                "preview:{}:{}:{}:{}",
                draft.0, surface.0, origin.x, origin.y
            ));
            Size::new(40.0, 20.0)
        }

        fn repaint_result_annotation_preview(&mut self, origin: Point, size: Size) {
            self.events.push(format!(
                "repaint:{}:{}:{}:{}",
                origin.x, origin.y, size.width, size.height
            ));
        }

        fn discard_result_annotation(&mut self, draft: TextDraftHandle) {
            self.events.push(format!("discard:{}", draft.0));
        }
    }

    impl AnalysisCurvePointAnnotationHost for ResultAnnotationHost {
        fn first_selected_curve_point(
            &mut self,
            surface: AnalysisSurfaceHandle,
        ) -> Option<SelectedCurvePoint> {
            self.events.push(format!("selected-point:{}", surface.0));
            self.selected_point
        }
    }

    struct SelectedCurveCursorHost {
        selected: Option<SelectedCurveCursor>,
        samples: Vec<Point>,
        directional_samples: [Vec<Point>; 2],
        events: Vec<String>,
    }

    impl AnalysisSelectedCurveCursorHost for SelectedCurveCursorHost {
        fn first_selected_curve_cursor(
            &mut self,
            surface: AnalysisSurfaceHandle,
        ) -> Option<SelectedCurveCursor> {
            self.events.push(format!("selected-cursor:{}", surface.0));
            self.selected
        }

        fn curve_samples(&mut self, curve: AnalysisObjectHandle) -> Vec<Point> {
            self.events.push(format!("samples:{}", curve.0));
            self.samples.clone()
        }

        fn curve_samples_from(
            &mut self,
            curve: AnalysisObjectHandle,
            position: Point,
            direction: CurveSampleDirection,
        ) -> Vec<Point> {
            self.events.push(format!(
                "samples-from:{}:{}:{}:{direction:?}",
                curve.0, position.x, position.y
            ));
            self.directional_samples[match direction {
                CurveSampleDirection::Zero => 0,
                CurveSampleDirection::One => 1,
            }]
            .clone()
        }

        fn set_curve_cursor_x_position(
            &mut self,
            surface: AnalysisSurfaceHandle,
            cursor: CursorKind,
            position: f64,
        ) {
            self.events
                .push(format!("set-cursor:{}:{cursor:?}:{position}", surface.0));
        }
    }

    #[derive(Default)]
    struct CurveListHost(Vec<&'static str>);

    impl AnalysisCurveListHost for CurveListHost {
        fn open_curve_list(&mut self) {
            self.0.push("open-curve-list");
        }
    }

    struct FrequencySlopeHost {
        checked: bool,
        events: Vec<String>,
    }

    impl AnalysisFrequencySlopeHost for FrequencySlopeHost {
        fn frequency_slope_checked(&mut self) -> bool {
            self.events.push("checked".to_owned());
            self.checked
        }

        fn set_frequency_slope_checked(&mut self, checked: bool) {
            self.events.push(format!("set:{checked}"));
            self.checked = checked;
        }

        fn refresh_cursor_frequency_slope(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("refresh:{}", surface.0));
        }
    }

    struct SmithMatrixFormatHost {
        format_index: i32,
        states: Vec<SmithMatrixLabelVisibility>,
    }

    impl AnalysisSmithMatrixFormatHost for SmithMatrixFormatHost {
        fn smith_format_index(&mut self) -> i32 {
            self.format_index
        }

        fn apply_smith_matrix_label_visibility(&mut self, visibility: SmithMatrixLabelVisibility) {
            self.states.push(visibility);
        }
    }

    struct MeasurementResultHost {
        context: Option<MeasurementResultContext>,
        existing: Vec<PathBuf>,
        events: Vec<String>,
    }

    impl AnalysisMeasurementResultHost for MeasurementResultHost {
        fn measurement_result_context(&mut self) -> Option<MeasurementResultContext> {
            self.events.push("context".to_owned());
            self.context.clone()
        }

        fn measurement_result_exists(&mut self, path: &Path) -> bool {
            self.events.push(format!("exists:{}", path.display()));
            self.existing.iter().any(|existing| existing == path)
        }

        fn load_measurement_result(&mut self, path: &Path) {
            self.events.push(format!("load:{}", path.display()));
        }

        fn show_measurement_result_notice(&mut self, notice: MeasurementResultNotice) {
            self.events.push(format!("notice:{notice:?}"));
        }
    }

    #[derive(Default)]
    struct ToolNotebookHost(Vec<i32>);

    impl AnalysisToolNotebookHost for ToolNotebookHost {
        fn set_active_tool_page_width(&mut self, width: i32) {
            self.0.push(width);
        }
    }

    struct CurveImportHost {
        path: Option<PathBuf>,
        options: Option<CurveImportOptions>,
        apply_success: bool,
        cancelled: bool,
        requests: Vec<CurveImportFileDialogRequest>,
        persisted: Vec<AutoImportSettings>,
        events: Vec<String>,
    }

    impl CurveImportObserver for CurveImportHost {
        fn is_cancelled(&self) -> bool {
            self.cancelled
        }

        fn report_progress(&mut self, percentage: u8) {
            self.events.push(format!("progress:{percentage}"));
        }
    }

    impl AnalysisCurveImportHost for CurveImportHost {
        fn open_curve_import_file_dialog(
            &mut self,
            request: CurveImportFileDialogRequest,
        ) -> Option<PathBuf> {
            self.events.push("file-dialog".to_owned());
            self.requests.push(request);
            self.path.clone()
        }

        fn open_curve_import_options(&mut self, path: &Path) -> Option<CurveImportOptions> {
            self.events.push(format!("options:{}", path.display()));
            self.options.clone()
        }

        fn set_curve_import_busy(&mut self, busy: bool) {
            self.events.push(format!("busy:{busy}"));
        }

        fn apply_curve_import(&mut self, imported: CurveImport) -> bool {
            self.events.push(format!("apply:{}", imported.format_code));
            self.apply_success
        }

        fn persist_auto_import(&mut self, settings: AutoImportSettings) {
            self.events.push("persist".to_owned());
            self.persisted.push(settings);
        }
    }

    struct CurveAudioCleanupHost {
        curves: Vec<AnalysisObjectHandle>,
        position_milliseconds: i32,
        next_position_milliseconds: i32,
        events: Vec<String>,
    }

    impl AnalysisCurveAudioCleanupHost for CurveAudioCleanupHost {
        fn set_curve_audio_pressed(&mut self, pressed: bool) {
            self.events.push(format!("pressed:{pressed}"));
        }

        fn remove_curve_audio_position_timer(&mut self) {
            self.events.push("remove-timer".to_owned());
        }

        fn curve_audio_curves(&mut self) -> Vec<AnalysisObjectHandle> {
            self.events.push("curves".to_owned());
            self.curves.clone()
        }

        fn curve_audio_position_milliseconds(&mut self) -> i32 {
            self.events.push("position".to_owned());
            self.position_milliseconds
        }

        fn query_curve_audio_position_milliseconds(&mut self) -> i32 {
            self.events.push("query".to_owned());
            self.next_position_milliseconds
        }

        fn set_curve_audio_position_milliseconds(&mut self, position: i32) {
            self.events.push(format!("set-position:{position}"));
            self.position_milliseconds = position;
        }

        fn erase_curve_audio_indicator(
            &mut self,
            curve: AnalysisObjectHandle,
            position_seconds: f64,
        ) {
            self.events
                .push(format!("erase:{}:{position_seconds}", curve.0));
        }

        fn draw_curve_audio_indicator(
            &mut self,
            curve: AnalysisObjectHandle,
            position_seconds: f64,
        ) {
            self.events
                .push(format!("draw:{}:{position_seconds}", curve.0));
        }

        fn close_curve_audio(&mut self) {
            self.events.push("close".to_owned());
        }
    }

    struct CursorPositionEditHost {
        values: VecDeque<Result<f64, &'static str>>,
        converted_x: Option<f64>,
        events: Vec<String>,
    }

    impl AnalysisCursorPositionEditHost for CursorPositionEditHost {
        type Error = &'static str;

        fn cursor_position_value(
            &mut self,
            cursor: CursorKind,
            coordinate: CursorCoordinate,
        ) -> Result<f64, Self::Error> {
            self.events.push(format!("read:{cursor:?}:{coordinate:?}"));
            self.values.pop_front().expect("test value must exist")
        }

        fn cursor_x_for_y(&mut self, cursor: CursorKind, x: f64, y: f64) -> Option<f64> {
            self.events.push(format!("convert:{cursor:?}:{x}:{y}"));
            self.converted_x
        }

        fn set_cursor_x_position(&mut self, cursor: CursorKind, position: f64) {
            self.events.push(format!("set:{cursor:?}:{position}"));
        }
    }

    struct PrintHost {
        selection: Option<DiagramPrintRange>,
        preview_mode: Option<u8>,
        aborted: bool,
        requests: Vec<DiagramPrintDialogRequest>,
        events: Vec<String>,
    }

    impl AnalysisPrintHost for PrintHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn open_print_dialog(
            &mut self,
            request: DiagramPrintDialogRequest,
        ) -> Option<DiagramPrintRange> {
            self.requests.push(request);
            self.events.push("dialog".to_owned());
            self.selection
        }

        fn open_printer_setup(&mut self, help_context: u32) {
            self.events.push(format!("printer-setup:{help_context}"));
        }

        fn set_print_preview_checked(&mut self, checked: bool) {
            self.events.push(format!("preview-checked:{checked}"));
        }

        fn apply_embedded_print_preview(
            &mut self,
            enabled: bool,
            notebook_page: usize,
            page_mode: u8,
        ) {
            self.events.push(format!(
                "apply-preview:{enabled}:{notebook_page}:{page_mode}"
            ));
        }

        fn suspend_print_preview(&mut self, surface: AnalysisSurfaceHandle) -> Option<u8> {
            self.events.push(format!("suspend-preview:{}", surface.0));
            self.preview_mode
        }

        fn begin_print_job(&mut self, title: &str) {
            self.events.push(format!("begin:{title}"));
        }

        fn show_print_abort_dialog(&mut self) {
            self.events.push("show-abort".to_owned());
        }

        fn print_pages(&mut self, first: u32, last: u32) {
            self.events.push(format!("pages:{first}-{last}"));
        }

        fn print_job_aborted(&self) -> bool {
            self.aborted
        }

        fn end_print_job(&mut self) {
            self.events.push("end".to_owned());
        }

        fn close_print_abort_dialog(&mut self) {
            self.events.push("close-abort".to_owned());
        }

        fn restore_print_preview(&mut self, surface: AnalysisSurfaceHandle, page_mode: u8) {
            self.events
                .push(format!("restore-preview:{}:{page_mode}", surface.0));
        }

        fn clear_page_layout_caches(&mut self) {
            self.events.push("clear-caches".to_owned());
        }

        fn refresh_analysis_layout(&mut self) {
            self.events.push("refresh-layout".to_owned());
        }
    }

    struct LegendHost {
        kind: AutoLegendKind,
        events: Vec<String>,
    }

    impl AnalysisLegendHost for LegendHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn set_selection_tool_down(&mut self, down: bool) {
            self.events.push(format!("select-down:{down}"));
        }

        fn classify_auto_legend(&mut self, surface: AnalysisSurfaceHandle) -> AutoLegendKind {
            self.events.push(format!("classify:{}", surface.0));
            self.kind
        }

        fn update_vector_labels(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("vector-labels:{}", surface.0));
        }

        fn generate_curve_legend(
            &mut self,
            surface: AnalysisSurfaceHandle,
            maximum_entries_per_curve: usize,
        ) -> TextDraftHandle {
            self.events.push(format!(
                "curve-legend:{}:{maximum_entries_per_curve}",
                surface.0
            ));
            TextDraftHandle(353)
        }

        fn prepare_legend_preview(
            &mut self,
            draft: TextDraftHandle,
            surface: AnalysisSurfaceHandle,
            origin: Point,
        ) -> Size {
            self.events.push(format!(
                "prepare-legend:{}:{}:{}:{}",
                draft.0, surface.0, origin.x, origin.y
            ));
            Size::new(90.0, 40.0)
        }

        fn show_legend_preview_outline(&mut self, origin: Point, size: Size) {
            self.events.push(format!(
                "legend-outline:{}:{}:{}:{}",
                origin.x, origin.y, size.width, size.height
            ));
        }
    }

    struct ClipboardHost {
        format: CopySelectionFormat,
        events: Vec<String>,
    }

    impl AnalysisClipboardHost for ClipboardHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn copy_selection_format(&mut self, surface: AnalysisSurfaceHandle) -> CopySelectionFormat {
            self.events.push(format!("classify:{}", surface.0));
            self.format
        }

        fn copy_editable_diagram_data(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("editable:{}", surface.0));
        }

        fn copy_rendered_metafile(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("metafile:{}", surface.0));
        }

        fn set_selection_tool_down(&mut self, down: bool) {
            self.events.push(format!("select-down:{down}"));
        }

        fn select_tool(&mut self) {
            self.events.push("select".to_owned());
        }
    }

    impl AnalysisCutHost for ClipboardHost {
        fn run_inherited_modal_form(&mut self) {
            self.events.push("modal-form".to_owned());
        }
    }

    struct PasteHost {
        format: Option<PasteClipboardFormat>,
        available: bool,
        events: Vec<String>,
    }

    impl AnalysisPasteHost for PasteHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn preferred_paste_format(&mut self) -> Option<PasteClipboardFormat> {
            self.events.push("format".to_owned());
            self.format
        }

        fn paste_editable_diagram_data(&mut self, surface: AnalysisSurfaceHandle) -> bool {
            self.events.push(format!("editable:{}", surface.0));
            self.available
        }

        fn refresh_after_editable_paste(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("refresh:{}", surface.0));
        }

        fn stage_paste_object(
            &mut self,
            surface: AnalysisSurfaceHandle,
            format: PasteClipboardFormat,
        ) -> Option<PasteObjectHandle> {
            self.events.push(format!("stage:{}:{format:?}", surface.0));
            self.available.then_some(PasteObjectHandle(479))
        }

        fn set_selection_tool_down(&mut self, down: bool) {
            self.events.push(format!("select-down:{down}"));
        }

        fn select_tool(&mut self) {
            self.events.push("select".to_owned());
        }
    }

    #[derive(Default)]
    struct HelpHost(Vec<String>);

    impl AnalysisHelpHost for HelpHost {
        fn record_command(&mut self, command: &str) {
            self.0.push(format!("record:{command}"));
        }

        fn resolve_localized_help_file(&mut self, base_path: &Path) -> PathBuf {
            self.0.push(format!("resolve:{}", base_path.display()));
            PathBuf::from("install/de/TINA.CHM")
        }

        fn open_help_context(&mut self, help_file: &Path, context: u32) {
            self.0
                .push(format!("open:{}:{context}", help_file.display()));
        }
    }

    struct DiagramOpenHost {
        selection: Option<Vec<PathBuf>>,
        requests: Vec<DiagramOpenDialogRequest>,
        events: Vec<String>,
    }

    impl AnalysisDiagramOpenHost for DiagramOpenHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn open_diagram_dialog(
            &mut self,
            request: DiagramOpenDialogRequest,
        ) -> Option<Vec<PathBuf>> {
            self.requests.push(request);
            self.events.push("dialog".to_owned());
            self.selection.clone()
        }

        fn load_diagram_archive(&mut self, path: &Path) {
            self.events.push(format!("load:{}", path.display()));
        }
    }

    struct ResultExportHost {
        accepted: bool,
        requests: Vec<AutoTestResultDialogRequest>,
        events: Vec<String>,
    }

    impl AnalysisResultExportHost for ResultExportHost {
        fn open_auto_test_result_save_dialog(
            &mut self,
            request: AutoTestResultDialogRequest,
        ) -> bool {
            self.requests.push(request);
            self.events.push("dialog".to_owned());
            self.accepted
        }

        fn first_curve_analysis_result(
            &mut self,
            surface: AnalysisSurfaceHandle,
        ) -> AnalysisResultHandle {
            self.events.push(format!("first-result:{}", surface.0));
            AnalysisResultHandle(373)
        }

        fn selected_save_path(&mut self) -> PathBuf {
            self.events.push("path".to_owned());
            PathBuf::from("result.tr")
        }

        fn serialize_analysis_result(
            &mut self,
            path: &Path,
            result: AnalysisResultHandle,
            contexts: [u64; 3],
        ) {
            self.events.push(format!(
                "serialize:{}:{}:{contexts:?}",
                path.display(),
                result.0
            ));
        }
    }

    struct PropertiesHost {
        target: PropertiesTarget,
        events: Vec<String>,
    }

    impl AnalysisPropertiesHost for PropertiesHost {
        fn record_command(&mut self, command: &str) {
            self.events.push(format!("record:{command}"));
        }

        fn selected_properties_target(
            &mut self,
            surface: AnalysisSurfaceHandle,
        ) -> PropertiesTarget {
            self.events.push(format!("classify:{}", surface.0));
            self.target
        }

        fn open_axis_properties(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("axis:{}", surface.0));
        }

        fn open_curve_properties(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("curve:{}", surface.0));
        }

        fn open_figure_properties(
            &mut self,
            surface: AnalysisSurfaceHandle,
            target: PropertiesTarget,
        ) {
            self.events.push(format!("figure:{}:{target:?}", surface.0));
        }
    }

    struct CommandStateHost {
        input: AnalysisCommandStateInput,
        states: Option<AnalysisCommandStates>,
    }

    impl AnalysisCommandStateHost for CommandStateHost {
        fn command_state_input(&mut self) -> AnalysisCommandStateInput {
            self.input
        }

        fn apply_command_states(&mut self, states: AnalysisCommandStates) {
            self.states = Some(states);
        }
    }

    struct CursorSynchronizationHost {
        input: CursorCurveAlignmentInput,
        alignment: Option<CursorCurveAlignment>,
        events: Vec<String>,
    }

    impl AnalysisCursorSynchronizationHost for CursorSynchronizationHost {
        fn alignment_input(&mut self, surface: AnalysisSurfaceHandle) -> CursorCurveAlignmentInput {
            self.events.push(format!("input:{}", surface.0));
            self.input
        }

        fn apply_alignment(
            &mut self,
            surface: AnalysisSurfaceHandle,
            alignment: CursorCurveAlignment,
        ) {
            self.events.push(format!("apply:{}", surface.0));
            self.alignment = Some(alignment);
        }

        fn redraw_surface(&mut self, surface: AnalysisSurfaceHandle) {
            self.events.push(format!("redraw:{}", surface.0));
        }
    }

    #[derive(Default)]
    struct CommandHost(Vec<String>);

    impl AnalysisCommandHost for CommandHost {
        fn record_command(&mut self, name: &str) {
            self.0.push(format!("record:{name}"));
        }

        fn open_axis_properties(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("axis:{}", surface.0));
        }

        fn open_curve_properties(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("curve:{}", surface.0));
        }

        fn open_curve_statistics(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("statistics:{}", surface.0));
        }

        fn separate_curves(&mut self, surface: AnalysisSurfaceHandle, group_curves: bool) {
            self.0
                .push(format!("separate:{}:{group_curves}", surface.0));
        }

        fn collect_curves(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("collect:{}", surface.0));
        }

        fn select_all_curves(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("select-all-curves:{}", surface.0));
        }

        fn delete_selected_curves(
            &mut self,
            surface: AnalysisSurfaceHandle,
            options: CurveDeletionOptions,
        ) {
            self.0.push(format!(
                "delete:{}:{}:{}:{}",
                surface.0,
                options.confirm,
                options.remove_empty_axes,
                options.remove_empty_coordinate_systems
            ));
        }

        fn add_y_axis(&mut self, surface: AnalysisSurfaceHandle, options: AxisCreationOptions) {
            self.0.push(format!(
                "add-y-axis:{}:{}:{}",
                surface.0, options.enforce_layout, options.enforce_twin_rules
            ));
        }

        fn add_x_axis(&mut self, surface: AnalysisSurfaceHandle, options: XAxisCreationOptions) {
            self.0
                .push(format!("add-x-axis:{}:{}", surface.0, options.redraw));
        }

        fn delete_selected_axis(
            &mut self,
            surface: AnalysisSurfaceHandle,
            options: AxisDeletionOptions,
        ) {
            self.0.push(format!(
                "delete-axis:{}:{}:{}",
                surface.0, options.relayout, options.redraw
            ));
        }

        fn restore_selected_axis_auto_range(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("auto-range:{}", surface.0));
        }

        fn clear_active_selection(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("clear-selection:{}", surface.0));
        }

        fn prepare_rectangle_zoom(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("prepare-zoom:{}", surface.0));
        }

        fn set_selection_tool_down(&mut self, down: bool) {
            self.0.push(format!("select-down:{down}"));
        }

        fn set_zoom_tool_down(&mut self, down: bool) {
            self.0.push(format!("zoom-down:{down}"));
        }

        fn set_normal_zoom_tool_down(&mut self, down: bool) {
            self.0.push(format!("normal-zoom-down:{down}"));
        }

        fn set_line_tool_down(&mut self, down: bool) {
            self.0.push(format!("line-down:{down}"));
        }

        fn set_circle_tool_down(&mut self, down: bool) {
            self.0.push(format!("circle-down:{down}"));
        }

        fn set_cursor_auxiliary_tool_down(&mut self, down: bool) {
            self.0.push(format!("cursor-aux-down:{down}"));
        }

        fn reset_diagram_settings(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("reset-settings:{}", surface.0));
        }

        fn show_information(&mut self, notice: AnalysisNotice) {
            self.0.push(format!("notice:{notice:?}"));
        }

        fn refresh_cursor(&mut self, cursor: CursorHandle, format: NyquistFormat) {
            self.0.push(format!("cursor:{}:{format:?}", cursor.0));
        }

        fn refresh_cursor_readouts(&mut self, format: NyquistFormat) {
            self.0.push(format!("cursor-readouts:{format:?}"));
        }

        fn delete_selected_cursor(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("delete-cursor:{}", surface.0));
        }

        fn delete_selected_figures(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("delete-figures:{}", surface.0));
        }

        fn create_circle_draft(&mut self, surface: AnalysisSurfaceHandle) -> FigureDraftHandle {
            self.0.push(format!("create-circle:{}", surface.0));
            FigureDraftHandle(263)
        }

        fn create_line_draft(&mut self, surface: AnalysisSurfaceHandle) -> FigureDraftHandle {
            self.0.push(format!("create-line:{}", surface.0));
            FigureDraftHandle(277)
        }

        fn remove_cursor(&mut self, surface: AnalysisSurfaceHandle, cursor: CursorKind) {
            self.0
                .push(format!("remove-cursor:{}:{cursor:?}", surface.0));
        }

        fn reconcile_cursor_state(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("reconcile-cursors:{}", surface.0));
        }

        fn cancel_active_interaction(
            &mut self,
            interaction_mode: u8,
            pending_text: Option<TextDraftHandle>,
            pending_figure: Option<FigureDraftHandle>,
            pending_paste: Option<PasteObjectHandle>,
        ) {
            self.0.push(format!(
                "cancel:{interaction_mode}:{pending_text:?}:{pending_figure:?}:{pending_paste:?}"
            ));
        }

        fn move_cursor(
            &mut self,
            surface: AnalysisSurfaceHandle,
            cursor: CursorHandle,
            direction: CursorNavigationDirection,
        ) {
            self.0.push(format!(
                "move-cursor:{}:{}:{direction:?}",
                surface.0, cursor.0
            ));
        }

        fn scroll_x_axis_left(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("scroll-left:{}", surface.0));
        }

        fn scroll_x_axis_right(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("scroll-right:{}", surface.0));
        }

        fn zoom_out_all_axes(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("zoom-out-all:{}", surface.0));
        }

        fn restore_automatic_ranges(
            &mut self,
            surface: AnalysisSurfaceHandle,
            reset_stored_options: bool,
        ) {
            self.0
                .push(format!("auto-ranges:{}:{reset_stored_options}", surface.0));
        }

        fn update_canvas_rectangle(&mut self, surface: AnalysisSurfaceHandle) -> bool {
            self.0.push(format!("canvas-rectangle:{}", surface.0));
            true
        }

        fn update_diagram_layout(&mut self, surface: AnalysisSurfaceHandle, canvas_changed: bool) {
            self.0
                .push(format!("layout:{}:{canvas_changed}", surface.0));
        }

        fn repaint_diagram(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("repaint:{}", surface.0));
        }

        fn shift_coordinate_systems_up(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("shift-cs-up:{}", surface.0));
        }

        fn shift_coordinate_systems_down(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("shift-cs-down:{}", surface.0));
        }

        fn refresh_analysis_scroll_controls(&mut self) {
            self.0.push("refresh-scroll-controls".to_owned());
        }

        fn open_fourier_analysis(
            &mut self,
            surface: AnalysisSurfaceHandle,
            mode: FourierAnalysisMode,
        ) {
            self.0.push(format!("fourier:{}:{mode:?}", surface.0));
        }

        fn save_diagram_options(&mut self, surface: AnalysisSurfaceHandle) {
            self.0.push(format!("save-options:{}", surface.0));
        }

        fn redraw_analysis(&mut self) {
            self.0.push("redraw".to_owned());
        }

        fn refresh_command_state(&mut self) {
            self.0.push("refresh-commands".to_owned());
        }
    }

    #[derive(Default)]
    struct PointerHost(Vec<String>);

    impl AnalysisPointerHost for PointerHost {
        fn delegate_overlay(&mut self, position: Point) {
            self.0.push(format!("overlay:{position:?}"));
        }

        fn begin_modified_selection(&mut self, position: Point) {
            self.0.push(format!("select:{position:?}"));
        }

        fn handle_tool_press(&mut self, tool_mode: u8, position: Point) {
            self.0.push(format!("tool:{tool_mode}:{position:?}"));
        }

        fn finish_tool_ten(&mut self, position: Point) {
            self.0.push(format!("finish:{position:?}"));
        }

        fn show_context_actions(&mut self, position: Point) {
            self.0.push(format!("context:{position:?}"));
        }

        fn refresh_tool_state(&mut self) {
            self.0.push("refresh".to_owned());
        }
    }

    #[derive(Default)]
    struct PointerMoveHost(Vec<String>);

    impl AnalysisPointerMoveHost for PointerMoveHost {
        fn show_overlay_cursor(&mut self) {
            self.0.push("overlay-cursor".to_owned());
        }

        fn show_coordinates(&mut self, position: Point) {
            self.0.push(format!("coordinates:{position:?}"));
        }

        fn handle_tool_move(&mut self, tool_mode: u8, position: Point) {
            self.0.push(format!("move:{tool_mode}:{position:?}"));
        }
    }

    #[derive(Default)]
    struct PointerUpHost(Vec<String>);

    impl AnalysisPointerUpHost for PointerUpHost {
        fn record_release(&mut self, position: Point) {
            self.0.push(format!("record:{position:?}"));
        }

        fn finish_tool_release(&mut self, tool_mode: u8, position: Point) {
            self.0.push(format!("finish:{tool_mode}:{position:?}"));
        }

        fn reset_tool(&mut self) {
            self.0.push("reset".to_owned());
        }
    }

    struct DoubleClickHost {
        category: u8,
        object_class: Option<u8>,
        events: Vec<String>,
    }

    impl AnalysisDoubleClickHost for DoubleClickHost {
        fn selection_category(&mut self) -> u8 {
            self.category
        }

        fn selected_object_class(&mut self) -> Option<u8> {
            self.object_class
        }

        fn edit_category_one(&mut self) {
            self.events.push("category-one".to_owned());
        }

        fn edit_category_two(&mut self) {
            self.events.push("category-two".to_owned());
        }

        fn begin_object_edit(&mut self, object_class: u8) {
            self.events.push(format!("object:{object_class}"));
        }

        fn enter_object_edit_mode(&mut self, tool_mode: u8) {
            self.events.push(format!("mode:{tool_mode}"));
        }
    }

    #[derive(Default)]
    struct PaintHost(Vec<String>);

    impl AnalysisPaintHost for PaintHost {
        fn set_busy_cursor(&mut self, busy: bool) {
            self.0.push(format!("busy:{busy}"));
        }

        fn paint_overlay(&mut self) {
            self.0.push("overlay".to_owned());
        }

        fn paint_surface(&mut self) {
            self.0.push("surface".to_owned());
        }

        fn clear_deferred_refresh(&mut self) {
            self.0.push("clear-deferred".to_owned());
        }

        fn process_deferred_refresh(&mut self) {
            self.0.push("process-deferred".to_owned());
        }
    }

    #[derive(Default)]
    struct ResizeHost(Vec<String>);

    impl AnalysisResizeHost for ResizeHost {
        fn record_bounds(&mut self, bounds: WindowBounds) {
            self.0.push(format!("bounds:{bounds:?}"));
        }

        fn resize_status_area(&mut self, width: i32) {
            self.0.push(format!("status:{width}"));
        }

        fn resize_and_paint_overlay(&mut self, client_size: Size) {
            self.0.push(format!("overlay:{client_size:?}"));
        }

        fn set_busy_cursor(&mut self, busy: bool) {
            self.0.push(format!("busy:{busy}"));
        }

        fn rebuild_surface_buffer(&mut self, client_size: Size) {
            self.0.push(format!("buffer:{client_size:?}"));
        }

        fn paint_surface(&mut self) {
            self.0.push("surface".to_owned());
        }

        fn store_surface_size(&mut self, client_size: Size) {
            self.0.push(format!("store:{client_size:?}"));
        }
    }

    impl CursorPanelHost for ResizeHost {
        fn set_cursor_panel_height(&mut self, height: i32) {
            self.0.push(format!("panel-height:{height}"));
        }

        fn align_cursor_panels(&mut self) {
            self.0.push("align-panels".to_owned());
        }
    }

    fn series() -> AnalysisSeries {
        AnalysisSeries::new(
            "histogram",
            AxisLabels::new("old x", "old y"),
            [AnalysisPoint::new(1.0, 2.0)],
        )
    }

    #[test]
    fn update_logic_exposes_the_active_published_result_without_a_live_window() {
        let mut window = Window::default();
        assert_eq!(window.active_result_title(), None);

        window
            .result_manager_mut()
            .publish_statistic(Some(series()));

        assert_eq!(window.active_result_title(), Some("STATISTIC 1"));
        assert_eq!(window.result_manager().refresh_generation(), 1);
    }

    #[test]
    fn command_selection_remains_local_ui_state() {
        let mut window = Window::default();
        window.update(Message::CommandSelected);

        assert_eq!(window.active_result_title(), None);
        assert_eq!(window.result_manager().refresh_generation(), 0);
    }

    #[test]
    fn create_initializes_persisted_display_state_without_a_live_window() {
        let mut window = Window::default();

        window.initialize(
            StartupPreferences {
                bounds: WindowBounds {
                    left: 1_500,
                    top: 900,
                    width: 1_400,
                    height: 1_000,
                },
                vector_style: 2,
            },
            WindowBounds {
                left: 0,
                top: 0,
                width: 1_920,
                height: 1_080,
            },
        );

        assert_eq!(window.zoom_percent(), 100);
        assert_eq!(window.vector_style(), Some(VectorStyle::Second));
        assert_eq!(
            window.bounds(),
            WindowBounds {
                left: 520,
                top: 80,
                width: 1_400,
                height: 1_000,
            }
        );
        assert_eq!(window.drawing_font(), ("Arial", 12));
        assert!(window.command_shortcuts_installed());
        assert!(!window.startup_tools_enabled());
        assert!(window.host_hooks_installed());
    }

    #[test]
    fn create_clamps_size_and_leaves_unknown_vector_style_unselected() {
        let mut window = Window::default();

        window.initialize(
            StartupPreferences {
                bounds: WindowBounds {
                    left: 100,
                    top: 100,
                    width: 2_000,
                    height: 1_200,
                },
                vector_style: 9,
            },
            WindowBounds {
                left: 0,
                top: 0,
                width: 1_280,
                height: 720,
            },
        );

        assert_eq!(window.bounds().width, 1_280);
        assert_eq!(window.bounds().height, 720);
        assert_eq!(window.bounds().left, 0);
        assert_eq!(window.bounds().top, 0);
        assert_eq!(window.vector_style(), None);
    }

    #[test]
    fn destroy_persists_bounds_and_releases_each_shared_result_slot() {
        let window = Window {
            bounds: WindowBounds {
                left: 40,
                top: 50,
                width: 1_200,
                height: 700,
            },
            ..Window::default()
        };
        let mut host = LifecycleHost::default();

        window.destroy(&mut host);

        assert_eq!(
            host.settings,
            [
                ("WinLeft".to_owned(), 40),
                ("WinTop".to_owned(), 50),
                ("WinWidth".to_owned(), 1_200),
                ("WinHeight".to_owned(), 700),
            ]
        );
        assert_eq!(host.released_slots, [0, 1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn mouse_down_routes_overlay_no_surface_and_modified_selection() {
        let mut window = Window::default();
        let mut host = PointerHost::default();
        let point = Point::new(12.0, 34.0);

        assert_eq!(
            window.mouse_down(
                mouse::Button::Left,
                keyboard::Modifiers::SHIFT,
                point,
                PointerContext {
                    overlay_active: true,
                    surface_active: false,
                    tool_mode: 0,
                },
                &mut host,
            ),
            MouseDownRoute::Overlay
        );
        assert_eq!(
            window.mouse_down(
                mouse::Button::Left,
                keyboard::Modifiers::empty(),
                point,
                PointerContext {
                    overlay_active: false,
                    surface_active: false,
                    tool_mode: 0,
                },
                &mut host,
            ),
            MouseDownRoute::NoSurface
        );
        assert_eq!(
            window.mouse_down(
                mouse::Button::Left,
                keyboard::Modifiers::SHIFT,
                point,
                PointerContext {
                    overlay_active: false,
                    surface_active: true,
                    tool_mode: 0,
                },
                &mut host,
            ),
            MouseDownRoute::ModifiedSelection
        );
        assert_eq!(host.0.len(), 3);
        assert!(host.0[0].starts_with("overlay:"));
        assert!(host.0[1].starts_with("select:"));
        assert_eq!(host.0[2], "refresh");
    }

    #[test]
    fn mouse_down_routes_tool_and_right_click_paths_then_refreshes() {
        let mut window = Window::default();
        let mut host = PointerHost::default();
        let point = Point::new(5.0, 6.0);
        let active = |tool_mode| PointerContext {
            overlay_active: false,
            surface_active: true,
            tool_mode,
        };

        assert_eq!(
            window.mouse_down(
                mouse::Button::Left,
                keyboard::Modifiers::empty(),
                point,
                active(6),
                &mut host,
            ),
            MouseDownRoute::Tool(6)
        );
        assert_eq!(
            window.mouse_down(
                mouse::Button::Right,
                keyboard::Modifiers::empty(),
                point,
                active(10),
                &mut host,
            ),
            MouseDownRoute::FinishToolTen
        );
        assert_eq!(
            window.mouse_down(
                mouse::Button::Right,
                keyboard::Modifiers::empty(),
                point,
                active(3),
                &mut host,
            ),
            MouseDownRoute::Context
        );
        assert_eq!(host.0.len(), 6);
        assert_eq!(host.0[1], "refresh");
        assert_eq!(host.0[3], "refresh");
        assert_eq!(host.0[5], "refresh");
    }

    #[test]
    fn mouse_move_obeys_guards_and_dispatches_only_recovered_modes() {
        let mut window = Window::default();
        let mut host = PointerMoveHost::default();
        let point = Point::new(8.0, 9.0);

        assert_eq!(
            window.mouse_move(
                point,
                PointerContext {
                    overlay_active: true,
                    surface_active: true,
                    tool_mode: 6,
                },
                &mut host,
            ),
            MouseMoveRoute::Overlay
        );
        assert_eq!(host.0, ["overlay-cursor"]);

        host.0.clear();
        assert_eq!(
            window.mouse_move(
                point,
                PointerContext {
                    overlay_active: false,
                    surface_active: false,
                    tool_mode: 6,
                },
                &mut host,
            ),
            MouseMoveRoute::NoSurface
        );
        assert!(host.0.is_empty());

        assert_eq!(
            window.mouse_move(
                point,
                PointerContext {
                    overlay_active: false,
                    surface_active: true,
                    tool_mode: 18,
                },
                &mut host,
            ),
            MouseMoveRoute::Tool(18)
        );
        assert_eq!(host.0.len(), 2);
        assert!(host.0[0].starts_with("coordinates:"));
        assert!(host.0[1].starts_with("move:18:"));

        host.0.clear();
        assert_eq!(
            window.mouse_move(
                point,
                PointerContext {
                    overlay_active: false,
                    surface_active: true,
                    tool_mode: 19,
                },
                &mut host,
            ),
            MouseMoveRoute::StatusOnly
        );
        assert_eq!(host.0.len(), 1);
        assert!(host.0[0].starts_with("coordinates:"));
    }

    #[test]
    fn mouse_up_records_active_release_and_routes_only_finalize_modes() {
        let mut window = Window::default();
        let mut host = PointerUpHost::default();
        let point = Point::new(10.0, 20.0);
        let context = |surface_active, tool_mode| PointerContext {
            overlay_active: false,
            surface_active,
            tool_mode,
        };

        assert_eq!(
            window.mouse_up(point, context(false, 8), &mut host),
            MouseUpRoute::NoSurface
        );
        assert!(host.0.is_empty());

        assert_eq!(
            window.mouse_up(point, context(true, 8), &mut host),
            MouseUpRoute::Tool(8)
        );
        assert_eq!(host.0.len(), 2);
        assert!(host.0[0].starts_with("record:"));
        assert!(host.0[1].starts_with("finish:8:"));

        host.0.clear();
        assert_eq!(
            window.mouse_up(point, context(true, 19), &mut host),
            MouseUpRoute::Reset
        );
        assert_eq!(host.0.len(), 2);
        assert_eq!(host.0[1], "reset");

        host.0.clear();
        assert_eq!(
            window.mouse_up(point, context(true, 10), &mut host),
            MouseUpRoute::RecordedOnly
        );
        assert_eq!(host.0.len(), 1);
    }

    #[test]
    fn double_click_obeys_guards_and_dispatches_supported_selection() {
        let mut window = Window::default();
        let mut host = DoubleClickHost {
            category: 8,
            object_class: Some(2),
            events: Vec::new(),
        };

        assert_eq!(
            window.double_click(
                DoubleClickContext {
                    surface_active: true,
                    surface_locked: false,
                    tool_mode: 1,
                },
                &mut host,
            ),
            DoubleClickRoute::Ignored
        );
        assert!(host.events.is_empty());

        assert_eq!(
            window.double_click(
                DoubleClickContext {
                    surface_active: true,
                    surface_locked: false,
                    tool_mode: 0,
                },
                &mut host,
            ),
            DoubleClickRoute::ObjectClass(2)
        );
        assert_eq!(host.events, ["object:2", "mode:19"]);

        host.category = 1;
        host.events.clear();
        assert_eq!(
            window.double_click(
                DoubleClickContext {
                    surface_active: true,
                    surface_locked: false,
                    tool_mode: 0,
                },
                &mut host,
            ),
            DoubleClickRoute::CategoryOne
        );
        assert_eq!(host.events, ["category-one"]);
    }

    #[test]
    fn paint_prioritizes_overlay_and_processes_only_ready_deferred_refresh() {
        let mut window = Window::default();
        let mut host = PaintHost::default();

        assert_eq!(
            window.paint(
                PaintContext {
                    overlay_active: true,
                    surface_active: true,
                    deferred_refresh: DeferredRefresh::Pending,
                },
                &mut host,
            ),
            PaintRoute::Overlay
        );
        assert_eq!(
            host.0,
            [
                "busy:true",
                "overlay",
                "busy:false",
                "clear-deferred",
                "process-deferred"
            ]
        );

        host.0.clear();
        assert_eq!(
            window.paint(
                PaintContext {
                    overlay_active: false,
                    surface_active: true,
                    deferred_refresh: DeferredRefresh::Idle,
                },
                &mut host,
            ),
            PaintRoute::Surface
        );
        assert_eq!(host.0, ["busy:true", "surface", "busy:false"]);

        host.0.clear();
        assert_eq!(
            window.paint(
                PaintContext {
                    overlay_active: false,
                    surface_active: false,
                    deferred_refresh: DeferredRefresh::Disabled,
                },
                &mut host,
            ),
            PaintRoute::NoContent
        );
        assert!(host.0.is_empty());
    }

    #[test]
    fn resize_updates_common_layout_then_prioritizes_available_content() {
        let mut window = Window::default();
        let bounds = WindowBounds {
            left: 20,
            top: 30,
            width: 900,
            height: 600,
        };
        let client_size = Size::new(880.0, 540.0);
        let mut host = ResizeHost::default();

        assert_eq!(
            window.resize(
                bounds,
                client_size,
                ResizeContext {
                    overlay_active: true,
                    surface_active: true,
                },
                &mut host,
            ),
            PaintRoute::Overlay
        );
        assert_eq!(window.bounds(), bounds);
        assert_eq!(host.0.len(), 3);
        assert!(host.0[0].starts_with("bounds:"));
        assert_eq!(host.0[1], "status:900");
        assert!(host.0[2].starts_with("overlay:"));

        host.0.clear();
        assert_eq!(
            window.resize(
                bounds,
                client_size,
                ResizeContext {
                    overlay_active: false,
                    surface_active: true,
                },
                &mut host,
            ),
            PaintRoute::Surface
        );
        assert_eq!(host.0.len(), 7);
        assert_eq!(host.0[1], "status:900");
        assert_eq!(host.0[2], "busy:true");
        assert!(host.0[3].starts_with("buffer:"));
        assert_eq!(host.0[4], "surface");
        assert!(host.0[5].starts_with("store:"));
        assert_eq!(host.0[6], "busy:false");
    }

    #[test]
    fn cursor_page_change_sets_height_aligns_and_reuses_resize() {
        let mut window = Window {
            bounds: WindowBounds {
                left: 1,
                top: 2,
                width: 800,
                height: 500,
            },
            ..Window::default()
        };
        let mut host = ResizeHost::default();

        let route = window.cursor_panel_changed(
            CursorPanelPage::Normal {
                computed_height: Some(144),
            },
            Size::new(780.0, 440.0),
            ResizeContext {
                overlay_active: false,
                surface_active: false,
            },
            &mut host,
        );

        assert_eq!(route, PaintRoute::NoContent);
        assert_eq!(host.0[0], "panel-height:144");
        assert_eq!(host.0[1], "align-panels");
        assert!(host.0[2].starts_with("bounds:"));
        assert_eq!(host.0[3], "status:800");

        host.0.clear();
        window.cursor_panel_changed(
            CursorPanelPage::Secondary,
            Size::new(780.0, 440.0),
            ResizeContext {
                overlay_active: false,
                surface_active: false,
            },
            &mut host,
        );
        assert_eq!(host.0[0], "panel-height:67");
    }

    #[test]
    fn axis_properties_records_command_before_opening_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_axis_properties(AnalysisSurfaceHandle(71), &mut host);

        assert_eq!(host.0, ["record:AxisMnu", "axis:71"]);
    }

    #[test]
    fn curve_properties_records_command_before_opening_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_curve_properties(AnalysisSurfaceHandle(83), &mut host);

        assert_eq!(host.0, ["record:CurveMnu", "curve:83"]);
    }

    #[test]
    fn popup_statistics_records_its_token_before_opening_the_shared_dialog() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_curve_statistics_from_popup(AnalysisSurfaceHandle(89), &mut host);

        assert_eq!(host.0, ["record:StatisticsMnu", "statistics:89"]);
    }

    #[test]
    fn menu_statistics_records_its_token_before_opening_the_shared_dialog() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_curve_statistics_from_menu(AnalysisSurfaceHandle(97), &mut host);

        assert_eq!(host.0, ["record:DFStatisticsMnu", "statistics:97"]);
    }

    #[test]
    fn keep_results_toggles_session_policy_without_page_operations() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        assert!(window.keep_results());

        window.toggle_keep_results(&mut host);
        assert!(!window.keep_results());

        window.toggle_keep_results(&mut host);
        assert!(window.keep_results());
        assert_eq!(host.0, ["record:KeepResultsMnu", "record:KeepResultsMnu"]);
    }

    #[test]
    fn separate_curves_runs_the_recovered_command_pipeline_in_order() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.separate_curves(AnalysisSurfaceHandle(97), &mut host);

        assert_eq!(
            host.0,
            [
                "record:SeparateCurvesMnu",
                "separate:97:false",
                "redraw",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn separate_outputs_enables_grouping_in_the_recovered_pipeline() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.separate_outputs(AnalysisSurfaceHandle(101), &mut host);

        assert_eq!(
            host.0,
            [
                "record:SeparateCurvesMnu",
                "separate:101:true",
                "redraw",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn collect_curves_runs_the_recovered_command_pipeline_in_order() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.collect_curves(AnalysisSurfaceHandle(107), &mut host);

        assert_eq!(
            host.0,
            [
                "record:CollectCurvesMnu",
                "collect:107",
                "redraw",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn select_all_curves_replaces_the_selection_and_refreshes_commands() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.select_all_curves(AnalysisSurfaceHandle(108), &mut host);

        assert_eq!(
            host.0,
            [
                "record:DFSelectAllCurvesMnu",
                "select-all-curves:108",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn delete_selected_curves_enables_confirmation_and_empty_container_cleanup() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.delete_selected_curves(AnalysisSurfaceHandle(109), &mut host);

        assert_eq!(
            host.0,
            ["record:DeleteCurveMnu", "delete:109:true:true:true"]
        );
    }

    #[test]
    fn add_y_axis_enables_guards_and_saves_diagram_options() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.add_y_axis(AnalysisSurfaceHandle(113), &mut host);

        assert_eq!(
            host.0,
            [
                "record:AddNewYAxisMnu",
                "add-y-axis:113:true:true",
                "save-options:113",
            ]
        );
    }

    #[test]
    fn add_x_axis_enables_redraw_and_always_saves_diagram_options() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.add_x_axis(AnalysisSurfaceHandle(127), &mut host);

        assert_eq!(
            host.0,
            [
                "record:AddNewXAxisMnu",
                "add-x-axis:127:true",
                "save-options:127",
            ]
        );
    }

    #[test]
    fn delete_selected_axis_enables_layout_and_redraw_before_serialization() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.delete_selected_axis(AnalysisSurfaceHandle(131), &mut host);

        assert_eq!(
            host.0,
            [
                "record:DeleteAxisMnu",
                "delete-axis:131:true:true",
                "save-options:131",
            ]
        );
    }

    #[test]
    fn set_defaults_restores_selected_axis_auto_range_without_saving_settings() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.restore_selected_axis_auto_range(AnalysisSurfaceHandle(137), &mut host);

        assert_eq!(host.0, ["record:SetDefaultsMnu", "auto-range:137"]);
    }

    #[test]
    fn selection_tool_sets_mode_and_clears_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_selection_tool(Some(AnalysisSurfaceHandle(139)), &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.0, ["record:DFSelectBtn", "clear-selection:139"]);
    }

    #[test]
    fn selection_tool_sets_mode_without_an_active_surface() {
        let mut window = Window {
            interaction_mode: 6,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.activate_selection_tool(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.0, ["record:DFSelectBtn"]);
    }

    #[test]
    fn rectangle_zoom_arms_mode_one_for_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_rectangle_zoom(Some(AnalysisSurfaceHandle(149)), &mut host);

        assert_eq!(window.interaction_mode(), 1);
        assert_eq!(host.0, ["record:DFZoomBtn", "prepare-zoom:149"]);
    }

    #[test]
    fn rectangle_zoom_falls_back_through_the_selection_handler_without_a_surface() {
        let mut window = Window {
            interaction_mode: 6,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.activate_rectangle_zoom(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            ["record:DFZoomBtn", "select-down:true", "record:DFSelectBtn",]
        );
    }

    #[test]
    fn rectangle_zoom_menu_presses_the_grouped_button_and_delegates() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_rectangle_zoom_from_menu(Some(AnalysisSurfaceHandle(151)), &mut host);

        assert_eq!(window.interaction_mode(), 1);
        assert_eq!(
            host.0,
            ["zoom-down:true", "record:DFZoomBtn", "prepare-zoom:151"]
        );
    }

    #[test]
    fn zoom_out_expands_all_axes_then_updates_layout_and_repaints() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.zoom_out(Some(AnalysisSurfaceHandle(157)), &mut host);

        assert_eq!(
            host.0,
            [
                "zoom-out-all:157",
                "canvas-rectangle:157",
                "layout:157:true",
                "repaint:157",
            ]
        );
        assert!(
            !host
                .0
                .iter()
                .any(|event| event.starts_with("save-options:"))
        );
    }

    #[test]
    fn zoom_out_without_a_surface_uses_the_select_fallback() {
        let mut window = Window {
            interaction_mode: 1,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.zoom_out(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.0, ["select-down:true", "record:DFSelectBtn"]);
    }

    #[test]
    fn grid_rebinding_arms_mode_three_for_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_grid_rebinding(Some(AnalysisSurfaceHandle(151)), &mut host);

        assert_eq!(window.interaction_mode(), 3);
        assert_eq!(host.0, ["record:DFGridBtn", "clear-selection:151"]);
    }

    #[test]
    fn grid_rebinding_falls_back_through_the_selection_handler_without_a_surface() {
        let mut window = Window {
            interaction_mode: 8,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.activate_grid_rebinding(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            ["record:DFGridBtn", "select-down:true", "record:DFSelectBtn",]
        );
    }

    #[test]
    fn forget_diagram_settings_resets_before_showing_completion_notice() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.forget_diagram_settings(Some(AnalysisSurfaceHandle(157)), &mut host);

        assert_eq!(
            host.0,
            ["reset-settings:157", "notice:DiagramSettingsCleared",]
        );
    }

    #[test]
    fn forget_diagram_settings_is_silent_without_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.forget_diagram_settings(None, &mut host);

        assert!(host.0.is_empty());
    }

    #[test]
    fn nyquist_format_refreshes_cursor_a_then_b_then_shared_readouts() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.select_nyquist_format(
            NyquistFormat::PolarDegrees,
            CursorPair {
                a: Some(CursorHandle(163)),
                b: Some(CursorHandle(167)),
            },
            &mut host,
        );

        assert_eq!(window.nyquist_format(), NyquistFormat::PolarDegrees);
        assert_eq!(
            host.0,
            [
                "cursor:163:PolarDegrees",
                "cursor:167:PolarDegrees",
                "cursor-readouts:PolarDegrees",
            ]
        );
    }

    #[test]
    fn nyquist_format_always_refreshes_shared_readouts_without_cursors() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.select_nyquist_format(
            NyquistFormat::Rectangular,
            CursorPair { a: None, b: None },
            &mut host,
        );

        assert_eq!(host.0, ["cursor-readouts:Rectangular"]);
    }

    #[test]
    fn close_request_releases_transient_state_and_hides_the_window() {
        let mut window = Window::default();
        let mut host = CloseHost::default();

        let disposition = window.close_requested(&mut host);

        assert_eq!(disposition, CloseDisposition::Hide);
        assert_eq!(
            host.0,
            [
                "release-drawing-handle",
                "clear-transient-text",
                "close-associated-view",
                "close-cursor-window",
            ]
        );
    }

    #[test]
    fn drag_drop_aligns_the_cursor_window_top_and_right_edges() {
        let mut window = Window {
            bounds: WindowBounds {
                left: 40,
                top: 60,
                width: 800,
                height: 600,
            },
            ..Window::default()
        };
        let mut host = LayoutHost::default();

        window.align_cursor_window_after_drag_drop(
            Some(WindowBounds {
                left: 0,
                top: 0,
                width: 240,
                height: 300,
            }),
            &mut host,
        );

        assert_eq!(host.0, [WindowPosition { left: 600, top: 60 }]);
    }

    #[test]
    fn drag_drop_does_nothing_without_a_cursor_window() {
        let mut window = Window::default();
        let mut host = LayoutHost::default();

        window.align_cursor_window_after_drag_drop(None, &mut host);

        assert!(host.0.is_empty());
    }

    #[test]
    fn result_tab_change_forces_page_refresh_before_scrollbar_recalculation() {
        let mut window = Window::default();
        let mut host = ResultTabHost::default();

        window.result_tab_changed(4, &mut host);

        assert_eq!(host.0, ["activate:4:true", "refresh-scrollbars"]);
    }

    #[test]
    fn result_tab_changing_is_allowed_only_in_normal_form_mode() {
        assert!(Window::result_tab_change_allowed(1));
        assert!(!Window::result_tab_change_allowed(0));
        assert!(!Window::result_tab_change_allowed(2));
    }

    #[test]
    fn result_tab_mouse_leave_hides_and_clears_the_hover_hint() {
        let mut window = Window::default();
        let mut host = TabHoverHost::default();

        window.result_tab_mouse_left(&mut host);

        assert_eq!(host.events, ["hide-hint", "clear-hint-text"]);
    }

    #[test]
    fn result_tab_mouse_move_shows_a_changed_supported_hint_once() {
        let mut window = Window::default();
        let mut host = TabHoverHost {
            hint: Some(ResultTabHint {
                tab_index: 2,
                text: "Transient result".to_owned(),
                anchor: Point::new(30.0, 8.0),
            }),
            events: Vec::new(),
        };

        window.result_tab_mouse_moved(Point::new(42.0, 6.0), &mut host);
        window.result_tab_mouse_moved(Point::new(43.0, 6.0), &mut host);

        assert_eq!(
            host.events,
            [
                "resolve:42:6",
                "show:2:Transient result:30:8",
                "resolve:43:6",
            ]
        );
    }

    #[test]
    fn result_tab_mouse_move_without_hint_clears_transient_state() {
        let mut window = Window {
            hovered_result_tab: Some(4),
            result_tab_hint_text: "Old hint".to_owned(),
            ..Window::default()
        };
        let mut host = TabHoverHost::default();

        window.result_tab_mouse_moved(Point::new(5.0, 7.0), &mut host);

        assert_eq!(window.hovered_result_tab, None);
        assert!(window.result_tab_hint_text.is_empty());
        assert_eq!(host.events, ["resolve:5:7", "hide-hint", "clear-hint-text"]);
    }

    #[test]
    fn page_deletion_resizes_a_remaining_normal_diagram() {
        let mut window = Window::default();
        let mut host = PageHost {
            outcome: PageDeletionOutcome::NormalDiagramActive,
            events: Vec::new(),
        };

        window.delete_result_page(3, &mut host);

        assert_eq!(
            host.events,
            ["record:DeletePageMnu", "delete-page:3", "resize"]
        );
    }

    #[test]
    fn page_deletion_clears_canvas_for_empty_or_design_grid_result() {
        let mut window = Window::default();
        let mut host = PageHost {
            outcome: PageDeletionOutcome::EmptyOrDesignGrid,
            events: Vec::new(),
        };

        window.delete_result_page(0, &mut host);

        assert_eq!(
            host.events,
            ["record:DeletePageMnu", "delete-page:0", "clear-white"]
        );
    }

    #[test]
    fn page_name_cancel_keeps_the_page_and_window_caption_unchanged() {
        let mut window = Window::default();
        let mut host = PageNameHost {
            initial_index: 1,
            current_index: 2,
            index_reads: 0,
            result: PageNameDialogResult::Cancelled,
            events: Vec::new(),
        };

        window.rename_active_page(&mut host);

        assert_eq!(
            host.events,
            [
                "record:PageNameMnu",
                "index:1",
                "caption:1",
                "dialog:Page 1",
            ]
        );
    }

    #[test]
    fn page_name_acceptance_uses_the_newly_read_active_index() {
        let mut window = Window::default();
        let mut host = PageNameHost {
            initial_index: 1,
            current_index: 2,
            index_reads: 0,
            result: PageNameDialogResult::Accepted("  New name  ".to_owned()),
            events: Vec::new(),
        };

        window.rename_active_page(&mut host);

        assert_eq!(
            host.events,
            [
                "record:PageNameMnu",
                "index:1",
                "caption:1",
                "dialog:Page 1",
                "index:2",
                "rename:2:  New name  ",
                "window-caption:2",
            ]
        );
    }

    #[test]
    fn left_scroll_delegates_one_step_for_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.scroll_x_axis_left(Some(AnalysisSurfaceHandle(173)), &mut host);

        assert_eq!(host.0, ["record:LeftScrollBtn", "scroll-left:173"]);
    }

    #[test]
    fn left_scroll_falls_back_through_the_selection_handler_without_a_surface() {
        let mut window = Window {
            interaction_mode: 9,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.scroll_x_axis_left(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:LeftScrollBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn right_scroll_delegates_one_step_for_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.scroll_x_axis_right(Some(AnalysisSurfaceHandle(179)), &mut host);

        assert_eq!(host.0, ["record:RightScrollBtn", "scroll-right:179"]);
    }

    #[test]
    fn right_scroll_falls_back_through_the_selection_handler_without_a_surface() {
        let mut window = Window {
            interaction_mode: 9,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.scroll_x_axis_right(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:RightScrollBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn up_scroll_click_only_records_the_command() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.record_up_scroll_click(&mut host);

        assert_eq!(host.0, ["record:UpScrollBtn"]);
    }

    #[test]
    fn up_scroll_mouse_moves_range_and_visible_window_without_shift() {
        let mut window = Window::default();
        let mut host = VerticalScrollMouseHost::default();

        window.up_scroll_mouse_down(
            Some(AnalysisSurfaceHandle(631)),
            Point::new(3.0, 5.0),
            keyboard::Modifiers::empty(),
            &mut host,
        );

        assert_eq!(
            host.0,
            [
                "translate:3:5",
                "record:13:25",
                "range-up:631",
                "window-up:631",
                "refresh-scrollbars",
            ]
        );
    }

    #[test]
    fn shift_up_scroll_mouse_reduces_visible_axis_count() {
        let mut window = Window::default();
        let mut host = VerticalScrollMouseHost::default();

        window.up_scroll_mouse_down(
            Some(AnalysisSurfaceHandle(641)),
            Point::new(7.0, 11.0),
            keyboard::Modifiers::SHIFT,
            &mut host,
        );

        assert_eq!(
            host.0,
            [
                "translate:7:11",
                "record:17:31",
                "reduce-axis-count:641",
                "refresh-scrollbars",
            ]
        );
    }

    #[test]
    fn up_scroll_mouse_without_a_diagram_restores_default_tool() {
        let mut window = Window {
            interaction_mode: 8,
            ..Window::default()
        };
        let mut host = VerticalScrollMouseHost::default();

        window.up_scroll_mouse_down(
            None,
            Point::new(13.0, 17.0),
            keyboard::Modifiers::empty(),
            &mut host,
        );

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.0, ["translate:13:17", "record:23:37", "default-tool"]);
    }

    #[test]
    fn down_scroll_click_only_records_the_command() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.record_down_scroll_click(&mut host);

        assert_eq!(host.0, ["record:DownScrollBtn"]);
    }

    #[test]
    fn down_scroll_mouse_moves_range_and_visible_window_without_shift() {
        let mut window = Window::default();
        let mut host = VerticalScrollMouseHost::default();

        window.down_scroll_mouse_down(
            Some(AnalysisSurfaceHandle(647)),
            Point::new(2.0, 4.0),
            keyboard::Modifiers::empty(),
            &mut host,
        );

        assert_eq!(
            host.0,
            [
                "translate-down:2:4",
                "record-down:32:44",
                "range-down:647",
                "window-down:647",
                "refresh-scrollbars",
            ]
        );
    }

    #[test]
    fn shift_down_scroll_mouse_increases_visible_axis_count() {
        let mut window = Window::default();
        let mut host = VerticalScrollMouseHost::default();

        window.down_scroll_mouse_down(
            Some(AnalysisSurfaceHandle(653)),
            Point::new(6.0, 8.0),
            keyboard::Modifiers::SHIFT,
            &mut host,
        );

        assert_eq!(
            host.0,
            [
                "translate-down:6:8",
                "record-down:36:48",
                "increase-axis-count:653",
                "refresh-scrollbars",
            ]
        );
    }

    #[test]
    fn down_scroll_mouse_without_a_diagram_restores_default_tool() {
        let mut window = Window {
            interaction_mode: 8,
            ..Window::default()
        };
        let mut host = VerticalScrollMouseHost::default();

        window.down_scroll_mouse_down(
            None,
            Point::new(10.0, 12.0),
            keyboard::Modifiers::empty(),
            &mut host,
        );

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            ["translate-down:10:12", "record-down:40:52", "default-tool"]
        );
    }

    #[test]
    fn normal_zoom_restores_all_ranges_and_repaints_in_order() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.restore_normal_zoom(Some(AnalysisSurfaceHandle(181)), &mut host);

        assert_eq!(
            host.0,
            [
                "record:NormalZoomBtn",
                "auto-ranges:181:true",
                "canvas-rectangle:181",
                "layout:181:true",
                "save-options:181",
                "repaint:181",
            ]
        );
    }

    #[test]
    fn normal_zoom_falls_back_to_select_without_a_surface() {
        let mut window = Window {
            interaction_mode: 9,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.restore_normal_zoom(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:NormalZoomBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn normal_zoom_menu_presses_the_grouped_button_and_delegates() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.restore_normal_zoom_from_menu(Some(AnalysisSurfaceHandle(191)), &mut host);

        assert_eq!(
            host.0,
            [
                "normal-zoom-down:true",
                "record:NormalZoomBtn",
                "auto-ranges:191:true",
                "canvas-rectangle:191",
                "layout:191:true",
                "save-options:191",
                "repaint:191",
            ]
        );
    }

    #[test]
    fn coordinate_system_shift_up_refreshes_scroll_controls() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.shift_coordinate_systems_up(Some(AnalysisSurfaceHandle(191)), &mut host);

        assert_eq!(
            host.0,
            [
                "record:UpScrollCSBtn",
                "shift-cs-up:191",
                "refresh-scroll-controls",
            ]
        );
    }

    #[test]
    fn coordinate_system_shift_up_falls_back_to_select_without_a_surface() {
        let mut window = Window {
            interaction_mode: 9,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.shift_coordinate_systems_up(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:UpScrollCSBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn coordinate_system_shift_down_refreshes_scroll_controls() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.shift_coordinate_systems_down(Some(AnalysisSurfaceHandle(193)), &mut host);

        assert_eq!(
            host.0,
            [
                "record:DownScrollCSBtn",
                "shift-cs-down:193",
                "refresh-scroll-controls",
            ]
        );
    }

    #[test]
    fn coordinate_system_shift_down_falls_back_to_select_without_a_surface() {
        let mut window = Window {
            interaction_mode: 9,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.shift_coordinate_systems_down(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:DownScrollCSBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn accepted_text_is_staged_off_screen_and_enters_mode_six() {
        let mut window = Window::default();
        let mut host = TextPlacementHost {
            result: TextEditorResult::Accepted { line_count: 2 },
            events: Vec::new(),
        };

        window.stage_text_placement(Some(AnalysisSurfaceHandle(199)), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(211)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "record:DFTextBtn",
                "create:199",
                "edit:211",
                "prepare:211:199:-100:-100",
                "outline:-100:-100:80:30",
            ]
        );
    }

    #[test]
    fn cancelled_text_draft_is_discarded() {
        let mut window = Window::default();
        let mut host = TextPlacementHost {
            result: TextEditorResult::Cancelled,
            events: Vec::new(),
        };

        window.stage_text_placement(Some(AnalysisSurfaceHandle(199)), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(host.events.last().map(String::as_str), Some("discard:211"));
    }

    #[test]
    fn empty_text_draft_is_discarded() {
        let mut window = Window::default();
        let mut host = TextPlacementHost {
            result: TextEditorResult::Accepted { line_count: 0 },
            events: Vec::new(),
        };

        window.stage_text_placement(Some(AnalysisSurfaceHandle(199)), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(host.events.last().map(String::as_str), Some("discard:211"));
    }

    #[test]
    fn text_placement_falls_back_to_select_without_a_surface() {
        let mut window = Window {
            interaction_mode: 9,
            ..Window::default()
        };
        let mut host = TextPlacementHost {
            result: TextEditorResult::Cancelled,
            events: Vec::new(),
        };

        window.stage_text_placement(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            ["record:DFTextBtn", "select-down:true", "record:DFSelectBtn",]
        );
    }

    #[test]
    fn popup_text_tool_presses_the_grouped_button_and_delegates() {
        let mut window = Window::default();
        let mut host = TextPlacementHost {
            result: TextEditorResult::Accepted { line_count: 1 },
            events: Vec::new(),
        };

        window.activate_popup_text_tool(Some(AnalysisSurfaceHandle(293)), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(211)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(host.events[0], "text-down:true");
        assert_eq!(host.events[1], "record:DFTextBtn");
    }

    #[test]
    fn fourier_thd_popup_opens_the_series_dispatcher() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_fourier_series(AnalysisSurfaceHandle(223), &mut host);

        assert_eq!(host.0, ["record:FourierTHDMnu", "fourier:223:Series"]);
    }

    #[test]
    fn fourier_series_menu_opens_the_series_dispatcher() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_fourier_series_from_menu(AnalysisSurfaceHandle(225), &mut host);

        assert_eq!(host.0, ["record:DFFourierSeriesMnu", "fourier:225:Series"]);
    }

    #[test]
    fn fourier_spectrum_popup_opens_the_spectrum_dispatcher() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_fourier_spectrum(AnalysisSurfaceHandle(227), &mut host);

        assert_eq!(host.0, ["record:FourierSpeMnu", "fourier:227:Spectrum"]);
    }

    #[test]
    fn fourier_spectrum_menu_opens_the_spectrum_dispatcher() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.open_fourier_spectrum_from_menu(AnalysisSurfaceHandle(229), &mut host);

        assert_eq!(
            host.0,
            ["record:DFFourierSpectrumMnu", "fourier:229:Spectrum",]
        );
    }

    #[test]
    fn refuse_click_timer_stops_and_clears_only_object_edit_mode() {
        let mut object_edit = Window {
            interaction_mode: 19,
            ..Window::default()
        };
        let mut other_mode = Window {
            interaction_mode: 3,
            ..Window::default()
        };
        object_edit.start_refuse_click_timer();
        other_mode.start_refuse_click_timer();

        object_edit.refuse_click_timer_elapsed();
        other_mode.refuse_click_timer_elapsed();

        assert!(!object_edit.refuse_click_timer_active());
        assert_eq!(object_edit.interaction_mode(), 0);
        assert!(!other_mode.refuse_click_timer_active());
        assert_eq!(other_mode.interaction_mode(), 3);
    }

    #[test]
    fn delete_cursor_popup_delegates_selected_cursor_removal() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.delete_selected_cursor(AnalysisSurfaceHandle(229), &mut host);

        assert_eq!(host.0, ["record:DeleteCursorMnu", "delete-cursor:229"]);
    }

    #[test]
    fn delete_figure_popup_delegates_pure_figure_removal() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.delete_selected_figures(AnalysisSurfaceHandle(233), &mut host);

        assert_eq!(host.0, ["record:DeleteFigureMnu", "delete-figures:233"]);
    }

    #[test]
    fn accepted_print_range_restores_preview_and_completes_the_job() {
        let mut window = Window::default();
        let mut host = PrintHost {
            selection: Some(DiagramPrintRange::Pages { first: 2, last: 4 }),
            preview_mode: Some(7),
            aborted: false,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.print_diagram(AnalysisSurfaceHandle(239), 6, 2, &mut host);

        assert_eq!(
            host.requests,
            [DiagramPrintDialogRequest {
                page_count: 6,
                current_page: 3,
                copies: 1,
                help_context: 0x1fc,
            }]
        );
        assert_eq!(
            host.events,
            [
                "record:DFPrintMnu",
                "dialog",
                "suspend-preview:239",
                "begin:TINA Diagram",
                "show-abort",
                "pages:2-4",
                "end",
                "close-abort",
                "restore-preview:239:7",
                "clear-caches",
                "refresh-layout",
            ]
        );
    }

    #[test]
    fn cancelled_print_still_clears_caches_and_refreshes_layout() {
        let mut window = Window::default();
        let mut host = PrintHost {
            selection: None,
            preview_mode: None,
            aborted: false,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.print_diagram(AnalysisSurfaceHandle(241), 5, 1, &mut host);

        assert_eq!(
            host.events,
            [
                "record:DFPrintMnu",
                "dialog",
                "clear-caches",
                "refresh-layout",
            ]
        );
    }

    #[test]
    fn aborted_current_page_print_skips_end_job() {
        let mut window = Window::default();
        let mut host = PrintHost {
            selection: Some(DiagramPrintRange::Current),
            preview_mode: None,
            aborted: true,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.print_diagram(AnalysisSurfaceHandle(251), 9, 3, &mut host);

        assert!(host.events.contains(&"pages:4-4".to_owned()));
        assert!(!host.events.contains(&"end".to_owned()));
    }

    #[test]
    fn all_and_unsupported_print_ranges_keep_recovered_dispatch_rules() {
        for (range, expected_pages) in [
            (DiagramPrintRange::All, Some("pages:1-8")),
            (DiagramPrintRange::Unsupported, None),
        ] {
            let mut window = Window::default();
            let mut host = PrintHost {
                selection: Some(range),
                preview_mode: None,
                aborted: false,
                requests: Vec::new(),
                events: Vec::new(),
            };

            window.print_diagram(AnalysisSurfaceHandle(257), 8, 0, &mut host);

            assert_eq!(
                host.events
                    .iter()
                    .find(|event| event.starts_with("pages:"))
                    .map(String::as_str),
                expected_pages
            );
        }
    }

    #[test]
    fn printer_setup_always_clears_page_caches_and_refreshes_layout() {
        let mut window = Window::default();
        let mut host = PrintHost {
            selection: None,
            preview_mode: None,
            aborted: false,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.open_printer_setup(&mut host);

        assert_eq!(
            host.events,
            [
                "record:DFPrintSetupMnu",
                "printer-setup:509",
                "clear-caches",
                "refresh-layout",
            ]
        );
    }

    #[test]
    fn margin_editor_is_shown_before_its_controls_are_refreshed() {
        let mut window = Window::default();
        let mut host = MarginEditorHost::default();

        window.open_margin_editor(&mut host);

        assert_eq!(host.0, ["record:DFMarginsBtn", "show", "refresh"]);
    }

    #[test]
    fn full_diagram_export_restores_the_live_canvas_and_display() {
        let mut window = Window::default();
        let mut host = DiagramRenderHost {
            current_canvas: DiagramCanvasHandle(503),
            events: Vec::new(),
        };

        window.render_full_diagram_to_canvas(DiagramCanvasHandle(509), 800, 600, &mut host);

        assert_eq!(host.current_canvas, DiagramCanvasHandle(503));
        assert_eq!(
            host.events,
            [
                "viewport:0:0:800:600",
                "canvas:503->509",
                "layout",
                "paint-full-white",
                "canvas:509->503",
                "restore-live-and-repaint",
            ]
        );
    }

    #[test]
    fn exact_curve_selection_exports_only_the_first_curve() {
        let mut window = Window::default();
        let mut host = TextExportHost {
            category: 2,
            panels: vec![DiagramPanelExportCandidate {
                panel: DiagramPanelHandle(523),
                member_count: 1,
                mode: 0,
            }],
            dialog_results: VecDeque::from([Some(PathBuf::from("curve.txt"))]),
            stop_text_panel: None,
            events: Vec::new(),
        };

        window.export_diagram_as_text(&mut host);

        assert_eq!(
            host.events,
            [
                "record:DFAsTextMnu",
                "category:2",
                "first-selected",
                "dialog:SelectedCurve",
                "curve:521:curve.txt",
            ]
        );
    }

    #[test]
    fn filter_input_export_returns_the_first_pure_selected_curve() {
        let mut window = Window::default();
        let mut host = TextExportHost {
            category: 2,
            panels: Vec::new(),
            dialog_results: VecDeque::new(),
            stop_text_panel: None,
            events: Vec::new(),
        };

        let curve = window.export_first_selected_curve(Path::new("session/tcurve.txt"), &mut host);

        assert_eq!(curve, Some(AnalysisObjectHandle(521)));
        assert_eq!(
            host.events,
            [
                "category:2",
                "first-selected",
                "curve:521:session/tcurve.txt",
            ]
        );
    }

    #[test]
    fn filter_input_export_ignores_a_non_curve_selection() {
        let mut window = Window::default();
        let mut host = TextExportHost {
            category: 6,
            panels: Vec::new(),
            dialog_results: VecDeque::new(),
            stop_text_panel: None,
            events: Vec::new(),
        };

        let curve = window.export_first_selected_curve(Path::new("session/tcurve.txt"), &mut host);

        assert_eq!(curve, None);
        assert_eq!(host.events, ["category:6"]);
    }

    #[test]
    fn accepted_grid_color_updates_all_pages_before_redraw() {
        let mut window = Window::default();
        let mut host = GridColorHost {
            selection: Some(Color::from_rgb(0.2, 0.4, 0.6)),
            events: Vec::new(),
        };

        window.set_document_grid_color(&mut host);

        assert_eq!(
            host.events,
            [
                "record:DFSetgridcolorMnu",
                "dialog-unseeded",
                "clear-all-page-caches",
                "set-grid:0.2:0.4:0.6:1.0",
                "layout",
                "redraw",
            ]
        );
    }

    #[test]
    fn cancelled_grid_color_dialog_changes_no_model_state() {
        let mut window = Window::default();
        let mut host = GridColorHost {
            selection: None,
            events: Vec::new(),
        };

        window.set_document_grid_color(&mut host);

        assert_eq!(host.events, ["record:DFSetgridcolorMnu", "dialog-unseeded"]);
    }

    #[test]
    fn clear_all_no_confirmation_hides_cursor_and_repaints() {
        let mut window = Window::default();
        let mut host = ClearAllHost {
            confirmation_required: false,
            confirmation: ClearAllConfirmation::Cancel,
            clear_after_save_as: false,
            cursor_visible: true,
            events: Vec::new(),
        };

        window.clear_all_pages(&mut host);

        assert_eq!(
            host.events,
            [
                "record:DFClearAllMnu",
                "confirmation-required:false",
                "clear-all",
                "cursor-visible:true",
                "hide-cursor",
                "repaint",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn clear_all_cancel_only_refreshes_command_states() {
        let mut window = Window::default();
        let mut host = ClearAllHost {
            confirmation_required: true,
            confirmation: ClearAllConfirmation::Cancel,
            clear_after_save_as: true,
            cursor_visible: true,
            events: Vec::new(),
        };

        window.clear_all_pages(&mut host);

        assert_eq!(
            host.events,
            [
                "record:DFClearAllMnu",
                "confirmation-required:true",
                "confirm:Cancel",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn clear_all_yes_uses_the_post_save_gate() {
        let mut window = Window::default();
        let mut host = ClearAllHost {
            confirmation_required: true,
            confirmation: ClearAllConfirmation::Yes,
            clear_after_save_as: false,
            cursor_visible: true,
            events: Vec::new(),
        };

        window.clear_all_pages(&mut host);

        assert_eq!(
            host.events,
            [
                "record:DFClearAllMnu",
                "confirmation-required:true",
                "confirm:Yes",
                "save-as",
                "clear-gate:false",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn accepted_process_curve_dialog_runs_and_restores_the_separator() {
        let mut window = Window::default();
        let mut host = CurveProcessHost {
            categories: VecDeque::from([2, 2]),
            accepted: true,
            events: Vec::new(),
        };

        window.filter_first_selected_curve(&mut host);

        assert_eq!(
            host.events,
            [
                "separator:.",
                "category:2",
                "working-path",
                "category:2",
                "first-selected",
                "write:563:session\\tcurve.txt",
                "configure:563:session",
                "remove-stale",
                "dialog:true",
                "run-and-publish",
                "separator:,",
            ]
        );
    }

    #[test]
    fn invalid_process_curve_selection_shows_error_and_restores_separator() {
        let mut window = Window::default();
        let mut host = CurveProcessHost {
            categories: VecDeque::from([4]),
            accepted: true,
            events: Vec::new(),
        };

        window.filter_first_selected_curve(&mut host);

        assert_eq!(
            host.events,
            [
                "separator:.",
                "category:4",
                "invalid-selection",
                "separator:,"
            ]
        );
    }

    #[test]
    fn panel_text_export_skips_ineligible_panels_and_continues_after_cancel() {
        let mut window = Window::default();
        let mut host = TextExportHost {
            category: 0,
            panels: vec![
                DiagramPanelExportCandidate {
                    panel: DiagramPanelHandle(523),
                    member_count: 1,
                    mode: 0,
                },
                DiagramPanelExportCandidate {
                    panel: DiagramPanelHandle(541),
                    member_count: 2,
                    mode: 0,
                },
                DiagramPanelExportCandidate {
                    panel: DiagramPanelHandle(547),
                    member_count: 1,
                    mode: 2,
                },
                DiagramPanelExportCandidate {
                    panel: DiagramPanelHandle(557),
                    member_count: 1,
                    mode: 0,
                },
            ],
            dialog_results: VecDeque::from([None, Some(PathBuf::from("panel.CSD"))]),
            stop_text_panel: None,
            events: Vec::new(),
        };

        window.export_diagram_as_text(&mut host);

        assert_eq!(
            host.events,
            [
                "record:DFAsTextMnu",
                "category:0",
                "panels",
                "dialog:DiagramPanel { one_based_index: 1 }",
                "dialog:DiagramPanel { one_based_index: 4 }",
                "csd:557:panel.CSD",
            ]
        );
    }

    #[test]
    fn circle_tool_creates_a_pending_figure_for_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_circle_tool(Some(AnalysisSurfaceHandle(269)), &mut host);

        assert_eq!(window.pending_figure(), Some(FigureDraftHandle(263)));
        assert_eq!(window.interaction_mode(), 7);
        assert_eq!(host.0, ["record:DFCircleBtn", "create-circle:269"]);
    }

    #[test]
    fn circle_tool_without_a_surface_falls_back_to_selection() {
        let mut window = Window {
            interaction_mode: 7,
            pending_figure: Some(FigureDraftHandle(271)),
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.activate_circle_tool(None, &mut host);

        assert_eq!(window.pending_figure(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:DFCircleBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn line_tool_creates_a_pending_figure_for_an_active_surface() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_line_tool(Some(AnalysisSurfaceHandle(281)), &mut host);

        assert_eq!(window.pending_figure(), Some(FigureDraftHandle(277)));
        assert_eq!(window.interaction_mode(), 9);
        assert_eq!(host.0, ["record:DFLineBtn", "create-line:281"]);
    }

    #[test]
    fn line_tool_without_a_surface_falls_back_to_selection() {
        let mut window = Window {
            interaction_mode: 9,
            pending_figure: Some(FigureDraftHandle(283)),
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.activate_line_tool(None, &mut host);

        assert_eq!(window.pending_figure(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            ["record:DFLineBtn", "select-down:true", "record:DFSelectBtn",]
        );
    }

    #[test]
    fn popup_line_tool_presses_the_grouped_button_and_delegates() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_popup_line_tool(Some(AnalysisSurfaceHandle(307)), &mut host);

        assert_eq!(window.pending_figure(), Some(FigureDraftHandle(277)));
        assert_eq!(window.interaction_mode(), 9);
        assert_eq!(
            host.0,
            ["line-down:true", "record:DFLineBtn", "create-line:307"]
        );
    }

    #[test]
    fn popup_circle_tool_presses_the_grouped_button_and_delegates() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_popup_circle_tool(Some(AnalysisSurfaceHandle(311)), &mut host);

        assert_eq!(window.pending_figure(), Some(FigureDraftHandle(263)));
        assert_eq!(window.interaction_mode(), 7);
        assert_eq!(
            host.0,
            [
                "circle-down:true",
                "record:DFCircleBtn",
                "create-circle:311",
            ]
        );
    }

    #[test]
    fn cursor_b_curve_alignment_applies_delta_and_expands_axis_limits() {
        let mut window = Window::default();
        let mut host = CursorSynchronizationHost {
            input: CursorCurveAlignmentInput {
                cursor_a_x: 8.0,
                cursor_b_x: 3.0,
                curve_shift: 1.5,
                data_min_x: -10.0,
                data_max_x: 12.0,
                allowed_min_x: -2.0,
                allowed_max_x: 15.0,
            },
            alignment: None,
            events: Vec::new(),
        };

        window.synchronize_cursor_b_curve(AnalysisSurfaceHandle(503), &mut host);

        assert_eq!(
            host.alignment,
            Some(CursorCurveAlignment {
                curve_shift: 6.5,
                allowed_min_x: -3.5,
                allowed_max_x: 18.5,
            })
        );
        assert_eq!(host.events, ["input:503", "apply:503", "redraw:503"]);
    }

    #[test]
    fn cursor_a_down_arms_one_shot_placement_and_reconciles() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.toggle_cursor_a(Some(AnalysisSurfaceHandle(313)), true, &mut host);

        assert_eq!(window.interaction_mode(), 12);
        assert_eq!(
            host.0,
            [
                "record:CursorABtn",
                "cursor-aux-down:true",
                "reconcile-cursors:313",
            ]
        );
    }

    #[test]
    fn cursor_a_released_removes_it_and_returns_to_neutral() {
        let mut window = Window {
            interaction_mode: 12,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.toggle_cursor_a(Some(AnalysisSurfaceHandle(317)), false, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:CursorABtn",
                "remove-cursor:317:A",
                "select-down:true",
                "reconcile-cursors:317",
            ]
        );
    }

    #[test]
    fn cursor_a_without_a_surface_uses_select_without_reconciliation() {
        let mut window = Window {
            interaction_mode: 12,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.toggle_cursor_a(None, true, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:CursorABtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn cursor_b_down_arms_one_shot_placement_and_reconciles() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.toggle_cursor_b(Some(AnalysisSurfaceHandle(331)), true, &mut host);

        assert_eq!(window.interaction_mode(), 13);
        assert_eq!(
            host.0,
            [
                "record:CursorBBtn",
                "cursor-aux-down:true",
                "reconcile-cursors:331",
            ]
        );
    }

    #[test]
    fn cursor_b_released_removes_it_and_returns_to_neutral() {
        let mut window = Window {
            interaction_mode: 13,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.toggle_cursor_b(Some(AnalysisSurfaceHandle(337)), false, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:CursorBBtn",
                "remove-cursor:337:B",
                "select-down:true",
                "reconcile-cursors:337",
            ]
        );
    }

    #[test]
    fn cursor_b_without_a_surface_uses_select_without_reconciliation() {
        let mut window = Window {
            interaction_mode: 13,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.toggle_cursor_b(None, true, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:CursorBBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn arrow_rebinding_with_a_surface_arms_mode_fourteen() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_arrow_rebinding(Some(AnalysisSurfaceHandle(347)), &mut host);

        assert_eq!(window.interaction_mode(), 14);
        assert_eq!(host.0, ["record:ArrowBtn"]);
    }

    #[test]
    fn arrow_rebinding_without_a_surface_uses_select() {
        let mut window = Window {
            interaction_mode: 14,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.activate_arrow_rebinding(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            ["record:ArrowBtn", "select-down:true", "record:DFSelectBtn",]
        );
    }

    #[test]
    fn auto_label_with_a_surface_arms_mode_twenty() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.activate_auto_label(Some(AnalysisSurfaceHandle(349)), &mut host);

        assert_eq!(window.interaction_mode(), 20);
        assert_eq!(host.0, ["record:AutoLabelBtn"]);
    }

    #[test]
    fn auto_label_without_a_surface_uses_select() {
        let mut window = Window {
            interaction_mode: 20,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.activate_auto_label(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:AutoLabelBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn auto_legend_updates_vector_labels_and_returns_to_select() {
        let mut window = Window {
            interaction_mode: 20,
            ..Window::default()
        };
        let mut host = LegendHost {
            kind: AutoLegendKind::VectorLabels,
            events: Vec::new(),
        };

        window.create_auto_legend(Some(AnalysisSurfaceHandle(359)), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            [
                "record:DFAutoCurveLabelsBtn",
                "classify:359",
                "vector-labels:359",
                "select-down:true",
            ]
        );
    }

    #[test]
    fn auto_legend_stages_curve_text_with_twenty_entry_cap() {
        let mut window = Window::default();
        let mut host = LegendHost {
            kind: AutoLegendKind::CurveLegend,
            events: Vec::new(),
        };

        window.create_auto_legend(Some(AnalysisSurfaceHandle(367)), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(353)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "record:DFAutoCurveLabelsBtn",
                "classify:367",
                "curve-legend:367:20",
                "prepare-legend:353:367:-100:-100",
                "legend-outline:-100:-100:90:40",
            ]
        );
    }

    #[test]
    fn auto_legend_without_a_surface_uses_select() {
        let mut window = Window {
            interaction_mode: 6,
            ..Window::default()
        };
        let mut host = LegendHost {
            kind: AutoLegendKind::CurveLegend,
            events: Vec::new(),
        };

        window.create_auto_legend(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            [
                "record:DFAutoCurveLabelsBtn",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn open_diagram_archives_loads_every_selected_path_in_order() {
        let mut window = Window::default();
        let mut host = DiagramOpenHost {
            selection: Some(vec![
                PathBuf::from("first.tdr"),
                PathBuf::from("second.tdr"),
            ]),
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.open_diagram_archives(&mut host);

        assert_eq!(
            host.requests,
            [DiagramOpenDialogRequest {
                default_extension: "tdr",
                initial_file_name: "*.tdr",
                filter: super::FileDialogFilter {
                    name: "Tina diagram",
                    pattern: "*.tdr",
                },
                allow_multiple: true,
                file_must_exist: true,
                help_context: 0x1f7,
            }]
        );
        assert_eq!(
            host.events,
            [
                "record:DFOpenMnu",
                "dialog",
                "load:first.tdr",
                "load:second.tdr",
            ]
        );
    }

    #[test]
    fn cancelled_diagram_open_does_not_load_a_page() {
        let mut window = Window::default();
        let mut host = DiagramOpenHost {
            selection: None,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.open_diagram_archives(&mut host);

        assert_eq!(host.events, ["record:DFOpenMnu", "dialog"]);
    }

    #[test]
    fn diagram_window_help_resolves_tina_chm_and_opens_context_501() {
        let mut window = Window::default();
        let mut host = HelpHost::default();

        window.open_diagram_window_help(Path::new("install"), &mut host);

        assert_eq!(
            host.0,
            [
                "record:DFDiagramViewerMnu".to_owned(),
                format!(
                    "resolve:{}",
                    Path::new("install").join("TINA.CHM").display()
                ),
                format!("open:{}:501", Path::new("install/de/TINA.CHM").display()),
            ]
        );
    }

    #[test]
    fn copy_selection_routes_each_recovered_clipboard_format() {
        for (format, expected) in [
            (CopySelectionFormat::EditableDiagramData, "editable:465"),
            (CopySelectionFormat::RenderedMetafile, "metafile:465"),
        ] {
            let mut window = Window::default();
            let mut host = ClipboardHost {
                format,
                events: Vec::new(),
            };

            window.copy_selection(Some(AnalysisSurfaceHandle(465)), &mut host);

            assert_eq!(host.events, ["record:DFCopyMnu", "classify:465", expected]);
        }
    }

    #[test]
    fn copy_selection_without_a_surface_restores_select_mode() {
        let mut window = Window {
            interaction_mode: 6,
            ..Window::default()
        };
        let mut host = ClipboardHost {
            format: CopySelectionFormat::RenderedMetafile,
            events: Vec::new(),
        };

        window.copy_selection(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            ["record:DFCopyMnu", "select-down:true", "select"]
        );
    }

    #[test]
    fn cut_copies_before_running_inherited_modal_form() {
        let mut window = Window::default();
        let mut host = ClipboardHost {
            format: CopySelectionFormat::EditableDiagramData,
            events: Vec::new(),
        };

        window.cut_via_copy_and_modal_form(Some(AnalysisSurfaceHandle(467)), &mut host);

        assert_eq!(
            host.events,
            [
                "record:DFCopyMnu",
                "classify:467",
                "editable:467",
                "modal-form",
            ]
        );
    }

    #[test]
    fn cut_without_a_surface_restores_select_mode_then_runs_modal_form() {
        let mut window = Window {
            interaction_mode: 6,
            ..Window::default()
        };
        let mut host = ClipboardHost {
            format: CopySelectionFormat::RenderedMetafile,
            events: Vec::new(),
        };

        window.cut_via_copy_and_modal_form(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            [
                "record:DFCopyMnu",
                "select-down:true",
                "select",
                "modal-form",
            ]
        );
    }

    #[test]
    fn paste_editable_data_refreshes_only_when_the_handle_is_available() {
        for (available, expected) in [
            (
                true,
                vec!["record:DFPasteMnu", "format", "editable:469", "refresh:469"],
            ),
            (false, vec!["record:DFPasteMnu", "format", "editable:469"]),
        ] {
            let mut window = Window::default();
            let mut host = PasteHost {
                format: Some(PasteClipboardFormat::EditableDiagramData),
                available,
                events: Vec::new(),
            };

            window.paste(Some(AnalysisSurfaceHandle(469)), &mut host);

            assert_eq!(host.events, expected);
            assert_eq!(window.interaction_mode(), 0);
            assert_eq!(window.pending_paste(), None);
        }
    }

    #[test]
    fn paste_stages_picture_text_and_metafile_modes() {
        for (format, mode) in [
            (PasteClipboardFormat::DelphiPicture, 6),
            (PasteClipboardFormat::Text, 6),
            (PasteClipboardFormat::EnhancedMetafile, 16),
            (PasteClipboardFormat::MetafilePicture, 16),
        ] {
            let mut window = Window::default();
            let mut host = PasteHost {
                format: Some(format),
                available: true,
                events: Vec::new(),
            };

            window.paste(Some(AnalysisSurfaceHandle(487)), &mut host);

            assert_eq!(window.interaction_mode(), mode);
            assert_eq!(window.pending_paste(), Some(PasteObjectHandle(479)));
            assert_eq!(
                host.events,
                [
                    "record:DFPasteMnu".to_owned(),
                    "format".to_owned(),
                    format!("stage:487:{format:?}"),
                ]
            );
        }
    }

    #[test]
    fn unsupported_paste_data_and_missing_surface_do_not_stage_content() {
        let mut unsupported = Window::default();
        let mut unsupported_host = PasteHost {
            format: None,
            available: true,
            events: Vec::new(),
        };
        unsupported.paste(Some(AnalysisSurfaceHandle(491)), &mut unsupported_host);
        assert_eq!(unsupported_host.events, ["record:DFPasteMnu", "format"]);
        assert_eq!(unsupported.pending_paste(), None);

        let mut missing = Window {
            interaction_mode: 16,
            ..Window::default()
        };
        let mut missing_host = PasteHost {
            format: Some(PasteClipboardFormat::Text),
            available: true,
            events: Vec::new(),
        };
        missing.paste(None, &mut missing_host);
        assert_eq!(missing.interaction_mode(), 0);
        assert_eq!(
            missing_host.events,
            ["record:DFPasteMnu", "select-down:true", "select"]
        );
    }

    #[test]
    fn save_as_with_a_surface_only_records_the_demo_command() {
        let mut window = Window::default();
        let mut host = CommandHost::default();

        window.save_as_demo_path(Some(AnalysisSurfaceHandle(467)), &mut host);

        assert_eq!(host.0, ["record:DFSaveAsMnu"]);
    }

    #[test]
    fn save_as_without_a_surface_restores_select_mode() {
        let mut window = Window {
            interaction_mode: 9,
            ..Window::default()
        };
        let mut host = CommandHost::default();

        window.save_as_demo_path(None, &mut host);

        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.0,
            [
                "record:DFSaveAsMnu",
                "select-down:true",
                "record:DFSelectBtn",
            ]
        );
    }

    #[test]
    fn save_rewrites_a_named_document_without_a_modified_check() {
        let mut window = Window::default();
        let mut host = DiagramSaveHost {
            path: PathBuf::from("results/diagram.tdr"),
            events: Vec::new(),
        };

        window.save_diagram(Some(AnalysisSurfaceHandle(571)), &mut host);

        assert_eq!(
            host.events,
            ["record:DFSaveMnu", "path:571", "save:results/diagram.tdr",]
        );
    }

    #[test]
    fn save_noname_delegates_to_the_demo_save_as_path() {
        let mut window = Window::default();
        let mut host = DiagramSaveHost {
            path: PathBuf::from("Noname"),
            events: Vec::new(),
        };

        window.save_diagram(Some(AnalysisSurfaceHandle(577)), &mut host);

        assert_eq!(
            host.events,
            ["record:DFSaveMnu", "path:577", "demo-save-as:577"]
        );
    }

    #[test]
    fn save_without_a_surface_restores_the_default_tool() {
        let mut window = Window::default();
        let mut host = DiagramSaveHost {
            path: PathBuf::from("unused.tdr"),
            events: Vec::new(),
        };

        window.save_diagram(None, &mut host);

        assert_eq!(host.events, ["record:DFSaveMnu", "default-tool"]);
    }

    #[test]
    fn component_parameter_viewer_stays_armed_after_the_immediate_attempt() {
        let mut window = Window::default();
        let mut host = ComponentParameterHost::default();

        window.open_component_parameters(AnalysisSurfaceHandle(587), &mut host);

        assert_eq!(window.interaction_mode(), 0x15);
        assert_eq!(host.0, ["record:DFTableMnu", "open:587"]);
    }

    #[test]
    fn showing_analysis_window_refreshes_localizes_and_updates_scroll_box() {
        let mut window = Window::default();
        let mut host = WindowShowHost::default();

        window.show_analysis_window(Some(AnalysisSurfaceHandle(593)), &mut host);

        assert_eq!(
            host.0,
            ["refresh-commands:593", "localize", "image-scroll-box:false"]
        );
    }

    #[test]
    fn showing_analysis_window_without_a_diagram_still_localizes() {
        let mut window = Window::default();
        let mut host = WindowShowHost::default();

        window.show_analysis_window(None, &mut host);

        assert_eq!(host.0, ["localize", "image-scroll-box:false"]);
    }

    #[test]
    fn copy_button_mouse_down_records_the_translated_position() {
        let mut window = Window::default();
        let mut host = CopyButtonMouseHost::default();

        window.copy_button_mouse_down(
            AnalysisSurfaceHandle(599),
            Point::new(5.0, 7.0),
            keyboard::Modifiers::empty(),
            &mut host,
        );

        assert_eq!(host.0, ["translate:5:7", "record:35:47"]);
    }

    #[test]
    fn control_copy_button_mouse_down_writes_diagram_ini_after_recording() {
        let mut window = Window::default();
        let mut host = CopyButtonMouseHost::default();

        window.copy_button_mouse_down(
            AnalysisSurfaceHandle(601),
            Point::new(11.0, 13.0),
            keyboard::Modifiers::CTRL,
            &mut host,
        );

        assert_eq!(
            host.0,
            [
                "translate:11:13",
                "record:41:53",
                "working-directory",
                "write:601:work\\diagram.ini",
            ]
        );
    }

    #[test]
    fn accepted_ripple_report_enters_pending_text_placement() {
        let mut window = Window::default();
        let mut host = RippleReportHost {
            draft: Some(TextDraftHandle(607)),
            result: TextEditorResult::Accepted { line_count: 3 },
            events: Vec::new(),
        };

        window.create_ripple_report(AnalysisSurfaceHandle(613), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(607)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "build:613",
                "configure:607:Courier:10",
                "edit:607",
                "apply:607",
                "font:607",
                "prepare:607:613:-100:-100",
                "outline:-100:-100:120:50",
            ]
        );
    }

    #[test]
    fn cancelled_ripple_report_discards_the_pending_text() {
        let mut window = Window::default();
        let mut host = RippleReportHost {
            draft: Some(TextDraftHandle(617)),
            result: TextEditorResult::Cancelled,
            events: Vec::new(),
        };

        window.create_ripple_report(AnalysisSurfaceHandle(619), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            [
                "build:619",
                "configure:617:Courier:10",
                "edit:617",
                "discard:617",
            ]
        );
    }

    #[test]
    fn accepted_averages_report_enters_pending_text_placement() {
        let mut window = Window::default();
        let mut host = AveragesReportHost {
            draft: Some(TextDraftHandle(659)),
            result: TextEditorResult::Accepted { line_count: 5 },
            events: Vec::new(),
        };

        window.create_averages_report(AnalysisSurfaceHandle(661), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(659)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "build:661",
                "copy-font:659",
                "edit:659",
                "apply:659",
                "update-font:659",
                "prepare:659:661:-100:-100",
                "outline:-100:-100:130:60",
            ]
        );
    }

    #[test]
    fn empty_averages_report_is_discarded() {
        let mut window = Window::default();
        let mut host = AveragesReportHost {
            draft: Some(TextDraftHandle(673)),
            result: TextEditorResult::Accepted { line_count: 0 },
            events: Vec::new(),
        };

        window.create_averages_report(AnalysisSurfaceHandle(677), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            ["build:677", "copy-font:673", "edit:673", "discard:673"]
        );
    }

    #[test]
    fn accepted_crossover_frequency_text_commits_curve_bound_annotation() {
        let mut window = Window::default();
        let mut host = CrossoverFrequencyHost {
            draft: Some(TextDraftHandle(683)),
            result: TextEditorResult::Accepted { line_count: 1 },
            events: Vec::new(),
        };

        window.create_crossover_frequency_annotation(AnalysisSurfaceHandle(691), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(683)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(host.events, ["stage:691", "edit:683", "commit:683"]);
    }

    #[test]
    fn failed_crossover_calculation_creates_no_annotation() {
        let mut window = Window::default();
        let mut host = CrossoverFrequencyHost {
            draft: None,
            result: TextEditorResult::Accepted { line_count: 1 },
            events: Vec::new(),
        };

        window.create_crossover_frequency_annotation(AnalysisSurfaceHandle(701), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.events, ["stage:701"]);
    }

    #[test]
    fn empty_crossover_frequency_text_discards_staged_annotation() {
        let mut window = Window::default();
        let mut host = CrossoverFrequencyHost {
            draft: Some(TextDraftHandle(709)),
            result: TextEditorResult::Accepted { line_count: 0 },
            events: Vec::new(),
        };

        window.create_crossover_frequency_annotation(AnalysisSurfaceHandle(719), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.events, ["stage:719", "edit:709", "discard:709"]);
    }

    #[test]
    fn accepted_gain_margin_uses_negative_180_degree_reference() {
        let mut window = Window::default();
        let mut host = GainMarginHost {
            phase_reference: GainMarginPhaseReference::Negative180Degrees,
            draft: Some(TextDraftHandle(727)),
            result: TextEditorResult::Accepted { line_count: 2 },
            events: Vec::new(),
        };

        window.create_gain_margin_annotation(AnalysisSurfaceHandle(733), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(727)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "phase-reference",
                "stage:733:Negative180Degrees",
                "edit:727",
                "commit:727",
            ]
        );
    }

    #[test]
    fn failed_gain_margin_calculation_uses_zero_degree_reference() {
        let mut window = Window::default();
        let mut host = GainMarginHost {
            phase_reference: GainMarginPhaseReference::ZeroDegrees,
            draft: None,
            result: TextEditorResult::Accepted { line_count: 2 },
            events: Vec::new(),
        };

        window.create_gain_margin_annotation(AnalysisSurfaceHandle(739), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.events, ["phase-reference", "stage:739:ZeroDegrees"]);
    }

    #[test]
    fn cancelled_gain_margin_discards_staged_annotation() {
        let mut window = Window::default();
        let mut host = GainMarginHost {
            phase_reference: GainMarginPhaseReference::ZeroDegrees,
            draft: Some(TextDraftHandle(743)),
            result: TextEditorResult::Cancelled,
            events: Vec::new(),
        };

        window.create_gain_margin_annotation(AnalysisSurfaceHandle(751), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            [
                "phase-reference",
                "stage:751:ZeroDegrees",
                "edit:743",
                "discard:743",
            ]
        );
    }

    #[test]
    fn accepted_phase_margin_uses_negative_180_degree_reference() {
        let mut window = Window::default();
        let mut host = PhaseMarginHost {
            phase_reference: GainMarginPhaseReference::Negative180Degrees,
            draft: Some(TextDraftHandle(757)),
            result: TextEditorResult::Accepted { line_count: 2 },
            events: Vec::new(),
        };

        window.create_phase_margin_annotation(AnalysisSurfaceHandle(761), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(757)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "phase-reference",
                "stage:761:Negative180Degrees",
                "edit:757",
                "commit:757",
            ]
        );
    }

    #[test]
    fn failed_phase_margin_calculation_uses_zero_degree_reference() {
        let mut window = Window::default();
        let mut host = PhaseMarginHost {
            phase_reference: GainMarginPhaseReference::ZeroDegrees,
            draft: None,
            result: TextEditorResult::Accepted { line_count: 2 },
            events: Vec::new(),
        };

        window.create_phase_margin_annotation(AnalysisSurfaceHandle(769), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(host.events, ["phase-reference", "stage:769:ZeroDegrees"]);
    }

    #[test]
    fn empty_phase_margin_text_discards_staged_annotation() {
        let mut window = Window::default();
        let mut host = PhaseMarginHost {
            phase_reference: GainMarginPhaseReference::ZeroDegrees,
            draft: Some(TextDraftHandle(773)),
            result: TextEditorResult::Accepted { line_count: 0 },
            events: Vec::new(),
        };

        window.create_phase_margin_annotation(AnalysisSurfaceHandle(787), &mut host);

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            [
                "phase-reference",
                "stage:787:ZeroDegrees",
                "edit:773",
                "discard:773",
            ]
        );
    }

    #[test]
    fn accepted_analysis_result_annotation_binds_registers_and_enters_placement() {
        let mut window = Window::default();
        let request = AnalysisResultAnnotationRequest {
            lines: vec!["Gain margin".to_owned(), "12 dB".to_owned()],
            curve: Some(AnalysisObjectHandle(17)),
            anchor: Point::new(2.5, 4.0),
        };
        let mut host = ResultAnnotationHost {
            selected_point: None,
            edit_result: TextEditorResult::Accepted { line_count: 2 },
            events: Vec::new(),
        };

        window.edit_analysis_result_annotation(
            Some(AnalysisSurfaceHandle(19)),
            &request,
            &mut host,
        );

        assert_eq!(window.pending_text(), Some(TextDraftHandle(911)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "stage:Gain margin|12 dB",
                "edit:911",
                "apply:911",
                "bind:911:17:2.5:4",
                "register:19:911",
                "finalize:911",
                "preview:911:19:-100:-100",
                "repaint:-100:-100:40:20",
            ]
        );
    }

    #[test]
    fn empty_analysis_result_annotation_is_discarded_and_restores_tool() {
        let mut window = Window::default();
        let request = AnalysisResultAnnotationRequest {
            lines: vec!["empty after edit".to_owned()],
            curve: None,
            anchor: Point::ORIGIN,
        };
        let mut host = ResultAnnotationHost {
            selected_point: None,
            edit_result: TextEditorResult::Accepted { line_count: 0 },
            events: Vec::new(),
        };

        window.edit_analysis_result_annotation(
            Some(AnalysisSurfaceHandle(23)),
            &request,
            &mut host,
        );

        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(
            host.events,
            ["stage:empty after edit", "edit:911", "discard:911"]
        );
    }

    #[test]
    fn analysis_result_annotation_without_diagram_is_a_no_op() {
        let mut window = Window::default();
        let request = AnalysisResultAnnotationRequest {
            lines: vec!["Crossover".to_owned()],
            curve: None,
            anchor: Point::ORIGIN,
        };
        let mut host = ResultAnnotationHost {
            selected_point: None,
            edit_result: TextEditorResult::Accepted { line_count: 1 },
            events: Vec::new(),
        };

        window.edit_analysis_result_annotation(None, &request, &mut host);

        assert!(host.events.is_empty());
        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
    }

    #[test]
    fn selected_curve_point_starts_empty_curve_bound_annotation() {
        let mut window = Window::default();
        let mut host = ResultAnnotationHost {
            selected_point: Some(SelectedCurvePoint {
                curve: AnalysisObjectHandle(29),
                anchor: Point::new(3.0, 8.0),
            }),
            edit_result: TextEditorResult::Accepted { line_count: 1 },
            events: Vec::new(),
        };

        window.annotate_first_selected_curve_point(AnalysisSurfaceHandle(31), &mut host);

        assert_eq!(window.pending_text(), Some(TextDraftHandle(911)));
        assert_eq!(window.interaction_mode(), 6);
        assert_eq!(
            host.events,
            [
                "selected-point:31",
                "stage:",
                "edit:911",
                "apply:911",
                "bind:911:29:3:8",
                "register:31:911",
                "finalize:911",
                "preview:911:31:-100:-100",
                "repaint:-100:-100:40:20",
            ]
        );
    }

    #[test]
    fn unsupported_curve_point_selection_is_a_no_op() {
        let mut window = Window::default();
        let mut host = ResultAnnotationHost {
            selected_point: None,
            edit_result: TextEditorResult::Accepted { line_count: 1 },
            events: Vec::new(),
        };

        window.annotate_first_selected_curve_point(AnalysisSurfaceHandle(37), &mut host);

        assert_eq!(host.events, ["selected-point:37"]);
        assert_eq!(window.pending_text(), None);
        assert_eq!(window.interaction_mode(), 0);
    }

    #[test]
    fn selected_cursor_moves_to_last_equal_global_maximum_sample() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(41),
                cursor: CursorKind::B,
                position: Point::ORIGIN,
            }),
            samples: vec![
                Point::new(-2.0, 4.0),
                Point::new(3.0, 9.0),
                Point::new(7.0, 9.0),
                Point::new(11.0, 5.0),
            ],
            directional_samples: [Vec::new(), Vec::new()],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_global_maximum(AnalysisSurfaceHandle(43), &mut host);

        assert_eq!(
            host.events,
            ["selected-cursor:43", "samples:41", "set-cursor:43:B:7"]
        );
    }

    #[test]
    fn curve_provider_extremum_uses_the_comparator_and_last_accepted_tie() {
        let samples = [
            Point::new(1.0, 4.0),
            Point::new(2.0, 7.0),
            Point::new(3.0, 7.0),
            Point::new(4.0, 6.0),
        ];

        assert_eq!(
            scan_curve_provider_extremum(samples, |candidate, current| candidate >= current),
            Some(Point::new(3.0, 7.0))
        );
        assert_eq!(
            scan_curve_provider_extremum([], |candidate, current| candidate >= current),
            None
        );
    }

    #[test]
    fn minimum_candidate_comparator_is_inclusive() {
        assert!(sample_is_minimum_candidate(-2.0, 1.0));
        assert!(sample_is_minimum_candidate(1.0, 1.0));
        assert!(!sample_is_minimum_candidate(2.0, 1.0));
        assert!(!sample_is_minimum_candidate(f32::NAN, 1.0));
    }

    #[test]
    fn maximum_candidate_comparator_is_inclusive() {
        assert!(sample_is_maximum_candidate(2.0, 1.0));
        assert!(sample_is_maximum_candidate(1.0, 1.0));
        assert!(!sample_is_maximum_candidate(-2.0, 1.0));
        assert!(!sample_is_maximum_candidate(f32::NAN, 1.0));
    }

    #[test]
    fn local_extremum_keeps_plateaus_and_prefers_direction_one_on_a_distance_tie() {
        let start = Point::new(5.0, 2.0);

        assert_eq!(
            find_nearer_local_extremum(
                start,
                [
                    vec![Point::new(4.0, 3.0), Point::new(3.0, 3.0)],
                    vec![Point::new(6.0, 4.0), Point::new(7.0, 4.0)],
                ],
                |candidate, current| candidate >= current,
            ),
            Some(Point::new(7.0, 4.0))
        );
        assert_eq!(
            find_nearer_local_extremum(start, [Vec::new(), Vec::new()], |candidate, current| {
                candidate >= current
            }),
            None
        );
    }

    #[test]
    fn missing_selected_cursor_is_a_global_maximum_no_op() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: None,
            samples: vec![Point::new(5.0, 12.0)],
            directional_samples: [Vec::new(), Vec::new()],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_global_maximum(AnalysisSurfaceHandle(47), &mut host);

        assert_eq!(host.events, ["selected-cursor:47"]);
    }

    #[test]
    fn empty_curve_is_a_global_maximum_no_op() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(53),
                cursor: CursorKind::A,
                position: Point::ORIGIN,
            }),
            samples: Vec::new(),
            directional_samples: [Vec::new(), Vec::new()],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_global_maximum(AnalysisSurfaceHandle(59), &mut host);

        assert_eq!(host.events, ["selected-cursor:59", "samples:53"]);
    }

    #[test]
    fn selected_cursor_moves_to_last_equal_global_minimum_sample() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(61),
                cursor: CursorKind::A,
                position: Point::ORIGIN,
            }),
            samples: vec![
                Point::new(-5.0, 8.0),
                Point::new(2.0, -4.0),
                Point::new(6.0, -4.0),
                Point::new(10.0, 3.0),
            ],
            directional_samples: [Vec::new(), Vec::new()],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_global_minimum(AnalysisSurfaceHandle(67), &mut host);

        assert_eq!(
            host.events,
            ["selected-cursor:67", "samples:61", "set-cursor:67:A:6"]
        );
    }

    #[test]
    fn missing_selected_cursor_is_a_global_minimum_no_op() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: None,
            samples: vec![Point::new(5.0, -12.0)],
            directional_samples: [Vec::new(), Vec::new()],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_global_minimum(AnalysisSurfaceHandle(71), &mut host);

        assert_eq!(host.events, ["selected-cursor:71"]);
    }

    #[test]
    fn empty_curve_is_a_global_minimum_no_op() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(73),
                cursor: CursorKind::B,
                position: Point::ORIGIN,
            }),
            samples: Vec::new(),
            directional_samples: [Vec::new(), Vec::new()],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_global_minimum(AnalysisSurfaceHandle(79), &mut host);

        assert_eq!(host.events, ["selected-cursor:79", "samples:73"]);
    }

    #[test]
    fn local_maximum_prefers_direction_one_on_an_equal_distance_tie() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(83),
                cursor: CursorKind::B,
                position: Point::new(5.0, 2.0),
            }),
            samples: Vec::new(),
            directional_samples: [
                vec![
                    Point::new(4.0, 3.0),
                    Point::new(2.0, 6.0),
                    Point::new(1.0, 5.0),
                ],
                vec![
                    Point::new(6.0, 4.0),
                    Point::new(8.0, 6.0),
                    Point::new(9.0, 5.0),
                ],
            ],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_local_maximum(AnalysisSurfaceHandle(89), &mut host);

        assert_eq!(
            host.events,
            [
                "selected-cursor:89",
                "samples-from:83:5:2:Zero",
                "samples-from:83:5:2:One",
                "set-cursor:89:B:8",
            ]
        );
    }

    #[test]
    fn local_maximum_uses_the_only_direction_with_an_accepted_sample() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(97),
                cursor: CursorKind::A,
                position: Point::new(4.0, 10.0),
            }),
            samples: Vec::new(),
            directional_samples: [
                vec![Point::new(3.0, 9.0)],
                vec![Point::new(6.0, 10.0), Point::new(7.0, 12.0)],
            ],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_local_maximum(AnalysisSurfaceHandle(101), &mut host);

        assert_eq!(
            host.events.last().map(String::as_str),
            Some("set-cursor:101:A:7")
        );
    }

    #[test]
    fn local_maximum_without_directional_candidate_is_a_no_op() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(103),
                cursor: CursorKind::A,
                position: Point::new(0.0, 5.0),
            }),
            samples: Vec::new(),
            directional_samples: [vec![Point::new(-1.0, 4.0)], vec![Point::new(1.0, 3.0)]],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_local_maximum(AnalysisSurfaceHandle(107), &mut host);

        assert_eq!(host.events.len(), 3);
        assert!(
            host.events
                .iter()
                .all(|event| !event.starts_with("set-cursor:"))
        );
    }

    #[test]
    fn local_minimum_prefers_direction_one_on_an_equal_distance_tie() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(109),
                cursor: CursorKind::A,
                position: Point::new(5.0, 8.0),
            }),
            samples: Vec::new(),
            directional_samples: [
                vec![
                    Point::new(4.0, 6.0),
                    Point::new(2.0, 3.0),
                    Point::new(1.0, 4.0),
                ],
                vec![
                    Point::new(6.0, 5.0),
                    Point::new(8.0, 3.0),
                    Point::new(9.0, 4.0),
                ],
            ],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_local_minimum(AnalysisSurfaceHandle(113), &mut host);

        assert_eq!(
            host.events.last().map(String::as_str),
            Some("set-cursor:113:A:8")
        );
    }

    #[test]
    fn local_minimum_uses_the_only_direction_with_an_accepted_sample() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(127),
                cursor: CursorKind::B,
                position: Point::new(4.0, -2.0),
            }),
            samples: Vec::new(),
            directional_samples: [
                vec![Point::new(3.0, -1.0)],
                vec![Point::new(6.0, -2.0), Point::new(7.0, -5.0)],
            ],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_local_minimum(AnalysisSurfaceHandle(131), &mut host);

        assert_eq!(
            host.events.last().map(String::as_str),
            Some("set-cursor:131:B:7")
        );
    }

    #[test]
    fn local_minimum_without_directional_candidate_is_a_no_op() {
        let mut window = Window::default();
        let mut host = SelectedCurveCursorHost {
            selected: Some(SelectedCurveCursor {
                curve: AnalysisObjectHandle(137),
                cursor: CursorKind::B,
                position: Point::new(0.0, -5.0),
            }),
            samples: Vec::new(),
            directional_samples: [vec![Point::new(-1.0, -4.0)], vec![Point::new(1.0, -3.0)]],
            events: Vec::new(),
        };

        window.move_first_selected_cursor_to_local_minimum(AnalysisSurfaceHandle(139), &mut host);

        assert_eq!(host.events.len(), 3);
        assert!(
            host.events
                .iter()
                .all(|event| !event.starts_with("set-cursor:"))
        );
    }

    #[test]
    fn curve_list_toolbar_command_delegates_to_the_shared_opener() {
        let mut window = Window::default();
        let mut host = CurveListHost::default();

        window.open_curve_list_from_toolbar(&mut host);

        assert_eq!(host.0, ["open-curve-list"]);
    }

    #[test]
    fn measurement_results_load_contiguous_numbered_archives() {
        let mut window = Window::default();
        let mut host = MeasurementResultHost {
            context: Some(MeasurementResultContext {
                circuit_path: "work/filter.tsc".to_owned(),
                analysis_type: "AC".to_owned(),
            }),
            existing: vec![
                PathBuf::from("work/filter_meas_AC_1.tdr"),
                PathBuf::from("work/filter_meas_AC_2.tdr"),
            ],
            events: Vec::new(),
        };

        window.load_measurement_results(&mut host);

        assert_eq!(
            host.events,
            [
                "context",
                "exists:work/filter_meas_AC_1.tdr",
                "load:work/filter_meas_AC_1.tdr",
                "exists:work/filter_meas_AC_2.tdr",
                "load:work/filter_meas_AC_2.tdr",
                "exists:work/filter_meas_AC_3.tdr",
            ]
        );
    }

    #[test]
    fn missing_first_measurement_result_reports_the_typed_notice() {
        let mut window = Window::default();
        let mut host = MeasurementResultHost {
            context: Some(MeasurementResultContext {
                circuit_path: "work/filter.tsc".to_owned(),
                analysis_type: "TR".to_owned(),
            }),
            existing: Vec::new(),
            events: Vec::new(),
        };

        window.load_measurement_results(&mut host);

        assert_eq!(
            host.events,
            [
                "context",
                "exists:work/filter_meas_TR_1.tdr",
                "notice:FileNotFound",
            ]
        );
    }

    #[test]
    fn missing_measurement_result_context_is_a_no_op() {
        let mut window = Window::default();
        let mut host = MeasurementResultHost {
            context: None,
            existing: Vec::new(),
            events: Vec::new(),
        };

        window.load_measurement_results(&mut host);

        assert_eq!(host.events, ["context"]);
    }

    #[test]
    fn picture_export_filters_replace_the_extension_and_refresh_the_dialog() {
        for (filter_index, extension) in
            [(1, "EMF"), (2, "BMP"), (3, "JPG"), (4, "GIF"), (5, "PNG")]
        {
            let mut host = PictureExportDialogHost {
                file_name: PathBuf::from("exports").join("plot.old"),
                filter_index,
                events: Vec::new(),
            };
            let expected = PathBuf::from("exports").join(format!("plot.{extension}"));

            Window::synchronize_picture_export_extension(&mut host);

            assert_eq!(host.file_name, expected);
            assert_eq!(
                host.events,
                [
                    "file-name".to_owned(),
                    "filter-index".to_owned(),
                    format!("set:{}", expected.display()),
                    format!("refresh:{}", expected.display()),
                ]
            );
        }
    }

    #[test]
    fn unsupported_picture_export_filter_preserves_the_original_extension() {
        let original = PathBuf::from("exports").join("plot.custom");
        let mut host = PictureExportDialogHost {
            file_name: original.clone(),
            filter_index: 6,
            events: Vec::new(),
        };

        Window::synchronize_picture_export_extension(&mut host);

        assert_eq!(host.file_name, original);
        assert_eq!(
            host.events,
            [
                "file-name".to_owned(),
                "filter-index".to_owned(),
                format!("set:{}", original.display()),
                format!("refresh:{}", original.display()),
            ]
        );
    }

    #[test]
    fn picture_export_dispatches_all_five_formats_through_full_diagram_rendering() {
        for (filter_index, format) in [
            (1, PictureExportFormat::Emf),
            (2, PictureExportFormat::Bmp),
            (3, PictureExportFormat::Jpeg),
            (4, PictureExportFormat::Gif),
            (5, PictureExportFormat::Png),
        ] {
            let path = PathBuf::from(format!("diagram-{filter_index}.img"));
            let mut window = Window::default();
            let mut host = PictureExportHost {
                selection: Some(PictureExportSelection {
                    path: path.clone(),
                    filter_index,
                }),
                requests: Vec::new(),
                events: Vec::new(),
            };

            window.export_diagram_picture(AnalysisSurfaceHandle(797), &mut host);

            assert_eq!(host.requests.len(), 1);
            let request = host.requests[0];
            assert_eq!(request.title, "Save diagram as image");
            assert_eq!(request.default_extension, "emf");
            assert_eq!(request.initial_file_name, "tinadiag.emf");
            assert_eq!(
                request.filters.map(|filter| (filter.name, filter.pattern)),
                [
                    ("Windows Metafile", "*.EMF"),
                    ("Bitmap File", "*.BMP"),
                    ("JPEG File", "*.JPG"),
                    ("GIF File", "*.GIF"),
                    ("PNG File", "*.PNG"),
                ]
            );
            assert_eq!(
                request.options,
                [
                    PictureExportDialogOption::OverwritePrompt,
                    PictureExportDialogOption::HideReadOnly,
                    PictureExportDialogOption::ShowHelp,
                    PictureExportDialogOption::PathMustExist,
                ]
            );
            assert_eq!(
                host.events,
                [
                    "record:DFPictureMnu".to_owned(),
                    "dialog".to_owned(),
                    "bounds:797".to_owned(),
                    format!("create:{format:?}:800:600"),
                    "viewport:0:0:800:600".to_owned(),
                    "canvas:991".to_owned(),
                    "layout".to_owned(),
                    "paint-white".to_owned(),
                    "canvas:997".to_owned(),
                    "restore".to_owned(),
                    format!("save:{format:?}:991:{}", path.display()),
                ]
            );
        }
    }

    #[test]
    fn cancelled_picture_export_does_not_read_or_render_the_diagram() {
        let mut window = Window::default();
        let mut host = PictureExportHost {
            selection: None,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.export_diagram_picture(AnalysisSurfaceHandle(809), &mut host);

        assert_eq!(host.events, ["record:DFPictureMnu", "dialog"]);
    }

    #[test]
    fn unsupported_picture_export_filter_does_not_render() {
        let mut window = Window::default();
        let mut host = PictureExportHost {
            selection: Some(PictureExportSelection {
                path: PathBuf::from("diagram.bin"),
                filter_index: 9,
            }),
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.export_diagram_picture(AnalysisSurfaceHandle(811), &mut host);

        assert_eq!(host.events, ["record:DFPictureMnu", "dialog"]);
    }

    #[test]
    fn empty_picture_export_path_renders_without_saving() {
        let mut window = Window::default();
        let mut host = PictureExportHost {
            selection: Some(PictureExportSelection {
                path: PathBuf::new(),
                filter_index: 2,
            }),
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.export_diagram_picture(AnalysisSurfaceHandle(821), &mut host);

        assert_eq!(
            host.events,
            [
                "record:DFPictureMnu",
                "dialog",
                "bounds:821",
                "create:Bmp:800:600",
                "viewport:0:0:800:600",
                "canvas:991",
                "layout",
                "paint-white",
                "canvas:997",
                "restore",
            ]
        );
    }

    #[test]
    fn default_curve_width_is_persisted_and_selects_one_menu_item() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.set_default_curve_width(4, true, &mut host);

        assert_eq!(window.default_curve_width(), 4);
        assert_eq!(
            host.0,
            [
                "persist:4",
                "check:0:false",
                "check:1:false",
                "check:2:false",
                "check:3:false",
                "check:4:true",
                "check:5:false",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn startup_curve_width_selection_does_not_persist() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.set_default_curve_width(6, false, &mut host);

        assert_eq!(window.default_curve_width(), 6);
        assert_eq!(
            host.0,
            [
                "check:0:false",
                "check:1:false",
                "check:2:false",
                "check:3:false",
                "check:4:false",
                "check:5:false",
                "check:6:true",
            ]
        );
    }

    #[test]
    fn unsupported_default_curve_width_leaves_all_menu_items_unchecked() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.set_default_curve_width(9, true, &mut host);

        assert_eq!(window.default_curve_width(), 9);
        assert_eq!(
            host.0,
            [
                "persist:9",
                "check:0:false",
                "check:1:false",
                "check:2:false",
                "check:3:false",
                "check:4:false",
                "check:5:false",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn hairline_menu_selects_and_persists_width_zero() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.select_hairline_default_curve_width(&mut host);

        assert_eq!(window.default_curve_width(), 0);
        assert_eq!(
            host.0,
            [
                "persist:0",
                "check:0:true",
                "check:1:false",
                "check:2:false",
                "check:3:false",
                "check:4:false",
                "check:5:false",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn single_line_menu_selects_and_persists_width_one() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.select_single_line_default_curve_width(&mut host);

        assert_eq!(window.default_curve_width(), 1);
        assert_eq!(
            host.0,
            [
                "persist:1",
                "check:0:false",
                "check:1:true",
                "check:2:false",
                "check:3:false",
                "check:4:false",
                "check:5:false",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn double_line_menu_selects_and_persists_width_two() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.select_double_line_default_curve_width(&mut host);

        assert_eq!(window.default_curve_width(), 2);
        assert_eq!(
            host.0,
            [
                "persist:2",
                "check:0:false",
                "check:1:false",
                "check:2:true",
                "check:3:false",
                "check:4:false",
                "check:5:false",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn triple_line_menu_selects_and_persists_width_three() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.select_triple_line_default_curve_width(&mut host);

        assert_eq!(window.default_curve_width(), 3);
        assert_eq!(
            host.0,
            [
                "persist:3",
                "check:0:false",
                "check:1:false",
                "check:2:false",
                "check:3:true",
                "check:4:false",
                "check:5:false",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn four_point_menu_selects_and_persists_width_four() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.select_four_point_default_curve_width(&mut host);

        assert_eq!(window.default_curve_width(), 4);
        assert_eq!(
            host.0,
            [
                "persist:4",
                "check:0:false",
                "check:1:false",
                "check:2:false",
                "check:3:false",
                "check:4:true",
                "check:5:false",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn five_point_menu_selects_and_persists_width_five() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.select_five_point_default_curve_width(&mut host);

        assert_eq!(window.default_curve_width(), 5);
        assert_eq!(
            host.0,
            [
                "persist:5",
                "check:0:false",
                "check:1:false",
                "check:2:false",
                "check:3:false",
                "check:4:false",
                "check:5:true",
                "check:6:false",
            ]
        );
    }

    #[test]
    fn six_point_menu_selects_and_persists_width_six() {
        let mut window = Window::default();
        let mut host = DefaultCurveWidthHost::default();

        window.select_six_point_default_curve_width(&mut host);

        assert_eq!(window.default_curve_width(), 6);
        assert_eq!(
            host.0,
            [
                "persist:6",
                "check:0:false",
                "check:1:false",
                "check:2:false",
                "check:3:false",
                "check:4:false",
                "check:5:false",
                "check:6:true",
            ]
        );
    }

    #[test]
    fn display_axes_menu_enables_axes_before_updating_the_diagram() {
        let mut window = Window::default();
        let mut host = AxisVisibilityHost {
            checked: false,
            events: Vec::new(),
        };

        window.toggle_active_diagram_axes(AnalysisSurfaceHandle(827), &mut host);

        assert!(host.checked);
        assert_eq!(host.events, ["checked", "set:true", "apply:827:true"]);
    }

    #[test]
    fn display_axes_menu_disables_axes_before_updating_the_diagram() {
        let mut window = Window::default();
        let mut host = AxisVisibilityHost {
            checked: true,
            events: Vec::new(),
        };

        window.toggle_active_diagram_axes(AnalysisSurfaceHandle(829), &mut host);

        assert!(!host.checked);
        assert_eq!(host.events, ["checked", "set:false", "apply:829:false"]);
    }

    #[test]
    fn amplitude_menu_selects_and_persists_first_vector_style() {
        let mut window = Window::default();
        let mut host = VectorStyleHost::default();

        window.select_amplitude_vector_style(&mut host);

        assert_eq!(window.vector_style(), Some(VectorStyle::First));
        assert_eq!(
            host.0,
            [
                "check:First:true",
                "check:Second:false",
                "check:Third:false",
                "persist:1",
            ]
        );
    }

    #[test]
    fn real_imaginary_menu_selects_and_persists_second_vector_style() {
        let mut window = Window::default();
        let mut host = VectorStyleHost::default();

        window.select_real_imaginary_vector_style(&mut host);

        assert_eq!(window.vector_style(), Some(VectorStyle::Second));
        assert_eq!(
            host.0,
            [
                "check:First:false",
                "check:Second:true",
                "check:Third:false",
                "persist:2",
            ]
        );
    }

    #[test]
    fn amplitude_phase_menu_selects_and_persists_third_vector_style() {
        let mut window = Window::default();
        let mut host = VectorStyleHost::default();

        window.select_amplitude_phase_vector_style(&mut host);

        assert_eq!(window.vector_style(), Some(VectorStyle::Third));
        assert_eq!(
            host.0,
            [
                "check:First:false",
                "check:Second:false",
                "check:Third:true",
                "persist:3",
            ]
        );
    }

    #[test]
    fn ui_add_curve_sender_prepares_context_and_shows_modeless_dialog() {
        let mut window = Window::default();
        let mut host = AddCurveDialogHost {
            related_context: true,
            pending_state: true,
            events: Vec::new(),
        };

        window.prepare_add_curve_post_processor(true, &mut host);

        assert_eq!(
            host.events,
            [
                "collect",
                "stage-context",
                "catalog:839",
                "related-context",
                "editor:true",
                "show-modeless",
            ]
        );
    }

    #[test]
    fn internal_add_curve_route_resets_pending_state_and_rebuilds_list() {
        let mut window = Window::default();
        let mut host = AddCurveDialogHost {
            related_context: true,
            pending_state: true,
            events: Vec::new(),
        };

        window.prepare_add_curve_post_processor(false, &mut host);

        assert_eq!(
            host.events,
            [
                "collect",
                "stage-context",
                "catalog:839",
                "related-context",
                "editor:false",
                "pending",
                "reset",
                "rebuild",
            ]
        );
    }

    #[test]
    fn add_curve_route_skips_unavailable_related_editor_context() {
        let mut window = Window::default();
        let mut host = AddCurveDialogHost {
            related_context: false,
            pending_state: false,
            events: Vec::new(),
        };

        window.prepare_add_curve_post_processor(false, &mut host);

        assert_eq!(
            host.events,
            [
                "collect",
                "stage-context",
                "catalog:839",
                "related-context",
                "pending",
                "rebuild",
            ]
        );
    }

    #[test]
    fn pressed_probe_button_prepares_internal_add_curve_state() {
        let mut window = Window::default();
        let mut host = AddCurveDialogHost {
            related_context: true,
            pending_state: false,
            events: Vec::new(),
        };

        window.toggle_curve_probe_mode(true, &mut host);

        assert_eq!(
            host.events,
            [
                "collect",
                "stage-context",
                "catalog:839",
                "related-context",
                "editor:false",
                "pending",
                "rebuild",
            ]
        );
    }

    #[test]
    fn released_probe_button_cleans_up_add_curve_state() {
        let mut window = Window::default();
        let mut host = AddCurveDialogHost {
            related_context: true,
            pending_state: true,
            events: Vec::new(),
        };

        window.toggle_curve_probe_mode(false, &mut host);

        assert_eq!(host.events, ["cleanup"]);
    }

    #[test]
    fn screen_resolution_sampling_clears_active_diagram_size_before_resize() {
        let mut window = Window::default();
        let mut host = ScreenResolutionHost {
            checked: false,
            events: Vec::new(),
        };

        window.toggle_screen_resolution_sampling(Some(AnalysisSurfaceHandle(853)), &mut host);

        assert!(host.checked);
        assert_eq!(
            host.events,
            ["checked", "set:true", "clear-size:853", "resize"]
        );
    }

    #[test]
    fn screen_resolution_sampling_without_diagram_still_invokes_resize() {
        let mut window = Window::default();
        let mut host = ScreenResolutionHost {
            checked: true,
            events: Vec::new(),
        };

        window.toggle_screen_resolution_sampling(None, &mut host);

        assert!(!host.checked);
        assert_eq!(host.events, ["checked", "set:false", "resize"]);
    }

    #[test]
    fn sampled_curve_uses_one_evaluation_per_pixel_column() {
        let mut host = CurveRenderHost {
            mode: CurveRenderMode::PixelColumns,
            bounds: (0.0, 3.0),
            samples: Vec::new(),
            evaluated: Vec::new(),
            emitted: Vec::new(),
        };

        render_sampled_curve(&mut host);

        assert_eq!(host.evaluated, [0.0, 1.0, 2.0]);
        assert_eq!(
            host.emitted,
            [
                CurveRenderPixel { x: 0, y: 10 },
                CurveRenderPixel { x: 1, y: 11 },
                CurveRenderPixel { x: 2, y: 12 },
            ]
        );
    }

    #[test]
    fn sampled_curve_fallback_suppresses_consecutive_duplicate_pixels() {
        let mut host = CurveRenderHost {
            mode: CurveRenderMode::StoredSamples,
            bounds: (0.0, 3.0),
            samples: vec![
                CurveRenderSample { x: 0.1, y: 10.1 },
                CurveRenderSample { x: 0.2, y: 10.2 },
                CurveRenderSample { x: 1.0, y: 11.0 },
            ],
            evaluated: Vec::new(),
            emitted: Vec::new(),
        };

        render_sampled_curve(&mut host);

        assert!(host.evaluated.is_empty());
        assert_eq!(
            host.emitted,
            [
                CurveRenderPixel { x: 0, y: 10 },
                CurveRenderPixel { x: 1, y: 11 },
            ]
        );
    }

    #[test]
    fn sampled_curve_draw_guard_is_a_silent_noop() {
        let mut host = CurveRenderHost {
            mode: CurveRenderMode::Blocked,
            bounds: (0.0, 3.0),
            samples: vec![CurveRenderSample { x: 1.0, y: 11.0 }],
            evaluated: Vec::new(),
            emitted: Vec::new(),
        };

        render_sampled_curve(&mut host);

        assert!(host.evaluated.is_empty());
        assert!(host.emitted.is_empty());
    }

    #[test]
    fn dispatcher_selected_sampled_curve_enters_rendering_without_the_outer_guard() {
        let mut host = CurveRenderHost {
            mode: CurveRenderMode::Blocked,
            bounds: (0.0, 3.0),
            samples: vec![CurveRenderSample { x: 1.0, y: 11.0 }],
            evaluated: Vec::new(),
            emitted: Vec::new(),
        };

        render_dispatcher_selected_sampled_curve(&mut host);

        assert_eq!(host.emitted, [CurveRenderPixel { x: 1, y: 11 }]);
    }

    #[test]
    fn curve_statistics_use_the_current_x_axis_range() {
        let mut host = CurveStatisticsHost::default();

        let statistics =
            calculate_curve_statistics_in_current_range(AnalysisObjectHandle(911), &mut host);

        assert_eq!(
            statistics,
            CurveStatistics {
                average: 3.0,
                absolute_average: 4.0,
                rms: 5.0,
                covered_start: 3.0,
                covered_end: 8.0,
            }
        );
        assert_eq!(host.events, ["range:911", "calculate:911:2.5:8.5"]);
    }

    #[test]
    fn curve_statistics_integrate_only_complete_in_range_segments() {
        let samples = [
            CurveRenderSample { x: 0.0, y: 0.0 },
            CurveRenderSample { x: 1.0, y: 2.0 },
            CurveRenderSample { x: 2.0, y: 4.0 },
            CurveRenderSample { x: 3.0, y: 2.0 },
            CurveRenderSample { x: 4.0, y: 0.0 },
        ];

        let statistics = compute_curve_statistics(&samples, 0.5, 3.5);

        assert!((statistics.average - 3.0).abs() < f64::EPSILON);
        assert!((statistics.absolute_average - 3.0).abs() < f64::EPSILON);
        assert!((statistics.rms - 10.0_f64.sqrt()).abs() < 1.0e-12);
        assert!((statistics.covered_start - 1.0).abs() < f64::EPSILON);
        assert!((statistics.covered_end - 3.0).abs() < f64::EPSILON);
    }

    #[test]
    fn zero_width_curve_statistics_preserve_nonfinite_results() {
        let statistics = compute_curve_statistics(
            &[
                CurveRenderSample { x: 1.0, y: -2.0 },
                CurveRenderSample { x: 1.0, y: 4.0 },
            ],
            1.0,
            1.0,
        );

        assert!(statistics.average.is_nan());
        assert!(statistics.absolute_average.is_nan());
        assert!(statistics.rms.is_nan());
        assert!((statistics.covered_start - 1.0).abs() < f64::EPSILON);
        assert!((statistics.covered_end - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn curve_ripple_uses_the_current_x_axis_range() {
        let mut host = CurveRippleHost::default();

        let ripple = calculate_curve_ripple_in_current_range(AnalysisObjectHandle(919), &mut host);

        assert_eq!(
            ripple,
            CurveRipple {
                absolute: 0.25,
                relative: 0.05,
            }
        );
        assert_eq!(host.events, ["range:919", "calculate:919:4.5:9.5"]);
    }

    #[test]
    fn curve_ripple_gates_on_left_x_and_tracks_both_endpoints() {
        let ripple = compute_curve_ripple(
            &[
                CurveRenderSample { x: 0.0, y: 10.0 },
                CurveRenderSample { x: 1.0, y: 12.0 },
                CurveRenderSample { x: 2.0, y: 8.0 },
                CurveRenderSample { x: 3.0, y: 10.0 },
            ],
            1.0,
            2.0,
        );

        assert!((ripple.absolute - 4.0).abs() < f64::EPSILON);
        assert!((ripple.relative - 42.105_263_157_894_74).abs() < 1.0e-12);
    }

    #[test]
    fn zero_mean_curve_ripple_preserves_infinite_relative_result() {
        let ripple = compute_curve_ripple(
            &[
                CurveRenderSample { x: 0.0, y: -1.0 },
                CurveRenderSample { x: 1.0, y: 1.0 },
            ],
            0.0,
            0.0,
        );

        assert!((ripple.absolute - 2.0).abs() < f64::EPSILON);
        assert!(ripple.relative.is_infinite());
        assert!(ripple.relative.is_sign_positive());
    }

    #[test]
    fn phase_crossing_returns_exact_and_interpolated_coordinates() {
        let samples = [
            ComplexPoint::new(1.0, 1.0, 0.0),
            ComplexPoint::new(2.0, 0.0, 1.0),
            ComplexPoint::new(3.0, -1.0, 0.0),
        ];

        assert_eq!(find_phase_crossing(&samples, 90.0, 1.0, 3.0), Some(2.0));
        let crossing = find_phase_crossing(&samples, 45.0, 1.0, 3.0);
        assert!(crossing.is_some_and(|x| (x - 1.5).abs() < 1.0e-12));
    }

    #[test]
    fn phase_crossing_unwraps_and_rejects_an_out_of_bounds_bracket() {
        let phase_sample = |x, degrees: f64| {
            let radians = degrees.to_radians();
            ComplexPoint::new(x, radians.cos(), radians.sin())
        };
        let samples = [phase_sample(4.0, 170.0), phase_sample(6.0, -170.0)];

        let crossing = find_phase_crossing(&samples, 180.0, 4.0, 6.0);
        assert!(crossing.is_some_and(|x| (x - 5.0).abs() < 1.0e-12));
        assert_eq!(find_phase_crossing(&samples, 180.0, 4.5, 6.0), None);
    }

    #[test]
    fn value_crossing_returns_exact_and_interpolated_coordinates() {
        let samples = [
            CurveRenderSample { x: 1.0, y: -2.0 },
            CurveRenderSample { x: 2.0, y: 0.0 },
            CurveRenderSample { x: 3.0, y: 4.0 },
        ];

        assert_eq!(find_value_crossing(&samples, 0.0, 1.0, 3.0), Some(2.0));
        let crossing = find_value_crossing(&samples, -1.0, 1.0, 3.0);
        assert!(crossing.is_some_and(|x| (x - 1.5).abs() < 1.0e-12));
    }

    #[test]
    fn value_crossing_rejects_an_out_of_bounds_bracket_or_missing_crossing() {
        let samples = [
            CurveRenderSample { x: 4.0, y: -1.0 },
            CurveRenderSample { x: 6.0, y: 1.0 },
        ];

        assert_eq!(find_value_crossing(&samples, 0.0, 4.5, 6.0), None);
        assert_eq!(find_value_crossing(&samples, 3.0, 4.0, 6.0), None);
    }

    #[test]
    fn zero_crossing_delegates_to_the_shared_target_finder() {
        let samples = [
            CurveRenderSample { x: 2.0, y: -3.0 },
            CurveRenderSample { x: 4.0, y: 1.0 },
        ];

        let crossing = find_zero_crossing(&samples, 2.0, 4.0);
        assert!(crossing.is_some_and(|x| (x - 3.5).abs() < 1.0e-12));
        assert_eq!(find_zero_crossing(&samples, 2.5, 4.0), None);
    }

    #[test]
    fn phase_crossing_magnitude_evaluates_the_response_at_the_crossing() {
        let phase_sample = |x, degrees: f64| {
            let radians = degrees.to_radians();
            ComplexPoint::new(x, radians.cos(), radians.sin())
        };
        let samples = [phase_sample(1.0, 0.0), phase_sample(2.0, 90.0)];
        let mut evaluated_coordinate = None;

        let result = magnitude_at_phase_crossing(&samples, 45.0, 1.0, 2.0, |coordinate| {
            evaluated_coordinate = Some(coordinate);
            (3.0, 4.0)
        });

        assert!(result.is_some_and(|result| {
            (result.coordinate - 1.5).abs() < 1.0e-12
                && (result.magnitude_decibels - 13.979_400_086_720_377).abs() < 1.0e-12
        }));
        assert!(evaluated_coordinate.is_some_and(|coordinate| (coordinate - 1.5).abs() < 1.0e-12));
    }

    #[test]
    fn phase_crossing_magnitude_does_not_evaluate_a_missing_crossing() {
        let samples = [
            ComplexPoint::new(1.0, 1.0, 0.0),
            ComplexPoint::new(2.0, 1.0, 0.0),
        ];
        let mut evaluation_count = 0;

        let result = magnitude_at_phase_crossing(&samples, 90.0, 1.0, 2.0, |_| {
            evaluation_count += 1;
            (3.0, 4.0)
        });

        assert_eq!(result, None);
        assert_eq!(evaluation_count, 0);
    }

    #[test]
    fn phase_margin_uses_the_first_zero_decibel_crossing_and_reference() {
        let samples = [
            ComplexPoint::new(1.0, 0.5, 0.0),
            ComplexPoint::new(2.0, 2.0, 0.0),
        ];
        let mut evaluated_coordinate = None;

        let result = phase_margin_at_zero_db_crossing(&samples, -180.0, 1.0, 2.0, |coordinate| {
            evaluated_coordinate = Some(coordinate);
            (0.0, -1.0)
        });

        assert!(result.is_some_and(|result| {
            (result.coordinate - 1.5).abs() < 1.0e-12
                && (result.margin_degrees - 90.0).abs() < 1.0e-12
        }));
        assert!(evaluated_coordinate.is_some_and(|coordinate| (coordinate - 1.5).abs() < 1.0e-12));
    }

    #[test]
    fn phase_margin_does_not_evaluate_a_missing_crossing() {
        let samples = [
            ComplexPoint::new(1.0, 0.25, 0.0),
            ComplexPoint::new(2.0, 0.5, 0.0),
        ];
        let mut evaluation_count = 0;

        let result = phase_margin_at_zero_db_crossing(&samples, 0.0, 1.0, 2.0, |_| {
            evaluation_count += 1;
            (0.0, 1.0)
        });

        assert_eq!(result, None);
        assert_eq!(evaluation_count, 0);
    }

    #[test]
    fn phase_margin_treats_zero_magnitude_as_an_exact_zero_decibel_sample() {
        let samples = [
            ComplexPoint::new(1.0, 0.0, 0.0),
            ComplexPoint::new(2.0, 2.0, 0.0),
        ];

        let result = phase_margin_at_zero_db_crossing(&samples, 0.0, 1.0, 2.0, |_| (1.0, 0.0));

        assert_eq!(
            result,
            Some(PhaseMarginResult {
                coordinate: 1.0,
                margin_degrees: 0.0,
            })
        );
    }

    #[test]
    fn quick_draw_toggle_changes_menu_before_persistence() {
        let mut window = Window::default();
        let mut host = QuickDrawHost {
            checked: false,
            events: Vec::new(),
        };

        window.toggle_quick_draw(&mut host);

        assert!(host.checked);
        assert_eq!(host.events, ["checked", "set:true", "persist:true"]);
    }

    #[test]
    fn repeated_quick_draw_clicks_alternate_the_global_setting() {
        let mut window = Window::default();
        let mut host = QuickDrawHost {
            checked: true,
            events: Vec::new(),
        };

        window.toggle_quick_draw(&mut host);
        window.toggle_quick_draw(&mut host);

        assert!(host.checked);
        assert_eq!(
            host.events,
            [
                "checked",
                "set:false",
                "persist:false",
                "checked",
                "set:true",
                "persist:true",
            ]
        );
    }

    #[test]
    fn pressed_curve_audio_builds_stereo_wave_and_clamps_playback_bounds() {
        let mut window = Window::default();
        let mut host = CurveAudioHost {
            input: Some(CurveAudioPlaybackInput {
                source_kind: CurveAudioSourceKind::SelectedCurves,
                candidates: vec![
                    CurveAudioCandidate {
                        curve: AnalysisObjectHandle(1),
                        channel_mode: CurveAudioChannelMode::First,
                        value_index: 0,
                        eligible: true,
                    },
                    CurveAudioCandidate {
                        curve: AnalysisObjectHandle(2),
                        channel_mode: CurveAudioChannelMode::Second,
                        value_index: 1,
                        eligible: true,
                    },
                ],
                rows: vec![
                    CurveAudioRow {
                        time_seconds: 0.0,
                        values: vec![0.25, -0.25],
                    },
                    CurveAudioRow {
                        time_seconds: 0.001,
                        values: vec![0.5, -0.5],
                    },
                ],
                sample_rate: 1_000,
                sizing_factor: 1.0,
                source_start_seconds: 1.0,
                source_stop_seconds: 10.0,
                visible_start_seconds: 2.0,
                visible_stop_seconds: 8.0,
            }),
            wave: Vec::new(),
            events: Vec::new(),
        };

        window
            .toggle_curve_audio(true, &mut host)
            .expect("temporary WAV must be written");

        assert_eq!(&host.wave[0..4], b"RIFF");
        assert_eq!(u16::from_le_bytes([host.wave[22], host.wave[23]]), 2);
        assert_eq!(host.events, ["prepare", "write", "start:temp.wav:2:8"]);
    }

    #[test]
    fn released_curve_audio_stops_only_after_an_eligible_candidate() {
        let mut window = Window::default();
        let mut host = CurveAudioHost {
            input: Some(CurveAudioPlaybackInput {
                source_kind: CurveAudioSourceKind::SelectedCurves,
                candidates: vec![CurveAudioCandidate {
                    curve: AnalysisObjectHandle(1),
                    channel_mode: CurveAudioChannelMode::Mono,
                    value_index: 0,
                    eligible: true,
                }],
                rows: Vec::new(),
                sample_rate: 44_100,
                sizing_factor: 1.0,
                source_start_seconds: 0.0,
                source_stop_seconds: 1.0,
                visible_start_seconds: 0.0,
                visible_stop_seconds: 1.0,
            }),
            wave: Vec::new(),
            events: Vec::new(),
        };

        window
            .toggle_curve_audio(false, &mut host)
            .expect("release must not write a WAV");

        assert_eq!(host.events, ["prepare", "stop"]);
        assert!(host.wave.is_empty());
    }

    #[test]
    fn ineligible_curve_audio_input_is_a_silent_no_op() {
        let mut window = Window::default();
        let mut host = CurveAudioHost {
            input: Some(CurveAudioPlaybackInput {
                source_kind: CurveAudioSourceKind::SelectedCurves,
                candidates: vec![CurveAudioCandidate {
                    curve: AnalysisObjectHandle(1),
                    channel_mode: CurveAudioChannelMode::Unsupported,
                    value_index: 0,
                    eligible: false,
                }],
                rows: Vec::new(),
                sample_rate: 44_100,
                sizing_factor: 1.0,
                source_start_seconds: 0.0,
                source_stop_seconds: 1.0,
                visible_start_seconds: 0.0,
                visible_stop_seconds: 1.0,
            }),
            wave: Vec::new(),
            events: Vec::new(),
        };

        window
            .toggle_curve_audio(true, &mut host)
            .expect("ineligible input must not write a WAV");

        assert_eq!(host.events, ["prepare"]);
        assert!(host.wave.is_empty());
    }

    #[test]
    fn accepted_curve_audio_export_writes_mono_wave_to_selected_path() {
        let mut window = Window::default();
        let mut host = CurveAudioExportHost {
            path: Some(PathBuf::from("chosen.wav")),
            input: Some(CurveAudioPlaybackInput {
                source_kind: CurveAudioSourceKind::SelectedCurves,
                candidates: vec![CurveAudioCandidate {
                    curve: AnalysisObjectHandle(3),
                    channel_mode: CurveAudioChannelMode::Mono,
                    value_index: 0,
                    eligible: false,
                }],
                rows: vec![
                    CurveAudioRow {
                        time_seconds: 0.0,
                        values: vec![0.25],
                    },
                    CurveAudioRow {
                        time_seconds: 0.001,
                        values: vec![0.5],
                    },
                ],
                sample_rate: 1_000,
                sizing_factor: 1.0,
                source_start_seconds: 0.0,
                source_stop_seconds: 1.0,
                visible_start_seconds: 0.0,
                visible_stop_seconds: 1.0,
            }),
            requests: Vec::new(),
            wave: Vec::new(),
            events: Vec::new(),
        };

        window
            .export_curve_audio(&mut host)
            .expect("accepted WAV must be written");

        assert_eq!(
            host.requests,
            [CurveAudioExportDialogRequest {
                title: "Save diagram to WAV",
                default_extension: "wav",
                initial_file_name: "tcurve.wav",
                filter: super::FileDialogFilter {
                    name: "WAV files",
                    pattern: "*.wav",
                },
            }]
        );
        assert_eq!(&host.wave[0..4], b"RIFF");
        assert_eq!(u16::from_le_bytes([host.wave[22], host.wave[23]]), 1);
        assert_eq!(host.events, ["dialog", "prepare", "write:chosen.wav"]);
    }

    #[test]
    fn cancelled_curve_audio_export_does_not_prepare_sources() {
        let mut window = Window::default();
        let mut host = CurveAudioExportHost {
            path: None,
            input: None,
            requests: Vec::new(),
            wave: Vec::new(),
            events: Vec::new(),
        };

        window
            .export_curve_audio(&mut host)
            .expect("cancel must not write a WAV");

        assert_eq!(host.events, ["dialog"]);
        assert!(host.wave.is_empty());
    }

    #[test]
    fn empty_all_curve_audio_export_reports_error_without_file_output() {
        let mut window = Window::default();
        let mut host = CurveAudioExportHost {
            path: Some(PathBuf::from("chosen.wav")),
            input: Some(CurveAudioPlaybackInput {
                source_kind: CurveAudioSourceKind::AllCurves,
                candidates: Vec::new(),
                rows: Vec::new(),
                sample_rate: 44_100,
                sizing_factor: 1.0,
                source_start_seconds: 0.0,
                source_stop_seconds: 0.0,
                visible_start_seconds: 0.0,
                visible_stop_seconds: 0.0,
            }),
            requests: Vec::new(),
            wave: Vec::new(),
            events: Vec::new(),
        };

        window
            .export_curve_audio(&mut host)
            .expect("empty source must not write a WAV");

        assert_eq!(host.events, ["dialog", "prepare", "empty:AllCurves"]);
        assert!(host.wave.is_empty());
    }

    #[test]
    fn active_result_tab_draws_centered_caption_in_recovered_order() {
        let mut window = Window::default();
        let mut host = TabDrawHost {
            text_size: TabTextSize {
                width: 21,
                height: 11,
            },
            events: Vec::new(),
        };

        window.draw_result_tab(
            3,
            WindowBounds {
                left: 10,
                top: 20,
                width: 101,
                height: 31,
            },
            true,
            &mut host,
        );

        assert_eq!(
            host.events,
            [
                "background:Active",
                "fill:10:20:101:31",
                "transparent",
                "caption:3",
                "measure:Transient",
                "draw:Transient:50:30",
            ]
        );
    }

    #[test]
    fn inactive_result_tab_uses_inactive_theme_background() {
        let mut window = Window::default();
        let mut host = TabDrawHost {
            text_size: TabTextSize {
                width: 10,
                height: 10,
            },
            events: Vec::new(),
        };

        window.draw_result_tab(
            0,
            WindowBounds {
                left: 0,
                top: 0,
                width: 20,
                height: 20,
            },
            false,
            &mut host,
        );

        assert_eq!(host.events[0], "background:Inactive");
        assert_eq!(
            host.events.last().map(String::as_str),
            Some("draw:Transient:5:5")
        );
    }

    #[test]
    fn tool_notebook_change_sets_active_page_width_to_150() {
        let mut window = Window::default();
        let mut host = ToolNotebookHost::default();

        window.tool_notebook_changed(&mut host);

        assert_eq!(host.0, [150]);
    }

    #[test]
    fn accepted_curve_import_applies_result_and_persists_auto_import() {
        let mut window = Window::default();
        let options = CurveImportOptions {
            lines: vec!["0,1".to_owned(), "1,2".to_owned()],
            format_code: 1,
            display_format: 0,
            skip_rows: 0,
            delimiter: ",".to_owned(),
            amplitude_in_decibels: false,
            insert_into_active_diagram: true,
            auto_import: true,
        };
        let mut host = CurveImportHost {
            path: Some(PathBuf::from("curves.txt")),
            options: Some(options),
            apply_success: true,
            cancelled: false,
            requests: Vec::new(),
            persisted: Vec::new(),
            events: Vec::new(),
        };

        window
            .import_curves(&mut host)
            .expect("valid rows must import");

        assert_eq!(
            host.requests,
            [CurveImportFileDialogRequest {
                initial_file_name: "*.txt",
                allow_multiple: false,
                file_must_exist: true,
                path_must_exist: true,
                help_context: 0x1f7,
            }]
        );
        assert_eq!(
            &host.events[0..3],
            ["file-dialog", "options:curves.txt", "busy:true"]
        );
        assert!(host.events.iter().any(|event| event == "apply:1"));
        assert_eq!(
            &host.events[host.events.len() - 2..],
            ["busy:false", "persist"]
        );
        assert_eq!(
            host.persisted,
            [AutoImportSettings {
                file_name: PathBuf::from("curves.txt"),
                file_type: 1,
                skip_rows: 0,
                delimiter: ",".to_owned(),
                amplitude_in_decibels: false,
            }]
        );
    }

    #[test]
    fn cancelled_curve_import_file_dialog_stops_before_options() {
        let mut window = Window::default();
        let mut host = CurveImportHost {
            path: None,
            options: None,
            apply_success: true,
            cancelled: false,
            requests: Vec::new(),
            persisted: Vec::new(),
            events: Vec::new(),
        };

        window
            .import_curves(&mut host)
            .expect("cancel must not parse");

        assert_eq!(host.events, ["file-dialog"]);
        assert!(host.persisted.is_empty());
    }

    #[test]
    fn unsupported_curve_import_resets_busy_state_without_persistence() {
        let mut window = Window::default();
        let mut host = CurveImportHost {
            path: Some(PathBuf::from("curves.txt")),
            options: Some(CurveImportOptions {
                lines: vec!["0,1".to_owned()],
                format_code: 0,
                display_format: 0,
                skip_rows: 0,
                delimiter: ",".to_owned(),
                amplitude_in_decibels: false,
                insert_into_active_diagram: false,
                auto_import: true,
            }),
            apply_success: true,
            cancelled: false,
            requests: Vec::new(),
            persisted: Vec::new(),
            events: Vec::new(),
        };

        window
            .import_curves(&mut host)
            .expect("unsupported format returns normally");

        assert_eq!(
            host.events,
            [
                "file-dialog",
                "options:curves.txt",
                "busy:true",
                "busy:false",
            ]
        );
        assert!(host.persisted.is_empty());
    }

    #[test]
    fn curve_import_parser_error_leaves_recovered_busy_state_unreset() {
        let mut window = Window::default();
        let mut host = CurveImportHost {
            path: Some(PathBuf::from("curves.txt")),
            options: Some(CurveImportOptions {
                lines: vec!["not-a-number,1".to_owned()],
                format_code: 1,
                display_format: 0,
                skip_rows: 0,
                delimiter: ",".to_owned(),
                amplitude_in_decibels: false,
                insert_into_active_diagram: false,
                auto_import: true,
            }),
            apply_success: true,
            cancelled: false,
            requests: Vec::new(),
            persisted: Vec::new(),
            events: Vec::new(),
        };

        window
            .import_curves(&mut host)
            .expect_err("invalid numeric input must propagate");

        assert!(host.events.iter().any(|event| event == "busy:true"));
        assert!(!host.events.iter().any(|event| event == "busy:false"));
        assert!(host.persisted.is_empty());
    }

    #[test]
    fn curve_audio_completion_clears_timer_indicators_and_device_in_order() {
        let mut window = Window::default();
        let mut host = CurveAudioCleanupHost {
            curves: vec![AnalysisObjectHandle(7), AnalysisObjectHandle(9)],
            position_milliseconds: 1_250,
            next_position_milliseconds: 0,
            events: Vec::new(),
        };

        window.complete_curve_audio_playback(&mut host);

        assert_eq!(
            host.events,
            [
                "pressed:false",
                "remove-timer",
                "curves",
                "position",
                "erase:7:1.25",
                "erase:9:1.25",
                "close",
            ]
        );
    }

    #[test]
    fn curve_audio_completion_without_curves_still_closes_device() {
        let mut window = Window::default();
        let mut host = CurveAudioCleanupHost {
            curves: Vec::new(),
            position_milliseconds: -1,
            next_position_milliseconds: 0,
            events: Vec::new(),
        };

        window.complete_curve_audio_playback(&mut host);

        assert_eq!(
            host.events,
            [
                "pressed:false",
                "remove-timer",
                "curves",
                "position",
                "close"
            ]
        );
    }

    #[test]
    fn curve_audio_timer_erases_old_position_then_draws_queried_position() {
        let mut window = Window::default();
        let mut host = CurveAudioCleanupHost {
            curves: vec![AnalysisObjectHandle(7), AnalysisObjectHandle(9)],
            position_milliseconds: 1_250,
            next_position_milliseconds: 1_500,
            events: Vec::new(),
        };

        window.update_curve_audio_position(&mut host);

        assert_eq!(host.position_milliseconds, 1_500);
        assert_eq!(
            host.events,
            [
                "position",
                "curves",
                "erase:7:1.25",
                "erase:9:1.25",
                "query",
                "set-position:1500",
                "curves",
                "draw:7:1.5",
                "draw:9:1.5",
            ]
        );
    }

    #[test]
    fn first_curve_audio_timer_tick_skips_old_indicator_erasure() {
        let mut window = Window::default();
        let mut host = CurveAudioCleanupHost {
            curves: vec![AnalysisObjectHandle(7)],
            position_milliseconds: -1,
            next_position_milliseconds: 200,
            events: Vec::new(),
        };

        window.update_curve_audio_position(&mut host);

        assert_eq!(
            host.events,
            [
                "position",
                "query",
                "set-position:200",
                "curves",
                "draw:7:0.2",
            ]
        );
    }

    #[test]
    fn carriage_return_commits_cursor_a_x_and_is_consumed() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(12.5)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_cursor_a_x_on_key_press('\r', &mut host)
            .expect("valid position must commit");

        assert!(consumed);
        assert_eq!(host.events, ["read:A:X", "set:A:12.5"]);
    }

    #[test]
    fn nyquist_cursor_a_frequency_uses_the_shared_x_commit_path() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(440.0)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_nyquist_cursor_a_frequency_on_key_press('\r', &mut host)
            .expect("valid frequency must commit");

        assert!(consumed);
        assert_eq!(host.events, ["read:A:X", "set:A:440"]);
    }

    #[test]
    fn smith_cursor_a_selection_commits_without_an_enter_key() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(2.75)]),
            converted_x: None,
            events: Vec::new(),
        };

        window
            .commit_smith_cursor_a_selection(&mut host)
            .expect("valid Smith coordinate must commit");

        assert_eq!(host.events, ["read:A:X", "set:A:2.75"]);
    }

    #[test]
    fn smith_cursor_a_frequency_enter_uses_the_shared_x_commit_path() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(1_000.0)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_smith_cursor_a_frequency_on_key_press('\r', &mut host)
            .expect("valid Smith frequency must commit");

        assert!(consumed);
        assert_eq!(host.events, ["read:A:X", "set:A:1000"]);
    }

    #[test]
    fn non_return_cursor_a_x_key_press_is_ignored() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(12.5)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_cursor_a_x_on_key_press('x', &mut host)
            .expect("ignored key must not validate");

        assert!(!consumed);
        assert!(host.events.is_empty());
    }

    #[test]
    fn invalid_cursor_a_x_value_propagates_without_consuming_key() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Err("invalid position")]),
            converted_x: None,
            events: Vec::new(),
        };

        let error = window
            .commit_cursor_a_x_on_key_press('\r', &mut host)
            .expect_err("invalid position must propagate");

        assert_eq!(error, "invalid position");
        assert_eq!(host.events, ["read:A:X"]);
    }

    #[test]
    fn carriage_return_commits_cursor_b_x_through_shared_update_logic() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(-3.25)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_cursor_b_x_on_key_press('\r', &mut host)
            .expect("valid position must commit");

        assert!(consumed);
        assert_eq!(host.events, ["read:B:X", "set:B:-3.25"]);
    }

    #[test]
    fn nyquist_cursor_b_frequency_uses_the_shared_x_commit_path() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(880.0)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_nyquist_cursor_b_frequency_on_key_press('\r', &mut host)
            .expect("valid frequency must commit");

        assert!(consumed);
        assert_eq!(host.events, ["read:B:X", "set:B:880"]);
    }

    #[test]
    fn smith_cursor_b_selection_commits_without_an_enter_key() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(-1.25)]),
            converted_x: None,
            events: Vec::new(),
        };

        window
            .commit_smith_cursor_b_selection(&mut host)
            .expect("valid Smith coordinate must commit");

        assert_eq!(host.events, ["read:B:X", "set:B:-1.25"]);
    }

    #[test]
    fn smith_cursor_b_frequency_enter_uses_the_shared_x_commit_path() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(2_000.0)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_smith_cursor_b_frequency_on_key_press('\r', &mut host)
            .expect("valid Smith frequency must commit");

        assert!(consumed);
        assert_eq!(host.events, ["read:B:X", "set:B:2000"]);
    }

    #[test]
    fn carriage_return_converts_cursor_a_y_to_an_x_position() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(2.0), Ok(7.5)]),
            converted_x: Some(4.25),
            events: Vec::new(),
        };

        let consumed = window
            .commit_cursor_a_y_on_key_press('\r', &mut host)
            .expect("valid positions must commit");

        assert!(consumed);
        assert_eq!(
            host.events,
            ["read:A:X", "read:A:Y", "convert:A:2:7.5", "set:A:4.25"]
        );
    }

    #[test]
    fn unavailable_cursor_a_y_conversion_rereads_x_before_commit() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(2.0), Ok(7.5), Ok(2.5)]),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_cursor_a_y_on_key_press('\r', &mut host)
            .expect("fallback X position must commit");

        assert!(consumed);
        assert_eq!(
            host.events,
            [
                "read:A:X",
                "read:A:Y",
                "convert:A:2:7.5",
                "read:A:X",
                "set:A:2.5",
            ]
        );
    }

    #[test]
    fn non_return_cursor_a_y_key_press_is_ignored() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::new(),
            converted_x: None,
            events: Vec::new(),
        };

        let consumed = window
            .commit_cursor_a_y_on_key_press('y', &mut host)
            .expect("ignored key must not validate");

        assert!(!consumed);
        assert!(host.events.is_empty());
    }

    #[test]
    fn carriage_return_converts_cursor_b_y_through_shared_update_logic() {
        let mut window = Window::default();
        let mut host = CursorPositionEditHost {
            values: VecDeque::from([Ok(-1.0), Ok(6.0)]),
            converted_x: Some(9.5),
            events: Vec::new(),
        };

        let consumed = window
            .commit_cursor_b_y_on_key_press('\r', &mut host)
            .expect("valid positions must commit");

        assert!(consumed);
        assert_eq!(
            host.events,
            ["read:B:X", "read:B:Y", "convert:B:-1:6", "set:B:9.5"]
        );
    }

    #[test]
    fn hiding_with_active_probe_cleans_up_add_curve_state() {
        let mut window = Window::default();
        let mut host = AddCurveDialogHost {
            related_context: true,
            pending_state: true,
            events: Vec::new(),
        };

        window.hidden(true, &mut host);

        assert_eq!(host.events, ["cleanup"]);
    }

    #[test]
    fn hiding_with_inactive_probe_is_a_no_op() {
        let mut window = Window::default();
        let mut host = AddCurveDialogHost {
            related_context: true,
            pending_state: true,
            events: Vec::new(),
        };

        window.hidden(false, &mut host);

        assert!(host.events.is_empty());
    }

    #[test]
    fn accepted_auto_test_export_serializes_the_first_curve_result() {
        let mut window = Window::default();
        let mut host = ResultExportHost {
            accepted: true,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.export_auto_test_result(AnalysisSurfaceHandle(379), &mut host);

        assert_eq!(host.requests.len(), 1);
        let request = host.requests[0];
        assert_eq!(request.title, "Save auto test result");
        assert_eq!(request.default_extension, "tr");
        assert_eq!(request.initial_file_name, "");
        assert_eq!(
            request.filters.map(|filter| (filter.name, filter.pattern)),
            [
                ("TR result", "*.tr"),
                ("DC result", "*.dc"),
                ("AC result", "*.ac"),
            ]
        );
        assert_eq!(
            host.events,
            [
                "dialog",
                "first-result:379",
                "path",
                "serialize:result.tr:373:[0, 0, 0]",
            ]
        );
    }

    #[test]
    fn cancelled_auto_test_export_does_not_inspect_the_diagram() {
        let mut window = Window::default();
        let mut host = ResultExportHost {
            accepted: false,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.export_auto_test_result(AnalysisSurfaceHandle(383), &mut host);

        assert_eq!(host.events, ["dialog"]);
    }

    #[test]
    fn selected_axis_and_curve_use_their_property_commands() {
        for (target, nested_command, editor) in [
            (PropertiesTarget::Axis, "record:AxisMnu", "axis:389"),
            (PropertiesTarget::Curve, "record:CurveMnu", "curve:389"),
        ] {
            let mut window = Window::default();
            let mut host = PropertiesHost {
                target,
                events: Vec::new(),
            };

            window.open_selected_properties(Some(AnalysisSurfaceHandle(389)), &mut host);

            assert_eq!(
                host.events,
                [
                    "record:PropertiesMnu",
                    "classify:389",
                    nested_command,
                    editor
                ]
            );
            assert!(!window.refuse_click_timer_active());
        }
    }

    #[test]
    fn supported_figure_properties_start_the_refused_click_timer() {
        for target in [
            PropertiesTarget::Text,
            PropertiesTarget::Arrow,
            PropertiesTarget::PenFigure,
            PropertiesTarget::Metafile,
        ] {
            let mut window = Window {
                property_interaction_token: Some(397),
                ..Window::default()
            };
            let mut host = PropertiesHost {
                target,
                events: Vec::new(),
            };

            window.open_selected_properties(Some(AnalysisSurfaceHandle(401)), &mut host);

            assert_eq!(window.property_interaction_token(), None);
            assert_eq!(window.interaction_mode(), 19);
            assert!(window.refuse_click_timer_active());
            assert_eq!(host.events[2], format!("figure:401:{target:?}"));
        }
    }

    #[test]
    fn unsupported_properties_selection_is_a_silent_no_op() {
        let mut window = Window::default();
        let mut host = PropertiesHost {
            target: PropertiesTarget::Unsupported,
            events: Vec::new(),
        };

        window.open_selected_properties(Some(AnalysisSurfaceHandle(409)), &mut host);

        assert_eq!(host.events, ["record:PropertiesMnu", "classify:409"]);
        assert_eq!(window.interaction_mode(), 0);
        assert!(!window.refuse_click_timer_active());
    }

    #[test]
    fn properties_without_a_surface_only_records_the_command() {
        let mut window = Window::default();
        let mut host = PropertiesHost {
            target: PropertiesTarget::Text,
            events: Vec::new(),
        };

        window.open_selected_properties(None, &mut host);

        assert_eq!(host.events, ["record:PropertiesMnu"]);
        assert!(!window.refuse_click_timer_active());
    }

    #[test]
    fn print_preview_toggles_embedded_page_mode_and_refreshes_layout() {
        let mut window = Window::default();
        let mut host = PrintHost {
            selection: None,
            preview_mode: None,
            aborted: false,
            requests: Vec::new(),
            events: Vec::new(),
        };

        window.toggle_print_preview(&mut host);
        window.toggle_print_preview(&mut host);

        assert_eq!(window.print_preview_state(), PrintPreviewState::Normal);
        assert_eq!(
            host.events,
            [
                "record:DFPrintPreviewMnu",
                "preview-checked:true",
                "apply-preview:true:1:1",
                "clear-caches",
                "refresh-layout",
                "record:DFPrintPreviewMnu",
                "preview-checked:false",
                "apply-preview:false:0:0",
                "clear-caches",
                "refresh-layout",
            ]
        );
    }

    #[test]
    fn command_state_refresh_enables_independent_axis_capacity() {
        let mut window = Window::default();
        let mut host = CommandStateHost {
            input: AnalysisCommandStateInput {
                form_mode: 1,
                has_diagram: true,
                post_processor_feature_enabled: true,
                post_processor_blocked: false,
                selected_curve_capacity: Some(CurveAxisCapacity::Independent {
                    x_axis_count: 2,
                    x_component_count: 2,
                    y_axis_count: 1,
                    y_component_count: 3,
                }),
            },
            states: None,
        };

        window.refresh_edit_command_states(&mut host);

        let states = host.states.expect("states must be applied");
        for command in [
            AnalysisCommand::Edit,
            AnalysisCommand::Cut,
            AnalysisCommand::Copy,
            AnalysisCommand::Paste,
            AnalysisCommand::SelectAllCurves,
            AnalysisCommand::PostProcessor,
            AnalysisCommand::AddXAxis,
            AnalysisCommand::AddYAxis,
        ] {
            assert!(states.is_enabled(command), "{command:?}");
        }
    }

    #[test]
    fn command_state_refresh_applies_diagram_and_post_processor_guards() {
        let mut window = Window::default();
        let mut host = CommandStateHost {
            input: AnalysisCommandStateInput {
                form_mode: 2,
                has_diagram: true,
                post_processor_feature_enabled: true,
                post_processor_blocked: true,
                selected_curve_capacity: Some(CurveAxisCapacity::XOnly {
                    x_axis_count: 3,
                    x_component_count: 4,
                }),
            },
            states: None,
        };

        window.refresh_edit_command_states(&mut host);

        let states = host.states.expect("states must be applied");
        assert!(!states.is_enabled(AnalysisCommand::Edit));
        assert!(states.is_enabled(AnalysisCommand::Cut));
        assert!(states.is_enabled(AnalysisCommand::Copy));
        assert!(states.is_enabled(AnalysisCommand::Paste));
        assert!(states.is_enabled(AnalysisCommand::SelectAllCurves));
        assert!(!states.is_enabled(AnalysisCommand::PostProcessor));
        assert!(!states.is_enabled(AnalysisCommand::AddXAxis));
        assert!(!states.is_enabled(AnalysisCommand::AddYAxis));
    }

    #[test]
    fn command_state_refresh_disables_diagram_commands_without_a_diagram() {
        let mut window = Window::default();
        let mut host = CommandStateHost {
            input: AnalysisCommandStateInput {
                form_mode: 1,
                has_diagram: false,
                post_processor_feature_enabled: true,
                post_processor_blocked: false,
                selected_curve_capacity: Some(CurveAxisCapacity::Independent {
                    x_axis_count: 0,
                    x_component_count: 2,
                    y_axis_count: 0,
                    y_component_count: 2,
                }),
            },
            states: None,
        };

        window.refresh_edit_command_states(&mut host);

        let states = host.states.expect("states must be applied");
        assert!(states.is_enabled(AnalysisCommand::Edit));
        for command in [
            AnalysisCommand::Cut,
            AnalysisCommand::Copy,
            AnalysisCommand::Paste,
            AnalysisCommand::SelectAllCurves,
            AnalysisCommand::PostProcessor,
            AnalysisCommand::AddXAxis,
            AnalysisCommand::AddYAxis,
        ] {
            assert!(!states.is_enabled(command), "{command:?}");
        }
    }

    #[test]
    fn opening_edit_menu_only_delegates_to_command_state_refresh() {
        let mut window = Window::default();
        let mut host = CommandStateHost {
            input: AnalysisCommandStateInput {
                form_mode: 1,
                has_diagram: true,
                post_processor_feature_enabled: false,
                post_processor_blocked: false,
                selected_curve_capacity: None,
            },
            states: None,
        };

        window.open_edit_menu(&mut host);

        let states = host.states.expect("states must be applied");
        assert!(states.is_enabled(AnalysisCommand::Edit));
        assert!(states.is_enabled(AnalysisCommand::Cut));
        assert!(states.is_enabled(AnalysisCommand::Copy));
        assert!(states.is_enabled(AnalysisCommand::Paste));
        assert!(states.is_enabled(AnalysisCommand::SelectAllCurves));
        assert!(!states.is_enabled(AnalysisCommand::PostProcessor));
        assert!(!states.is_enabled(AnalysisCommand::AddXAxis));
        assert!(!states.is_enabled(AnalysisCommand::AddYAxis));
    }

    #[test]
    fn opening_view_menu_delegates_to_the_shared_command_state_refresh() {
        let mut window = Window::default();
        let mut host = CommandStateHost {
            input: AnalysisCommandStateInput {
                form_mode: 1,
                has_diagram: true,
                post_processor_feature_enabled: true,
                post_processor_blocked: false,
                selected_curve_capacity: None,
            },
            states: None,
        };

        window.open_view_menu(&mut host);

        let states = host.states.expect("states must be applied");
        assert!(states.is_enabled(AnalysisCommand::Edit));
        assert!(states.is_enabled(AnalysisCommand::Copy));
        assert!(states.is_enabled(AnalysisCommand::PostProcessor));
    }

    #[test]
    fn frequency_slope_toggle_refreshes_an_active_diagram() {
        let mut window = Window::default();
        let mut host = FrequencySlopeHost {
            checked: true,
            events: Vec::new(),
        };

        window.toggle_frequency_slope_readouts(Some(AnalysisSurfaceHandle(149)), &mut host);

        assert!(!host.checked);
        assert_eq!(host.events, ["checked", "set:false", "refresh:149"]);
    }

    #[test]
    fn frequency_slope_toggle_without_diagram_changes_only_the_check() {
        let mut window = Window::default();
        let mut host = FrequencySlopeHost {
            checked: false,
            events: Vec::new(),
        };

        window.toggle_frequency_slope_readouts(None, &mut host);

        assert!(host.checked);
        assert_eq!(host.events, ["checked", "set:true"]);
    }

    #[test]
    fn smith_matrix_format_zero_shows_real_and_imaginary_labels() {
        let mut window = Window::default();
        let mut host = SmithMatrixFormatHost {
            format_index: 0,
            states: Vec::new(),
        };

        window.synchronize_smith_matrix_format(&mut host);

        assert_eq!(
            host.states,
            [SmithMatrixLabelVisibility {
                real_imaginary: true,
                magnitude_phase: false,
            }]
        );
    }

    #[test]
    fn nonzero_smith_matrix_format_shows_magnitude_and_phase_labels() {
        let mut window = Window::default();
        let mut host = SmithMatrixFormatHost {
            format_index: -1,
            states: Vec::new(),
        };

        window.synchronize_smith_matrix_format(&mut host);

        assert_eq!(
            host.states,
            [SmithMatrixLabelVisibility {
                real_imaginary: false,
                magnitude_phase: true,
            }]
        );
    }

    #[test]
    fn smith_matrix_format_selection_applies_the_shared_visibility_rule() {
        let mut window = Window::default();
        let mut host = SmithMatrixFormatHost {
            format_index: 1,
            states: Vec::new(),
        };

        window.smith_matrix_format_selected(&mut host);

        assert_eq!(
            host.states,
            [SmithMatrixLabelVisibility {
                real_imaginary: false,
                magnitude_phase: true,
            }]
        );
    }

    #[test]
    fn key_down_escape_cancels_drafts_and_consumes_the_key() {
        use keyboard::{Key, key::Named};

        let mut window = Window {
            interaction_mode: 9,
            pending_text: Some(TextDraftHandle(419)),
            pending_figure: Some(FigureDraftHandle(421)),
            ..Window::default()
        };
        let mut host = CommandHost::default();

        let route = window.key_down(
            &Key::Named(Named::Escape),
            keyboard::Modifiers::empty(),
            Some(AnalysisSurfaceHandle(431)),
            CursorPair { a: None, b: None },
            &mut host,
        );

        assert_eq!(route, KeyDownRoute::Cancelled);
        assert_eq!(window.interaction_mode(), 0);
        assert_eq!(window.pending_text(), None);
        assert_eq!(window.pending_figure(), None);
        assert_eq!(
            host.0,
            [
                "cancel:9:Some(TextDraftHandle(419)):Some(FigureDraftHandle(421)):None",
                "refresh-commands",
            ]
        );
    }

    #[test]
    fn key_down_horizontal_arrows_select_cursor_or_axis_by_modifiers() {
        use keyboard::{Key, key::Named};

        let mut window = Window::default();
        let mut host = CommandHost::default();
        let surface = Some(AnalysisSurfaceHandle(433));
        let cursors = CursorPair {
            a: Some(CursorHandle(439)),
            b: Some(CursorHandle(443)),
        };

        assert_eq!(
            window.key_down(
                &Key::Named(Named::ArrowLeft),
                keyboard::Modifiers::empty(),
                surface,
                cursors,
                &mut host,
            ),
            KeyDownRoute::CursorMoved {
                cursor: CursorHandle(439),
                direction: CursorNavigationDirection::PreviousSample,
            }
        );
        assert_eq!(
            window.key_down(
                &Key::Named(Named::ArrowRight),
                keyboard::Modifiers::CTRL,
                surface,
                cursors,
                &mut host,
            ),
            KeyDownRoute::CursorMoved {
                cursor: CursorHandle(443),
                direction: CursorNavigationDirection::NextSample,
            }
        );
        assert_eq!(
            window.key_down(
                &Key::Named(Named::ArrowLeft),
                keyboard::Modifiers::SHIFT,
                surface,
                cursors,
                &mut host,
            ),
            KeyDownRoute::AxisScrolled
        );
        assert_eq!(
            host.0,
            [
                "move-cursor:433:439:PreviousSample",
                "move-cursor:433:443:NextSample",
                "record:LeftScrollBtn",
                "scroll-left:433",
            ]
        );
    }

    #[test]
    fn key_down_vertical_arrows_move_the_selected_cursor_then_repaint() {
        use keyboard::{Key, key::Named};

        let mut window = Window::default();
        let mut host = CommandHost::default();
        let surface = Some(AnalysisSurfaceHandle(449));
        let cursors = CursorPair {
            a: Some(CursorHandle(457)),
            b: Some(CursorHandle(461)),
        };

        assert_eq!(
            window.key_down(
                &Key::Named(Named::ArrowUp),
                keyboard::Modifiers::empty(),
                surface,
                cursors,
                &mut host,
            ),
            KeyDownRoute::CursorMoved {
                cursor: CursorHandle(457),
                direction: CursorNavigationDirection::PreviousCurve,
            }
        );
        assert_eq!(
            window.key_down(
                &Key::Named(Named::ArrowDown),
                keyboard::Modifiers::CTRL,
                surface,
                cursors,
                &mut host,
            ),
            KeyDownRoute::CursorMoved {
                cursor: CursorHandle(461),
                direction: CursorNavigationDirection::NextCurve,
            }
        );
        assert_eq!(
            host.0,
            [
                "move-cursor:449:457:PreviousCurve",
                "repaint:449",
                "move-cursor:449:461:NextCurve",
                "repaint:449",
            ]
        );
    }

    #[test]
    fn key_down_delete_and_f5_keep_selection_and_repaint_order() {
        use keyboard::{Key, key::Named};

        let mut window = Window::default();
        let mut host = CommandHost::default();
        let surface = Some(AnalysisSurfaceHandle(463));
        let cursors = CursorPair { a: None, b: None };

        assert_eq!(
            window.key_down(
                &Key::Named(Named::Delete),
                keyboard::Modifiers::empty(),
                surface,
                cursors,
                &mut host,
            ),
            KeyDownRoute::SelectionDeleted
        );
        assert_eq!(
            window.key_down(
                &Key::Named(Named::F5),
                keyboard::Modifiers::empty(),
                surface,
                cursors,
                &mut host,
            ),
            KeyDownRoute::Repainted
        );
        assert_eq!(
            host.0,
            [
                "delete-figures:463",
                "delete:463:true:true:true",
                "repaint:463",
            ]
        );
    }
}
