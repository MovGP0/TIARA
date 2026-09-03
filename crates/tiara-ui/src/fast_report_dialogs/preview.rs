use iced::widget::{button, checkbox, column, text, text_input};
use iced::{Element, Length};
use std::num::ParseFloatError;
use std::path::{Path, PathBuf};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    PrintRequested,
    OpenRequested,
    FindToggled(bool),
    ZoomInRequested,
    ZoomOutRequested,
    HighlightEditableToggled(bool),
    ZoomComboSubmitted,
    KeyPressed(PreviewKey),
    CharacterPressed {
        character: char,
        active_control: PreviewActiveControl,
    },
    PageSettingsRequested,
    FirstPageRequested,
    PreviousPageRequested,
    NextPageRequested,
    LastPageRequested,
    MouseWheel(PreviewWheelRequest),
    EditCurrentPageRequested,
    CloseRequested,
    CloseCompleted,
    DesignerMouseUp(PreviewMouseButton),
    ShowTemplateRequested,
    FullScreenRequested,
    PdfExportRequested,
    EmailExportRequested,
    OutlineToggled(bool),
    ThumbnailsToggled(bool),
    CollapseAllRequested,
    ExpandAllRequested,
    Resized(PreviewResize),
    CopyRequested,
    PasteRequested,
    ContextMenuOpening(PreviewContextMenuInput),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewKey {
    Escape,
    F1,
    F11,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewKeyAction {
    CloseOrCancel,
    ShowContextHelp,
    ToggleFullScreen,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewActiveControl {
    ZoomCombo,
    PageNumber,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewCharacterAction {
    ApplyZoomCombo,
    SelectEnteredPage,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PreviewWheelRequest {
    pub delta: i32,
    pub modifiers: u16,
    pub position: [i32; 2],
    pub horizontal: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewMouseButton {
    Left,
    Right,
    Middle,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PopupRequest {
    pub screen_position: [i32; 2],
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PreparedPreviewComponent {
    pub expandable: bool,
    pub expanded: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PreviewResize {
    pub client_width: i32,
    pub client_height: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct PreviewContextMenuInput {
    pub selection_active: bool,
    pub copy_supported: bool,
    pub paste_supported: bool,
    pub selected_item_count: usize,
    pub paste_available: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PreviewShortcut {
    pub control: bool,
    pub key: char,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct PreviewContextMenuState {
    pub copy_visible: bool,
    pub paste_visible: bool,
    pub copy_enabled: bool,
    pub paste_enabled: bool,
    pub copy_shortcut: Option<PreviewShortcut>,
    pub paste_shortcut: Option<PreviewShortcut>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ZoomMode {
    #[default]
    Custom,
    PageWidth,
    WholePage,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FindToggleOutcome {
    pub state_changed: bool,
    pub invoke_disabled_preview_method: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewPrintOutcome {
    Started,
    SkippedBusy,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewOpenOutcome {
    Loaded,
    Cancelled,
    SkippedBusy,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PageSettingsApplyPath {
    ReplacePreparedPage,
    RefreshPreparedPage,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PageSettingsOutcome {
    Applied(PageSettingsApplyPath),
    Cancelled,
    SkippedBusy,
    SkippedMissingPage,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PageSelectionOutcome {
    Selected(i32),
    SkippedNoPages,
}

pub trait PreviewPageSettingsHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the prepared page cannot be queried.
    fn current_page_exists(&mut self, page_index: i32) -> Result<bool, Self::Error>;

    /// Shows page settings with the current page and report.
    ///
    /// `None` represents a cancelled dialog. The returned path represents the
    /// dialog state used by an accepted result.
    ///
    /// # Errors
    ///
    /// Returns an error when the dialog cannot be created or shown.
    fn show_page_settings(
        &mut self,
        page_index: i32,
    ) -> Result<Option<PageSettingsApplyPath>, Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the edited page cannot replace the current page.
    fn replace_prepared_page(&mut self, page_index: i32) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the accepted page cannot be refreshed in place.
    fn refresh_prepared_page(&mut self) -> Result<(), Self::Error>;
}

pub trait PreviewCopyHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the embedded preview cannot copy its selection.
    fn copy_preview_selection(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewPasteOutcome {
    Pasted,
    SkippedUnavailable,
}

pub trait PreviewPasteHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when paste availability cannot be read.
    fn can_paste_preview_selection(&mut self) -> Result<bool, Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the embedded preview cannot paste.
    fn paste_preview_selection(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PageEditOutcome {
    Applied,
    Cancelled,
    SkippedMissingPage,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PreviewCloseAction {
    #[default]
    None,
    Hide,
    ReleaseWindow,
    Minimize,
}

pub trait PreviewCloseHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the report close callback fails.
    fn notify_report_closed(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the form-owned resource cannot be released.
    fn release_owned_resource(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseOrCancelOutcome {
    WindowCloseRequested,
    ReportCancellationRequested,
}

pub trait PreviewCloseOrCancelHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the Iced window close request cannot be sent.
    fn request_window_close(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when active report cancellation cannot be requested.
    fn request_report_cancellation(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreviewExportOutcome {
    Exported,
    SkippedBusy,
    SkippedUnconfigured,
}

pub trait PreviewExportHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the current prepared page cannot be selected.
    fn select_prepared_report_page(&mut self, page: i32) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the configured export component cannot run.
    fn export_prepared_report(&mut self, exporter: &str) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the changed preview cannot be signaled.
    fn signal_preview_update(&mut self, active: bool) -> Result<(), Self::Error>;
}

pub trait PreviewPageEditorHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the current prepared page cannot be queried.
    fn current_page_exists(&mut self, page_index: i32) -> Result<bool, Self::Error>;

    /// Selects the editor for the page type, copies the page into a temporary
    /// report context, and opens the editor. `true` represents acceptance.
    ///
    /// # Errors
    ///
    /// Returns an error when the temporary context or editor cannot run.
    fn edit_page_in_temporary_report(&mut self, page_index: i32) -> Result<bool, Self::Error>;

    /// # Errors
    ///
    /// Returns an error when page replacement cannot start.
    fn begin_page_replacement(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the edited page cannot replace the current page.
    fn replace_page_from_editor(&mut self, page_index: i32) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the changed preview cannot be signaled.
    fn signal_preview_change(&mut self, active: bool) -> Result<(), Self::Error>;
}

pub trait PreviewOpenHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the prepared-report picker cannot run.
    fn choose_prepared_report(&mut self, filter: &str) -> Result<Option<PathBuf>, Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the current preview cannot be cleared.
    fn clear_preview(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the loading state cannot be shown.
    fn show_loading_state(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the prepared report cannot be loaded.
    fn load_prepared_report(&mut self, path: &Path) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the preview page cannot be selected.
    fn select_preview_page(&mut self, page: i32) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the preview cannot be refreshed.
    fn refresh_preview(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the preview update cannot be sent.
    fn signal_preview_update(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when report metadata cannot be read.
    fn report_title(&mut self) -> Result<Option<String>, Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the localized fallback title cannot be read.
    fn localized_preview_title(&mut self) -> Result<String, Self::Error>;
}

pub trait PreviewPrintHost {
    type Error;

    /// # Errors
    ///
    /// Returns an error when the prepared-report page cannot be selected.
    fn select_prepared_report_page(&mut self, page: i32) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when printing cannot start or complete.
    fn print_prepared_report(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the preview update cannot be sent.
    fn signal_preview_update(&mut self) -> Result<(), Self::Error>;

    /// # Errors
    ///
    /// Returns an error when the form update cannot be applied.
    fn update_form(&mut self, active: bool) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct PreviewSurfaceState {
    pub fill_available_space: bool,
    pub borderless: bool,
    pub tab_stop: bool,
    pub progress_handler_connected: bool,
    pub page_change_handler_connected: bool,
}

#[derive(Debug, Clone, Default, PartialEq)]
#[allow(clippy::struct_excessive_bools)]
pub struct PreviewForm {
    pub surface: Option<PreviewSurfaceState>,
    pub active_control_is_preview: bool,
    pub status_click_handler_wrapped: bool,
    pub zoom_change_handler_connected: bool,
    pub page_number_digits_only: bool,
    pub inherited_menu_links_cleared: usize,
    pub toolbar_fills_width: bool,
    pub full_screen: bool,
    pub primary_bar_visible: bool,
    pub secondary_bar_visible: bool,
    pub window_border_visible: bool,
    pub window_maximized: bool,
    pub saved_window_border_visible: bool,
    pub saved_window_maximized: bool,
    pub pdf_exporter: Option<String>,
    pub email_exporter: Option<String>,
    pub preview_busy: bool,
    pub current_page: i32,
    pub page_count: i32,
    pub main_preview_page: Option<i32>,
    pub thumbnail_preview_page: Option<i32>,
    pub scroll_adjustment_requested: bool,
    pub page_change_callback_requested: bool,
    pub page_update_guard_active: bool,
    pub release_window_on_close: bool,
    pub close_completed: bool,
    pub report_close_callback_available: bool,
    pub owned_close_resource_present: bool,
    pub title: String,
    pub find_mode: bool,
    pub find_button_down: bool,
    pub search_form_visible: bool,
    pub search_splitter_visible: bool,
    pub search_callbacks_connected: bool,
    pub search_result_count: usize,
    pub preview_update_requested: bool,
    pub zoom_scale: f64,
    pub zoom_mode: ZoomMode,
    pub layout_refresh_requested: bool,
    pub preview_focus_requested: bool,
    pub zoom_combo_text: String,
    pub zoom_combo_selected_index: Option<usize>,
    pub zoom_staged_page: Option<i32>,
    pub page_redraw_requested: Option<i32>,
    pub highlight_editable: bool,
    pub highlight_refresh_requested: bool,
    pub outline_pane_visible: bool,
    pub outline_button_down: bool,
    pub thumbnail_pane_visible: bool,
    pub thumbnail_button_down: bool,
    pub navigation_pane_visible: bool,
    pub thumbnail_horizontal_scroll: i32,
    pub thumbnail_vertical_scroll: i32,
    pub thumbnail_scroll_restore_requested: Option<[i32; 2]>,
    pub collection_update_active: bool,
    pub collection_update_changed: bool,
    pub collection_refresh_requested: bool,
    pub collapse_page_requested: Option<i32>,
    pub component_refresh_requested: bool,
    pub client_size: [i32; 2],
    pub status_panel_widths: [i32; 3],
    pub context_menu: PreviewContextMenuState,
}

impl PreviewForm {
    /// Initializes the `FastReport` preview form and its embedded preview surface.
    ///
    /// Reimplements Ghidra function `FUN_018ad460` at `0x018AD460`.
    /// Iced provides the fill layout and focus model. Host adapters connect the
    /// status, progress, page-change, zoom, and export operations.
    pub fn form_create(&mut self) {
        self.status_click_handler_wrapped = true;
        self.surface = Some(PreviewSurfaceState {
            fill_available_space: true,
            borderless: true,
            tab_stop: false,
            progress_handler_connected: true,
            page_change_handler_connected: true,
        });
        self.zoom_change_handler_connected = true;
        self.active_control_is_preview = true;
        self.page_number_digits_only = true;
        self.inherited_menu_links_cleared = 3;
        self.toolbar_fills_width = true;
        self.full_screen = false;
        self.primary_bar_visible = true;
        self.secondary_bar_visible = true;
        self.window_border_visible = true;
        self.window_maximized = false;
        self.pdf_exporter = None;
        self.email_exporter = None;
        self.zoom_scale = 1.0;
        self.zoom_mode = ZoomMode::Custom;
    }

    /// Copies the current selection from the embedded preview surface.
    ///
    /// Reimplements Ghidra function `FUN_018b0c60` at `0x018B0C60`.
    /// The recovered action delegates once to the preview object and has no
    /// local state change, retry, or fallback path.
    ///
    /// # Errors
    ///
    /// Returns the preview host error unchanged.
    pub fn copy_selection<H: PreviewCopyHost>(&self, host: &mut H) -> Result<(), H::Error> {
        host.copy_preview_selection()
    }

    /// Pastes into the embedded preview when paste data is available.
    ///
    /// Reimplements Ghidra function `FUN_018b1860` at `0x018B1860`.
    /// The recovered action queries availability first. An unavailable paste
    /// is a no-op, and a failed query or paste stops the handler without retry.
    ///
    /// # Errors
    ///
    /// Returns the first preview host error unchanged.
    pub fn paste_selection<H: PreviewPasteHost>(
        &self,
        host: &mut H,
    ) -> Result<PreviewPasteOutcome, H::Error> {
        if !host.can_paste_preview_selection()? {
            return Ok(PreviewPasteOutcome::SkippedUnavailable);
        }

        host.paste_preview_selection()?;
        Ok(PreviewPasteOutcome::Pasted)
    }

    /// Reports whether the preview window can close.
    ///
    /// Reimplements Ghidra function `FUN_018afbd0` at `0x018AFBD0`.
    /// Active preview generation rejects closure. An idle preview permits it.
    #[must_use]
    pub const fn can_close(&self) -> bool {
        !self.preview_busy
    }

    /// Completes preview-form closure and releases close-time resources.
    ///
    /// Reimplements Ghidra function `FUN_018afbf0` at `0x018AFBF0`.
    /// The configured release flag changes the window action. The form then
    /// marks closure, invokes an available report callback, and releases its
    /// optional owned resource in source order.
    ///
    /// # Errors
    ///
    /// Returns the first host error and stops later close-time operations.
    pub fn close<H: PreviewCloseHost>(
        &mut self,
        host: &mut H,
        current_action: PreviewCloseAction,
    ) -> Result<PreviewCloseAction, H::Error> {
        let action = if self.release_window_on_close {
            PreviewCloseAction::ReleaseWindow
        } else {
            current_action
        };
        self.close_completed = true;

        if self.report_close_callback_available {
            host.notify_report_closed()?;
        }
        if self.owned_close_resource_present {
            self.owned_close_resource_present = false;
            host.release_owned_resource()?;
        }
        Ok(action)
    }

    /// Closes an idle preview or cancels active report generation.
    ///
    /// Reimplements Ghidra function `FUN_018afcb0` at `0x018AFCB0`.
    /// The busy path keeps the window open and requests report cancellation.
    /// The idle path invokes the Iced window close pipeline.
    ///
    /// # Errors
    ///
    /// Returns the host error from the selected branch without retry.
    pub fn close_or_cancel<H: PreviewCloseOrCancelHost>(
        &self,
        host: &mut H,
    ) -> Result<CloseOrCancelOutcome, H::Error> {
        if self.preview_busy {
            host.request_report_cancellation()?;
            Ok(CloseOrCancelOutcome::ReportCancellationRequested)
        } else {
            host.request_window_close()?;
            Ok(CloseOrCancelOutcome::WindowCloseRequested)
        }
    }

    /// Exports the current prepared report through the configured PDF adapter.
    ///
    /// Reimplements Ghidra function `FUN_018b0040` at `0x018B0040`.
    /// A missing exporter or busy preview is a no-op. The idle path selects the
    /// current page, runs export, and signals the preview update.
    ///
    /// # Errors
    ///
    /// Returns the first host error without retry or rollback.
    pub fn export_pdf<H: PreviewExportHost>(
        &self,
        host: &mut H,
    ) -> Result<PreviewExportOutcome, H::Error> {
        self.export_with(host, self.pdf_exporter.as_deref())
    }

    /// Exports the current prepared report through the configured email adapter.
    ///
    /// Reimplements Ghidra function `FUN_018b0070` at `0x018B0070`.
    /// A missing exporter or busy preview is a no-op. The idle path selects the
    /// current page, runs export, and signals the preview update.
    ///
    /// # Errors
    ///
    /// Returns the first host error without retry or rollback.
    pub fn export_email<H: PreviewExportHost>(
        &self,
        host: &mut H,
    ) -> Result<PreviewExportOutcome, H::Error> {
        self.export_with(host, self.email_exporter.as_deref())
    }

    fn export_with<H: PreviewExportHost>(
        &self,
        host: &mut H,
        exporter: Option<&str>,
    ) -> Result<PreviewExportOutcome, H::Error> {
        let Some(exporter) = exporter else {
            return Ok(PreviewExportOutcome::SkippedUnconfigured);
        };
        if self.preview_busy {
            return Ok(PreviewExportOutcome::SkippedBusy);
        }

        host.select_prepared_report_page(self.current_page)?;
        host.export_prepared_report(exporter)?;
        host.signal_preview_update(true)?;
        Ok(PreviewExportOutcome::Exported)
    }

    /// Starts prepared-report printing from the current preview page.
    ///
    /// Reimplements Ghidra function `FUN_018af0c0` at `0x018AF0C0`.
    /// A busy preview skips printing. Both completed branches invoke the form
    /// update hook with `true`.
    ///
    /// # Errors
    ///
    /// Returns the first host error and stops later source-ordered operations.
    pub fn print<H: PreviewPrintHost>(
        &self,
        host: &mut H,
    ) -> Result<PreviewPrintOutcome, H::Error> {
        let outcome = if self.preview_busy {
            PreviewPrintOutcome::SkippedBusy
        } else {
            host.select_prepared_report_page(self.current_page)?;
            host.print_prepared_report()?;
            host.signal_preview_update()?;
            PreviewPrintOutcome::Started
        };
        host.update_form(true)?;
        Ok(outcome)
    }

    /// Opens a `FastReport` FP3 prepared-report file in the preview.
    ///
    /// Reimplements Ghidra function `FUN_018af0f0` at `0x018AF0F0`.
    /// Busy and cancelled requests are no-ops. An accepted file is loaded in
    /// source order before the Iced window title is updated.
    ///
    /// # Errors
    ///
    /// Returns the first host error without retry or rollback.
    pub fn open_prepared_report<H: PreviewOpenHost>(
        &mut self,
        host: &mut H,
    ) -> Result<PreviewOpenOutcome, H::Error> {
        if self.preview_busy {
            return Ok(PreviewOpenOutcome::SkippedBusy);
        }
        let Some(path) =
            host.choose_prepared_report("FastReport prepared reports (*.fp3)|*.fp3")?
        else {
            return Ok(PreviewOpenOutcome::Cancelled);
        };

        host.clear_preview()?;
        host.show_loading_state()?;
        host.load_prepared_report(&path)?;
        host.select_preview_page(1)?;
        self.current_page = 1;
        host.refresh_preview()?;
        host.signal_preview_update()?;
        self.title = match host.report_title()? {
            Some(title) if !title.is_empty() => title,
            _ => host.localized_preview_title()?,
        };
        Ok(PreviewOpenOutcome::Loaded)
    }

    /// Synchronizes preview search mode with the Find check button.
    ///
    /// Reimplements Ghidra function `FUN_018af1c0` at `0x018AF1C0`.
    /// Search controls and callbacks are synchronized for every click. A
    /// preview update is requested only when the mode changes.
    #[must_use]
    pub const fn toggle_find(&mut self, button_down: bool) -> FindToggleOutcome {
        let state_changed = self.find_mode != button_down;
        self.find_mode = button_down;
        self.find_button_down = button_down;
        self.search_form_visible = button_down;
        self.search_splitter_visible = button_down;
        self.search_callbacks_connected = true;
        self.search_result_count = 0;
        self.preview_update_requested = state_changed;
        FindToggleOutcome {
            state_changed,
            invoke_disabled_preview_method: !button_down,
        }
    }

    /// Increases the custom preview zoom by 25 percentage points.
    ///
    /// Reimplements Ghidra function `FUN_018af210` at `0x018AF210`.
    /// The recovered path has no maximum clamp. It clears fit mode and requests
    /// layout, combo, focus, and current-page redraw synchronization.
    pub fn zoom_in(&mut self) {
        self.zoom_scale += 0.25;
        self.zoom_mode = ZoomMode::Custom;
        self.layout_refresh_requested = true;
        self.preview_focus_requested = true;
        self.synchronize_zoom_combo();
        self.page_redraw_requested = Some(self.current_page);
    }

    /// Decreases the custom preview zoom by 25 percentage points.
    ///
    /// Reimplements Ghidra function `FUN_018af250` at `0x018AF250`.
    /// The scale stops at 25 percent. The operation clears fit mode and
    /// requests layout, combo, focus, and current-page redraw synchronization.
    pub fn zoom_out(&mut self) {
        self.zoom_scale = (self.zoom_scale - 0.25).max(0.25);
        self.zoom_mode = ZoomMode::Custom;
        self.layout_refresh_requested = true;
        self.preview_focus_requested = true;
        self.synchronize_zoom_combo();
        self.page_redraw_requested = Some(self.current_page);
    }

    /// Synchronizes editable-object highlighting with its check button.
    ///
    /// Reimplements Ghidra function `FUN_018af2b0` at `0x018AF2B0`.
    /// A changed value requests a preview refresh. Repeating the current value
    /// is a no-op.
    #[must_use]
    pub const fn set_highlight_editable(&mut self, button_down: bool) -> bool {
        let changed = self.highlight_editable != button_down;
        if changed {
            self.highlight_editable = button_down;
        }
        self.highlight_refresh_requested = changed;
        changed
    }

    /// Synchronizes the outline pane with its check button.
    ///
    /// Reimplements Ghidra function `FUN_018b01e0` at `0x018B01E0`.
    /// Outline and thumbnails share a navigation pane. Enabling outline hides
    /// thumbnails. A changed outline value requests layout refresh; repeating
    /// the value only synchronizes the controls.
    #[must_use]
    pub const fn set_outline_visible(&mut self, button_down: bool) -> bool {
        let changed = self.outline_pane_visible != button_down;
        self.navigation_pane_visible = button_down || self.thumbnail_pane_visible;
        self.outline_pane_visible = button_down;
        if button_down {
            self.thumbnail_pane_visible = false;
        }
        self.outline_button_down = button_down;
        self.layout_refresh_requested = changed;
        changed
    }

    /// Synchronizes the thumbnail pane with its check button.
    ///
    /// Reimplements Ghidra function `FUN_018b0210` at `0x018B0210`.
    /// Thumbnails and outline share a navigation pane. Enabling thumbnails
    /// hides outline and reapplies both stored thumbnail scroll positions. A
    /// changed thumbnail value requests layout refresh.
    #[must_use]
    pub const fn set_thumbnails_visible(&mut self, button_down: bool) -> bool {
        let changed = self.thumbnail_pane_visible != button_down;
        self.navigation_pane_visible = button_down || self.outline_pane_visible;
        self.thumbnail_pane_visible = button_down;
        self.thumbnail_scroll_restore_requested = None;
        if button_down {
            self.outline_pane_visible = false;
            self.thumbnail_scroll_restore_requested = Some([
                self.thumbnail_horizontal_scroll,
                self.thumbnail_vertical_scroll,
            ]);
        }
        self.thumbnail_button_down = button_down;
        self.layout_refresh_requested = changed;
        changed
    }

    /// Collapses all eligible expanded prepared-report components.
    ///
    /// Reimplements Ghidra function `FUN_018b0440` at `0x018B0440`.
    /// The guarded update scans all items. Only a changed collection requests
    /// refresh, page 1, and the additional collapse update. The update always
    /// ends with its changed flag.
    #[must_use]
    pub fn collapse_all(&mut self, components: &mut [PreparedPreviewComponent]) -> bool {
        self.collection_update_active = true;
        let mut changed = false;
        for component in components {
            if component.expandable && component.expanded {
                component.expanded = false;
                changed = true;
            }
        }

        self.collection_refresh_requested = changed;
        self.collapse_page_requested = changed.then_some(1);
        self.component_refresh_requested = changed;
        self.collection_update_changed = changed;
        self.collection_update_active = false;
        changed
    }

    /// Expands all eligible collapsed prepared-report components.
    ///
    /// Reimplements Ghidra function `FUN_018b05b0` at `0x018B05B0`.
    /// The guarded update scans all items and requests both preview refreshes
    /// only when an eligible component changes. It always ends with the
    /// collection's changed flag.
    #[must_use]
    pub fn expand_all(&mut self, components: &mut [PreparedPreviewComponent]) -> bool {
        self.collection_update_active = true;
        let mut changed = false;
        for component in components {
            if component.expandable && !component.expanded {
                component.expanded = true;
                changed = true;
            }
        }

        self.collection_refresh_requested = changed;
        self.component_refresh_requested = changed;
        self.collapse_page_requested = None;
        self.collection_update_changed = changed;
        self.collection_update_active = false;
        changed
    }

    /// Applies the preview form size and divides free status-bar width evenly.
    ///
    /// Reimplements Ghidra function `FUN_018b0700` at `0x018B0700`.
    /// A zero width or height restores the recovered 803 by 583 client size.
    /// The first status panel keeps its width. The two remaining panels each
    /// receive half of the free width, rounded to the nearest even integer.
    pub fn resize(&mut self, resize: PreviewResize) {
        const DEFAULT_CLIENT_WIDTH: i32 = 803;
        const DEFAULT_CLIENT_HEIGHT: i32 = 583;

        self.client_size = if resize.client_width == 0 || resize.client_height == 0 {
            [DEFAULT_CLIENT_WIDTH, DEFAULT_CLIENT_HEIGHT]
        } else {
            [resize.client_width, resize.client_height]
        };

        let free_width = i64::from(self.client_size[0]) - i64::from(self.status_panel_widths[0]);
        let floor_half = free_width.div_euclid(2);
        let rounded_half = if free_width.rem_euclid(2) == 0 || floor_half.rem_euclid(2) == 0 {
            floor_half
        } else {
            floor_half + 1
        };
        let secondary_width = i32::try_from(rounded_half).unwrap_or_else(|_| {
            if rounded_half.is_negative() {
                i32::MIN
            } else {
                i32::MAX
            }
        });
        self.status_panel_widths[1] = secondary_width;
        self.status_panel_widths[2] = secondary_width;
    }

    /// Prepares Copy and Paste state before the preview context menu opens.
    ///
    /// Reimplements Ghidra function `FUN_018b18a0` at `0x018B18A0`.
    /// Visibility follows the active selection and its capability flags. Copy
    /// enablement follows selected item count. Paste is enabled only when Copy
    /// is visible and paste data is available. Ctrl+C and Ctrl+V are restored
    /// on every popup.
    pub const fn prepare_context_menu(&mut self, input: PreviewContextMenuInput) {
        self.context_menu.copy_visible = input.selection_active && input.copy_supported;
        self.context_menu.paste_visible = input.selection_active && input.paste_supported;
        self.context_menu.copy_enabled = input.selected_item_count > 0;
        self.context_menu.paste_enabled = self.context_menu.copy_visible && input.paste_available;
        self.context_menu.copy_shortcut = Some(PreviewShortcut {
            control: true,
            key: 'C',
        });
        self.context_menu.paste_shortcut = Some(PreviewShortcut {
            control: true,
            key: 'V',
        });
    }

    /// Applies a fit mode or numeric percentage from the zoom combo.
    ///
    /// Reimplements Ghidra function `FUN_018af390` at `0x018AF390`.
    /// Rows 6 and 7 select fit-width and whole-page modes. Other rows parse
    /// text after percent signs and spaces are removed. Invalid nonempty text
    /// returns the conversion error before combo and page synchronization.
    ///
    /// # Errors
    ///
    /// Returns [`ParseFloatError`] when nonempty custom zoom text is invalid.
    pub fn apply_zoom_combo(
        &mut self,
        selected_index: i32,
        text: &str,
    ) -> Result<(), ParseFloatError> {
        self.preview_focus_requested = true;
        self.zoom_staged_page = Some(self.current_page);
        self.layout_refresh_requested = false;
        self.preview_update_requested = false;
        self.page_redraw_requested = None;

        match selected_index {
            6 => {
                self.zoom_mode = ZoomMode::PageWidth;
                self.layout_refresh_requested = true;
            }
            7 => {
                self.zoom_mode = ZoomMode::WholePage;
                self.layout_refresh_requested = true;
            }
            _ => {
                let percentage: String = text
                    .chars()
                    .filter(|character| *character != '%' && *character != ' ')
                    .collect();
                if !percentage.is_empty() {
                    self.zoom_scale = (percentage.parse::<f64>()? / 100.0).max(0.25);
                    self.zoom_mode = ZoomMode::Custom;
                    self.layout_refresh_requested = true;
                }
            }
        }

        self.synchronize_zoom_combo();
        self.preview_update_requested = true;
        self.page_redraw_requested = self.zoom_staged_page;
        self.zoom_staged_page = None;
        Ok(())
    }

    fn synchronize_zoom_combo(&mut self) {
        match self.zoom_mode {
            ZoomMode::Custom => {
                self.zoom_combo_selected_index = None;
                self.zoom_combo_text = format!("{:.0}%", self.zoom_scale * 100.0);
            }
            ZoomMode::PageWidth => {
                self.zoom_combo_selected_index = Some(6);
                "Page Width".clone_into(&mut self.zoom_combo_text);
            }
            ZoomMode::WholePage => {
                self.zoom_combo_selected_index = Some(7);
                "Whole Page".clone_into(&mut self.zoom_combo_text);
            }
        }
    }

    /// Maps preview-form keys to their recovered actions.
    ///
    /// Reimplements Ghidra function `FUN_018af600` at `0x018AF600`.
    /// Escape invokes the shared close-or-cancel path, F11 toggles full screen,
    /// and F1 opens context help. Other keys are not handled.
    #[must_use]
    pub const fn key_down(key: PreviewKey) -> Option<PreviewKeyAction> {
        match key {
            PreviewKey::Escape => Some(PreviewKeyAction::CloseOrCancel),
            PreviewKey::F1 => Some(PreviewKeyAction::ShowContextHelp),
            PreviewKey::F11 => Some(PreviewKeyAction::ToggleFullScreen),
            PreviewKey::Other => None,
        }
    }

    /// Maps Enter in a preview editor to its submit action.
    ///
    /// Reimplements Ghidra function `FUN_018af650` at `0x018AF650`.
    /// Enter applies zoom text when the zoom combo is active or selects the
    /// entered page when the page-number editor is active. Other input is not
    /// handled.
    #[must_use]
    pub const fn key_press(
        character: char,
        active_control: PreviewActiveControl,
    ) -> Option<PreviewCharacterAction> {
        if character != '\r' {
            return None;
        }

        match active_control {
            PreviewActiveControl::ZoomCombo => Some(PreviewCharacterAction::ApplyZoomCombo),
            PreviewActiveControl::PageNumber => Some(PreviewCharacterAction::SelectEnteredPage),
            PreviewActiveControl::Other => None,
        }
    }

    /// Validates and forwards a preview-form mouse-wheel event.
    ///
    /// Reimplements Ghidra function `FUN_018afb60` at `0x018AFB60`.
    /// A coordinate equal to Delphi's `0x7fff` sentinel rejects the event.
    /// Every valid event is forwarded to the shared preview-wheel handler with
    /// vertical orientation.
    #[must_use]
    pub const fn mouse_wheel_request(
        delta: i32,
        modifiers: u16,
        position: [i32; 2],
    ) -> Option<PreviewWheelRequest> {
        if position[0] == 0x7fff || position[1] == 0x7fff {
            return None;
        }

        Some(PreviewWheelRequest {
            delta,
            modifiers,
            position,
            horizontal: false,
        })
    }

    /// Maps a Designer button mouse release to its popup request.
    ///
    /// Reimplements Ghidra function `FUN_018afd80` at `0x018AFD80`.
    /// Only the right button opens the associated popup. The popup position is
    /// the Designer button's local origin converted to screen coordinates.
    #[must_use]
    pub const fn designer_mouse_up(
        button: PreviewMouseButton,
        control_screen_origin: [i32; 2],
    ) -> Option<PopupRequest> {
        if matches!(button, PreviewMouseButton::Right) {
            Some(PopupRequest {
                screen_position: control_screen_origin,
            })
        } else {
            None
        }
    }

    /// Builds and discards a temporary prepared-report item container.
    ///
    /// Reimplements Ghidra function `FUN_018afe50` at `0x018AFE50`.
    /// The recovered consumer is a no-op. The temporary collection is cleared
    /// and dropped without a persistent state change or visible output.
    pub fn show_template<T>(&self, prepared_items: &[T]) {
        let mut temporary_container = Vec::with_capacity(prepared_items.len());
        temporary_container.extend(prepared_items.iter());
        Self::show_template_stub(&temporary_container);
        temporary_container.clear();
    }

    const fn show_template_stub<T>(_temporary_container: &[&T]) {}

    /// Toggles the preview between its saved window state and full screen.
    ///
    /// Reimplements Ghidra function `FUN_018b0030` at `0x018B0030`.
    /// Entry hides both form-owned bars, saves the border and maximized state,
    /// removes the border, and maximizes. Exit restores the saved state and
    /// shows both bars.
    pub const fn toggle_full_screen(&mut self) {
        if self.full_screen {
            self.window_maximized = self.saved_window_maximized;
            self.window_border_visible = self.saved_window_border_visible;
            self.full_screen = false;
            self.primary_bar_visible = true;
            self.secondary_bar_visible = true;
        } else {
            self.primary_bar_visible = false;
            self.secondary_bar_visible = false;
            self.saved_window_border_visible = self.window_border_visible;
            self.saved_window_maximized = self.window_maximized;
            self.window_border_visible = false;
            self.window_maximized = true;
            self.full_screen = true;
        }
    }

    /// Opens page settings for the current prepared page.
    ///
    /// Reimplements Ghidra function `FUN_018af6b0` at `0x018AF6B0`.
    /// Busy and missing-page states skip the dialog. Cancel preserves the
    /// preview. An accepted dialog uses its recovered replacement or refresh
    /// path. Rust ownership supplies deterministic dialog destruction.
    ///
    /// # Errors
    ///
    /// Returns the first host error without retry or rollback.
    pub fn edit_current_page_settings<H: PreviewPageSettingsHost>(
        &self,
        host: &mut H,
    ) -> Result<PageSettingsOutcome, H::Error> {
        if self.preview_busy {
            return Ok(PageSettingsOutcome::SkippedBusy);
        }

        let page_index = self.current_page - 1;
        if !host.current_page_exists(page_index)? {
            return Ok(PageSettingsOutcome::SkippedMissingPage);
        }

        let Some(apply_path) = host.show_page_settings(page_index)? else {
            return Ok(PageSettingsOutcome::Cancelled);
        };

        match apply_path {
            PageSettingsApplyPath::ReplacePreparedPage => {
                host.replace_prepared_page(page_index)?;
            }
            PageSettingsApplyPath::RefreshPreparedPage => {
                host.refresh_prepared_page()?;
            }
        }

        Ok(PageSettingsOutcome::Applied(apply_path))
    }

    /// Opens an editor for the current prepared page.
    ///
    /// Reimplements Ghidra function `FUN_018afbb0` at `0x018AFBB0`.
    /// A missing page or cancelled editor preserves the original page. An
    /// accepted edit replaces the page and signals a preview change. Rust
    /// ownership supplies deterministic temporary-report cleanup.
    ///
    /// # Errors
    ///
    /// Returns the first host error without retry or rollback.
    pub fn edit_current_page<H: PreviewPageEditorHost>(
        &self,
        host: &mut H,
    ) -> Result<PageEditOutcome, H::Error> {
        let page_index = self.current_page - 1;
        if !host.current_page_exists(page_index)? {
            return Ok(PageEditOutcome::SkippedMissingPage);
        }
        if !host.edit_page_in_temporary_report(page_index)? {
            return Ok(PageEditOutcome::Cancelled);
        }

        host.begin_page_replacement()?;
        host.replace_page_from_editor(page_index)?;
        host.signal_preview_change(true)?;
        Ok(PageEditOutcome::Applied)
    }

    /// Selects the first prepared-report page.
    ///
    /// Reimplements Ghidra function `FUN_018afae0` at `0x018AFAE0`.
    /// The shared selection state synchronizes the main and thumbnail views,
    /// requests scroll adjustment and callback notification, and leaves the
    /// visible page unchanged when the report has no pages.
    #[must_use]
    pub fn select_first_page(&mut self) -> PageSelectionOutcome {
        self.select_page(1)
    }

    /// Selects the page before the current prepared-report page.
    ///
    /// Reimplements Ghidra function `FUN_018afb00` at `0x018AFB00`.
    /// The shared selection state clamps page one, synchronizes both preview
    /// surfaces, adjusts scrolling, and requests the page-change callback.
    #[must_use]
    pub fn select_previous_page(&mut self) -> PageSelectionOutcome {
        self.select_page(self.current_page - 1)
    }

    /// Selects the page after the current prepared-report page.
    ///
    /// Reimplements Ghidra function `FUN_018afb20` at `0x018AFB20`.
    /// The shared selection state clamps the last page, synchronizes both
    /// preview surfaces, adjusts scrolling, and requests the page-change
    /// callback.
    #[must_use]
    pub fn select_next_page(&mut self) -> PageSelectionOutcome {
        self.select_page(self.current_page + 1)
    }

    /// Selects the last prepared-report page.
    ///
    /// Reimplements Ghidra function `FUN_018afb40` at `0x018AFB40`.
    /// The page count becomes the requested one-based page. The shared state
    /// synchronizes both preview surfaces and preserves the no-pages case.
    #[must_use]
    pub fn select_last_page(&mut self) -> PageSelectionOutcome {
        self.select_page(self.page_count)
    }

    fn select_page(&mut self, requested_page: i32) -> PageSelectionOutcome {
        self.page_update_guard_active = true;
        let outcome = if self.page_count < 1 {
            PageSelectionOutcome::SkippedNoPages
        } else {
            let selected_page = requested_page.clamp(1, self.page_count);
            self.current_page = selected_page;
            self.main_preview_page = Some(selected_page);
            self.thumbnail_preview_page = Some(selected_page);
            PageSelectionOutcome::Selected(selected_page)
        };
        self.scroll_adjustment_requested = true;
        self.page_change_callback_requested = true;
        self.page_update_guard_active = false;
        outcome
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text("FastReport Preview"),
            button("Print").on_press(Message::PrintRequested),
            button("Open").on_press(Message::OpenRequested),
            button("Margins").on_press(Message::PageSettingsRequested),
            button("Edit").on_press(Message::EditCurrentPageRequested),
            button("First").on_press(Message::FirstPageRequested),
            button("Prior").on_press(Message::PreviousPageRequested),
            button("Next").on_press(Message::NextPageRequested),
            button("Last").on_press(Message::LastPageRequested),
            checkbox("Find", self.find_button_down).on_toggle(Message::FindToggled),
            button("Zoom in").on_press(Message::ZoomInRequested),
            button("Zoom out").on_press(Message::ZoomOutRequested),
            button("Full screen").on_press(Message::FullScreenRequested),
            text_input("Zoom", &self.zoom_combo_text).on_submit(Message::ZoomComboSubmitted),
            checkbox("Highlight editable", self.highlight_editable)
                .on_toggle(Message::HighlightEditableToggled),
            checkbox("Outline", self.outline_button_down).on_toggle(Message::OutlineToggled),
            checkbox("Thumbnails", self.thumbnail_button_down)
                .on_toggle(Message::ThumbnailsToggled),
        ]
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum HostError {
        Print,
        Copy,
        Paste,
    }

    #[derive(Default)]
    struct Host {
        calls: Vec<String>,
        fail_print: bool,
    }

    struct OpenHost {
        path: Option<PathBuf>,
        report_title: Option<String>,
        calls: Vec<String>,
    }

    struct PageSettingsHost {
        page_exists: bool,
        apply_path: Option<PageSettingsApplyPath>,
        calls: Vec<String>,
    }

    struct PageEditorHost {
        page_exists: bool,
        accepted: bool,
        calls: Vec<String>,
    }

    #[derive(Default)]
    struct CloseHost {
        calls: Vec<String>,
    }

    #[derive(Default)]
    struct ExportHost {
        calls: Vec<String>,
    }

    #[derive(Default)]
    struct CopyHost {
        calls: Vec<String>,
        fail: bool,
    }

    struct PasteHost {
        available: Result<bool, HostError>,
        fail_paste: bool,
        calls: Vec<String>,
    }

    impl PreviewPasteHost for PasteHost {
        type Error = HostError;

        fn can_paste_preview_selection(&mut self) -> Result<bool, Self::Error> {
            self.calls.push("can-paste".to_owned());
            self.available
        }

        fn paste_preview_selection(&mut self) -> Result<(), Self::Error> {
            self.calls.push("paste-selection".to_owned());
            if self.fail_paste {
                Err(HostError::Paste)
            } else {
                Ok(())
            }
        }
    }

    impl PreviewCopyHost for CopyHost {
        type Error = HostError;

        fn copy_preview_selection(&mut self) -> Result<(), Self::Error> {
            self.calls.push("copy-selection".to_owned());
            if self.fail {
                Err(HostError::Copy)
            } else {
                Ok(())
            }
        }
    }

    impl PreviewExportHost for ExportHost {
        type Error = HostError;

        fn select_prepared_report_page(&mut self, page: i32) -> Result<(), Self::Error> {
            self.calls.push(format!("page:{page}"));
            Ok(())
        }

        fn export_prepared_report(&mut self, exporter: &str) -> Result<(), Self::Error> {
            self.calls.push(format!("export:{exporter}"));
            Ok(())
        }

        fn signal_preview_update(&mut self, active: bool) -> Result<(), Self::Error> {
            self.calls.push(format!("preview-update:{active}"));
            Ok(())
        }
    }

    impl PreviewCloseHost for CloseHost {
        type Error = HostError;

        fn notify_report_closed(&mut self) -> Result<(), Self::Error> {
            self.calls.push("notify-report".to_owned());
            Ok(())
        }

        fn release_owned_resource(&mut self) -> Result<(), Self::Error> {
            self.calls.push("release-resource".to_owned());
            Ok(())
        }
    }

    impl PreviewCloseOrCancelHost for CloseHost {
        type Error = HostError;

        fn request_window_close(&mut self) -> Result<(), Self::Error> {
            self.calls.push("close-window".to_owned());
            Ok(())
        }

        fn request_report_cancellation(&mut self) -> Result<(), Self::Error> {
            self.calls.push("cancel-report".to_owned());
            Ok(())
        }
    }

    impl PreviewPageEditorHost for PageEditorHost {
        type Error = HostError;

        fn current_page_exists(&mut self, page_index: i32) -> Result<bool, Self::Error> {
            self.calls.push(format!("exists:{page_index}"));
            Ok(self.page_exists)
        }

        fn edit_page_in_temporary_report(&mut self, page_index: i32) -> Result<bool, Self::Error> {
            self.calls.push(format!("edit:{page_index}"));
            Ok(self.accepted)
        }

        fn begin_page_replacement(&mut self) -> Result<(), Self::Error> {
            self.calls.push("begin-replace".to_owned());
            Ok(())
        }

        fn replace_page_from_editor(&mut self, page_index: i32) -> Result<(), Self::Error> {
            self.calls.push(format!("replace:{page_index}"));
            Ok(())
        }

        fn signal_preview_change(&mut self, active: bool) -> Result<(), Self::Error> {
            self.calls.push(format!("preview-change:{active}"));
            Ok(())
        }
    }

    impl PreviewPageSettingsHost for PageSettingsHost {
        type Error = HostError;

        fn current_page_exists(&mut self, page_index: i32) -> Result<bool, Self::Error> {
            self.calls.push(format!("exists:{page_index}"));
            Ok(self.page_exists)
        }

        fn show_page_settings(
            &mut self,
            page_index: i32,
        ) -> Result<Option<PageSettingsApplyPath>, Self::Error> {
            self.calls.push(format!("show:{page_index}"));
            Ok(self.apply_path)
        }

        fn replace_prepared_page(&mut self, page_index: i32) -> Result<(), Self::Error> {
            self.calls.push(format!("replace:{page_index}"));
            Ok(())
        }

        fn refresh_prepared_page(&mut self) -> Result<(), Self::Error> {
            self.calls.push("refresh".to_owned());
            Ok(())
        }
    }

    impl PreviewOpenHost for OpenHost {
        type Error = HostError;

        fn choose_prepared_report(&mut self, filter: &str) -> Result<Option<PathBuf>, Self::Error> {
            self.calls.push(format!("choose:{filter}"));
            Ok(self.path.clone())
        }

        fn clear_preview(&mut self) -> Result<(), Self::Error> {
            self.calls.push("clear".to_owned());
            Ok(())
        }

        fn show_loading_state(&mut self) -> Result<(), Self::Error> {
            self.calls.push("loading".to_owned());
            Ok(())
        }

        fn load_prepared_report(&mut self, path: &Path) -> Result<(), Self::Error> {
            self.calls.push(format!("load:{}", path.display()));
            Ok(())
        }

        fn select_preview_page(&mut self, page: i32) -> Result<(), Self::Error> {
            self.calls.push(format!("page:{page}"));
            Ok(())
        }

        fn refresh_preview(&mut self) -> Result<(), Self::Error> {
            self.calls.push("refresh".to_owned());
            Ok(())
        }

        fn signal_preview_update(&mut self) -> Result<(), Self::Error> {
            self.calls.push("preview-update".to_owned());
            Ok(())
        }

        fn report_title(&mut self) -> Result<Option<String>, Self::Error> {
            self.calls.push("title".to_owned());
            Ok(self.report_title.clone())
        }

        fn localized_preview_title(&mut self) -> Result<String, Self::Error> {
            self.calls.push("fallback-title".to_owned());
            Ok("Preview".to_owned())
        }
    }

    impl PreviewPrintHost for Host {
        type Error = HostError;

        fn select_prepared_report_page(&mut self, page: i32) -> Result<(), Self::Error> {
            self.calls.push(format!("page:{page}"));
            Ok(())
        }

        fn print_prepared_report(&mut self) -> Result<(), Self::Error> {
            self.calls.push("print".to_owned());
            if self.fail_print {
                Err(HostError::Print)
            } else {
                Ok(())
            }
        }

        fn signal_preview_update(&mut self) -> Result<(), Self::Error> {
            self.calls.push("preview-update".to_owned());
            Ok(())
        }

        fn update_form(&mut self, active: bool) -> Result<(), Self::Error> {
            self.calls.push(format!("form-update:{active}"));
            Ok(())
        }
    }

    #[test]
    fn form_create_configures_preview_surface_and_handlers() {
        let mut form = PreviewForm::default();

        form.form_create();

        assert_eq!(
            form.surface,
            Some(PreviewSurfaceState {
                fill_available_space: true,
                borderless: true,
                tab_stop: false,
                progress_handler_connected: true,
                page_change_handler_connected: true,
            })
        );
        assert!(form.active_control_is_preview);
        assert!(form.status_click_handler_wrapped);
        assert!(form.zoom_change_handler_connected);
        assert!(form.page_number_digits_only);
        assert_eq!(form.inherited_menu_links_cleared, 3);
        assert!(form.toolbar_fills_width);
    }

    #[test]
    fn form_create_resets_transient_preview_state() {
        let mut form = PreviewForm {
            full_screen: true,
            pdf_exporter: Some("pdf".to_owned()),
            email_exporter: Some("mail".to_owned()),
            ..PreviewForm::default()
        };

        form.form_create();

        assert!(!form.full_screen);
        assert_eq!(form.pdf_exporter, None);
        assert_eq!(form.email_exporter, None);
    }

    #[test]
    fn print_starts_from_current_page_and_updates_form() -> Result<(), HostError> {
        let form = PreviewForm {
            current_page: 4,
            ..PreviewForm::default()
        };
        let mut host = Host::default();

        assert_eq!(form.print(&mut host)?, PreviewPrintOutcome::Started);
        assert_eq!(
            host.calls,
            ["page:4", "print", "preview-update", "form-update:true"]
        );
        Ok(())
    }

    #[test]
    fn print_while_busy_only_updates_form() -> Result<(), HostError> {
        let form = PreviewForm {
            preview_busy: true,
            current_page: 4,
            ..PreviewForm::default()
        };
        let mut host = Host::default();

        assert_eq!(form.print(&mut host)?, PreviewPrintOutcome::SkippedBusy);
        assert_eq!(host.calls, ["form-update:true"]);
        Ok(())
    }

    #[test]
    fn print_error_stops_preview_and_form_updates() {
        let form = PreviewForm {
            current_page: 4,
            ..PreviewForm::default()
        };
        let mut host = Host {
            fail_print: true,
            ..Host::default()
        };

        assert_eq!(form.print(&mut host), Err(HostError::Print));
        assert_eq!(host.calls, ["page:4", "print"]);
    }

    #[test]
    fn open_loads_selected_fp3_and_uses_report_title() -> Result<(), HostError> {
        let mut form = PreviewForm::default();
        let mut host = OpenHost {
            path: Some(PathBuf::from("report.fp3")),
            report_title: Some("Quarterly report".to_owned()),
            calls: Vec::new(),
        };

        assert_eq!(
            form.open_prepared_report(&mut host)?,
            PreviewOpenOutcome::Loaded
        );
        assert_eq!(form.current_page, 1);
        assert_eq!(form.title, "Quarterly report");
        assert_eq!(
            host.calls,
            [
                "choose:FastReport prepared reports (*.fp3)|*.fp3",
                "clear",
                "loading",
                "load:report.fp3",
                "page:1",
                "refresh",
                "preview-update",
                "title",
            ]
        );
        Ok(())
    }

    #[test]
    fn open_uses_fallback_title_when_report_title_is_empty() -> Result<(), HostError> {
        let mut form = PreviewForm::default();
        let mut host = OpenHost {
            path: Some(PathBuf::from("report.fp3")),
            report_title: None,
            calls: Vec::new(),
        };

        assert_eq!(
            form.open_prepared_report(&mut host)?,
            PreviewOpenOutcome::Loaded
        );
        assert_eq!(form.title, "Preview");
        assert_eq!(
            host.calls.last().map(String::as_str),
            Some("fallback-title")
        );
        Ok(())
    }

    #[test]
    fn open_cancel_and_busy_are_noops() -> Result<(), HostError> {
        let mut form = PreviewForm::default();
        let mut host = OpenHost {
            path: None,
            report_title: None,
            calls: Vec::new(),
        };

        assert_eq!(
            form.open_prepared_report(&mut host)?,
            PreviewOpenOutcome::Cancelled
        );
        assert_eq!(host.calls.len(), 1);

        form.preview_busy = true;
        host.calls.clear();
        assert_eq!(
            form.open_prepared_report(&mut host)?,
            PreviewOpenOutcome::SkippedBusy
        );
        assert!(host.calls.is_empty());
        Ok(())
    }

    #[test]
    fn find_toggle_enables_search_controls_and_requests_changed_update() {
        let mut form = PreviewForm {
            search_result_count: 4,
            ..PreviewForm::default()
        };

        assert_eq!(
            form.toggle_find(true),
            FindToggleOutcome {
                state_changed: true,
                invoke_disabled_preview_method: false,
            }
        );
        assert!(form.find_mode);
        assert!(form.find_button_down);
        assert!(form.search_form_visible);
        assert!(form.search_splitter_visible);
        assert!(form.search_callbacks_connected);
        assert_eq!(form.search_result_count, 0);
        assert!(form.preview_update_requested);
    }

    #[test]
    fn unchanged_disabled_find_still_synchronizes_and_requests_follow_up() {
        let mut form = PreviewForm {
            search_result_count: 4,
            ..PreviewForm::default()
        };

        assert_eq!(
            form.toggle_find(false),
            FindToggleOutcome {
                state_changed: false,
                invoke_disabled_preview_method: true,
            }
        );
        assert!(!form.search_form_visible);
        assert!(!form.search_splitter_visible);
        assert!(form.search_callbacks_connected);
        assert_eq!(form.search_result_count, 0);
        assert!(!form.preview_update_requested);
    }

    #[test]
    fn zoom_in_adds_quarter_scale_without_maximum_clamp() {
        let mut form = PreviewForm {
            current_page: 7,
            zoom_scale: 10.0,
            zoom_mode: ZoomMode::WholePage,
            ..PreviewForm::default()
        };

        form.zoom_in();

        assert!((form.zoom_scale - 10.25).abs() < f64::EPSILON);
        assert_eq!(form.zoom_mode, ZoomMode::Custom);
        assert!(form.layout_refresh_requested);
        assert!(form.preview_focus_requested);
        assert_eq!(form.zoom_combo_text, "1025%");
        assert_eq!(form.page_redraw_requested, Some(7));
    }

    #[test]
    fn zoom_out_stops_at_quarter_scale_and_requests_synchronization() {
        let mut form = PreviewForm {
            current_page: 9,
            zoom_scale: 0.25,
            zoom_mode: ZoomMode::WholePage,
            ..PreviewForm::default()
        };

        form.zoom_out();

        assert!((form.zoom_scale - 0.25).abs() < f64::EPSILON);
        assert_eq!(form.zoom_mode, ZoomMode::Custom);
        assert!(form.layout_refresh_requested);
        assert!(form.preview_focus_requested);
        assert_eq!(form.zoom_combo_text, "25%");
        assert_eq!(form.page_redraw_requested, Some(9));
    }

    #[test]
    fn highlight_editable_refreshes_only_for_a_changed_button_state() {
        let mut form = PreviewForm::default();

        assert!(form.set_highlight_editable(true));
        assert!(form.highlight_editable);
        assert!(form.highlight_refresh_requested);

        assert!(!form.set_highlight_editable(true));
        assert!(form.highlight_editable);
        assert!(!form.highlight_refresh_requested);
    }

    #[test]
    fn zoom_combo_rows_select_fit_modes_and_redraw_current_page() {
        let mut form = PreviewForm {
            current_page: 3,
            zoom_scale: 1.5,
            ..PreviewForm::default()
        };

        assert!(form.apply_zoom_combo(6, "ignored").is_ok());
        assert_eq!(form.zoom_mode, ZoomMode::PageWidth);
        assert_eq!(form.zoom_combo_selected_index, Some(6));
        assert_eq!(form.zoom_combo_text, "Page Width");
        assert_eq!(form.page_redraw_requested, Some(3));
        assert_eq!(form.zoom_staged_page, None);

        assert!(form.apply_zoom_combo(7, "ignored").is_ok());
        assert_eq!(form.zoom_mode, ZoomMode::WholePage);
        assert_eq!(form.zoom_combo_selected_index, Some(7));
        assert_eq!(form.zoom_combo_text, "Whole Page");
    }

    #[test]
    fn zoom_combo_parses_percentage_and_clamps_custom_scale() {
        let mut form = PreviewForm {
            current_page: 5,
            zoom_scale: 1.0,
            zoom_mode: ZoomMode::PageWidth,
            ..PreviewForm::default()
        };

        assert!(form.apply_zoom_combo(-1, " 10 % ").is_ok());

        assert!((form.zoom_scale - 0.25).abs() < f64::EPSILON);
        assert_eq!(form.zoom_mode, ZoomMode::Custom);
        assert_eq!(form.zoom_combo_selected_index, None);
        assert_eq!(form.zoom_combo_text, "25%");
        assert!(form.layout_refresh_requested);
        assert!(form.preview_update_requested);
        assert_eq!(form.page_redraw_requested, Some(5));
    }

    #[test]
    fn empty_zoom_combo_text_preserves_zoom_and_still_synchronizes() {
        let mut form = PreviewForm {
            current_page: 6,
            zoom_scale: 2.0,
            zoom_mode: ZoomMode::WholePage,
            ..PreviewForm::default()
        };

        assert!(form.apply_zoom_combo(-1, " % ").is_ok());

        assert!((form.zoom_scale - 2.0).abs() < f64::EPSILON);
        assert_eq!(form.zoom_mode, ZoomMode::WholePage);
        assert!(!form.layout_refresh_requested);
        assert!(form.preview_update_requested);
        assert_eq!(form.page_redraw_requested, Some(6));
    }

    #[test]
    fn invalid_zoom_combo_text_returns_before_redraw_synchronization() {
        let mut form = PreviewForm {
            current_page: 8,
            zoom_scale: 1.0,
            ..PreviewForm::default()
        };

        assert!(form.apply_zoom_combo(-1, "invalid%").is_err());

        assert!(form.preview_focus_requested);
        assert_eq!(form.zoom_staged_page, Some(8));
        assert!(!form.preview_update_requested);
        assert_eq!(form.page_redraw_requested, None);
        assert!((form.zoom_scale - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn preview_key_down_maps_escape_and_function_keys() {
        assert_eq!(
            PreviewForm::key_down(PreviewKey::Escape),
            Some(PreviewKeyAction::CloseOrCancel)
        );
        assert_eq!(
            PreviewForm::key_down(PreviewKey::F11),
            Some(PreviewKeyAction::ToggleFullScreen)
        );
        assert_eq!(
            PreviewForm::key_down(PreviewKey::F1),
            Some(PreviewKeyAction::ShowContextHelp)
        );
    }

    #[test]
    fn preview_key_down_ignores_other_keys() {
        assert_eq!(PreviewForm::key_down(PreviewKey::Other), None);
    }

    #[test]
    fn preview_enter_submits_the_active_editor() {
        assert_eq!(
            PreviewForm::key_press('\r', PreviewActiveControl::ZoomCombo),
            Some(PreviewCharacterAction::ApplyZoomCombo)
        );
        assert_eq!(
            PreviewForm::key_press('\r', PreviewActiveControl::PageNumber),
            Some(PreviewCharacterAction::SelectEnteredPage)
        );
    }

    #[test]
    fn preview_key_press_ignores_other_input() {
        assert_eq!(
            PreviewForm::key_press('x', PreviewActiveControl::ZoomCombo),
            None
        );
        assert_eq!(
            PreviewForm::key_press('\r', PreviewActiveControl::Other),
            None
        );
    }

    #[test]
    fn page_settings_skip_busy_missing_page_and_cancel() -> Result<(), HostError> {
        let busy_form = PreviewForm {
            preview_busy: true,
            current_page: 4,
            ..PreviewForm::default()
        };
        let mut host = PageSettingsHost {
            page_exists: true,
            apply_path: Some(PageSettingsApplyPath::ReplacePreparedPage),
            calls: Vec::new(),
        };
        assert_eq!(
            busy_form.edit_current_page_settings(&mut host)?,
            PageSettingsOutcome::SkippedBusy
        );
        assert!(host.calls.is_empty());

        let form = PreviewForm {
            current_page: 4,
            ..PreviewForm::default()
        };
        host.page_exists = false;
        assert_eq!(
            form.edit_current_page_settings(&mut host)?,
            PageSettingsOutcome::SkippedMissingPage
        );
        assert_eq!(host.calls, ["exists:3"]);

        host.page_exists = true;
        host.apply_path = None;
        host.calls.clear();
        assert_eq!(
            form.edit_current_page_settings(&mut host)?,
            PageSettingsOutcome::Cancelled
        );
        assert_eq!(host.calls, ["exists:3", "show:3"]);
        Ok(())
    }

    #[test]
    fn accepted_page_settings_use_the_selected_apply_path() -> Result<(), HostError> {
        let form = PreviewForm {
            current_page: 2,
            ..PreviewForm::default()
        };

        for (apply_path, expected_call) in [
            (PageSettingsApplyPath::ReplacePreparedPage, "replace:1"),
            (PageSettingsApplyPath::RefreshPreparedPage, "refresh"),
        ] {
            let mut host = PageSettingsHost {
                page_exists: true,
                apply_path: Some(apply_path),
                calls: Vec::new(),
            };

            assert_eq!(
                form.edit_current_page_settings(&mut host)?,
                PageSettingsOutcome::Applied(apply_path)
            );
            assert_eq!(host.calls, ["exists:1", "show:1", expected_call]);
        }
        Ok(())
    }

    #[test]
    fn first_page_selects_page_one_and_synchronizes_views() {
        let mut form = PreviewForm {
            current_page: 4,
            page_count: 8,
            main_preview_page: Some(4),
            thumbnail_preview_page: Some(4),
            ..PreviewForm::default()
        };

        assert_eq!(form.select_first_page(), PageSelectionOutcome::Selected(1));
        assert_eq!(form.current_page, 1);
        assert_eq!(form.main_preview_page, Some(1));
        assert_eq!(form.thumbnail_preview_page, Some(1));
        assert!(form.scroll_adjustment_requested);
        assert!(form.page_change_callback_requested);
        assert!(!form.page_update_guard_active);
    }

    #[test]
    fn first_page_with_no_pages_keeps_visible_page() {
        let mut form = PreviewForm {
            current_page: 4,
            page_count: 0,
            main_preview_page: Some(4),
            thumbnail_preview_page: Some(4),
            ..PreviewForm::default()
        };

        assert_eq!(
            form.select_first_page(),
            PageSelectionOutcome::SkippedNoPages
        );
        assert_eq!(form.current_page, 4);
        assert_eq!(form.main_preview_page, Some(4));
        assert_eq!(form.thumbnail_preview_page, Some(4));
        assert!(form.scroll_adjustment_requested);
        assert!(form.page_change_callback_requested);
        assert!(!form.page_update_guard_active);
    }

    #[test]
    fn previous_page_decrements_and_clamps_page_one() {
        let mut form = PreviewForm {
            current_page: 3,
            page_count: 5,
            ..PreviewForm::default()
        };

        assert_eq!(
            form.select_previous_page(),
            PageSelectionOutcome::Selected(2)
        );
        assert_eq!(form.main_preview_page, Some(2));
        assert_eq!(form.thumbnail_preview_page, Some(2));

        form.current_page = 1;
        assert_eq!(
            form.select_previous_page(),
            PageSelectionOutcome::Selected(1)
        );
        assert_eq!(form.main_preview_page, Some(1));
        assert_eq!(form.thumbnail_preview_page, Some(1));
        assert!(form.scroll_adjustment_requested);
        assert!(form.page_change_callback_requested);
        assert!(!form.page_update_guard_active);
    }

    #[test]
    fn next_page_increments_and_clamps_the_last_page() {
        let mut form = PreviewForm {
            current_page: 2,
            page_count: 5,
            ..PreviewForm::default()
        };

        assert_eq!(form.select_next_page(), PageSelectionOutcome::Selected(3));
        assert_eq!(form.main_preview_page, Some(3));
        assert_eq!(form.thumbnail_preview_page, Some(3));

        form.current_page = 5;
        assert_eq!(form.select_next_page(), PageSelectionOutcome::Selected(5));
        assert_eq!(form.main_preview_page, Some(5));
        assert_eq!(form.thumbnail_preview_page, Some(5));
        assert!(form.scroll_adjustment_requested);
        assert!(form.page_change_callback_requested);
        assert!(!form.page_update_guard_active);
    }

    #[test]
    fn last_page_selects_page_count_and_preserves_no_pages() {
        let mut form = PreviewForm {
            current_page: 2,
            page_count: 6,
            ..PreviewForm::default()
        };

        assert_eq!(form.select_last_page(), PageSelectionOutcome::Selected(6));
        assert_eq!(form.main_preview_page, Some(6));
        assert_eq!(form.thumbnail_preview_page, Some(6));

        form.page_count = 0;
        assert_eq!(
            form.select_last_page(),
            PageSelectionOutcome::SkippedNoPages
        );
        assert_eq!(form.current_page, 6);
        assert_eq!(form.main_preview_page, Some(6));
        assert_eq!(form.thumbnail_preview_page, Some(6));
        assert!(form.scroll_adjustment_requested);
        assert!(form.page_change_callback_requested);
        assert!(!form.page_update_guard_active);
    }

    #[test]
    fn valid_preview_wheel_event_is_forwarded_as_vertical() {
        assert_eq!(
            PreviewForm::mouse_wheel_request(120, 4, [32, 64]),
            Some(PreviewWheelRequest {
                delta: 120,
                modifiers: 4,
                position: [32, 64],
                horizontal: false,
            })
        );
    }

    #[test]
    fn preview_wheel_rejects_each_invalid_coordinate_sentinel() {
        assert_eq!(PreviewForm::mouse_wheel_request(120, 0, [0x7fff, 64]), None);
        assert_eq!(
            PreviewForm::mouse_wheel_request(-120, 0, [32, 0x7fff]),
            None
        );
    }

    #[test]
    fn page_editor_skips_missing_page_and_cancel() -> Result<(), HostError> {
        let form = PreviewForm {
            current_page: 3,
            ..PreviewForm::default()
        };
        let mut host = PageEditorHost {
            page_exists: false,
            accepted: true,
            calls: Vec::new(),
        };

        assert_eq!(
            form.edit_current_page(&mut host)?,
            PageEditOutcome::SkippedMissingPage
        );
        assert_eq!(host.calls, ["exists:2"]);

        host.page_exists = true;
        host.accepted = false;
        host.calls.clear();
        assert_eq!(
            form.edit_current_page(&mut host)?,
            PageEditOutcome::Cancelled
        );
        assert_eq!(host.calls, ["exists:2", "edit:2"]);
        Ok(())
    }

    #[test]
    fn accepted_page_editor_replaces_page_and_signals_change() -> Result<(), HostError> {
        let form = PreviewForm {
            current_page: 3,
            ..PreviewForm::default()
        };
        let mut host = PageEditorHost {
            page_exists: true,
            accepted: true,
            calls: Vec::new(),
        };

        assert_eq!(form.edit_current_page(&mut host)?, PageEditOutcome::Applied);
        assert_eq!(
            host.calls,
            [
                "exists:2",
                "edit:2",
                "begin-replace",
                "replace:2",
                "preview-change:true",
            ]
        );
        Ok(())
    }

    #[test]
    fn close_query_allows_only_an_idle_preview() {
        let mut form = PreviewForm::default();
        assert!(form.can_close());

        form.preview_busy = true;
        assert!(!form.can_close());
    }

    #[test]
    fn close_can_release_window_notify_report_and_release_resource() -> Result<(), HostError> {
        let mut form = PreviewForm {
            release_window_on_close: true,
            report_close_callback_available: true,
            owned_close_resource_present: true,
            ..PreviewForm::default()
        };
        let mut host = CloseHost::default();

        assert_eq!(
            form.close(&mut host, PreviewCloseAction::Hide)?,
            PreviewCloseAction::ReleaseWindow
        );
        assert!(form.close_completed);
        assert!(!form.owned_close_resource_present);
        assert_eq!(host.calls, ["notify-report", "release-resource"]);
        Ok(())
    }

    #[test]
    fn close_preserves_action_when_optional_cleanup_is_absent() -> Result<(), HostError> {
        let mut form = PreviewForm::default();
        let mut host = CloseHost::default();

        assert_eq!(
            form.close(&mut host, PreviewCloseAction::Minimize)?,
            PreviewCloseAction::Minimize
        );
        assert!(form.close_completed);
        assert!(host.calls.is_empty());
        Ok(())
    }

    #[test]
    fn close_or_cancel_selects_the_busy_or_idle_path() -> Result<(), HostError> {
        let mut form = PreviewForm::default();
        let mut host = CloseHost::default();

        assert_eq!(
            form.close_or_cancel(&mut host)?,
            CloseOrCancelOutcome::WindowCloseRequested
        );
        assert_eq!(host.calls, ["close-window"]);

        form.preview_busy = true;
        host.calls.clear();
        assert_eq!(
            form.close_or_cancel(&mut host)?,
            CloseOrCancelOutcome::ReportCancellationRequested
        );
        assert_eq!(host.calls, ["cancel-report"]);
        Ok(())
    }

    #[test]
    fn designer_right_mouse_up_opens_popup_at_control_origin() {
        assert_eq!(
            PreviewForm::designer_mouse_up(PreviewMouseButton::Right, [371, 2]),
            Some(PopupRequest {
                screen_position: [371, 2],
            })
        );
    }

    #[test]
    fn designer_mouse_up_ignores_other_buttons() {
        for button in [
            PreviewMouseButton::Left,
            PreviewMouseButton::Middle,
            PreviewMouseButton::Other,
        ] {
            assert_eq!(PreviewForm::designer_mouse_up(button, [371, 2]), None);
        }
    }

    #[test]
    fn show_template_discards_temporary_items_without_state_change() {
        let form = PreviewForm {
            current_page: 2,
            page_count: 4,
            ..PreviewForm::default()
        };
        let before = form.clone();

        form.show_template(&["page", "band", "memo"]);
        form.show_template::<&str>(&[]);

        assert_eq!(form, before);
    }

    #[test]
    fn full_screen_toggle_saves_and_restores_window_state() {
        let mut form = PreviewForm {
            primary_bar_visible: true,
            secondary_bar_visible: true,
            window_border_visible: true,
            window_maximized: false,
            ..PreviewForm::default()
        };

        form.toggle_full_screen();

        assert!(form.full_screen);
        assert!(!form.primary_bar_visible);
        assert!(!form.secondary_bar_visible);
        assert!(!form.window_border_visible);
        assert!(form.window_maximized);
        assert!(form.saved_window_border_visible);
        assert!(!form.saved_window_maximized);

        form.toggle_full_screen();

        assert!(!form.full_screen);
        assert!(form.primary_bar_visible);
        assert!(form.secondary_bar_visible);
        assert!(form.window_border_visible);
        assert!(!form.window_maximized);
    }

    #[test]
    fn pdf_export_skips_unconfigured_and_busy_preview() -> Result<(), HostError> {
        let mut form = PreviewForm::default();
        let mut host = ExportHost::default();

        assert_eq!(
            form.export_pdf(&mut host)?,
            PreviewExportOutcome::SkippedUnconfigured
        );
        assert!(host.calls.is_empty());

        form.pdf_exporter = Some("PDF".to_owned());
        form.preview_busy = true;
        assert_eq!(
            form.export_pdf(&mut host)?,
            PreviewExportOutcome::SkippedBusy
        );
        assert!(host.calls.is_empty());
        Ok(())
    }

    #[test]
    fn pdf_export_selects_page_exports_and_signals_update() -> Result<(), HostError> {
        let form = PreviewForm {
            pdf_exporter: Some("PDF".to_owned()),
            current_page: 7,
            ..PreviewForm::default()
        };
        let mut host = ExportHost::default();

        assert_eq!(form.export_pdf(&mut host)?, PreviewExportOutcome::Exported);
        assert_eq!(host.calls, ["page:7", "export:PDF", "preview-update:true"]);
        Ok(())
    }

    #[test]
    fn email_export_uses_the_common_export_pipeline() -> Result<(), HostError> {
        let form = PreviewForm {
            email_exporter: Some("Email".to_owned()),
            current_page: 5,
            ..PreviewForm::default()
        };
        let mut host = ExportHost::default();

        assert_eq!(
            form.export_email(&mut host)?,
            PreviewExportOutcome::Exported
        );
        assert_eq!(
            host.calls,
            ["page:5", "export:Email", "preview-update:true"]
        );
        Ok(())
    }

    #[test]
    fn outline_enable_hides_thumbnails_and_refreshes_layout() {
        let mut form = PreviewForm {
            thumbnail_pane_visible: true,
            ..PreviewForm::default()
        };

        assert!(form.set_outline_visible(true));
        assert!(form.outline_pane_visible);
        assert!(form.outline_button_down);
        assert!(!form.thumbnail_pane_visible);
        assert!(form.navigation_pane_visible);
        assert!(form.layout_refresh_requested);

        assert!(!form.set_outline_visible(true));
        assert!(!form.layout_refresh_requested);
    }

    #[test]
    fn outline_disable_keeps_navigation_only_when_thumbnails_are_visible() {
        let mut form = PreviewForm {
            outline_pane_visible: true,
            outline_button_down: true,
            thumbnail_pane_visible: false,
            navigation_pane_visible: true,
            ..PreviewForm::default()
        };

        assert!(form.set_outline_visible(false));
        assert!(!form.outline_pane_visible);
        assert!(!form.outline_button_down);
        assert!(!form.navigation_pane_visible);
        assert!(form.layout_refresh_requested);
    }

    #[test]
    fn thumbnails_enable_hides_outline_and_restores_scroll_positions() {
        let mut form = PreviewForm {
            outline_pane_visible: true,
            thumbnail_horizontal_scroll: 14,
            thumbnail_vertical_scroll: 28,
            ..PreviewForm::default()
        };

        assert!(form.set_thumbnails_visible(true));
        assert!(form.thumbnail_pane_visible);
        assert!(form.thumbnail_button_down);
        assert!(!form.outline_pane_visible);
        assert!(form.navigation_pane_visible);
        assert_eq!(form.thumbnail_scroll_restore_requested, Some([14, 28]));
        assert!(form.layout_refresh_requested);

        assert!(!form.set_thumbnails_visible(true));
        assert_eq!(form.thumbnail_scroll_restore_requested, Some([14, 28]));
        assert!(!form.layout_refresh_requested);
    }

    #[test]
    fn thumbnails_disable_keeps_navigation_only_when_outline_is_visible() {
        let mut form = PreviewForm {
            outline_pane_visible: false,
            thumbnail_pane_visible: true,
            thumbnail_button_down: true,
            navigation_pane_visible: true,
            ..PreviewForm::default()
        };

        assert!(form.set_thumbnails_visible(false));
        assert!(!form.thumbnail_pane_visible);
        assert!(!form.thumbnail_button_down);
        assert!(!form.navigation_pane_visible);
        assert_eq!(form.thumbnail_scroll_restore_requested, None);
        assert!(form.layout_refresh_requested);
    }

    #[test]
    fn collapse_all_changes_only_eligible_expanded_components() {
        let mut form = PreviewForm::default();
        let mut components = [
            PreparedPreviewComponent {
                expandable: true,
                expanded: true,
            },
            PreparedPreviewComponent {
                expandable: true,
                expanded: false,
            },
            PreparedPreviewComponent {
                expandable: false,
                expanded: true,
            },
        ];

        assert!(form.collapse_all(&mut components));
        assert!(!components[0].expanded);
        assert!(!components[1].expanded);
        assert!(components[2].expanded);
        assert!(form.collection_refresh_requested);
        assert_eq!(form.collapse_page_requested, Some(1));
        assert!(form.component_refresh_requested);
        assert!(form.collection_update_changed);
        assert!(!form.collection_update_active);
    }

    #[test]
    fn collapse_all_unchanged_collection_only_completes_update() {
        let mut form = PreviewForm {
            collection_refresh_requested: true,
            collapse_page_requested: Some(1),
            component_refresh_requested: true,
            ..PreviewForm::default()
        };
        let mut components = [PreparedPreviewComponent {
            expandable: true,
            expanded: false,
        }];

        assert!(!form.collapse_all(&mut components));
        assert!(!form.collection_refresh_requested);
        assert_eq!(form.collapse_page_requested, None);
        assert!(!form.component_refresh_requested);
        assert!(!form.collection_update_changed);
        assert!(!form.collection_update_active);
    }

    #[test]
    fn expand_all_changes_only_eligible_collapsed_components() {
        let mut form = PreviewForm {
            collapse_page_requested: Some(1),
            ..PreviewForm::default()
        };
        let mut components = [
            PreparedPreviewComponent {
                expandable: true,
                expanded: false,
            },
            PreparedPreviewComponent {
                expandable: true,
                expanded: true,
            },
            PreparedPreviewComponent {
                expandable: false,
                expanded: false,
            },
        ];

        assert!(form.expand_all(&mut components));
        assert!(components[0].expanded);
        assert!(components[1].expanded);
        assert!(!components[2].expanded);
        assert!(form.collection_refresh_requested);
        assert!(form.component_refresh_requested);
        assert_eq!(form.collapse_page_requested, None);
        assert!(form.collection_update_changed);
        assert!(!form.collection_update_active);
    }

    #[test]
    fn expand_all_unchanged_collection_only_completes_update() {
        let mut form = PreviewForm {
            collection_refresh_requested: true,
            component_refresh_requested: true,
            collapse_page_requested: Some(1),
            ..PreviewForm::default()
        };
        let mut components = [PreparedPreviewComponent {
            expandable: true,
            expanded: true,
        }];

        assert!(!form.expand_all(&mut components));
        assert!(!form.collection_refresh_requested);
        assert!(!form.component_refresh_requested);
        assert_eq!(form.collapse_page_requested, None);
        assert!(!form.collection_update_changed);
        assert!(!form.collection_update_active);
    }

    #[test]
    fn resize_preserves_nonzero_client_size_and_centers_status_panels() {
        let mut form = PreviewForm {
            status_panel_widths: [203, 0, 0],
            ..PreviewForm::default()
        };

        form.resize(PreviewResize {
            client_width: 804,
            client_height: 600,
        });

        assert_eq!(form.client_size, [804, 600]);
        assert_eq!(form.status_panel_widths, [203, 300, 300]);
    }

    #[test]
    fn resize_restores_default_size_when_one_dimension_is_zero() {
        let mut form = PreviewForm {
            status_panel_widths: [203, 99, 101],
            ..PreviewForm::default()
        };

        form.resize(PreviewResize {
            client_width: 0,
            client_height: 600,
        });

        assert_eq!(form.client_size, [803, 583]);
        assert_eq!(form.status_panel_widths, [203, 300, 300]);
    }

    #[test]
    fn copy_selection_delegates_once_to_preview_host() {
        let form = PreviewForm::default();
        let mut host = CopyHost::default();

        assert_eq!(form.copy_selection(&mut host), Ok(()));
        assert_eq!(host.calls, ["copy-selection"]);
    }

    #[test]
    fn copy_selection_returns_host_error_without_retry() {
        let form = PreviewForm::default();
        let mut host = CopyHost {
            fail: true,
            ..CopyHost::default()
        };

        assert_eq!(form.copy_selection(&mut host), Err(HostError::Copy));
        assert_eq!(host.calls, ["copy-selection"]);
    }

    #[test]
    fn paste_selection_checks_availability_before_pasting() {
        let form = PreviewForm::default();
        let mut host = PasteHost {
            available: Ok(true),
            fail_paste: false,
            calls: Vec::new(),
        };

        assert_eq!(
            form.paste_selection(&mut host),
            Ok(PreviewPasteOutcome::Pasted)
        );
        assert_eq!(host.calls, ["can-paste", "paste-selection"]);
    }

    #[test]
    fn paste_selection_skips_unavailable_data() {
        let form = PreviewForm::default();
        let mut host = PasteHost {
            available: Ok(false),
            fail_paste: false,
            calls: Vec::new(),
        };

        assert_eq!(
            form.paste_selection(&mut host),
            Ok(PreviewPasteOutcome::SkippedUnavailable)
        );
        assert_eq!(host.calls, ["can-paste"]);
    }

    #[test]
    fn paste_selection_returns_check_error_without_pasting() {
        let form = PreviewForm::default();
        let mut host = PasteHost {
            available: Err(HostError::Paste),
            fail_paste: false,
            calls: Vec::new(),
        };

        assert_eq!(form.paste_selection(&mut host), Err(HostError::Paste));
        assert_eq!(host.calls, ["can-paste"]);
    }

    #[test]
    fn paste_selection_returns_paste_error_without_retry() {
        let form = PreviewForm::default();
        let mut host = PasteHost {
            available: Ok(true),
            fail_paste: true,
            calls: Vec::new(),
        };

        assert_eq!(form.paste_selection(&mut host), Err(HostError::Paste));
        assert_eq!(host.calls, ["can-paste", "paste-selection"]);
    }

    #[test]
    fn prepare_context_menu_updates_visible_enabled_and_shortcut_state() {
        let mut form = PreviewForm::default();

        form.prepare_context_menu(PreviewContextMenuInput {
            selection_active: true,
            copy_supported: true,
            paste_supported: true,
            selected_item_count: 2,
            paste_available: true,
        });

        assert_eq!(
            form.context_menu,
            PreviewContextMenuState {
                copy_visible: true,
                paste_visible: true,
                copy_enabled: true,
                paste_enabled: true,
                copy_shortcut: Some(PreviewShortcut {
                    control: true,
                    key: 'C',
                }),
                paste_shortcut: Some(PreviewShortcut {
                    control: true,
                    key: 'V',
                }),
            }
        );
    }

    #[test]
    fn prepare_context_menu_preserves_recovered_paste_enablement_gate() {
        let mut form = PreviewForm::default();

        form.prepare_context_menu(PreviewContextMenuInput {
            selection_active: true,
            copy_supported: false,
            paste_supported: true,
            selected_item_count: 0,
            paste_available: true,
        });

        assert!(!form.context_menu.copy_visible);
        assert!(form.context_menu.paste_visible);
        assert!(!form.context_menu.copy_enabled);
        assert!(!form.context_menu.paste_enabled);
    }
}
