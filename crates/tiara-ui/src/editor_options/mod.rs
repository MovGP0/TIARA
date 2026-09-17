//! Iced state for the recovered Editor Options dialog.
//!
//! The recovered dialog has no separate settings record that a caller could
//! copy back atomically. Every control is the working value until the OK
//! handler reaches it, so this port keeps the staged control values and the
//! process-wide settings as two explicit types and commits one into the other.

use std::path::{Path, PathBuf};

use crate::editor_color_scheme::{
    ColorMapping, ColorSchemeWriteHost, EditorColorScheme, SCHEME_COLOR_COUNT,
    SCHEME_MAPPING_COUNT, serialize_color_scheme,
};

pub const TITLE: &str = "Editor Options";
pub const FORM_RESOURCE: &str = "EditorOpsDlg";
pub const HELP_CONTEXT: u32 = 0x0425;
pub const SETTINGS_FILE: &str = "TINA.INI";
pub const SETTINGS_SECTION: &str = "Schematic Editor";

/// The fixed scheme name the recovered write-scheme button stores.
pub const NEW_SCHEME_NAME: &str = "-NEW-";

/// The fixed mode the recovered write-scheme button stores.
pub const NEW_SCHEME_MODE: i8 = 0;

pub const SYMBOL_SET_KEY: &str = "DefSymbolSet";
pub const ENABLE_3D_SHAPES_KEY: &str = "Enable3DShapes";
pub const MEASUREMENT_UNIT_KEY: &str = "DefUnit";
pub const AC_BASE_FUNCTION_KEY: &str = "ACBaseFunc";
pub const COLOR_SCHEME_KEY: &str = "ColorScheme";
pub const AUTOSHAPE_COLOR_SET_KEY: &str = "AutoShapeColorSet";
pub const MOUSE_WHEEL_ZOOMING_KEY: &str = "MouseWheelZooming";
pub const COMPRESSED_TSC_KEY: &str = "CompressedTSCFormat";
pub const SAVE_PICTURE_AS_GIF_KEY: &str = "SavePictureAsGIF";

/// The recovered `DefUnit` value for the inch radio entry.
pub const INCH_UNIT_VALUE: &str = "inch";

/// The recovered internal unit codes.
pub const INCH_UNIT_CODE: u8 = 1;
pub const MILLIMETER_UNIT_CODE: u8 = 3;

/// The recovered `ACBaseFunc` values.
pub const SINE_AC_BASE_VALUE: &str = "sine";
pub const COSINE_AC_BASE_VALUE: &str = "cosine";

/// The recovered autosave conversion between the spin editor's minutes and the
/// stored interval.
pub const AUTOSAVE_MILLISECONDS_PER_MINUTE: i32 = 60_000;

pub const PARAMETER_NAME_COUNT: usize = 4;

/// The INI values the recovered handler writes from string constants that the
/// decompiler did not recover as literals.
///
/// `inch`, `sine`, and `cosine` are recovered literals and are constants above.
/// The two symbol-set values and the millimeter unit value are not, so the
/// caller supplies them instead of this port inventing text.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct UnrecoveredSettingValues {
    pub usa_symbol_set: String,
    pub european_symbol_set: String,
    pub millimeter_unit: String,
}

/// A reference to the schematic editor that opened the dialog.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct SchematicEditorHandle(pub u64);

/// The process-wide schematic-editor settings the dialog seeds from and commits
/// to.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct EditorSettings {
    /// True selects the European (DIN) symbol set.
    pub european_symbol_set: bool,
    pub enable_3d_shapes: bool,
    /// [`INCH_UNIT_CODE`] or [`MILLIMETER_UNIT_CODE`].
    pub measurement_unit_code: u8,
    /// Zero selects the sine base function.
    pub ac_base_function: u8,
    pub parameter_names: [String; PARAMETER_NAME_COUNT],
    pub color_scheme: String,
    pub autoshape_color_set: i32,
    pub mouse_wheel_zooming: u8,
    pub compressed_tsc: bool,
    pub save_picture_as_gif: bool,
    pub append_value_to_label: bool,
    pub append_unit_to_label: bool,
    /// The recovered global is the inverse of the Labels check box.
    pub hide_labels: bool,
    pub autosave_interval_milliseconds: i32,
    pub autosave_history_depth: i32,
    /// The recovered global is the inverse of the continue-where-you-left-off
    /// check box.
    pub start_as_new: bool,
    pub renumber_on_paste: bool,
    pub save_reference_only: bool,
}

/// The staged control values of one open dialog.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct EditorOptionsControls {
    pub usa_symbol_set_checked: bool,
    pub enable_3d_shapes: bool,
    /// `rgMeasUnits.ItemIndex`. Zero selects inch.
    pub measurement_unit_index: i32,
    /// `rgACBaseFunc.ItemIndex` as the recovered byte.
    pub ac_base_function_index: u8,
    pub parameter_names: [String; PARAMETER_NAME_COUNT],
    /// `cbEditorColors.Text`.
    pub editor_color_scheme_text: String,
    /// The scheme identifier attached to the selected combo entry.
    pub editor_color_scheme_identifier: String,
    pub autoshape_color_set_index: i32,
    pub mouse_wheel_mode_index: u8,
    pub compressed_tsc: bool,
    pub save_picture_as_gif: bool,
    pub append_value_to_label: bool,
    pub append_unit_to_label: bool,
    pub show_labels: bool,
    pub autosave_minutes: i32,
    pub autosave_history_depth: i32,
    pub continue_where_left_off: bool,
    pub renumber_on_paste: bool,
    pub save_reference_only: bool,
}

/// The recovered TINA.INI settings object the dialog owns.
pub trait EditorSettingsObjectHost {
    /// Releases the current settings object. The recovered call is nil-safe.
    fn release_settings_object(&mut self);

    /// Creates a settings object for `<settings folder>/TINA.INI`.
    fn create_settings_object(&mut self, path: &Path);

    /// Assigns the form help context.
    fn set_help_context(&mut self, context: u32);

    /// Rebuilds the editor color-scheme combo and selects the supplied scheme.
    fn reload_editor_color_schemes(&mut self, selected: &str);

    /// Rebuilds the autoshape color-scheme combo.
    fn reload_autoshape_color_schemes(&mut self);
}

/// The INI writes the OK handler performs during the click.
pub trait EditorSettingsWriteHost {
    fn release_settings_object(&mut self);

    fn create_settings_object(&mut self, path: &Path);

    fn write_string(&mut self, section: &str, key: &str, value: &str);

    fn write_bool(&mut self, section: &str, key: &str, value: bool);

    fn write_integer(&mut self, section: &str, key: &str, value: i32);

    /// Reloads the live color tables from the committed scheme identifier.
    fn reload_active_color_tables(&mut self, scheme: &str);
}

/// Builds the settings-object path the recovered handlers construct.
#[must_use]
pub fn settings_file_path(settings_folder: &Path) -> PathBuf {
    settings_folder.join(SETTINGS_FILE)
}

/// Implements Ghidra function `FUN_01b7a760` at `0x01B7A760`.
///
/// Constructs the dialog with the supplied VCL owner and retains the calling
/// schematic editor, which the nested hotkey-editor launcher later reads. The
/// recovered constructor initializes no option control, shows nothing, commits
/// nothing, and refreshes no caller; the create handler and the modal owner do
/// that work.
#[must_use]
pub const fn create_editor_options(editor: SchematicEditorHandle) -> EditorOptionsDialog {
    EditorOptionsDialog {
        editor,
        controls: None,
    }
}

/// One open Editor Options dialog.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorOptionsDialog {
    editor: SchematicEditorHandle,
    controls: Option<EditorOptionsControls>,
}

impl EditorOptionsDialog {
    #[must_use]
    pub const fn editor(&self) -> SchematicEditorHandle {
        self.editor
    }

    #[must_use]
    pub const fn controls(&self) -> Option<&EditorOptionsControls> {
        self.controls.as_ref()
    }

    #[must_use]
    pub const fn controls_mut(&mut self) -> Option<&mut EditorOptionsControls> {
        self.controls.as_mut()
    }

    /// Implements Ghidra function `FUN_01b7a820` at `0x01B7A820`.
    ///
    /// Creates the TINA.INI settings object, seeds every option control from
    /// the current process-wide settings, rebuilds both scheme combo boxes, and
    /// assigns the form help context. The measurement-unit radio selects index
    /// zero only for the inch code, the Labels check box is the inverse of the
    /// hide-labels global, the continue-where-you-left-off check box is the
    /// inverse of the start-as-new global, and the autosave spin editor shows
    /// whole minutes from the stored millisecond interval.
    ///
    /// The handler stages values only. It validates nothing, commits nothing,
    /// repaints no caller, and starts no autosave timer.
    pub fn create_controls(
        &mut self,
        settings: &EditorSettings,
        settings_folder: &Path,
        host: &mut impl EditorSettingsObjectHost,
    ) -> &EditorOptionsControls {
        host.create_settings_object(&settings_file_path(settings_folder));

        let controls = EditorOptionsControls {
            usa_symbol_set_checked: !settings.european_symbol_set,
            enable_3d_shapes: settings.enable_3d_shapes,
            measurement_unit_index: i32::from(settings.measurement_unit_code != INCH_UNIT_CODE),
            ac_base_function_index: settings.ac_base_function,
            parameter_names: settings.parameter_names.clone(),
            editor_color_scheme_text: settings.color_scheme.clone(),
            editor_color_scheme_identifier: settings.color_scheme.clone(),
            autoshape_color_set_index: settings.autoshape_color_set,
            mouse_wheel_mode_index: settings.mouse_wheel_zooming,
            compressed_tsc: settings.compressed_tsc,
            save_picture_as_gif: settings.save_picture_as_gif,
            append_value_to_label: settings.append_value_to_label,
            append_unit_to_label: settings.append_unit_to_label,
            show_labels: !settings.hide_labels,
            autosave_minutes: settings.autosave_interval_milliseconds
                / AUTOSAVE_MILLISECONDS_PER_MINUTE,
            autosave_history_depth: settings.autosave_history_depth,
            continue_where_left_off: !settings.start_as_new,
            renumber_on_paste: settings.renumber_on_paste,
            save_reference_only: settings.save_reference_only,
        };

        host.reload_editor_color_schemes(&settings.color_scheme);
        host.reload_autoshape_color_schemes();
        host.set_help_context(HELP_CONTEXT);

        self.controls.insert(controls)
    }

    /// Implements Ghidra function `FUN_01b7c600` at `0x01B7C600`.
    ///
    /// Releases the dialog's TINA.INI settings object when the form closes. The
    /// recovered handler does nothing else: it commits no control, writes no
    /// key, and refreshes no caller, so closing with Cancel discards every
    /// staged edit.
    pub fn destroy(&mut self, host: &mut impl EditorSettingsObjectHost) {
        self.controls = None;
        host.release_settings_object();
    }
}

/// The result of one accepted Editor Options click.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CommitOutcome {
    /// True when the symbol-set key was written, which the recovered handler
    /// does only when the global changed.
    pub wrote_symbol_set: bool,
    /// True when the AC base key was written, which the recovered handler does
    /// only when the global changed.
    pub wrote_ac_base_function: bool,
    /// True when the editor color scheme was committed rather than skipped as a
    /// placeholder entry.
    pub committed_color_scheme: bool,
}

/// Implements Ghidra function `FUN_01b7baa0` at `0x01B7BAA0`.
///
/// Commits the staged controls into the process-wide settings and writes the
/// immediately persisted keys. The handler first recreates the TINA.INI object,
/// then assigns globals and writes keys in one interleaved pass, so there is no
/// atomic copy: a failure part-way leaves a mixture of old and new values.
///
/// Recovered decisions preserved here: the symbol-set and AC-base keys are
/// written only when their global changes; index zero of the unit radio selects
/// inch code [`INCH_UNIT_CODE`] and every other index selects
/// [`MILLIMETER_UNIT_CODE`]; a color-scheme text that starts with
/// `placeholder_prefix` is skipped entirely; the Labels and
/// continue-where-you-left-off check boxes are stored inverted; and the
/// autosave minutes are multiplied into milliseconds without an overflow guard,
/// which this port keeps as a wrapping multiply rather than a panic.
///
/// The handler performs no cross-field validation, no confirmation, no
/// rollback, no close, and no caller repaint. Parameter names, the two
/// label-append flags, the hide-labels flag, both autosave values, the
/// start-as-new flag, renumber-on-paste, and reference-only stay process-wide
/// until the application-wide settings saver runs.
pub fn commit_editor_options(
    controls: &EditorOptionsControls,
    settings: &mut EditorSettings,
    settings_folder: &Path,
    values: &UnrecoveredSettingValues,
    placeholder_prefix: &str,
    host: &mut impl EditorSettingsWriteHost,
) -> CommitOutcome {
    host.release_settings_object();
    host.create_settings_object(&settings_file_path(settings_folder));

    let european = !controls.usa_symbol_set_checked;
    let wrote_symbol_set = settings.european_symbol_set != european;
    if wrote_symbol_set {
        settings.european_symbol_set = european;
        let value = if european {
            &values.european_symbol_set
        } else {
            &values.usa_symbol_set
        };
        host.write_string(SETTINGS_SECTION, SYMBOL_SET_KEY, value);
    }

    settings.enable_3d_shapes = controls.enable_3d_shapes;
    host.write_bool(
        SETTINGS_SECTION,
        ENABLE_3D_SHAPES_KEY,
        settings.enable_3d_shapes,
    );

    let (unit_code, unit_value) = if controls.measurement_unit_index == 0 {
        (INCH_UNIT_CODE, INCH_UNIT_VALUE)
    } else {
        (MILLIMETER_UNIT_CODE, values.millimeter_unit.as_str())
    };
    settings.measurement_unit_code = unit_code;
    host.write_string(SETTINGS_SECTION, MEASUREMENT_UNIT_KEY, unit_value);

    let wrote_ac_base_function = settings.ac_base_function != controls.ac_base_function_index;
    if wrote_ac_base_function {
        settings.ac_base_function = controls.ac_base_function_index;
        let value = if settings.ac_base_function == 0 {
            SINE_AC_BASE_VALUE
        } else {
            COSINE_AC_BASE_VALUE
        };
        host.write_string(SETTINGS_SECTION, AC_BASE_FUNCTION_KEY, value);
    }

    settings
        .parameter_names
        .clone_from(&controls.parameter_names);

    let committed_color_scheme = !controls
        .editor_color_scheme_text
        .starts_with(placeholder_prefix);
    if committed_color_scheme {
        controls
            .editor_color_scheme_identifier
            .clone_into(&mut settings.color_scheme);
        host.write_string(SETTINGS_SECTION, COLOR_SCHEME_KEY, &settings.color_scheme);
        host.reload_active_color_tables(&settings.color_scheme);
    }

    settings.autoshape_color_set = controls.autoshape_color_set_index;
    host.write_integer(
        SETTINGS_SECTION,
        AUTOSHAPE_COLOR_SET_KEY,
        settings.autoshape_color_set,
    );

    settings.mouse_wheel_zooming = controls.mouse_wheel_mode_index;
    host.write_bool(
        SETTINGS_SECTION,
        MOUSE_WHEEL_ZOOMING_KEY,
        settings.mouse_wheel_zooming != 0,
    );

    settings.compressed_tsc = controls.compressed_tsc;
    host.write_bool(
        SETTINGS_SECTION,
        COMPRESSED_TSC_KEY,
        settings.compressed_tsc,
    );

    settings.save_picture_as_gif = controls.save_picture_as_gif;
    host.write_bool(
        SETTINGS_SECTION,
        SAVE_PICTURE_AS_GIF_KEY,
        settings.save_picture_as_gif,
    );

    settings.append_value_to_label = controls.append_value_to_label;
    settings.append_unit_to_label = controls.append_unit_to_label;
    settings.hide_labels = !controls.show_labels;
    settings.autosave_interval_milliseconds = controls
        .autosave_minutes
        .wrapping_mul(AUTOSAVE_MILLISECONDS_PER_MINUTE);
    settings.autosave_history_depth = controls.autosave_history_depth;
    settings.start_as_new = !controls.continue_where_left_off;
    settings.renumber_on_paste = controls.renumber_on_paste;
    settings.save_reference_only = controls.save_reference_only;

    CommitOutcome {
        wrote_symbol_set,
        wrote_ac_base_function,
        committed_color_scheme,
    }
}

/// The INI section the autoshape scheme combo reads.
pub const AUTOSHAPE_SECTION: &str = "AutoShape Color Sets";

/// The legacy English record names the editor-scheme loader repairs.
pub const LEGACY_BLACK_BACKGROUND_NAME: &str = "Black background";
pub const LEGACY_WHITE_BACKGROUND_NAME: &str = "White background";

/// The fixed identifiers the loader forces onto the two system schemes.
pub const BLACK_BACKGROUND_IDENTIFIER: &str = "{6A65B724-CD3D-4588-A748-E6453AA5351A}";
pub const WHITE_BACKGROUND_IDENTIFIER: &str = "{10920985-9400-45D4-B218-55DC7E202202}";

/// Localized name identifiers for the two system schemes and the empty-list
/// fallback entry.
pub const BLACK_BACKGROUND_NAME_ID: u16 = 0x0851;
pub const WHITE_BACKGROUND_NAME_ID: u16 = 0x0852;
pub const FALLBACK_SCHEME_NAME_ID: u16 = 0x0853;

/// One visible editor color-scheme combo entry and the identifier attached to
/// it.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorSchemeComboEntry {
    pub name: String,
    pub identifier: String,
}

/// The rebuilt editor color-scheme combo.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct EditorSchemeCombo {
    pub entries: Vec<EditorSchemeComboEntry>,
    pub selected: Option<usize>,
    /// True when the loader appended the localized fallback entry, which
    /// carries no identifier.
    pub appended_fallback: bool,
    /// The recovered loader disables the combo only when no record exists.
    pub enabled: bool,
}

pub trait EditorSchemeComboHost {
    /// Reads one record's stored name, already decoded from the stored code
    /// page. `None` reports the absent record that ends the scan.
    fn read_scheme_name(&mut self, index: usize) -> Option<String>;

    /// Reads one record's stored identifier. An absent key reads as empty.
    fn read_scheme_identifier(&mut self, index: usize) -> String;

    /// Writes one record's name, re-encoding it for storage.
    fn write_scheme_name(&mut self, index: usize, name: &str);

    fn write_scheme_identifier(&mut self, index: usize, identifier: &str);

    fn localize(&mut self, caption_id: u16) -> String;

    fn create_scheme_identifier(&mut self) -> String;

    /// The list control's own name lookup, which uses the list comparison
    /// rules rather than the loader's ordered scan.
    fn list_index_of(&mut self, entries: &[EditorSchemeComboEntry], name: &str) -> Option<usize>;
}

/// Implements Ghidra function `FUN_01b7aba0` at `0x01B7ABA0`.
///
/// Scans the rebuilt combo entries in order and stops at the first entry whose
/// text equals the requested scheme name.
///
/// This is the loader's first lookup. The list control's own lookup runs only
/// when this scan finds nothing, so the two can disagree whenever their
/// comparison rules differ. The scan reads no setting and changes no control.
#[must_use]
pub fn scan_editor_scheme_entries(entries: &[EditorSchemeComboEntry], name: &str) -> Option<usize> {
    entries.iter().position(|entry| entry.name == name)
}

/// Implements Ghidra function `FUN_01b7aca0` at `0x01B7ACA0`.
///
/// Clears the editor color-scheme combo and rebuilds it from the consecutive
/// `Schematic Editor Color Sets` records, stopping at the first missing record.
/// Each visible entry keeps its record identifier.
///
/// Recovered repairs and decisions preserved here: a record whose name is the
/// legacy `Black background` or whose identifier is already
/// [`BLACK_BACKGROUND_IDENTIFIER`] is rewritten to the localized name and that
/// fixed identifier, and the white-background record is repaired the same way;
/// a record with no identifier receives a freshly created one that is written
/// back before the entry is added.
///
/// Selection follows the recovered order: the ordered scan wins, then the list
/// control's own lookup of the requested name, and only when both fail does the
/// loader append the localized fallback entry and select it. An empty record
/// set is the one case that also disables the combo.
pub fn load_editor_scheme_combo(
    requested_name: &str,
    host: &mut impl EditorSchemeComboHost,
) -> EditorSchemeCombo {
    let mut entries: Vec<EditorSchemeComboEntry> = Vec::new();
    let mut index = 0;
    while let Some(stored_name) = host.read_scheme_name(index) {
        let mut name = stored_name;
        let mut identifier = host.read_scheme_identifier(index);

        if name == LEGACY_BLACK_BACKGROUND_NAME || identifier == BLACK_BACKGROUND_IDENTIFIER {
            name = host.localize(BLACK_BACKGROUND_NAME_ID);
            host.write_scheme_name(index, &name);
            host.write_scheme_identifier(index, BLACK_BACKGROUND_IDENTIFIER);
            BLACK_BACKGROUND_IDENTIFIER.clone_into(&mut identifier);
        } else if name == LEGACY_WHITE_BACKGROUND_NAME || identifier == WHITE_BACKGROUND_IDENTIFIER
        {
            name = host.localize(WHITE_BACKGROUND_NAME_ID);
            host.write_scheme_name(index, &name);
            host.write_scheme_identifier(index, WHITE_BACKGROUND_IDENTIFIER);
            WHITE_BACKGROUND_IDENTIFIER.clone_into(&mut identifier);
        }

        if identifier.is_empty() {
            identifier = host.create_scheme_identifier();
            host.write_scheme_identifier(index, &identifier);
        }

        entries.push(EditorSchemeComboEntry { name, identifier });
        index += 1;
    }

    if entries.is_empty() {
        let fallback = host.localize(FALLBACK_SCHEME_NAME_ID);
        entries.push(EditorSchemeComboEntry {
            name: fallback,
            identifier: String::new(),
        });
        return EditorSchemeCombo {
            entries,
            selected: Some(0),
            appended_fallback: true,
            enabled: false,
        };
    }

    if let Some(scanned) = scan_editor_scheme_entries(&entries, requested_name) {
        return EditorSchemeCombo {
            entries,
            selected: Some(scanned),
            appended_fallback: false,
            enabled: true,
        };
    }

    if let Some(listed) = host.list_index_of(&entries, requested_name) {
        return EditorSchemeCombo {
            entries,
            selected: Some(listed),
            appended_fallback: false,
            enabled: true,
        };
    }

    let fallback = host.localize(FALLBACK_SCHEME_NAME_ID);
    entries.push(EditorSchemeComboEntry {
        name: fallback,
        identifier: String::new(),
    });
    let selected = entries.len() - 1;
    EditorSchemeCombo {
        entries,
        selected: Some(selected),
        appended_fallback: true,
        enabled: true,
    }
}

pub trait AutoshapeSchemeComboHost {
    /// Reads one autoshape record name. `None` ends the scan.
    fn read_autoshape_name(&mut self, index: usize) -> Option<String>;
}

/// Implements Ghidra function `FUN_01b7b890` at `0x01B7B890`.
///
/// Appends the consecutive `AutoShape Color Sets` record names to the autoshape
/// combo, stopping at the first missing record, then selects the active
/// autoshape set by its stored index.
///
/// The recovered loader does not clear the combo first, so a second call
/// duplicates every entry. It reads no identifier, performs no legacy repair,
/// no code-page conversion, and no range check on the selected index, and it
/// writes nothing back.
pub fn load_autoshape_scheme_combo(
    active_index: i32,
    host: &mut impl AutoshapeSchemeComboHost,
) -> (Vec<String>, i32) {
    let mut names = Vec::new();
    let mut index = 0;
    while let Some(name) = host.read_autoshape_name(index) {
        names.push(name);
        index += 1;
    }
    (names, active_index)
}

pub trait NewSchemeHost: ColorSchemeWriteHost {
    /// Creates and formats one scheme identifier. The recovered handler ignores
    /// the creation status.
    fn create_scheme_uuid(&mut self) -> String;
}

/// Implements Ghidra function `FUN_01b7c390` at `0x01B7C390`.
///
/// Writes the live schematic palette and color mapping into `TINA.INI` as one
/// scheme fixed to the name [`NEW_SCHEME_NAME`] and mode [`NEW_SCHEME_MODE`]
/// under a freshly created identifier.
///
/// The recovered handler asks for no name and no path, never reads the scheme
/// combo, and ignores the identifier-creation status. It does not refresh or
/// select a list entry, activate the new scheme, repaint, validate, confirm an
/// overwrite, report success, or provide a rollback. The shared writer in
/// [`serialize_color_scheme`] resolves the record prefix, so an identifier that
/// already exists updates its record in place.
pub fn write_live_colors_as_new_scheme(
    colors: &[u32; SCHEME_COLOR_COUNT],
    mappings: &[ColorMapping; SCHEME_MAPPING_COUNT],
    host: &mut impl NewSchemeHost,
) -> String {
    let uuid = host.create_scheme_uuid();
    serialize_color_scheme(
        host,
        EditorColorScheme {
            name: NEW_SCHEME_NAME,
            uuid: &uuid,
            mode: NEW_SCHEME_MODE,
            colors,
            mappings,
        },
    );
    uuid
}

pub trait AdvancedSchemesHost {
    /// Shows the advanced scheme dialog seeded with the supplied selection.
    /// `None` is the recovered cancel result.
    fn show_editor_schemes(&mut self, initial_selection: &str) -> Option<String>;

    /// Rebuilds the parent combo from `TINA.INI` and selects the supplied name.
    fn reload_editor_color_schemes(&mut self, selected: &str);

    /// Resolves the combo index of one scheme name.
    fn scheme_index(&self, name: &str) -> Option<usize>;

    fn set_scheme_index(&mut self, index: usize);
}

/// Implements Ghidra function `FUN_01b7c440` at `0x01B7C440`.
///
/// Opens the advanced scheme dialog seeded from the current editor-scheme combo
/// text. Only an accepted result reads the returned scheme name, rebuilds the
/// parent combo from `TINA.INI`, and selects that name when the rebuilt list
/// still contains it. Cancel leaves the parent combo untouched.
///
/// The nested dialog restores its own temporary preview colors before it is
/// destroyed, so this launcher performs no color rollback of its own, and it
/// commits nothing: the parent Editor Options OK handler still owns the
/// `ColorScheme` write.
pub fn open_advanced_editor_schemes(
    current_selection: &str,
    host: &mut impl AdvancedSchemesHost,
) -> Option<String> {
    let selected = host.show_editor_schemes(current_selection)?;
    host.reload_editor_color_schemes(&selected);
    if let Some(index) = host.scheme_index(&selected) {
        host.set_scheme_index(index);
    }
    Some(selected)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::editor_color_scheme::{COLOR_SCHEME_SECTION, ColorSchemeSettingKey};

    const SETTINGS_FOLDER: &str = r"C:\ProgramData\TINA";

    fn values() -> UnrecoveredSettingValues {
        UnrecoveredSettingValues {
            usa_symbol_set: "usa".to_owned(),
            european_symbol_set: "european".to_owned(),
            millimeter_unit: "mm".to_owned(),
        }
    }

    fn names(prefix: &str) -> [String; PARAMETER_NAME_COUNT] {
        [
            format!("{prefix}1"),
            format!("{prefix}2"),
            format!("{prefix}3"),
            format!("{prefix}4"),
        ]
    }

    fn settings() -> EditorSettings {
        EditorSettings {
            european_symbol_set: true,
            enable_3d_shapes: true,
            measurement_unit_code: MILLIMETER_UNIT_CODE,
            ac_base_function: 1,
            parameter_names: names("old"),
            color_scheme: "{OLD}".to_owned(),
            autoshape_color_set: 2,
            mouse_wheel_zooming: 1,
            compressed_tsc: true,
            save_picture_as_gif: true,
            append_value_to_label: true,
            append_unit_to_label: false,
            hide_labels: true,
            autosave_interval_milliseconds: 5 * AUTOSAVE_MILLISECONDS_PER_MINUTE,
            autosave_history_depth: 7,
            start_as_new: true,
            renumber_on_paste: true,
            save_reference_only: false,
        }
    }

    #[derive(Debug, Default, PartialEq, Eq)]
    struct ObjectHost {
        released: usize,
        created: Vec<PathBuf>,
        help_contexts: Vec<u32>,
        editor_reloads: Vec<String>,
        autoshape_reloads: usize,
    }

    impl EditorSettingsObjectHost for ObjectHost {
        fn release_settings_object(&mut self) {
            self.released += 1;
        }

        fn create_settings_object(&mut self, path: &Path) {
            self.created.push(path.to_path_buf());
        }

        fn set_help_context(&mut self, context: u32) {
            self.help_contexts.push(context);
        }

        fn reload_editor_color_schemes(&mut self, selected: &str) {
            self.editor_reloads.push(selected.to_owned());
        }

        fn reload_autoshape_color_schemes(&mut self) {
            self.autoshape_reloads += 1;
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Write {
        Release,
        Create(PathBuf),
        Text(String, String),
        Flag(String, bool),
        Number(String, i32),
        ReloadColors(String),
    }

    #[derive(Debug, Default)]
    struct WriteHost {
        writes: Vec<Write>,
    }

    impl WriteHost {
        fn keys(&self) -> Vec<String> {
            self.writes
                .iter()
                .filter_map(|write| match write {
                    Write::Text(key, _) | Write::Flag(key, _) | Write::Number(key, _) => {
                        Some(key.clone())
                    }
                    _ => None,
                })
                .collect()
        }
    }

    impl EditorSettingsWriteHost for WriteHost {
        fn release_settings_object(&mut self) {
            self.writes.push(Write::Release);
        }

        fn create_settings_object(&mut self, path: &Path) {
            self.writes.push(Write::Create(path.to_path_buf()));
        }

        fn write_string(&mut self, section: &str, key: &str, value: &str) {
            assert_eq!(section, SETTINGS_SECTION);
            self.writes
                .push(Write::Text(key.to_owned(), value.to_owned()));
        }

        fn write_bool(&mut self, section: &str, key: &str, value: bool) {
            assert_eq!(section, SETTINGS_SECTION);
            self.writes.push(Write::Flag(key.to_owned(), value));
        }

        fn write_integer(&mut self, section: &str, key: &str, value: i32) {
            assert_eq!(section, SETTINGS_SECTION);
            self.writes.push(Write::Number(key.to_owned(), value));
        }

        fn reload_active_color_tables(&mut self, scheme: &str) {
            self.writes.push(Write::ReloadColors(scheme.to_owned()));
        }
    }

    #[test]
    fn the_constructor_only_retains_the_calling_schematic_editor() {
        let dialog = create_editor_options(SchematicEditorHandle(9));

        assert_eq!(dialog.editor(), SchematicEditorHandle(9));
        assert!(dialog.controls().is_none());
    }

    #[test]
    fn create_seeds_every_control_and_inverts_the_three_recovered_flags() {
        let mut dialog = create_editor_options(SchematicEditorHandle(1));
        let mut host = ObjectHost::default();
        let settings = settings();

        let controls = dialog
            .create_controls(&settings, Path::new(SETTINGS_FOLDER), &mut host)
            .clone();

        assert!(!controls.usa_symbol_set_checked);
        assert_eq!(controls.measurement_unit_index, 1);
        assert_eq!(controls.ac_base_function_index, 1);
        assert_eq!(controls.parameter_names, names("old"));
        assert_eq!(controls.autosave_minutes, 5);
        assert!(!controls.show_labels);
        assert!(!controls.continue_where_left_off);
        assert_eq!(
            host.created,
            [Path::new(SETTINGS_FOLDER).join(SETTINGS_FILE)]
        );
        assert_eq!(host.editor_reloads, ["{OLD}".to_owned()]);
        assert_eq!(host.autoshape_reloads, 1);
        assert_eq!(host.help_contexts, [HELP_CONTEXT]);
    }

    #[test]
    fn create_selects_the_inch_radio_entry_only_for_the_inch_unit_code() {
        let mut dialog = create_editor_options(SchematicEditorHandle(1));
        let mut host = ObjectHost::default();
        let mut settings = settings();
        settings.measurement_unit_code = INCH_UNIT_CODE;

        let controls = dialog.create_controls(&settings, Path::new(SETTINGS_FOLDER), &mut host);

        assert_eq!(controls.measurement_unit_index, 0);
    }

    #[test]
    fn destroy_releases_the_settings_object_and_stages_nothing() {
        let mut dialog = create_editor_options(SchematicEditorHandle(1));
        let mut host = ObjectHost::default();
        let _ = dialog.create_controls(&settings(), Path::new(SETTINGS_FOLDER), &mut host);

        dialog.destroy(&mut host);

        assert_eq!(host.released, 1);
        assert!(dialog.controls().is_none());
    }

    #[test]
    fn commit_writes_the_changed_only_keys_and_inverts_the_recovered_flags() {
        let mut settings = settings();
        let mut host = WriteHost::default();
        let controls = EditorOptionsControls {
            usa_symbol_set_checked: true,
            enable_3d_shapes: false,
            measurement_unit_index: 0,
            ac_base_function_index: 0,
            parameter_names: names("new"),
            editor_color_scheme_text: "Dark".to_owned(),
            editor_color_scheme_identifier: "{NEW}".to_owned(),
            autoshape_color_set_index: 4,
            mouse_wheel_mode_index: 0,
            compressed_tsc: false,
            save_picture_as_gif: false,
            append_value_to_label: false,
            append_unit_to_label: true,
            show_labels: true,
            autosave_minutes: 3,
            autosave_history_depth: 11,
            continue_where_left_off: true,
            renumber_on_paste: false,
            save_reference_only: true,
        };

        let outcome = commit_editor_options(
            &controls,
            &mut settings,
            Path::new(SETTINGS_FOLDER),
            &values(),
            "<",
            &mut host,
        );

        assert_eq!(
            outcome,
            CommitOutcome {
                wrote_symbol_set: true,
                wrote_ac_base_function: true,
                committed_color_scheme: true,
            }
        );
        assert!(!settings.european_symbol_set);
        assert_eq!(settings.measurement_unit_code, INCH_UNIT_CODE);
        assert_eq!(settings.ac_base_function, 0);
        assert_eq!(settings.parameter_names, names("new"));
        assert_eq!(settings.color_scheme, "{NEW}");
        assert!(!settings.hide_labels);
        assert!(!settings.start_as_new);
        assert!(settings.save_reference_only);
        assert_eq!(
            settings.autosave_interval_milliseconds,
            3 * AUTOSAVE_MILLISECONDS_PER_MINUTE
        );
        assert_eq!(settings.autosave_history_depth, 11);

        assert_eq!(host.writes[0], Write::Release);
        assert_eq!(
            host.writes[1],
            Write::Create(Path::new(SETTINGS_FOLDER).join(SETTINGS_FILE))
        );
        assert_eq!(
            host.keys(),
            [
                SYMBOL_SET_KEY,
                ENABLE_3D_SHAPES_KEY,
                MEASUREMENT_UNIT_KEY,
                AC_BASE_FUNCTION_KEY,
                COLOR_SCHEME_KEY,
                AUTOSHAPE_COLOR_SET_KEY,
                MOUSE_WHEEL_ZOOMING_KEY,
                COMPRESSED_TSC_KEY,
                SAVE_PICTURE_AS_GIF_KEY,
            ]
        );
        assert!(
            host.writes
                .contains(&Write::Text(SYMBOL_SET_KEY.to_owned(), "usa".to_owned()))
        );
        assert!(host.writes.contains(&Write::Text(
            MEASUREMENT_UNIT_KEY.to_owned(),
            INCH_UNIT_VALUE.to_owned()
        )));
        assert!(host.writes.contains(&Write::Text(
            AC_BASE_FUNCTION_KEY.to_owned(),
            SINE_AC_BASE_VALUE.to_owned()
        )));
        assert!(
            host.writes
                .contains(&Write::ReloadColors("{NEW}".to_owned()))
        );
    }

    #[test]
    fn commit_skips_the_unchanged_symbol_set_and_ac_base_keys() {
        let mut settings = settings();
        let mut host = WriteHost::default();
        let controls = EditorOptionsControls {
            usa_symbol_set_checked: false,
            ac_base_function_index: 1,
            measurement_unit_index: 1,
            editor_color_scheme_text: "Dark".to_owned(),
            editor_color_scheme_identifier: "{NEW}".to_owned(),
            ..EditorOptionsControls::default()
        };

        let outcome = commit_editor_options(
            &controls,
            &mut settings,
            Path::new(SETTINGS_FOLDER),
            &values(),
            "<",
            &mut host,
        );

        assert!(!outcome.wrote_symbol_set);
        assert!(!outcome.wrote_ac_base_function);
        assert!(!host.keys().contains(&SYMBOL_SET_KEY.to_owned()));
        assert!(!host.keys().contains(&AC_BASE_FUNCTION_KEY.to_owned()));
        assert!(host.writes.contains(&Write::Text(
            MEASUREMENT_UNIT_KEY.to_owned(),
            "mm".to_owned()
        )));
    }

    #[test]
    fn commit_leaves_the_active_scheme_alone_for_a_placeholder_entry() {
        let mut settings = settings();
        let mut host = WriteHost::default();
        let controls = EditorOptionsControls {
            editor_color_scheme_text: "<none>".to_owned(),
            editor_color_scheme_identifier: "{IGNORED}".to_owned(),
            ..EditorOptionsControls::default()
        };

        let outcome = commit_editor_options(
            &controls,
            &mut settings,
            Path::new(SETTINGS_FOLDER),
            &values(),
            "<",
            &mut host,
        );

        assert!(!outcome.committed_color_scheme);
        assert_eq!(settings.color_scheme, "{OLD}");
        assert!(!host.keys().contains(&COLOR_SCHEME_KEY.to_owned()));
        assert!(
            !host
                .writes
                .iter()
                .any(|write| matches!(write, Write::ReloadColors(_)))
        );
    }

    #[derive(Debug, Default)]
    struct SchemeHost {
        uuids: Vec<String>,
        values: Vec<(String, ColorSchemeSettingKey, String)>,
    }

    impl SchemeHost {
        fn value(&self, key: &ColorSchemeSettingKey) -> Option<&str> {
            self.values
                .iter()
                .find(|(_, stored, _)| stored == key)
                .map(|(_, _, value)| value.as_str())
        }
    }

    impl crate::editor_color_scheme::ColorSchemeSettings for SchemeHost {
        fn read_scheme_uuid(&mut self, _index: usize) -> String {
            String::new()
        }

        fn record_prefix(&self, index: usize, existing: bool) -> String {
            format!("Set{index}_{existing}")
        }
    }

    impl ColorSchemeWriteHost for SchemeHost {
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
            assert_eq!(section, COLOR_SCHEME_SECTION);
            self.values.push((prefix.to_owned(), key, value));
        }
    }

    impl NewSchemeHost for SchemeHost {
        fn create_scheme_uuid(&mut self) -> String {
            let uuid = format!("{{UUID-{}}}", self.uuids.len());
            self.uuids.push(uuid.clone());
            uuid
        }
    }

    #[test]
    fn write_scheme_stores_the_live_palette_under_a_fresh_identifier() {
        let mut host = SchemeHost::default();
        let colors = [0x00FF_0000_u32; SCHEME_COLOR_COUNT];
        let mappings = [ColorMapping {
            source: 0x0000_0001,
            target: 0x0000_0002,
        }; SCHEME_MAPPING_COUNT];

        let uuid = write_live_colors_as_new_scheme(&colors, &mappings, &mut host);

        assert_eq!(uuid, "{UUID-0}");
        assert_eq!(
            host.value(&ColorSchemeSettingKey::Name),
            Some(NEW_SCHEME_NAME)
        );
        assert_eq!(
            host.value(&ColorSchemeSettingKey::Identifier),
            Some(uuid.as_str())
        );
        assert_eq!(
            host.value(&ColorSchemeSettingKey::Mode),
            Some(NEW_SCHEME_MODE.to_string().as_str())
        );
        assert!(
            host.values
                .iter()
                .all(|(prefix, _, _)| prefix == "Set0_false")
        );
        assert_eq!(
            host.values.len(),
            3 + SCHEME_COLOR_COUNT + SCHEME_MAPPING_COUNT
        );
    }

    #[derive(Debug, Default)]
    struct ComboHost {
        records: Vec<(String, String)>,
        writes: Vec<String>,
        created: usize,
        list_lookup: Option<usize>,
    }

    impl EditorSchemeComboHost for ComboHost {
        fn read_scheme_name(&mut self, index: usize) -> Option<String> {
            self.records.get(index).map(|(name, _)| name.clone())
        }

        fn read_scheme_identifier(&mut self, index: usize) -> String {
            self.records
                .get(index)
                .map_or_else(String::new, |(_, identifier)| identifier.clone())
        }

        fn write_scheme_name(&mut self, index: usize, name: &str) {
            self.writes.push(format!("name[{index}]={name}"));
        }

        fn write_scheme_identifier(&mut self, index: usize, identifier: &str) {
            self.writes.push(format!("id[{index}]={identifier}"));
        }

        fn localize(&mut self, caption_id: u16) -> String {
            format!("caption:{caption_id:#06x}")
        }

        fn create_scheme_identifier(&mut self) -> String {
            self.created += 1;
            format!("{{MADE-{}}}", self.created)
        }

        fn list_index_of(
            &mut self,
            _entries: &[EditorSchemeComboEntry],
            _name: &str,
        ) -> Option<usize> {
            self.list_lookup
        }
    }

    fn record(name: &str, identifier: &str) -> (String, String) {
        (name.to_owned(), identifier.to_owned())
    }

    #[test]
    fn the_loader_repairs_both_legacy_system_records_by_name_or_identifier() {
        let mut host = ComboHost {
            records: vec![
                record(LEGACY_BLACK_BACKGROUND_NAME, ""),
                record("Anything", WHITE_BACKGROUND_IDENTIFIER),
            ],
            ..ComboHost::default()
        };

        let combo = load_editor_scheme_combo("missing", &mut host);

        assert_eq!(
            combo.entries[0],
            EditorSchemeComboEntry {
                name: format!("caption:{BLACK_BACKGROUND_NAME_ID:#06x}"),
                identifier: BLACK_BACKGROUND_IDENTIFIER.to_owned(),
            }
        );
        assert_eq!(
            combo.entries[1],
            EditorSchemeComboEntry {
                name: format!("caption:{WHITE_BACKGROUND_NAME_ID:#06x}"),
                identifier: WHITE_BACKGROUND_IDENTIFIER.to_owned(),
            }
        );
        assert_eq!(
            host.writes,
            [
                format!("name[0]=caption:{BLACK_BACKGROUND_NAME_ID:#06x}"),
                format!("id[0]={BLACK_BACKGROUND_IDENTIFIER}"),
                format!("name[1]=caption:{WHITE_BACKGROUND_NAME_ID:#06x}"),
                format!("id[1]={WHITE_BACKGROUND_IDENTIFIER}"),
            ]
        );
        assert_eq!(host.created, 0);
    }

    #[test]
    fn the_loader_creates_and_stores_a_missing_identifier() {
        let mut host = ComboHost {
            records: vec![record("Custom", "")],
            ..ComboHost::default()
        };

        let combo = load_editor_scheme_combo("Custom", &mut host);

        assert_eq!(combo.entries[0].identifier, "{MADE-1}");
        assert_eq!(host.writes, ["id[0]={MADE-1}".to_owned()]);
        assert_eq!(combo.selected, Some(0));
        assert!(!combo.appended_fallback);
        assert!(combo.enabled);
    }

    #[test]
    fn an_empty_record_set_selects_the_fallback_entry_and_disables_the_combo() {
        let mut host = ComboHost::default();

        let combo = load_editor_scheme_combo("Dark", &mut host);

        assert_eq!(
            combo.entries,
            [EditorSchemeComboEntry {
                name: format!("caption:{FALLBACK_SCHEME_NAME_ID:#06x}"),
                identifier: String::new(),
            }]
        );
        assert_eq!(combo.selected, Some(0));
        assert!(combo.appended_fallback);
        assert!(!combo.enabled);
    }

    #[test]
    fn the_list_lookup_runs_only_after_the_ordered_scan_finds_nothing() {
        let mut scanned = ComboHost {
            records: vec![record("Light", "{A}"), record("Dark", "{B}")],
            list_lookup: Some(0),
            ..ComboHost::default()
        };
        assert_eq!(
            load_editor_scheme_combo("Dark", &mut scanned).selected,
            Some(1)
        );

        let mut listed = ComboHost {
            records: vec![record("Light", "{A}"), record("Dark", "{B}")],
            list_lookup: Some(0),
            ..ComboHost::default()
        };
        let combo = load_editor_scheme_combo("dark", &mut listed);
        assert_eq!(combo.selected, Some(0));
        assert!(!combo.appended_fallback);
    }

    #[test]
    fn a_missing_requested_scheme_appends_the_fallback_without_disabling_the_combo() {
        let mut host = ComboHost {
            records: vec![record("Light", "{A}")],
            ..ComboHost::default()
        };

        let combo = load_editor_scheme_combo("Removed", &mut host);

        assert_eq!(combo.entries.len(), 2);
        assert_eq!(combo.selected, Some(1));
        assert!(combo.appended_fallback);
        assert!(combo.enabled);
    }

    #[derive(Debug, Default)]
    struct AutoshapeHost {
        names: Vec<String>,
    }

    impl AutoshapeSchemeComboHost for AutoshapeHost {
        fn read_autoshape_name(&mut self, index: usize) -> Option<String> {
            self.names.get(index).cloned()
        }
    }

    #[test]
    fn the_autoshape_loader_stops_at_the_first_missing_record_and_keeps_the_stored_index() {
        let mut host = AutoshapeHost {
            names: vec!["Default".to_owned(), "Mono".to_owned()],
        };

        let (names, active) = load_autoshape_scheme_combo(5, &mut host);

        assert_eq!(names, ["Default".to_owned(), "Mono".to_owned()]);
        assert_eq!(active, 5);
    }

    #[derive(Debug, Default)]
    struct AdvancedHost {
        accepted: Option<String>,
        known: Vec<String>,
        reloads: Vec<String>,
        selected_index: Option<usize>,
    }

    impl AdvancedSchemesHost for AdvancedHost {
        fn show_editor_schemes(&mut self, initial_selection: &str) -> Option<String> {
            self.reloads.push(format!("seed:{initial_selection}"));
            self.accepted.clone()
        }

        fn reload_editor_color_schemes(&mut self, selected: &str) {
            self.reloads.push(format!("reload:{selected}"));
        }

        fn scheme_index(&self, name: &str) -> Option<usize> {
            self.known.iter().position(|known| known == name)
        }

        fn set_scheme_index(&mut self, index: usize) {
            self.selected_index = Some(index);
        }
    }

    #[test]
    fn the_advanced_launcher_rebuilds_and_selects_only_on_acceptance() {
        let mut host = AdvancedHost {
            accepted: Some("Dark".to_owned()),
            known: vec!["Light".to_owned(), "Dark".to_owned()],
            ..AdvancedHost::default()
        };

        assert_eq!(
            open_advanced_editor_schemes("Light", &mut host),
            Some("Dark".to_owned())
        );
        assert_eq!(host.reloads, ["seed:Light", "reload:Dark"]);
        assert_eq!(host.selected_index, Some(1));
    }

    #[test]
    fn the_advanced_launcher_changes_nothing_on_cancel_or_a_missing_entry() {
        let mut cancelled = AdvancedHost::default();
        assert_eq!(open_advanced_editor_schemes("Light", &mut cancelled), None);
        assert_eq!(cancelled.reloads, ["seed:Light"]);
        assert_eq!(cancelled.selected_index, None);

        let mut missing = AdvancedHost {
            accepted: Some("Removed".to_owned()),
            known: vec!["Light".to_owned()],
            ..AdvancedHost::default()
        };
        assert_eq!(
            open_advanced_editor_schemes("Light", &mut missing),
            Some("Removed".to_owned())
        );
        assert_eq!(missing.selected_index, None);
    }
}
