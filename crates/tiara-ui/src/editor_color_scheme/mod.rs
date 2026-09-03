pub const COLOR_SCHEME_SECTION: &str = "Schematic Editor Color Sets";
pub const SCHEME_COLOR_COUNT: usize = 27;
pub const SCHEME_MAPPING_COUNT: usize = 16;
pub const SCHEME_GRID_ROW_COUNT: usize = SCHEME_COLOR_COUNT + SCHEME_MAPPING_COUNT;
pub const SCHEME_COLOR_VALUE_BASE: u16 = 1_000;
pub const SCHEME_MAPPING_SOURCE_BASE: u16 = 2_000;
pub const SCHEME_MAPPING_TARGET_BASE: u16 = 3_000;
pub const EDITOR_SCHEMES_HELP_CONTEXT: u32 = 0x0426;
pub const EDITOR_SCHEMES_PROFILE_FILE: &str = "TINA.INI";
pub const SCHEME_NAME_PROMPT: &str = "Please enter scheme name";
pub const SCHEME_NAME_TITLE: &str = "Scheme name";
pub const INVALID_SCHEME_NAME_MESSAGE: &str =
    "The name is not valid or conflicts with another name.";
pub const NEW_SCHEME_NAME: &str = "New Scheme";
pub const SCHEME_COPY_SUFFIX: &str = " (copy)";
pub const SYSTEM_SCHEME_DELETE_MESSAGE: &str = "You cannot delete a system color scheme";
pub const CUSTOM_COLOR_FALLBACK: u32 = 0x00FF_FFFF;

pub trait ColorSchemeSettings {
    fn read_scheme_uuid(&mut self, index: usize) -> String;

    fn record_prefix(&self, index: usize, existing: bool) -> String;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ColorMapping {
    pub source: u32,
    pub target: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OwnedEditorColorScheme {
    pub name: String,
    pub uuid: String,
    pub mode: i8,
    pub colors: [u32; SCHEME_COLOR_COUNT],
    pub mappings: [ColorMapping; SCHEME_MAPPING_COUNT],
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorSchemeGridRow {
    pub label: String,
    pub primary_value_id: u16,
    pub secondary_value_id: Option<u16>,
}

pub trait EditorSchemesLoadHost {
    fn live_colors(&self) -> [u32; SCHEME_COLOR_COUNT];
    fn live_mappings(&self) -> [ColorMapping; SCHEME_MAPPING_COUNT];
    fn load_scheme(&mut self, index: usize) -> Option<OwnedEditorColorScheme>;
    fn named_color_label(&mut self, index: usize) -> String;
    fn mapping_label(&mut self, index: usize) -> String;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorSchemesCreationState {
    pub original_colors: [u32; SCHEME_COLOR_COUNT],
    pub original_mappings: [ColorMapping; SCHEME_MAPPING_COUNT],
    pub schemes: Vec<OwnedEditorColorScheme>,
    pub grid_rows: Vec<EditorSchemeGridRow>,
    pub selected_scheme: Option<usize>,
    pub selection_refresh_pending: bool,
    pub help_context: u32,
}

/// Implements Ghidra function `FUN_01b73c00` at `0x01B73C00`.
///
/// Creates the Schematic Editor Schemes dialog state. It backs up the live
/// colors, loads consecutive profiles from `TINA.INI`, defines 27 named-color
/// rows and 16 source-to-target mapping rows, and requests the initial empty
/// selection refresh.
pub fn create_editor_schemes(host: &mut impl EditorSchemesLoadHost) -> EditorSchemesCreationState {
    let original_colors = host.live_colors();
    let original_mappings = host.live_mappings();

    let mut schemes = Vec::new();
    let mut index = 0;
    while let Some(scheme) = host.load_scheme(index) {
        schemes.push(scheme);
        index += 1;
    }

    let mut grid_rows = Vec::with_capacity(SCHEME_GRID_ROW_COUNT);
    for index in 0..SCHEME_COLOR_COUNT {
        grid_rows.push(EditorSchemeGridRow {
            label: host.named_color_label(index),
            primary_value_id: SCHEME_COLOR_VALUE_BASE + u16::try_from(index).unwrap_or_default(),
            secondary_value_id: None,
        });
    }
    for index in 0..SCHEME_MAPPING_COUNT {
        let index = u16::try_from(index).unwrap_or_default();
        grid_rows.push(EditorSchemeGridRow {
            label: host.mapping_label(usize::from(index)),
            primary_value_id: SCHEME_MAPPING_SOURCE_BASE + index,
            secondary_value_id: Some(SCHEME_MAPPING_TARGET_BASE + index),
        });
    }

    EditorSchemesCreationState {
        original_colors,
        original_mappings,
        schemes,
        grid_rows,
        selected_scheme: None,
        selection_refresh_pending: true,
        help_context: EDITOR_SCHEMES_HELP_CONTEXT,
    }
}

pub trait EditorSchemeSelectionHost {
    fn is_system_scheme(&self, identifier: &str) -> bool;
    fn invalidate_color_grid(&mut self);
    fn preview_scheme(&mut self, scheme: &OwnedEditorColorScheme);
}

pub trait EditorSchemePreviewHost {
    fn replace_live_colors(&mut self, colors: [u32; SCHEME_COLOR_COUNT]);
    fn replace_live_mappings(&mut self, mappings: [ColorMapping; SCHEME_MAPPING_COUNT]);
    fn apply_active_editor_color(&mut self, color: u32);
    fn refresh_active_editor(&mut self);
}

pub trait EditorSchemesCloseHost {
    fn replace_live_colors(&mut self, colors: [u32; SCHEME_COLOR_COUNT]);
    fn replace_live_mappings(&mut self, mappings: [ColorMapping; SCHEME_MAPPING_COUNT]);
    fn apply_active_editor_color(&mut self, color: u32);
    fn release_settings(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct EditorSchemeSelectionOutcome {
    pub current_scheme: Option<usize>,
    pub scheme_type_enabled: Option<bool>,
    pub mode: Option<i8>,
    pub preview_applied: bool,
}

pub const SELECTED_CELL_BORDER_COLOR: u32 = 0x0080_0000;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorSchemeCellRenderPlan {
    pub background: u32,
    pub text: Option<String>,
    pub text_color: u32,
    pub text_inset: (u8, u8),
    pub selection_border: Option<u32>,
}

/// Implements Ghidra function `FUN_01b74360` at `0x01B74360`.
///
/// Resolves a scheme-grid cell into renderer-neutral Iced drawing data. Cells
/// use the grid default, a named scheme color, a mapping source, or a mapping
/// target according to the recovered value-ID group. No current scheme leaves
/// the grid's default renderer in control.
#[must_use]
pub fn draw_editor_scheme_cell(
    scheme: Option<&OwnedEditorColorScheme>,
    value_id: u16,
    default_background: u32,
    text: &str,
    text_color: u32,
    selected: bool,
) -> Option<EditorSchemeCellRenderPlan> {
    let scheme = scheme?;
    let group = value_id / 1_000;
    let index = usize::from(value_id % 1_000);
    let background = match group {
        0 => default_background,
        1 => scheme.colors.get(index).copied()?,
        2 => scheme.mappings.get(index)?.source,
        3 => scheme.mappings.get(index)?.target,
        _ => return None,
    };

    Some(EditorSchemeCellRenderPlan {
        background,
        text: (!text.is_empty()).then(|| text.to_owned()),
        text_color,
        text_inset: (2, 2),
        selection_border: selected.then_some(SELECTED_CELL_BORDER_COLOR),
    })
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct EditorSchemePaletteOutcome {
    pub palette_selection_cleared: bool,
    pub scheme_updated: bool,
    pub preview_applied: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorSchemeDependentControls {
    Disabled,
    Enabled,
}

/// Implements Ghidra function `FUN_01b74a40` at `0x01B74A40`.
///
/// Projects current-scheme availability to the four controls that require a
/// current record. The Add command remains independent of this idle update.
#[must_use]
pub const fn editor_scheme_idle_controls(
    state: &EditorSchemesCreationState,
) -> EditorSchemeDependentControls {
    if state.selected_scheme.is_some() {
        EditorSchemeDependentControls::Enabled
    } else {
        EditorSchemeDependentControls::Disabled
    }
}

/// Implements Ghidra function `FUN_01b75220` at `0x01B75220`.
///
/// Returns the selected editor-scheme display name. A missing or invalid list
/// selection maps to the recovered empty-string result.
#[must_use]
pub fn selected_editor_scheme_name(state: &EditorSchemesCreationState) -> String {
    state
        .selected_scheme
        .and_then(|index| state.schemes.get(index))
        .map_or_else(String::new, |scheme| scheme.name.clone())
}

/// Implements Ghidra function `FUN_01b75290` at `0x01B75290`.
///
/// Finds an exact scheme-name match, selects that list row, and runs the
/// standard control, grid, and conditional-preview refresh. An unknown name
/// leaves the complete selection state unchanged.
pub fn select_editor_scheme_by_name(
    state: &mut EditorSchemesCreationState,
    name: &str,
    preview_enabled: bool,
    host: &mut impl EditorSchemeSelectionHost,
) -> Option<EditorSchemeSelectionOutcome> {
    let selected_index = state
        .schemes
        .iter()
        .position(|scheme| scheme.name == name)?;
    Some(select_editor_scheme(
        state,
        Some(selected_index),
        preview_enabled,
        host,
    ))
}

/// Implements Ghidra function `FUN_01b745e0` at `0x01B745E0`.
///
/// Applies a fixed palette color to the active named-color or mapping-target
/// cell. With a current scheme, the palette selection is always cleared, the
/// grid is invalidated, and enabled preview is refreshed even when the active
/// row is not writable.
pub fn apply_editor_scheme_palette_color(
    state: &mut EditorSchemesCreationState,
    row_value_id: Option<u16>,
    color: u32,
    preview_enabled: bool,
    host: &mut impl EditorSchemeSelectionHost,
) -> EditorSchemePaletteOutcome {
    let Some(current_index) = state.selected_scheme else {
        return EditorSchemePaletteOutcome {
            palette_selection_cleared: false,
            scheme_updated: false,
            preview_applied: false,
        };
    };
    let Some(scheme) = state.schemes.get_mut(current_index) else {
        return EditorSchemePaletteOutcome {
            palette_selection_cleared: false,
            scheme_updated: false,
            preview_applied: false,
        };
    };

    let scheme_updated = row_value_id.is_some_and(|value_id| {
        let group = value_id / 1_000;
        let index = usize::from(value_id % 1_000);
        match group {
            1 => scheme.colors.get_mut(index).is_some_and(|value| {
                *value = color;
                true
            }),
            3 => scheme.mappings.get_mut(index).is_some_and(|mapping| {
                mapping.target = color;
                true
            }),
            _ => false,
        }
    });

    host.invalidate_color_grid();
    if preview_enabled {
        host.preview_scheme(scheme);
    }

    EditorSchemePaletteOutcome {
        palette_selection_cleared: true,
        scheme_updated,
        preview_applied: preview_enabled,
    }
}

/// Implements Ghidra function `FUN_01b75360` at `0x01B75360`.
///
/// Seeds a custom-color dialog from the current named color or mapping target,
/// with white as the fallback. Cancel makes no change. Acceptance delegates the
/// write, grid invalidation, and conditional preview to the shared palette
/// reducer, including its accepted unknown-row refresh behavior.
pub fn choose_editor_scheme_custom_color(
    state: &mut EditorSchemesCreationState,
    row_value_id: Option<u16>,
    preview_enabled: bool,
    host: &mut impl EditorSchemeCustomColorHost,
) -> Option<EditorSchemePaletteOutcome> {
    let current_index = state.selected_scheme?;
    let scheme = state.schemes.get(current_index)?;
    let initial_color = row_value_id
        .and_then(|value_id| {
            let group = value_id / 1_000;
            let index = usize::from(value_id % 1_000);
            match group {
                1 => scheme.colors.get(index).copied(),
                3 => scheme.mappings.get(index).map(|mapping| mapping.target),
                _ => None,
            }
        })
        .unwrap_or(CUSTOM_COLOR_FALLBACK);
    let color = host.choose_custom_color(initial_color)?;

    Some(apply_editor_scheme_palette_color(
        state,
        row_value_id,
        color,
        preview_enabled,
        host,
    ))
}

/// Implements Ghidra function `FUN_01b74210` at `0x01B74210`.
///
/// Resolves a selected scheme, updates its mode controls, invalidates the color
/// grid, and applies an enabled preview. A missing or invalid list selection
/// retains the previous current scheme.
pub fn select_editor_scheme(
    state: &mut EditorSchemesCreationState,
    selected_index: Option<usize>,
    preview_enabled: bool,
    host: &mut impl EditorSchemeSelectionHost,
) -> EditorSchemeSelectionOutcome {
    if selected_index.is_some_and(|index| index < state.schemes.len()) {
        state.selected_scheme = selected_index;
    }
    state.selection_refresh_pending = false;

    let current = state
        .selected_scheme
        .and_then(|index| state.schemes.get(index));
    let scheme_type_enabled = current.map(|scheme| !host.is_system_scheme(&scheme.uuid));
    let mode = current.map(|scheme| scheme.mode);

    host.invalidate_color_grid();
    let preview_applied = preview_enabled && current.is_some();
    if preview_applied && let Some(scheme) = current {
        host.preview_scheme(scheme);
    }

    EditorSchemeSelectionOutcome {
        current_scheme: state.selected_scheme,
        scheme_type_enabled,
        mode,
        preview_applied,
    }
}

/// Implements Ghidra function `FUN_01b75500` at `0x01B75500`.
///
/// When preview is enabled and a scheme is current, copies both scheme
/// palettes to live editor state, applies the first named color to the active
/// schematic editor, and refreshes that editor. Otherwise, it makes no change.
pub fn apply_editor_scheme_preview(
    state: &EditorSchemesCreationState,
    preview_enabled: bool,
    host: &mut impl EditorSchemePreviewHost,
) -> bool {
    if !preview_enabled {
        return false;
    }
    let Some(scheme) = state
        .selected_scheme
        .and_then(|index| state.schemes.get(index))
    else {
        return false;
    };

    host.replace_live_colors(scheme.colors);
    host.replace_live_mappings(scheme.mappings);
    host.apply_active_editor_color(scheme.colors[0]);
    host.refresh_active_editor();
    true
}

/// Implements Ghidra function `FUN_01b756a0` at `0x01B756A0`.
///
/// Applies the current scheme through the shared preview helper when selected.
/// When preview is cleared, always restores both pre-dialog palettes, applies
/// their first color to the active editor, and refreshes the editor.
pub fn toggle_editor_scheme_preview(
    state: &EditorSchemesCreationState,
    preview_enabled: bool,
    host: &mut impl EditorSchemePreviewHost,
) -> bool {
    if preview_enabled {
        return apply_editor_scheme_preview(state, true, host);
    }

    host.replace_live_colors(state.original_colors);
    host.replace_live_mappings(state.original_mappings);
    host.apply_active_editor_color(state.original_colors[0]);
    host.refresh_active_editor();
    true
}

/// Implements Ghidra function `FUN_01b755b0` at `0x01B755B0`.
///
/// Copies the low byte of the scheme-type radio index to the current scheme.
/// A missing or invalid current selection is unchanged. The recovered handler
/// does not validate, preview, redraw, or persist this staged mode value.
pub fn stage_editor_scheme_mode(state: &mut EditorSchemesCreationState, radio_index: i32) -> bool {
    let Some(scheme) = state
        .selected_scheme
        .and_then(|index| state.schemes.get_mut(index))
    else {
        return false;
    };

    scheme.mode = i8::from_le_bytes([radio_index.to_le_bytes()[0]]);
    true
}

/// Implements Ghidra function `FUN_01b755e0` at `0x01B755E0`.
///
/// Releases all dialog-owned schemes, restores both pre-dialog live palettes,
/// reapplies the first restored color to the active schematic editor, and
/// releases the settings adapter for every close result.
pub fn close_editor_schemes(
    state: &mut EditorSchemesCreationState,
    host: &mut impl EditorSchemesCloseHost,
) {
    state.schemes.clear();
    state.selected_scheme = None;
    host.replace_live_colors(state.original_colors);
    host.replace_live_mappings(state.original_mappings);
    host.apply_active_editor_color(state.original_colors[0]);
    host.release_settings();
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ColorSchemeSettingKey {
    Name,
    Identifier,
    Mode,
    NamedColor(usize),
    Mapping(String),
}

#[derive(Debug, Clone, Copy)]
pub struct EditorColorScheme<'a> {
    pub name: &'a str,
    pub uuid: &'a str,
    pub mode: i8,
    pub colors: &'a [u32; SCHEME_COLOR_COUNT],
    pub mappings: &'a [ColorMapping; SCHEME_MAPPING_COUNT],
}

pub trait ColorSchemeWriteHost: ColorSchemeSettings {
    fn format_color(&self, color: u32) -> String;

    fn write_value(
        &mut self,
        section: &str,
        prefix: &str,
        key: ColorSchemeSettingKey,
        value: String,
    );
}

pub trait EditorSchemesSaveHost: ColorSchemeWriteHost {
    fn clear_section(&mut self, section: &str);
}

pub trait EditorSchemeNamePromptHost {
    fn prompt_scheme_name(&mut self, title: &str, prompt: &str, current: &str) -> Option<String>;
    fn show_invalid_scheme_name(&mut self, message: &str);
}

pub trait EditorSchemeCreateHost: EditorSchemeNamePromptHost + EditorSchemeSelectionHost {
    fn create_scheme_uuid(&mut self) -> String;
    fn default_scheme_colors(&self) -> [u32; SCHEME_COLOR_COUNT];
    fn default_scheme_mappings(&self) -> [ColorMapping; SCHEME_MAPPING_COUNT];
}

pub trait EditorSchemeCopyHost: EditorSchemeNamePromptHost + EditorSchemeSelectionHost {
    fn create_scheme_uuid(&mut self) -> String;
}

pub trait EditorSchemeDeleteHost: EditorSchemeSelectionHost {
    fn show_system_scheme_delete_error(&mut self, message: &str);
    fn confirm_scheme_delete(&mut self, message: &str) -> bool;
}

pub trait EditorSchemeCustomColorHost: EditorSchemeSelectionHost {
    fn choose_custom_color(&mut self, initial_color: u32) -> Option<u32>;
}

/// Implements Ghidra function `FUN_01b74860` at `0x01B74860`.
///
/// Repeats the scheme-name prompt until the user cancels, keeps the original
/// proposal unchanged, or enters a nonempty name absent from the scheme list.
/// The unchanged proposal is accepted before empty or duplicate validation.
pub fn prompt_for_editor_scheme_name(
    state: &EditorSchemesCreationState,
    proposal: &mut String,
    host: &mut impl EditorSchemeNamePromptHost,
) -> bool {
    let original = proposal.clone();
    loop {
        let Some(candidate) =
            host.prompt_scheme_name(SCHEME_NAME_TITLE, SCHEME_NAME_PROMPT, proposal)
        else {
            return false;
        };
        *proposal = candidate;

        if proposal == &original {
            return true;
        }
        let conflicts = state.schemes.iter().any(|scheme| scheme.name == *proposal);
        if !proposal.is_empty() && !conflicts {
            return true;
        }

        host.show_invalid_scheme_name(INVALID_SCHEME_NAME_MESSAGE);
    }
}

/// Implements Ghidra function `FUN_01b74ad0` at `0x01B74AD0`.
///
/// Prompts for a new scheme name, creates a Light scheme with a new identifier
/// and the recovered default palettes, appends and selects it, and runs the
/// standard conditional-preview path. Cancel leaves the state unchanged.
pub fn add_editor_scheme(
    state: &mut EditorSchemesCreationState,
    preview_enabled: bool,
    host: &mut impl EditorSchemeCreateHost,
) -> Option<EditorSchemeSelectionOutcome> {
    let mut name = NEW_SCHEME_NAME.to_owned();
    if !prompt_for_editor_scheme_name(state, &mut name, host) {
        return None;
    }

    state.schemes.push(OwnedEditorColorScheme {
        name,
        uuid: host.create_scheme_uuid(),
        mode: 0,
        colors: host.default_scheme_colors(),
        mappings: host.default_scheme_mappings(),
    });
    let selected_index = state.schemes.len() - 1;
    Some(select_editor_scheme(
        state,
        Some(selected_index),
        preview_enabled,
        host,
    ))
}

/// Implements Ghidra function `FUN_01b74c50` at `0x01B74C50`.
///
/// Prompts with the current scheme name plus ` (copy)`, copies its two color
/// palettes into a new Light scheme with a new identifier, appends and selects
/// the copy, and runs the standard conditional-preview path. A missing current
/// scheme or a cancelled prompt leaves the state unchanged.
pub fn copy_editor_scheme(
    state: &mut EditorSchemesCreationState,
    preview_enabled: bool,
    host: &mut impl EditorSchemeCopyHost,
) -> Option<EditorSchemeSelectionOutcome> {
    let source_index = state.selected_scheme?;
    let source = state.schemes.get(source_index)?;
    let mut name = format!("{}{}", source.name, SCHEME_COPY_SUFFIX);
    if !prompt_for_editor_scheme_name(state, &mut name, host) {
        return None;
    }

    let source = &state.schemes[source_index];
    state.schemes.push(OwnedEditorColorScheme {
        name,
        uuid: host.create_scheme_uuid(),
        mode: 0,
        colors: source.colors,
        mappings: source.mappings,
    });
    let selected_index = state.schemes.len() - 1;
    Some(select_editor_scheme(
        state,
        Some(selected_index),
        preview_enabled,
        host,
    ))
}

/// Implements Ghidra function `FUN_01b74e50` at `0x01B74E50`.
///
/// Prompts with the selected scheme name and replaces only that name after
/// acceptance. A missing current scheme, an invalid selection, or a cancelled
/// prompt leaves all scheme state unchanged. The rename does not preview or
/// persist the scheme.
pub fn rename_editor_scheme(
    state: &mut EditorSchemesCreationState,
    host: &mut impl EditorSchemeNamePromptHost,
) -> bool {
    let Some(selected_index) = state.selected_scheme else {
        return false;
    };
    let Some(selected) = state.schemes.get(selected_index) else {
        return false;
    };
    let mut name = selected.name.clone();
    if !prompt_for_editor_scheme_name(state, &mut name, host) {
        return false;
    }

    state.schemes[selected_index].name = name;
    true
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorSchemeDeleteOutcome {
    NoCurrentScheme,
    SystemSchemeProtected,
    Rejected,
    Deleted(EditorSchemeSelectionOutcome),
}

/// Implements Ghidra function `FUN_01b74f20` at `0x01B74F20`.
///
/// Protects system schemes and asks before it removes another current scheme.
/// A confirmed removal clears the current selection, requests list index one
/// when rows remain, and runs the standard conditional-preview path. The
/// deletion remains in dialog state until the user accepts the dialog.
pub fn delete_editor_scheme(
    state: &mut EditorSchemesCreationState,
    preview_enabled: bool,
    host: &mut impl EditorSchemeDeleteHost,
) -> EditorSchemeDeleteOutcome {
    let Some(selected_index) = state.selected_scheme else {
        return EditorSchemeDeleteOutcome::NoCurrentScheme;
    };
    let Some(selected) = state.schemes.get(selected_index) else {
        return EditorSchemeDeleteOutcome::NoCurrentScheme;
    };
    if host.is_system_scheme(&selected.uuid) {
        host.show_system_scheme_delete_error(SYSTEM_SCHEME_DELETE_MESSAGE);
        return EditorSchemeDeleteOutcome::SystemSchemeProtected;
    }

    let message = format!(
        "Do you want to delete the \"{}\" color scheme?",
        selected.name
    );
    if !host.confirm_scheme_delete(&message) {
        return EditorSchemeDeleteOutcome::Rejected;
    }

    state.selected_scheme = None;
    state.schemes.remove(selected_index);
    let requested_index = (!state.schemes.is_empty()).then_some(1);
    EditorSchemeDeleteOutcome::Deleted(select_editor_scheme(
        state,
        requested_index,
        preview_enabled,
        host,
    ))
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorSchemesModalResult {
    Accept,
}

/// Implements Ghidra function `FUN_01b746d0` at `0x01B746D0`.
///
/// Rewrites the complete Schematic Editor Color Sets section in current list
/// order and accepts the dialog. The recovered path has no local validation,
/// retry, transaction, or rollback stage.
pub fn save_editor_schemes_and_accept(
    state: &EditorSchemesCreationState,
    settings: &mut impl EditorSchemesSaveHost,
) -> EditorSchemesModalResult {
    settings.clear_section(COLOR_SCHEME_SECTION);
    for scheme in &state.schemes {
        serialize_color_scheme(
            settings,
            EditorColorScheme {
                name: &scheme.name,
                uuid: &scheme.uuid,
                mode: scheme.mode,
                colors: &scheme.colors,
                mappings: &scheme.mappings,
            },
        );
    }
    EditorSchemesModalResult::Accept
}

/// Implements Ghidra function `FUN_01a9fe00` at `0x01A9FE00`.
///
/// Scans indexed color-scheme UUID fields in order. An exact UUID match returns
/// its existing record prefix. If no match exists, the first empty UUID field
/// returns the prefix for a new record in that slot.
#[must_use]
pub fn resolve_color_scheme_prefix(
    settings: &mut impl ColorSchemeSettings,
    requested_uuid: &str,
) -> String {
    let mut index = 0;
    let existing = loop {
        let stored_uuid = settings.read_scheme_uuid(index);
        if stored_uuid.is_empty() {
            break false;
        }
        if stored_uuid == requested_uuid {
            break true;
        }
        index += 1;
    };

    settings.record_prefix(index, existing)
}

/// Implements Ghidra function `FUN_01aa02c0` at `0x01AA02C0`.
///
/// Resolves the scheme record and writes its UTF-8 name, identifier, decimal
/// mode, 27 named colors, and 16 source-color-keyed mappings in order. The host
/// owns the recovered key names, color tokens, and persistent settings API.
pub fn serialize_color_scheme(
    settings: &mut impl ColorSchemeWriteHost,
    scheme: EditorColorScheme<'_>,
) {
    let prefix = resolve_color_scheme_prefix(settings, scheme.uuid);
    settings.write_value(
        COLOR_SCHEME_SECTION,
        &prefix,
        ColorSchemeSettingKey::Name,
        scheme.name.to_owned(),
    );
    settings.write_value(
        COLOR_SCHEME_SECTION,
        &prefix,
        ColorSchemeSettingKey::Identifier,
        scheme.uuid.to_owned(),
    );
    settings.write_value(
        COLOR_SCHEME_SECTION,
        &prefix,
        ColorSchemeSettingKey::Mode,
        scheme.mode.to_string(),
    );
    for (index, color) in scheme.colors.iter().copied().enumerate() {
        settings.write_value(
            COLOR_SCHEME_SECTION,
            &prefix,
            ColorSchemeSettingKey::NamedColor(index),
            settings.format_color(color),
        );
    }
    for mapping in scheme.mappings {
        settings.write_value(
            COLOR_SCHEME_SECTION,
            &prefix,
            ColorSchemeSettingKey::Mapping(settings.format_color(mapping.source)),
            settings.format_color(mapping.target),
        );
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct LoadHost {
        colors: [u32; SCHEME_COLOR_COUNT],
        mappings: [ColorMapping; SCHEME_MAPPING_COUNT],
        schemes: Vec<OwnedEditorColorScheme>,
        scheme_reads: Vec<usize>,
    }

    impl EditorSchemesLoadHost for LoadHost {
        fn live_colors(&self) -> [u32; SCHEME_COLOR_COUNT] {
            self.colors
        }

        fn live_mappings(&self) -> [ColorMapping; SCHEME_MAPPING_COUNT] {
            self.mappings
        }

        fn load_scheme(&mut self, index: usize) -> Option<OwnedEditorColorScheme> {
            self.scheme_reads.push(index);
            self.schemes.get(index).cloned()
        }

        fn named_color_label(&mut self, index: usize) -> String {
            format!("Color {index}")
        }

        fn mapping_label(&mut self, index: usize) -> String {
            format!("Mapping {index}")
        }
    }

    #[derive(Default)]
    struct SelectionHost {
        invalidations: usize,
        previewed: Vec<String>,
    }

    impl EditorSchemeSelectionHost for SelectionHost {
        fn is_system_scheme(&self, identifier: &str) -> bool {
            matches!(identifier, "system-light" | "system-dark")
        }

        fn invalidate_color_grid(&mut self) {
            self.invalidations += 1;
        }

        fn preview_scheme(&mut self, scheme: &OwnedEditorColorScheme) {
            self.previewed.push(scheme.name.clone());
        }
    }

    struct PromptHost {
        responses: std::collections::VecDeque<Option<String>>,
        current_values: Vec<String>,
        messages: Vec<String>,
    }

    impl EditorSchemeNamePromptHost for PromptHost {
        fn prompt_scheme_name(
            &mut self,
            title: &str,
            prompt: &str,
            current: &str,
        ) -> Option<String> {
            assert_eq!(title, SCHEME_NAME_TITLE);
            assert_eq!(prompt, SCHEME_NAME_PROMPT);
            self.current_values.push(current.to_owned());
            self.responses.pop_front().flatten()
        }

        fn show_invalid_scheme_name(&mut self, message: &str) {
            self.messages.push(message.to_owned());
        }
    }

    struct AddHost {
        response: Option<String>,
        invalidations: usize,
        previews: usize,
    }

    impl EditorSchemeNamePromptHost for AddHost {
        fn prompt_scheme_name(
            &mut self,
            title: &str,
            prompt: &str,
            current: &str,
        ) -> Option<String> {
            assert_eq!(title, SCHEME_NAME_TITLE);
            assert_eq!(prompt, SCHEME_NAME_PROMPT);
            assert_eq!(current, NEW_SCHEME_NAME);
            self.response.take()
        }

        fn show_invalid_scheme_name(&mut self, _message: &str) {}
    }

    impl EditorSchemeSelectionHost for AddHost {
        fn is_system_scheme(&self, _identifier: &str) -> bool {
            false
        }

        fn invalidate_color_grid(&mut self) {
            self.invalidations += 1;
        }

        fn preview_scheme(&mut self, _scheme: &OwnedEditorColorScheme) {
            self.previews += 1;
        }
    }

    impl EditorSchemeCreateHost for AddHost {
        fn create_scheme_uuid(&mut self) -> String {
            "new-id".to_owned()
        }

        fn default_scheme_colors(&self) -> [u32; SCHEME_COLOR_COUNT] {
            [5; SCHEME_COLOR_COUNT]
        }

        fn default_scheme_mappings(&self) -> [ColorMapping; SCHEME_MAPPING_COUNT] {
            [ColorMapping {
                source: 6,
                target: 7,
            }; SCHEME_MAPPING_COUNT]
        }
    }

    struct CopyHost {
        response: Option<String>,
        prompt_values: Vec<String>,
        invalidations: usize,
        previews: usize,
    }

    impl EditorSchemeNamePromptHost for CopyHost {
        fn prompt_scheme_name(
            &mut self,
            title: &str,
            prompt: &str,
            current: &str,
        ) -> Option<String> {
            assert_eq!(title, SCHEME_NAME_TITLE);
            assert_eq!(prompt, SCHEME_NAME_PROMPT);
            self.prompt_values.push(current.to_owned());
            self.response.take()
        }

        fn show_invalid_scheme_name(&mut self, _message: &str) {}
    }

    impl EditorSchemeSelectionHost for CopyHost {
        fn is_system_scheme(&self, _identifier: &str) -> bool {
            false
        }

        fn invalidate_color_grid(&mut self) {
            self.invalidations += 1;
        }

        fn preview_scheme(&mut self, _scheme: &OwnedEditorColorScheme) {
            self.previews += 1;
        }
    }

    impl EditorSchemeCopyHost for CopyHost {
        fn create_scheme_uuid(&mut self) -> String {
            "copy-id".to_owned()
        }
    }

    struct DeleteHost {
        protected_uuid: String,
        confirmed: bool,
        protected_messages: Vec<String>,
        confirmations: Vec<String>,
        invalidations: usize,
        previews: Vec<String>,
    }

    impl EditorSchemeSelectionHost for DeleteHost {
        fn is_system_scheme(&self, identifier: &str) -> bool {
            identifier == self.protected_uuid
        }

        fn invalidate_color_grid(&mut self) {
            self.invalidations += 1;
        }

        fn preview_scheme(&mut self, scheme: &OwnedEditorColorScheme) {
            self.previews.push(scheme.name.clone());
        }
    }

    impl EditorSchemeDeleteHost for DeleteHost {
        fn show_system_scheme_delete_error(&mut self, message: &str) {
            self.protected_messages.push(message.to_owned());
        }

        fn confirm_scheme_delete(&mut self, message: &str) -> bool {
            self.confirmations.push(message.to_owned());
            self.confirmed
        }
    }

    struct CustomColorHost {
        result: Option<u32>,
        initial_colors: Vec<u32>,
        invalidations: usize,
        previews: usize,
    }

    impl EditorSchemeSelectionHost for CustomColorHost {
        fn is_system_scheme(&self, _identifier: &str) -> bool {
            false
        }

        fn invalidate_color_grid(&mut self) {
            self.invalidations += 1;
        }

        fn preview_scheme(&mut self, _scheme: &OwnedEditorColorScheme) {
            self.previews += 1;
        }
    }

    impl EditorSchemeCustomColorHost for CustomColorHost {
        fn choose_custom_color(&mut self, initial_color: u32) -> Option<u32> {
            self.initial_colors.push(initial_color);
            self.result
        }
    }

    #[derive(Default)]
    struct PreviewHost {
        colors: Option<[u32; SCHEME_COLOR_COUNT]>,
        mappings: Option<[ColorMapping; SCHEME_MAPPING_COUNT]>,
        active_color: Option<u32>,
        refreshes: usize,
    }

    impl EditorSchemePreviewHost for PreviewHost {
        fn replace_live_colors(&mut self, colors: [u32; SCHEME_COLOR_COUNT]) {
            self.colors = Some(colors);
        }

        fn replace_live_mappings(&mut self, mappings: [ColorMapping; SCHEME_MAPPING_COUNT]) {
            self.mappings = Some(mappings);
        }

        fn apply_active_editor_color(&mut self, color: u32) {
            self.active_color = Some(color);
        }

        fn refresh_active_editor(&mut self) {
            self.refreshes += 1;
        }
    }

    #[derive(Default)]
    struct CloseHost {
        colors: Option<[u32; SCHEME_COLOR_COUNT]>,
        mappings: Option<[ColorMapping; SCHEME_MAPPING_COUNT]>,
        active_color: Option<u32>,
        settings_releases: usize,
    }

    impl EditorSchemesCloseHost for CloseHost {
        fn replace_live_colors(&mut self, colors: [u32; SCHEME_COLOR_COUNT]) {
            self.colors = Some(colors);
        }

        fn replace_live_mappings(&mut self, mappings: [ColorMapping; SCHEME_MAPPING_COUNT]) {
            self.mappings = Some(mappings);
        }

        fn apply_active_editor_color(&mut self, color: u32) {
            self.active_color = Some(color);
        }

        fn release_settings(&mut self) {
            self.settings_releases += 1;
        }
    }

    #[derive(Debug)]
    struct SettingsHost {
        uuids: Vec<String>,
        reads: Vec<usize>,
        cleared_sections: Vec<String>,
        writes: Vec<(String, String, ColorSchemeSettingKey, String)>,
    }

    impl ColorSchemeSettings for SettingsHost {
        fn read_scheme_uuid(&mut self, index: usize) -> String {
            self.reads.push(index);
            self.uuids.get(index).cloned().unwrap_or_default()
        }

        fn record_prefix(&self, index: usize, existing: bool) -> String {
            format!("{existing}:{index}/")
        }
    }

    impl ColorSchemeWriteHost for SettingsHost {
        fn format_color(&self, color: u32) -> String {
            format!("#{color:08X}")
        }

        fn write_value(
            &mut self,
            section: &str,
            prefix: &str,
            key: ColorSchemeSettingKey,
            value: String,
        ) {
            self.writes
                .push((section.to_owned(), prefix.to_owned(), key, value));
        }
    }

    impl EditorSchemesSaveHost for SettingsHost {
        fn clear_section(&mut self, section: &str) {
            self.cleared_sections.push(section.to_owned());
        }
    }

    #[test]
    fn existing_uuid_returns_its_normalized_record_prefix() {
        let mut settings = SettingsHost {
            uuids: vec!["first".to_owned(), "wanted".to_owned()],
            reads: Vec::new(),
            cleared_sections: Vec::new(),
            writes: Vec::new(),
        };

        assert_eq!(
            resolve_color_scheme_prefix(&mut settings, "wanted"),
            "true:1/"
        );
        assert_eq!(settings.reads, [0, 1]);
    }

    #[test]
    fn absent_uuid_returns_the_first_unused_record_prefix() {
        let mut settings = SettingsHost {
            uuids: vec!["first".to_owned(), "second".to_owned()],
            reads: Vec::new(),
            cleared_sections: Vec::new(),
            writes: Vec::new(),
        };

        assert_eq!(
            resolve_color_scheme_prefix(&mut settings, "missing"),
            "false:2/"
        );
        assert_eq!(settings.reads, [0, 1, 2]);
    }

    #[test]
    fn serializer_writes_metadata_colors_and_mappings_in_order() {
        let colors = std::array::from_fn(|index| u32::try_from(index).unwrap_or_default());
        let mappings = std::array::from_fn(|index| {
            let index = u32::try_from(index).unwrap_or_default();
            ColorMapping {
                source: 100 + index,
                target: 200 + index,
            }
        });
        let mut settings = SettingsHost {
            uuids: vec!["scheme-id".to_owned()],
            reads: Vec::new(),
            cleared_sections: Vec::new(),
            writes: Vec::new(),
        };

        serialize_color_scheme(
            &mut settings,
            EditorColorScheme {
                name: "New scheme",
                uuid: "scheme-id",
                mode: 1,
                colors: &colors,
                mappings: &mappings,
            },
        );

        assert_eq!(settings.writes.len(), 46);
        assert_eq!(
            settings.writes[0],
            (
                COLOR_SCHEME_SECTION.to_owned(),
                "true:0/".to_owned(),
                ColorSchemeSettingKey::Name,
                "New scheme".to_owned(),
            )
        );
        assert_eq!(settings.writes[2].2, ColorSchemeSettingKey::Mode);
        assert_eq!(settings.writes[2].3, "1");
        assert_eq!(
            settings.writes[30],
            (
                COLOR_SCHEME_SECTION.to_owned(),
                "true:0/".to_owned(),
                ColorSchemeSettingKey::Mapping("#00000064".to_owned()),
                "#000000C8".to_owned(),
            )
        );
        assert_eq!(
            settings.writes[45].2,
            ColorSchemeSettingKey::Mapping("#00000073".to_owned())
        );
    }

    #[test]
    fn form_create_backs_up_live_state_and_builds_all_grid_rows() {
        let colors = std::array::from_fn(|index| u32::try_from(index).unwrap_or_default());
        let mappings = std::array::from_fn(|index| {
            let index = u32::try_from(index).unwrap_or_default();
            ColorMapping {
                source: 100 + index,
                target: 200 + index,
            }
        });
        let scheme = OwnedEditorColorScheme {
            name: "Default".to_owned(),
            uuid: "default-id".to_owned(),
            mode: 0,
            colors,
            mappings,
        };
        let mut host = LoadHost {
            colors,
            mappings,
            schemes: vec![scheme.clone()],
            scheme_reads: Vec::new(),
        };

        let state = create_editor_schemes(&mut host);

        assert_eq!(state.original_colors, colors);
        assert_eq!(state.original_mappings, mappings);
        assert_eq!(state.schemes, [scheme]);
        assert_eq!(host.scheme_reads, [0, 1]);
        assert_eq!(state.grid_rows.len(), SCHEME_GRID_ROW_COUNT);
        assert_eq!(state.grid_rows[0].primary_value_id, 1_000);
        assert_eq!(state.grid_rows[26].primary_value_id, 1_026);
        assert_eq!(state.grid_rows[27].primary_value_id, 2_000);
        assert_eq!(state.grid_rows[27].secondary_value_id, Some(3_000));
        assert_eq!(state.grid_rows[42].primary_value_id, 2_015);
        assert_eq!(state.grid_rows[42].secondary_value_id, Some(3_015));
        assert_eq!(state.selected_scheme, None);
        assert!(state.selection_refresh_pending);
        assert_eq!(state.help_context, EDITOR_SCHEMES_HELP_CONTEXT);
    }

    #[test]
    fn scheme_selection_updates_controls_previews_and_retains_current_on_none() {
        let colors = [0; SCHEME_COLOR_COUNT];
        let mappings = [ColorMapping {
            source: 0,
            target: 0,
        }; SCHEME_MAPPING_COUNT];
        let mut state = EditorSchemesCreationState {
            original_colors: colors,
            original_mappings: mappings,
            schemes: vec![OwnedEditorColorScheme {
                name: "System Light".to_owned(),
                uuid: "system-light".to_owned(),
                mode: 0,
                colors,
                mappings,
            }],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: true,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = SelectionHost::default();

        let selected = select_editor_scheme(&mut state, Some(0), true, &mut host);
        assert_eq!(
            selected,
            EditorSchemeSelectionOutcome {
                current_scheme: Some(0),
                scheme_type_enabled: Some(false),
                mode: Some(0),
                preview_applied: true,
            }
        );
        assert_eq!(host.previewed, ["System Light"]);

        let retained = select_editor_scheme(&mut state, None, false, &mut host);
        assert_eq!(retained.current_scheme, Some(0));
        assert_eq!(retained.scheme_type_enabled, Some(false));
        assert!(!retained.preview_applied);
        assert_eq!(host.invalidations, 2);
        assert!(!state.selection_refresh_pending);
    }

    #[test]
    fn cell_draw_plan_resolves_all_color_groups_and_selection_overlay() {
        let colors = std::array::from_fn(|index| 10 + u32::try_from(index).unwrap_or_default());
        let mappings = std::array::from_fn(|index| {
            let index = u32::try_from(index).unwrap_or_default();
            ColorMapping {
                source: 100 + index,
                target: 200 + index,
            }
        });
        let scheme = OwnedEditorColorScheme {
            name: "Custom".to_owned(),
            uuid: "custom".to_owned(),
            mode: 1,
            colors,
            mappings,
        };

        for (value_id, expected) in [(0, 7), (1_003, 13), (2_004, 104), (3_005, 205)] {
            let plan = draw_editor_scheme_cell(Some(&scheme), value_id, 7, "Label", 9, true);
            assert_eq!(plan.as_ref().map(|plan| plan.background), Some(expected));
            assert_eq!(
                plan.as_ref().and_then(|plan| plan.text.as_deref()),
                Some("Label")
            );
            assert_eq!(plan.as_ref().map(|plan| plan.text_color), Some(9));
            assert_eq!(plan.as_ref().map(|plan| plan.text_inset), Some((2, 2)));
            assert_eq!(
                plan.and_then(|plan| plan.selection_border),
                Some(SELECTED_CELL_BORDER_COLOR)
            );
        }

        assert_eq!(draw_editor_scheme_cell(None, 1_000, 7, "", 9, false), None);
        assert_eq!(
            draw_editor_scheme_cell(Some(&scheme), 1_000, 7, "", 9, false)
                .and_then(|plan| plan.text),
            None
        );
    }

    #[test]
    fn palette_color_updates_named_and_mapping_target_cells_only() {
        let colors = [0; SCHEME_COLOR_COUNT];
        let mappings = [ColorMapping {
            source: 1,
            target: 2,
        }; SCHEME_MAPPING_COUNT];
        let mut state = EditorSchemesCreationState {
            original_colors: colors,
            original_mappings: mappings,
            schemes: vec![OwnedEditorColorScheme {
                name: "Custom".to_owned(),
                uuid: "custom".to_owned(),
                mode: 1,
                colors,
                mappings,
            }],
            grid_rows: Vec::new(),
            selected_scheme: Some(0),
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = SelectionHost::default();

        let named = apply_editor_scheme_palette_color(&mut state, Some(1_002), 10, true, &mut host);
        assert!(named.palette_selection_cleared);
        assert!(named.scheme_updated);
        assert!(named.preview_applied);
        assert_eq!(state.schemes[0].colors[2], 10);

        let target =
            apply_editor_scheme_palette_color(&mut state, Some(3_003), 20, false, &mut host);
        assert!(target.scheme_updated);
        assert!(!target.preview_applied);
        assert_eq!(state.schemes[0].mappings[3].target, 20);

        let source =
            apply_editor_scheme_palette_color(&mut state, Some(2_003), 30, false, &mut host);
        assert!(!source.scheme_updated);
        assert_eq!(state.schemes[0].mappings[3].source, 1);
        assert_eq!(host.invalidations, 3);
        assert_eq!(host.previewed, ["Custom"]);

        state.selected_scheme = None;
        let unavailable =
            apply_editor_scheme_palette_color(&mut state, Some(1_000), 40, true, &mut host);
        assert_eq!(
            unavailable,
            EditorSchemePaletteOutcome {
                palette_selection_cleared: false,
                scheme_updated: false,
                preview_applied: false,
            }
        );
        assert_eq!(host.invalidations, 3);
    }

    #[test]
    fn idle_enables_all_current_scheme_controls_together() {
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: Vec::new(),
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };

        assert_eq!(
            editor_scheme_idle_controls(&state),
            EditorSchemeDependentControls::Disabled
        );

        state.selected_scheme = Some(0);
        assert_eq!(
            editor_scheme_idle_controls(&state),
            EditorSchemeDependentControls::Enabled
        );
    }

    #[test]
    fn ok_rewrites_every_scheme_and_accepts() {
        let colors = [42; SCHEME_COLOR_COUNT];
        let mappings = [ColorMapping {
            source: 1,
            target: 2,
        }; SCHEME_MAPPING_COUNT];
        let state = EditorSchemesCreationState {
            original_colors: colors,
            original_mappings: mappings,
            schemes: vec![OwnedEditorColorScheme {
                name: "Saved".to_owned(),
                uuid: "saved-id".to_owned(),
                mode: 1,
                colors,
                mappings,
            }],
            grid_rows: Vec::new(),
            selected_scheme: Some(0),
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut settings = SettingsHost {
            uuids: Vec::new(),
            reads: Vec::new(),
            cleared_sections: Vec::new(),
            writes: Vec::new(),
        };

        let result = save_editor_schemes_and_accept(&state, &mut settings);

        assert_eq!(result, EditorSchemesModalResult::Accept);
        assert_eq!(settings.cleared_sections, [COLOR_SCHEME_SECTION]);
        assert_eq!(settings.writes.len(), 46);
        assert_eq!(settings.writes[0].2, ColorSchemeSettingKey::Name);
        assert_eq!(settings.writes[0].3, "Saved");
        assert_eq!(settings.writes[1].2, ColorSchemeSettingKey::Identifier);
        assert_eq!(settings.writes[1].3, "saved-id");
    }

    #[test]
    fn name_prompt_retries_invalid_changes_and_preserves_special_exit_paths() {
        let colors = [0; SCHEME_COLOR_COUNT];
        let mappings = [ColorMapping {
            source: 0,
            target: 0,
        }; SCHEME_MAPPING_COUNT];
        let state = EditorSchemesCreationState {
            original_colors: colors,
            original_mappings: mappings,
            schemes: vec![OwnedEditorColorScheme {
                name: "Taken".to_owned(),
                uuid: "taken-id".to_owned(),
                mode: 0,
                colors,
                mappings,
            }],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut proposal = "Initial".to_owned();
        let mut host = PromptHost {
            responses: [
                Some(String::new()),
                Some("Taken".to_owned()),
                Some("New".to_owned()),
            ]
            .into(),
            current_values: Vec::new(),
            messages: Vec::new(),
        };

        assert!(prompt_for_editor_scheme_name(
            &state,
            &mut proposal,
            &mut host
        ));
        assert_eq!(proposal, "New");
        assert_eq!(host.current_values, ["Initial", "", "Taken"]);
        assert_eq!(
            host.messages,
            [INVALID_SCHEME_NAME_MESSAGE, INVALID_SCHEME_NAME_MESSAGE]
        );

        let mut unchanged = "Taken".to_owned();
        let mut unchanged_host = PromptHost {
            responses: [Some("Taken".to_owned())].into(),
            current_values: Vec::new(),
            messages: Vec::new(),
        };
        assert!(prompt_for_editor_scheme_name(
            &state,
            &mut unchanged,
            &mut unchanged_host
        ));
        assert!(unchanged_host.messages.is_empty());

        let mut cancelled = "Initial".to_owned();
        let mut cancel_host = PromptHost {
            responses: [None].into(),
            current_values: Vec::new(),
            messages: Vec::new(),
        };
        assert!(!prompt_for_editor_scheme_name(
            &state,
            &mut cancelled,
            &mut cancel_host
        ));
        assert_eq!(cancelled, "Initial");
    }

    #[test]
    fn add_creates_and_selects_a_default_light_scheme_after_acceptance() {
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: Vec::new(),
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut cancel_host = AddHost {
            response: None,
            invalidations: 0,
            previews: 0,
        };
        assert_eq!(add_editor_scheme(&mut state, true, &mut cancel_host), None);
        assert!(state.schemes.is_empty());

        let mut add_host = AddHost {
            response: Some("Custom".to_owned()),
            invalidations: 0,
            previews: 0,
        };
        let outcome = add_editor_scheme(&mut state, true, &mut add_host);

        assert_eq!(outcome.and_then(|value| value.current_scheme), Some(0));
        assert_eq!(state.selected_scheme, Some(0));
        assert_eq!(state.schemes[0].name, "Custom");
        assert_eq!(state.schemes[0].uuid, "new-id");
        assert_eq!(state.schemes[0].mode, 0);
        assert_eq!(state.schemes[0].colors, [5; SCHEME_COLOR_COUNT]);
        assert_eq!(state.schemes[0].mappings[0].source, 6);
        assert_eq!(state.schemes[0].mappings[0].target, 7);
        assert_eq!(add_host.invalidations, 1);
        assert_eq!(add_host.previews, 1);
    }

    #[test]
    fn copy_duplicates_only_the_selected_palettes_into_a_new_light_scheme() {
        let source = OwnedEditorColorScheme {
            name: "Dark Blue".to_owned(),
            uuid: "source-id".to_owned(),
            mode: 1,
            colors: [12; SCHEME_COLOR_COUNT],
            mappings: [ColorMapping {
                source: 34,
                target: 56,
            }; SCHEME_MAPPING_COUNT],
        };
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![source.clone()],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut no_selection_host = CopyHost {
            response: Some("Unused".to_owned()),
            prompt_values: Vec::new(),
            invalidations: 0,
            previews: 0,
        };
        assert_eq!(
            copy_editor_scheme(&mut state, true, &mut no_selection_host),
            None
        );
        assert!(no_selection_host.prompt_values.is_empty());

        state.selected_scheme = Some(0);
        let mut cancel_host = CopyHost {
            response: None,
            prompt_values: Vec::new(),
            invalidations: 0,
            previews: 0,
        };
        assert_eq!(copy_editor_scheme(&mut state, true, &mut cancel_host), None);
        assert_eq!(state.schemes, vec![source.clone()]);

        let mut copy_host = CopyHost {
            response: Some("Custom copy".to_owned()),
            prompt_values: Vec::new(),
            invalidations: 0,
            previews: 0,
        };
        let outcome = copy_editor_scheme(&mut state, true, &mut copy_host);

        assert_eq!(outcome.and_then(|value| value.current_scheme), Some(1));
        assert_eq!(copy_host.prompt_values, ["Dark Blue (copy)"]);
        assert_eq!(state.selected_scheme, Some(1));
        assert_eq!(state.schemes[1].name, "Custom copy");
        assert_eq!(state.schemes[1].uuid, "copy-id");
        assert_eq!(state.schemes[1].mode, 0);
        assert_eq!(state.schemes[1].colors, source.colors);
        assert_eq!(state.schemes[1].mappings, source.mappings);
        assert_eq!(copy_host.invalidations, 1);
        assert_eq!(copy_host.previews, 1);
    }

    #[test]
    fn rename_changes_only_the_selected_name_after_acceptance() {
        let original = OwnedEditorColorScheme {
            name: "Original".to_owned(),
            uuid: "fixed-id".to_owned(),
            mode: 1,
            colors: [12; SCHEME_COLOR_COUNT],
            mappings: [ColorMapping {
                source: 34,
                target: 56,
            }; SCHEME_MAPPING_COUNT],
        };
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![original.clone()],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut no_selection_host = PromptHost {
            responses: [Some("Unused".to_owned())].into(),
            current_values: Vec::new(),
            messages: Vec::new(),
        };
        assert!(!rename_editor_scheme(&mut state, &mut no_selection_host));
        assert!(no_selection_host.current_values.is_empty());

        state.selected_scheme = Some(0);
        let mut cancel_host = PromptHost {
            responses: [None].into(),
            current_values: Vec::new(),
            messages: Vec::new(),
        };
        assert!(!rename_editor_scheme(&mut state, &mut cancel_host));
        assert_eq!(state.schemes.as_slice(), std::slice::from_ref(&original));

        let mut rename_host = PromptHost {
            responses: [Some("Renamed".to_owned())].into(),
            current_values: Vec::new(),
            messages: Vec::new(),
        };
        assert!(rename_editor_scheme(&mut state, &mut rename_host));
        assert_eq!(rename_host.current_values, ["Original"]);
        assert_eq!(state.schemes[0].name, "Renamed");
        assert_eq!(state.schemes[0].uuid, original.uuid);
        assert_eq!(state.schemes[0].mode, original.mode);
        assert_eq!(state.schemes[0].colors, original.colors);
        assert_eq!(state.schemes[0].mappings, original.mappings);
        assert_eq!(state.selected_scheme, Some(0));
    }

    #[test]
    fn delete_protects_system_schemes_and_refreshes_index_one_after_confirmation() {
        let scheme = |name: &str, uuid: &str| OwnedEditorColorScheme {
            name: name.to_owned(),
            uuid: uuid.to_owned(),
            mode: 0,
            colors: [0; SCHEME_COLOR_COUNT],
            mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
        };
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![
                scheme("Protected", "system-id"),
                scheme("Remove", "user-id"),
                scheme("Next", "next-id"),
            ],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = DeleteHost {
            protected_uuid: "system-id".to_owned(),
            confirmed: false,
            protected_messages: Vec::new(),
            confirmations: Vec::new(),
            invalidations: 0,
            previews: Vec::new(),
        };

        assert_eq!(
            delete_editor_scheme(&mut state, true, &mut host),
            EditorSchemeDeleteOutcome::NoCurrentScheme
        );
        state.selected_scheme = Some(0);
        assert_eq!(
            delete_editor_scheme(&mut state, true, &mut host),
            EditorSchemeDeleteOutcome::SystemSchemeProtected
        );
        assert_eq!(host.protected_messages, [SYSTEM_SCHEME_DELETE_MESSAGE]);
        assert!(host.confirmations.is_empty());

        state.selected_scheme = Some(1);
        assert_eq!(
            delete_editor_scheme(&mut state, true, &mut host),
            EditorSchemeDeleteOutcome::Rejected
        );
        assert_eq!(state.schemes.len(), 3);
        assert_eq!(
            host.confirmations,
            ["Do you want to delete the \"Remove\" color scheme?"]
        );

        host.confirmed = true;
        let outcome = delete_editor_scheme(&mut state, true, &mut host);
        assert_eq!(
            outcome,
            EditorSchemeDeleteOutcome::Deleted(EditorSchemeSelectionOutcome {
                current_scheme: Some(1),
                scheme_type_enabled: Some(true),
                mode: Some(0),
                preview_applied: true,
            })
        );
        assert_eq!(state.schemes.len(), 2);
        assert_eq!(state.schemes[1].name, "Next");
        assert_eq!(state.selected_scheme, Some(1));
        assert_eq!(host.invalidations, 1);
        assert_eq!(host.previews, ["Next"]);
    }

    #[test]
    fn selected_name_returns_the_current_name_or_an_empty_string() {
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![OwnedEditorColorScheme {
                name: "Current".to_owned(),
                uuid: "id".to_owned(),
                mode: 0,
                colors: [0; SCHEME_COLOR_COUNT],
                mappings: [ColorMapping {
                    source: 0,
                    target: 0,
                }; SCHEME_MAPPING_COUNT],
            }],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };

        assert_eq!(selected_editor_scheme_name(&state), "");
        state.selected_scheme = Some(1);
        assert_eq!(selected_editor_scheme_name(&state), "");
        state.selected_scheme = Some(0);
        assert_eq!(selected_editor_scheme_name(&state), "Current");
    }

    #[test]
    fn name_seed_selects_an_exact_match_and_ignores_an_unknown_name() {
        let scheme = |name: &str| OwnedEditorColorScheme {
            name: name.to_owned(),
            uuid: format!("{name}-id"),
            mode: 0,
            colors: [0; SCHEME_COLOR_COUNT],
            mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
        };
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![scheme("First"), scheme("Second")],
            grid_rows: Vec::new(),
            selected_scheme: Some(0),
            selection_refresh_pending: true,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = SelectionHost::default();

        assert_eq!(
            select_editor_scheme_by_name(&mut state, "Missing", true, &mut host),
            None
        );
        assert_eq!(state.selected_scheme, Some(0));
        assert!(state.selection_refresh_pending);
        assert_eq!(host.invalidations, 0);
        assert!(host.previewed.is_empty());

        let outcome = select_editor_scheme_by_name(&mut state, "Second", true, &mut host);
        assert_eq!(outcome.and_then(|value| value.current_scheme), Some(1));
        assert_eq!(state.selected_scheme, Some(1));
        assert!(!state.selection_refresh_pending);
        assert_eq!(host.invalidations, 1);
        assert_eq!(host.previewed, ["Second"]);
    }

    #[test]
    fn custom_color_uses_field_or_white_seed_and_refreshes_only_after_acceptance() {
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![OwnedEditorColorScheme {
                name: "Current".to_owned(),
                uuid: "id".to_owned(),
                mode: 0,
                colors: [11; SCHEME_COLOR_COUNT],
                mappings: [ColorMapping {
                    source: 22,
                    target: 33,
                }; SCHEME_MAPPING_COUNT],
            }],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = CustomColorHost {
            result: Some(44),
            initial_colors: Vec::new(),
            invalidations: 0,
            previews: 0,
        };
        assert_eq!(
            choose_editor_scheme_custom_color(&mut state, Some(1_000), true, &mut host),
            None
        );
        assert!(host.initial_colors.is_empty());

        state.selected_scheme = Some(0);
        host.result = None;
        assert_eq!(
            choose_editor_scheme_custom_color(&mut state, Some(3_000), true, &mut host),
            None
        );
        assert_eq!(host.initial_colors, [33]);
        assert_eq!(host.invalidations, 0);

        host.result = Some(55);
        let outcome = choose_editor_scheme_custom_color(&mut state, Some(3_000), true, &mut host);
        assert_eq!(
            outcome,
            Some(EditorSchemePaletteOutcome {
                palette_selection_cleared: true,
                scheme_updated: true,
                preview_applied: true,
            })
        );
        assert_eq!(host.initial_colors, [33, 33]);
        assert_eq!(state.schemes[0].mappings[0].target, 55);
        assert_eq!(host.invalidations, 1);
        assert_eq!(host.previews, 1);

        host.result = Some(66);
        let unknown = choose_editor_scheme_custom_color(&mut state, Some(2_000), true, &mut host);
        assert_eq!(unknown.map(|value| value.scheme_updated), Some(false));
        assert_eq!(host.initial_colors[2], CUSTOM_COLOR_FALLBACK);
        assert_eq!(host.invalidations, 2);
        assert_eq!(host.previews, 2);
    }

    #[test]
    fn preview_replaces_live_palettes_and_refreshes_only_when_enabled_and_selected() {
        let colors = std::array::from_fn(|index| u32::try_from(index + 10).unwrap_or_default());
        let mappings = std::array::from_fn(|index| ColorMapping {
            source: u32::try_from(index + 20).unwrap_or_default(),
            target: u32::try_from(index + 30).unwrap_or_default(),
        });
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![OwnedEditorColorScheme {
                name: "Preview".to_owned(),
                uuid: "id".to_owned(),
                mode: 0,
                colors,
                mappings,
            }],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = PreviewHost::default();

        assert!(!apply_editor_scheme_preview(&state, true, &mut host));
        state.selected_scheme = Some(0);
        assert!(!apply_editor_scheme_preview(&state, false, &mut host));
        assert_eq!(host.refreshes, 0);

        assert!(apply_editor_scheme_preview(&state, true, &mut host));
        assert_eq!(host.colors, Some(colors));
        assert_eq!(host.mappings, Some(mappings));
        assert_eq!(host.active_color, Some(colors[0]));
        assert_eq!(host.refreshes, 1);
    }

    #[test]
    fn mode_stage_requires_a_current_scheme_and_copies_only_the_low_byte() {
        let mut state = EditorSchemesCreationState {
            original_colors: [0; SCHEME_COLOR_COUNT],
            original_mappings: [ColorMapping {
                source: 0,
                target: 0,
            }; SCHEME_MAPPING_COUNT],
            schemes: vec![OwnedEditorColorScheme {
                name: "Mode".to_owned(),
                uuid: "id".to_owned(),
                mode: 0,
                colors: [0; SCHEME_COLOR_COUNT],
                mappings: [ColorMapping {
                    source: 0,
                    target: 0,
                }; SCHEME_MAPPING_COUNT],
            }],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };

        assert!(!stage_editor_scheme_mode(&mut state, 1));
        assert_eq!(state.schemes[0].mode, 0);
        state.selected_scheme = Some(0);
        assert!(stage_editor_scheme_mode(&mut state, 257));
        assert_eq!(state.schemes[0].mode, 1);
        assert!(stage_editor_scheme_mode(&mut state, -1));
        assert_eq!(state.schemes[0].mode, -1);
    }

    #[test]
    fn close_releases_schemes_and_restores_both_pre_dialog_palettes() {
        let original_colors =
            std::array::from_fn(|index| u32::try_from(index + 100).unwrap_or_default());
        let original_mappings = std::array::from_fn(|index| ColorMapping {
            source: u32::try_from(index + 200).unwrap_or_default(),
            target: u32::try_from(index + 300).unwrap_or_default(),
        });
        let mut state = EditorSchemesCreationState {
            original_colors,
            original_mappings,
            schemes: vec![OwnedEditorColorScheme {
                name: "Owned".to_owned(),
                uuid: "id".to_owned(),
                mode: 0,
                colors: [0; SCHEME_COLOR_COUNT],
                mappings: [ColorMapping {
                    source: 0,
                    target: 0,
                }; SCHEME_MAPPING_COUNT],
            }],
            grid_rows: Vec::new(),
            selected_scheme: Some(0),
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = CloseHost::default();

        close_editor_schemes(&mut state, &mut host);

        assert!(state.schemes.is_empty());
        assert_eq!(state.selected_scheme, None);
        assert_eq!(host.colors, Some(original_colors));
        assert_eq!(host.mappings, Some(original_mappings));
        assert_eq!(host.active_color, Some(original_colors[0]));
        assert_eq!(host.settings_releases, 1);
    }

    #[test]
    fn preview_toggle_restores_when_clear_and_applies_current_when_selected() {
        let original_colors = [10; SCHEME_COLOR_COUNT];
        let original_mappings = [ColorMapping {
            source: 20,
            target: 30,
        }; SCHEME_MAPPING_COUNT];
        let scheme_colors = [40; SCHEME_COLOR_COUNT];
        let scheme_mappings = [ColorMapping {
            source: 50,
            target: 60,
        }; SCHEME_MAPPING_COUNT];
        let mut state = EditorSchemesCreationState {
            original_colors,
            original_mappings,
            schemes: vec![OwnedEditorColorScheme {
                name: "Preview".to_owned(),
                uuid: "id".to_owned(),
                mode: 0,
                colors: scheme_colors,
                mappings: scheme_mappings,
            }],
            grid_rows: Vec::new(),
            selected_scheme: None,
            selection_refresh_pending: false,
            help_context: EDITOR_SCHEMES_HELP_CONTEXT,
        };
        let mut host = PreviewHost::default();

        assert!(!toggle_editor_scheme_preview(&state, true, &mut host));
        assert_eq!(host.refreshes, 0);
        assert!(toggle_editor_scheme_preview(&state, false, &mut host));
        assert_eq!(host.colors, Some(original_colors));
        assert_eq!(host.mappings, Some(original_mappings));
        assert_eq!(host.active_color, Some(original_colors[0]));
        assert_eq!(host.refreshes, 1);

        state.selected_scheme = Some(0);
        assert!(toggle_editor_scheme_preview(&state, true, &mut host));
        assert_eq!(host.colors, Some(scheme_colors));
        assert_eq!(host.mappings, Some(scheme_mappings));
        assert_eq!(host.active_color, Some(scheme_colors[0]));
        assert_eq!(host.refreshes, 2);
    }
}
