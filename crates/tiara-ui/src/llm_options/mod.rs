use crate::set_api_key;
use iced::Element;
use iced::widget::text;
use rfd::FileDialog;
use serde::Serialize;
use serde_json::json;
use std::error::Error;
use std::fmt::{Display, Formatter};
use std::io;
use std::num::ParseIntError;
use std::path::{Path, PathBuf};

pub const TITLE: &str = "LLM Options";
const HELP_CONTEXT: u32 = 0x4B4;

/// Normalizes loaded instruction text with the recovered replacement order.
///
/// Implements Ghidra function `FUN_019d9ee0` at `0x019D9EE0`
/// (`TLLMOptions.NormalizeInstructionNewlines`). Existing CRLF pairs first
/// become the temporary `$$NL$$` token, remaining LF characters become CRLF,
/// and every token becomes CRLF. Other text, including bare carriage returns,
/// is unchanged.
#[must_use]
pub fn normalize_instruction_newlines(value: &str) -> String {
    value
        .replace("\r\n", "$$NL$$")
        .replace('\n', "\r\n")
        .replace("$$NL$$", "\r\n")
}

/// Converts CRLF pairs to LF for a JSON prompt value.
///
/// Implements Ghidra function `FUN_019da050` at `0x019DA050`. The returned
/// string is an owned copy. Existing LF characters, bare carriage returns,
/// and all other text remain unchanged.
#[must_use]
pub fn normalize_json_prompt_newlines(value: &str) -> String {
    value.replace("\r\n", "\n")
}

/// Replaces escaped forward slashes after JSON serialization.
///
/// Implements Ghidra function `FUN_019da120` at `0x019DA120`. The returned
/// string is an owned copy with every `\/` sequence replaced by `/`. Other
/// escapes and the source string remain unchanged.
#[must_use]
pub fn normalize_json_forward_slashes(value: &str) -> String {
    value.replace("\\/", "/")
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Created,
    ExtractionModeClicked,
    Shown,
    ClearInstructions,
    InterfacePortClicked,
    TinaLlmClicked,
    VoicesClicked,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct StagedConfiguration {
    pub model: String,
    pub history_size: i32,
    pub language_index: i32,
    pub local_ports: [i32; 3],
    pub interface_index: i32,
    pub voice_index: i32,
    pub extraction_mode: i32,
    pub tina_llm_version: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InstructionLoadRequest {
    pub path: PathBuf,
    pub filter_index: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InstructionSaveRequest {
    pub path: PathBuf,
    pub filter_index: u32,
    pub blank_line_after_sections: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ScreenPoint {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum ExtractModelPresentation {
    #[default]
    HiddenDisabled,
    VisibleEnabled,
}

#[derive(Debug)]
pub enum InstructionLoadError {
    Read(io::Error),
    Parse(serde_json::Error),
    ExpectedJsonObject,
}

#[derive(Debug)]
pub enum InstructionSaveError {
    Serialize(serde_json::Error),
    Write(io::Error),
}

impl Display for InstructionSaveError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Serialize(error) => {
                write!(formatter, "could not serialize instruction JSON: {error}")
            }
            Self::Write(error) => write!(formatter, "could not write instruction file: {error}"),
        }
    }
}

impl Error for InstructionSaveError {
    fn source(&self) -> Option<&(dyn Error + 'static)> {
        match self {
            Self::Serialize(error) => Some(error),
            Self::Write(error) => Some(error),
        }
    }
}

#[derive(Serialize)]
struct InstructionJson {
    welcome: String,
    instructions: String,
    question: String,
}

pub trait ApiKeyStore {
    type Error;

    /// Writes one provider value under the application-owned key path.
    ///
    /// # Errors
    ///
    /// Returns the application-specific registry or persistence error.
    fn write_api_key(&mut self, value_name: &str, value: &str) -> Result<(), Self::Error>;
}

impl Display for InstructionLoadError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Read(error) => write!(formatter, "could not read instruction file: {error}"),
            Self::Parse(error) => write!(formatter, "could not parse instruction JSON: {error}"),
            Self::ExpectedJsonObject => formatter.write_str("instruction JSON is not an object"),
        }
    }
}

impl Error for InstructionLoadError {
    fn source(&self) -> Option<&(dyn Error + 'static)> {
        match self {
            Self::Read(error) => Some(error),
            Self::Parse(error) => Some(error),
            Self::ExpectedJsonObject => None,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    primary_selection_index: i32,
    secondary_selection_index: i32,
    selected_primary_index: i32,
    selected_secondary_index: i32,
    prepared_models: Vec<String>,
    visible_models: Vec<String>,
    prepared_welcome: String,
    visible_welcome: String,
    prepared_instructions: String,
    visible_instructions: String,
    visible_question: String,
    history_size: i32,
    local_port_text: String,
    local_port_slot: usize,
    interface_index: i32,
    voice_index: i32,
    extraction_mode: i32,
    intent_model_token: String,
    selected_model_token: String,
    intent_model_text: String,
    extract_model_presentation: ExtractModelPresentation,
    tina_llm_versions: Vec<String>,
    tina_llm_version_index: i32,
    tina_llm_identifier: String,
    staged_configuration: StagedConfiguration,
    pending_instruction_load: Option<InstructionLoadRequest>,
    pending_instruction_save: Option<InstructionSaveRequest>,
    api_key_menu_position: Option<ScreenPoint>,
    configuration_loaded: bool,
    dependent_controls_refreshed: bool,
    help_context: u32,
}

impl Default for Window {
    fn default() -> Self {
        let mut window = Self {
            primary_selection_index: -1,
            secondary_selection_index: -1,
            selected_primary_index: -1,
            selected_secondary_index: -1,
            prepared_models: Vec::new(),
            visible_models: Vec::new(),
            prepared_welcome: String::new(),
            visible_welcome: String::new(),
            prepared_instructions: String::new(),
            visible_instructions: String::new(),
            visible_question: String::new(),
            history_size: 0,
            local_port_text: String::new(),
            local_port_slot: 0,
            interface_index: 0,
            voice_index: 0,
            extraction_mode: 0,
            intent_model_token: String::new(),
            selected_model_token: String::new(),
            intent_model_text: String::new(),
            extract_model_presentation: ExtractModelPresentation::default(),
            tina_llm_versions: Vec::new(),
            tina_llm_version_index: 0,
            tina_llm_identifier: String::new(),
            staged_configuration: StagedConfiguration::default(),
            pending_instruction_load: None,
            pending_instruction_save: None,
            api_key_menu_position: None,
            configuration_loaded: true,
            dependent_controls_refreshed: false,
            help_context: 0,
        };
        window.on_create();
        window
    }
}

impl Window {
    /// Resets saved selection state and applies the form help context.
    ///
    /// Implements Ghidra function `FUN_019d9c60` at `0x019D9C60`. The two
    /// recovered 32-bit fields later restore combo-box selections. The byte
    /// flag starts clear before the separate configuration-load path runs.
    pub const fn on_create(&mut self) {
        self.primary_selection_index = 0;
        self.secondary_selection_index = 0;
        self.configuration_loaded = false;
        self.dependent_controls_refreshed = false;
        self.help_context = HELP_CONTEXT;
    }

    /// Copies prepared configuration into the visible dialog state.
    ///
    /// Implements Ghidra function `FUN_019d9c90` at `0x019D9C90`. The show
    /// event marks configuration as loaded, replaces the visible model list,
    /// restores both saved selections, copies the prepared memo text, and
    /// refreshes dependent provider controls.
    pub fn on_show(&mut self) {
        self.configuration_loaded = true;
        self.visible_models.clone_from(&self.prepared_models);
        self.selected_primary_index = self.primary_selection_index;
        self.selected_secondary_index = self.secondary_selection_index;
        self.visible_welcome.clone_from(&self.prepared_welcome);
        self.visible_instructions
            .clone_from(&self.prepared_instructions);
        self.dependent_controls_refreshed = true;
    }

    /// Clears the three visible prompt editors.
    ///
    /// Implements Ghidra function `FUN_019da1f0` at `0x019DA1F0`
    /// (`TLLMOptions.mnClearInstructionsClick`). The action clears welcome,
    /// instructions, and question text only. Prepared and staged settings are
    /// unchanged until another action consumes the visible values.
    pub fn clear_instructions(&mut self) {
        self.visible_welcome.clear();
        self.visible_instructions.clear();
        self.visible_question.clear();
    }

    /// Opens the native instruction-file picker in the recovered folder.
    ///
    /// Implements Ghidra function `FUN_019da250` at `0x019DA250`
    /// (`TLLMOptions.mnLoadInstructionsClick`). The maintained `rfd` crate
    /// supplies the native dialog. Cancellation is a no-op. An accepted path
    /// is queued with the default filter index for the separate instruction
    /// loader.
    pub fn load_instructions_click(&mut self, application_base: &Path) {
        let initial_directory = application_base.join("VHDL").join("aiprompts");
        let selection = FileDialog::new()
            .set_directory(initial_directory)
            .pick_file();
        self.handle_instruction_load_selection(selection, 1);
    }

    pub fn handle_instruction_load_selection(
        &mut self,
        selection: Option<PathBuf>,
        filter_index: u32,
    ) {
        let Some(path) = selection else {
            return;
        };
        self.pending_instruction_load = Some(InstructionLoadRequest { path, filter_index });
    }

    #[must_use]
    pub const fn take_instruction_load_request(&mut self) -> Option<InstructionLoadRequest> {
        self.pending_instruction_load.take()
    }

    /// Opens the native instruction-file Save dialog in the recovered folder.
    ///
    /// Implements Ghidra function `FUN_019da370` at `0x019DA370`
    /// (`TLLMOptions.mnSaveInstructionsClick`). The maintained `rfd` crate
    /// supplies the JSON and text filters. Cancellation is a no-op. An
    /// accepted path is queued for the separate writer with the recovered
    /// blank-line flag.
    pub fn save_instructions_click(&mut self, application_base: &Path) {
        let initial_directory = application_base.join("VHDL").join("aiprompts");
        let selection = FileDialog::new()
            .set_directory(initial_directory)
            .add_filter("JSON File", &["json"])
            .add_filter("Text file", &["txt"])
            .save_file();
        self.handle_instruction_save_selection(selection, 1);
    }

    pub fn handle_instruction_save_selection(
        &mut self,
        selection: Option<PathBuf>,
        filter_index: u32,
    ) {
        let Some(path) = selection else {
            return;
        };
        self.pending_instruction_save = Some(InstructionSaveRequest {
            path,
            filter_index,
            blank_line_after_sections: true,
        });
    }

    #[must_use]
    pub const fn take_instruction_save_request(&mut self) -> Option<InstructionSaveRequest> {
        self.pending_instruction_save.take()
    }

    /// Opens the API-provider menu at two current pointer-coordinate reads.
    ///
    /// Implements Ghidra function `FUN_019db210` at `0x019DB210`
    /// (`TLLMOptions.bSetAPIKeyClick`). The horizontal coordinate comes from
    /// the first screen-pointer read and the vertical coordinate comes from
    /// the second read. A failed read contributes zero for its coordinate.
    /// This action changes only the Iced popup state.
    pub fn set_api_key_click(&mut self, mut screen_pointer: impl FnMut() -> Option<ScreenPoint>) {
        let x = screen_pointer().map_or(0, |point| point.x);
        let y = screen_pointer().map_or(0, |point| point.y);
        self.api_key_menu_position = Some(ScreenPoint { x, y });
    }

    #[must_use]
    pub const fn take_api_key_menu_position(&mut self) -> Option<ScreenPoint> {
        self.api_key_menu_position.take()
    }

    /// Runs the provider key editor and stores only an accepted value.
    ///
    /// Implements Ghidra function `FUN_019db260` at `0x019DB260`. A new
    /// [`set_api_key::Window`] is configured for the supplied provider and
    /// passed to the modal runner. Modal result one copies the exact edit text
    /// and writes it immediately under the supplied value name. Every other
    /// result discards the dialog without reading or storing its edit.
    ///
    /// # Errors
    ///
    /// Returns the application-specific store error for an accepted dialog.
    /// Cancel and other modal results return successfully without a write.
    pub fn edit_api_key<Store>(
        &mut self,
        provider_selector: i32,
        value_name: &str,
        show_modal: impl FnOnce(&mut set_api_key::Window) -> i32,
        store: &mut Store,
    ) -> Result<(), Store::Error>
    where
        Store: ApiKeyStore,
    {
        let mut dialog = set_api_key::Window::default();
        dialog.configure_provider(provider_selector);
        if show_modal(&mut dialog) == 1 {
            let value = dialog.copy_api_key_text();
            store.write_api_key(value_name, &value)?;
        }
        Ok(())
    }

    /// Routes the GROQ menu item to the shared API-key editor.
    ///
    /// Implements Ghidra function `FUN_019db340` at `0x019DB340`
    /// (`TLLMOptions.mnSetGoqAPIKeyClick`).
    ///
    /// # Errors
    ///
    /// Returns the shared coordinator's persistence error after acceptance.
    pub fn set_groq_api_key<Store>(
        &mut self,
        show_modal: impl FnOnce(&mut set_api_key::Window) -> i32,
        store: &mut Store,
    ) -> Result<(), Store::Error>
    where
        Store: ApiKeyStore,
    {
        self.edit_api_key(1, "GROQ_API_KEY", show_modal, store)
    }

    /// Routes the Ollama menu item to the shared API-key editor.
    ///
    /// Implements Ghidra function `FUN_019db390` at `0x019DB390`
    /// (`TLLMOptions.mnSetOllamaAPIKeyClick`).
    ///
    /// # Errors
    ///
    /// Returns the shared coordinator's persistence error after acceptance.
    pub fn set_ollama_api_key<Store>(
        &mut self,
        show_modal: impl FnOnce(&mut set_api_key::Window) -> i32,
        store: &mut Store,
    ) -> Result<(), Store::Error>
    where
        Store: ApiKeyStore,
    {
        self.edit_api_key(3, "OLLAMA_API_KEY", show_modal, store)
    }

    /// Routes the `OpenAI` menu item to the shared API-key editor.
    ///
    /// Implements Ghidra function `FUN_019db3e0` at `0x019DB3E0`
    /// (`TLLMOptions.mnSetOpenAIApiKeyClick`).
    ///
    /// # Errors
    ///
    /// Returns the shared coordinator's persistence error after acceptance.
    pub fn set_openai_api_key<Store>(
        &mut self,
        show_modal: impl FnOnce(&mut set_api_key::Window) -> i32,
        store: &mut Store,
    ) -> Result<(), Store::Error>
    where
        Store: ApiKeyStore,
    {
        self.edit_api_key(0, "OPENAI_API_KEY", show_modal, store)
    }

    /// Routes the `OpenRouter` menu item to the shared API-key editor.
    ///
    /// Implements Ghidra function `FUN_019db430` at `0x019DB430`
    /// (`TLLMOptions.mnSetOpenRouterAPIKeyClick`).
    ///
    /// # Errors
    ///
    /// Returns the shared coordinator's persistence error after acceptance.
    pub fn set_openrouter_api_key<Store>(
        &mut self,
        show_modal: impl FnOnce(&mut set_api_key::Window) -> i32,
        store: &mut Store,
    ) -> Result<(), Store::Error>
    where
        Store: ApiKeyStore,
    {
        self.edit_api_key(2, "OPENROUTER_API_KEY", show_modal, store)
    }

    /// Refreshes the local-port edit from the selected staged port slot.
    ///
    /// Implements Ghidra function `FUN_019db480` at `0x019DB480`
    /// (`TLLMOptions.cbInterfacePortClick`). The setup guard must be active.
    /// The handler uses only the interface-port selection, even when the
    /// duplicate Voices event invokes it, and replaces any uncommitted port
    /// text without changing the staged values.
    pub fn interface_port_clicked(&mut self) {
        if !self.configuration_loaded {
            return;
        }
        let Some(port) = self
            .staged_configuration
            .local_ports
            .get(self.local_port_slot)
        else {
            return;
        };
        self.local_port_text = port.to_string();
    }

    /// Rebuilds extract-model tokens after main-model selection.
    ///
    /// Implements Ghidra function `FUN_019db520` at `0x019DB520`
    /// (`TLLMOptions.cbModelClick`). The recovered delimiter remains an
    /// external resource because its byte value is not available in the
    /// source export. A Local model keeps at most 255 characters after that
    /// delimiter and trims characters through U+0020. The method does not
    /// copy the selected model into staged or live configuration.
    pub fn model_clicked(&mut self, local_model_delimiter: &str) {
        let selected_model = usize::try_from(self.selected_primary_index)
            .ok()
            .and_then(|index| self.visible_models.get(index))
            .cloned()
            .unwrap_or_default();
        let token_model = normalize_local_model(&selected_model, local_model_delimiter);
        let token = format!("<{token_model}>");
        if self.extraction_mode == 1 {
            self.intent_model_token.clone_from(&token);
        }
        self.selected_model_token = token;
        self.refresh_extraction_mode_presentation();
    }

    /// Builds the provider-specific identifier for the selected TINA version.
    ///
    /// Implements Ghidra function `FUN_019db720` at `0x019DB720`. A negative
    /// version selection uses row zero. Staged provider index one selects the
    /// LM Studio `tina_ai{version}` form; every other provider uses
    /// `DesignSoft/TINA_AI{version}_Q4`. No selection or staged setting is
    /// changed.
    pub fn build_tina_llm_identifier(&mut self) {
        let index = usize::try_from(self.tina_llm_version_index).unwrap_or(0);
        let version = self.tina_llm_versions.get(index).map_or("", String::as_str);
        self.tina_llm_identifier = if self.interface_index == 1 {
            format!("tina_ai{version}")
        } else {
            format!("DesignSoft/TINA_AI{version}_Q4")
        };
    }

    /// Rebuilds TINA identifiers after its version selection changes.
    ///
    /// Implements Ghidra function `FUN_019db8f0` at `0x019DB8F0`
    /// (`TLLMOptions.cbTinaLLMClick`). Before `FormShow` marks setup ready, the
    /// action is a no-op. Otherwise, it rebuilds the provider-specific
    /// identifier, wraps it for the fast extraction model, and reapplies the
    /// extraction-mode presentation without committing settings.
    pub fn tina_llm_clicked(&mut self) {
        if !self.configuration_loaded {
            return;
        }
        self.build_tina_llm_identifier();
        self.intent_model_token = format!("<{}>", self.tina_llm_identifier);
        self.refresh_extraction_mode_presentation();
    }

    /// Synchronizes extract-model controls after its mode selection changes.
    ///
    /// Implements Ghidra function `FUN_019dba30` at `0x019DBA30`
    /// (`TLLMOptions.rgExtrInstructionsClick`). It delegates to the shared
    /// ready-guarded presentation path. Mode zero refreshes, shows, and
    /// enables the fast-model controls. Every nonzero mode hides and disables
    /// them without clearing their stored values or committing the mode.
    pub fn extraction_mode_clicked(&mut self) {
        self.refresh_extraction_mode_presentation();
    }

    fn refresh_extraction_mode_presentation(&mut self) {
        if !self.configuration_loaded {
            return;
        }
        self.extract_model_presentation = if self.extraction_mode == 0 {
            ExtractModelPresentation::VisibleEnabled
        } else {
            ExtractModelPresentation::HiddenDisabled
        };
        if self.extract_model_presentation == ExtractModelPresentation::VisibleEnabled {
            self.intent_model_text.clone_from(&self.intent_model_token);
        }
    }

    /// Loads JSON or sectioned-text prompts into the three visible editors.
    ///
    /// Implements Ghidra function `FUN_019da490` at `0x019DA490`
    /// (`TLLMOptions.LoadInstructionsFile`). Filter index one selects JSON;
    /// every other index selects the recovered marker-based text format. The
    /// operation updates the visible editors only and does not commit live
    /// application settings.
    ///
    /// # Errors
    ///
    /// Returns the file-read or JSON-parse error. A JSON root that is not an
    /// object returns [`InstructionLoadError::ExpectedJsonObject`]. Earlier
    /// editor updates are not rolled back.
    pub fn load_instructions_file(
        &mut self,
        path: &Path,
        filter_index: u32,
    ) -> Result<(), InstructionLoadError> {
        let contents = std::fs::read_to_string(path).map_err(InstructionLoadError::Read)?;
        self.load_instruction_contents(&contents, filter_index)
    }

    /// Applies already-read instruction content with the recovered format
    /// selection rules.
    ///
    /// # Errors
    ///
    /// Returns the JSON parse error or
    /// [`InstructionLoadError::ExpectedJsonObject`] for JSON input. The text
    /// format does not return a format error.
    pub fn load_instruction_contents(
        &mut self,
        contents: &str,
        filter_index: u32,
    ) -> Result<(), InstructionLoadError> {
        if filter_index == 1 {
            self.load_json_instruction_contents(contents)
        } else {
            self.load_text_instruction_contents(contents);
            Ok(())
        }
    }

    fn load_json_instruction_contents(
        &mut self,
        contents: &str,
    ) -> Result<(), InstructionLoadError> {
        let value = serde_json::from_str::<serde_json::Value>(contents)
            .map_err(InstructionLoadError::Parse)?;
        let object = value
            .as_object()
            .ok_or(InstructionLoadError::ExpectedJsonObject)?;

        for (name, value) in object {
            let Some(value) = value.as_str() else {
                continue;
            };
            let normalized = normalize_instruction_newlines(value);
            match name.as_str() {
                "welcome" => self.visible_welcome = normalized,
                "instructions" => self.visible_instructions = normalized,
                "question" => self.visible_question = normalized,
                _ => {}
            }
        }
        Ok(())
    }

    fn load_text_instruction_contents(&mut self, contents: &str) {
        let mut accumulated = Vec::new();
        for line in contents.lines() {
            if line.contains("// Keep") || line.contains("// Welcome") {
                continue;
            }
            if line.contains("// Instructions") {
                self.visible_welcome = memo_text(&accumulated);
                accumulated.clear();
            } else if line.contains("// Question") {
                self.visible_instructions = memo_text(&accumulated);
                accumulated.clear();
            } else {
                accumulated.push(line);
            }
        }
        self.visible_question = memo_text(&accumulated);
    }

    /// Serializes and writes all three visible prompt editors to a file.
    ///
    /// Implements Ghidra function `FUN_019dac40` at `0x019DAC40`. Filter
    /// index one writes JSON with LF-normalized values. Every other index
    /// writes the recovered section headings and optional blank lines. The
    /// destination is written directly and the visible editors are unchanged.
    ///
    /// # Errors
    ///
    /// Returns the JSON serialization or direct file-write error. The method
    /// does not create a backup or roll back a partial destination write.
    pub fn save_instructions_file(
        &self,
        path: &Path,
        filter_index: u32,
        blank_line_after_sections: bool,
    ) -> Result<(), InstructionSaveError> {
        let contents = self
            .serialize_instruction_contents(filter_index, blank_line_after_sections)
            .map_err(InstructionSaveError::Serialize)?;
        std::fs::write(path, contents).map_err(InstructionSaveError::Write)
    }

    /// Serializes the visible prompts with the selected recovered format.
    ///
    /// # Errors
    ///
    /// Returns a JSON serialization error for filter index one. The sectioned
    /// text format cannot return a serialization error.
    pub fn serialize_instruction_contents(
        &self,
        filter_index: u32,
        blank_line_after_sections: bool,
    ) -> Result<String, serde_json::Error> {
        if filter_index == 1 {
            let document = InstructionJson {
                welcome: normalize_json_prompt_newlines(&self.visible_welcome),
                instructions: normalize_json_prompt_newlines(&self.visible_instructions),
                question: normalize_json_prompt_newlines(&self.visible_question),
            };
            serde_json::to_string(&document)
                .map(|serialized| normalize_json_forward_slashes(&serialized))
        } else {
            Ok(self.serialize_text_instructions(blank_line_after_sections))
        }
    }

    fn serialize_text_instructions(&self, blank_line_after_sections: bool) -> String {
        let mut lines = vec!["// Keep the file structure", "// Welcome"];
        append_memo_lines(&mut lines, &self.visible_welcome);
        if blank_line_after_sections {
            lines.push("");
        }
        lines.push("// Instructions");
        append_memo_lines(&mut lines, &self.visible_instructions);
        if blank_line_after_sections {
            lines.push("");
        }
        lines.push("// Question");
        append_memo_lines(&mut lines, &self.visible_question);
        if blank_line_after_sections {
            lines.push("");
        }
        format!("{}\r\n", lines.join("\r\n"))
    }

    /// Replaces assistant JSON and stages the current dialog values.
    ///
    /// Implements Ghidra function `FUN_019d9dd0` at `0x019D9DD0`
    /// (`TLLMOptions.bOKClick`). The assistant JSON is replaced before the
    /// signed local-port conversion. A conversion error therefore keeps that
    /// JSON change and the model, history, and language staging that precedes
    /// it. The modal coordinator remains responsible for copying the staged
    /// record into live settings.
    ///
    /// # Errors
    ///
    /// Returns the standard signed-integer parse error for malformed port
    /// text. No local retry or rollback occurs.
    pub fn apply_options(&mut self, assistant_json: &mut String) -> Result<(), ParseIntError> {
        self.prepared_welcome.clone_from(&self.visible_welcome);
        self.prepared_instructions
            .clone_from(&self.visible_instructions);
        *assistant_json = json!({
            "aiassistant": {
                "welcome": self.visible_welcome,
                "instructions": self.visible_instructions,
                "options": { "model": "" }
            }
        })
        .to_string();

        self.staged_configuration.model = usize::try_from(self.selected_primary_index)
            .ok()
            .and_then(|index| self.visible_models.get(index))
            .cloned()
            .unwrap_or_default();
        self.staged_configuration.history_size = self.history_size;
        self.staged_configuration.language_index = self.selected_secondary_index;

        let port = self.local_port_text.trim().parse::<i32>()?;
        if let Some(slot) = self
            .staged_configuration
            .local_ports
            .get_mut(self.local_port_slot)
        {
            *slot = port;
        }
        self.staged_configuration.interface_index = self.interface_index;
        self.staged_configuration.voice_index = self.voice_index;
        self.staged_configuration.extraction_mode = self.extraction_mode;
        self.staged_configuration.tina_llm_version = self
            .tina_llm_versions
            .get(
                usize::try_from(self.tina_llm_version_index)
                    .ok()
                    .unwrap_or_default(),
            )
            .cloned()
            .unwrap_or_default();
        Ok(())
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::Created => self.on_create(),
            Message::ExtractionModeClicked => self.extraction_mode_clicked(),
            Message::Shown => self.on_show(),
            Message::ClearInstructions => self.clear_instructions(),
            Message::TinaLlmClicked => self.tina_llm_clicked(),
            Message::InterfacePortClicked | Message::VoicesClicked => {
                self.interface_port_clicked();
            }
        }
    }

    #[must_use]
    pub const fn primary_selection_index(&self) -> i32 {
        self.primary_selection_index
    }

    #[must_use]
    pub const fn secondary_selection_index(&self) -> i32 {
        self.secondary_selection_index
    }

    #[must_use]
    pub const fn configuration_loaded(&self) -> bool {
        self.configuration_loaded
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn local_port_text(&self) -> &str {
        &self.local_port_text
    }

    #[must_use]
    pub fn intent_model_token(&self) -> &str {
        &self.intent_model_token
    }

    #[must_use]
    pub fn selected_model_token(&self) -> &str {
        &self.selected_model_token
    }

    #[must_use]
    pub fn tina_llm_identifier(&self) -> &str {
        &self.tina_llm_identifier
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        text(TITLE).into()
    }
}

fn memo_text(lines: &[&str]) -> String {
    if lines.is_empty() {
        String::new()
    } else {
        format!("{}\r\n", lines.join("\r\n"))
    }
}

fn append_memo_lines<'a>(lines: &mut Vec<&'a str>, memo: &'a str) {
    lines.extend(memo.lines());
}

fn normalize_local_model(selected_model: &str, delimiter: &str) -> String {
    if selected_model.contains("Local")
        && let Some((_, suffix)) = selected_model.split_once(delimiter)
    {
        suffix
            .chars()
            .take(255)
            .collect::<String>()
            .trim_matches(|character: char| character <= '\u{20}')
            .to_owned()
    } else {
        selected_model.to_owned()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default, PartialEq, Eq)]
    struct RecordingApiKeyStore {
        writes: Vec<(String, String)>,
    }

    impl ApiKeyStore for RecordingApiKeyStore {
        type Error = String;

        fn write_api_key(&mut self, value_name: &str, value: &str) -> Result<(), Self::Error> {
            self.writes.push((value_name.to_owned(), value.to_owned()));
            Ok(())
        }
    }

    #[test]
    fn creation_resets_saved_selections_flag_and_help_context() {
        let mut window = Window::default();
        assert_eq!(window.primary_selection_index(), 0);
        assert_eq!(window.secondary_selection_index(), 0);
        assert!(!window.configuration_loaded());
        assert_eq!(window.help_context(), HELP_CONTEXT);

        window.primary_selection_index = 4;
        window.secondary_selection_index = 7;
        window.configuration_loaded = true;
        window.help_context = 0;
        window.update(Message::Created);

        assert_eq!(window.primary_selection_index(), 0);
        assert_eq!(window.secondary_selection_index(), 0);
        assert!(!window.configuration_loaded());
        assert_eq!(window.help_context(), HELP_CONTEXT);
    }

    #[test]
    fn show_copies_prepared_configuration_into_visible_controls() {
        let mut window = Window {
            primary_selection_index: 2,
            secondary_selection_index: 3,
            prepared_models: vec!["model-a".to_owned(), "model-b".to_owned()],
            prepared_welcome: "welcome\r\ntext".to_owned(),
            prepared_instructions: "instruction text".to_owned(),
            ..Window::default()
        };

        window.update(Message::Shown);

        assert!(window.configuration_loaded);
        assert_eq!(window.visible_models, ["model-a", "model-b"]);
        assert_eq!(window.selected_primary_index, 2);
        assert_eq!(window.selected_secondary_index, 3);
        assert_eq!(window.visible_welcome, "welcome\r\ntext");
        assert_eq!(window.visible_instructions, "instruction text");
        assert!(window.dependent_controls_refreshed);
    }

    #[test]
    fn ok_replaces_json_and_stages_controls_before_live_apply() {
        let mut window = Window {
            selected_primary_index: 1,
            selected_secondary_index: 4,
            visible_models: vec!["model-a".to_owned(), "model-b".to_owned()],
            visible_welcome: "welcome".to_owned(),
            visible_instructions: "instructions".to_owned(),
            history_size: 12,
            local_port_text: " -11434 ".to_owned(),
            local_port_slot: 1,
            interface_index: 2,
            voice_index: 3,
            extraction_mode: 1,
            tina_llm_versions: vec!["v1".to_owned(), "v2".to_owned()],
            tina_llm_version_index: 1,
            staged_configuration: StagedConfiguration {
                local_ports: [100, 200, 300],
                ..StagedConfiguration::default()
            },
            ..Window::default()
        };
        let mut assistant_json = "old".to_owned();

        window
            .apply_options(&mut assistant_json)
            .expect("apply options");

        assert_eq!(window.prepared_welcome, "welcome");
        assert_eq!(window.prepared_instructions, "instructions");
        assert_eq!(
            serde_json::from_str::<serde_json::Value>(&assistant_json).expect("assistant JSON"),
            json!({
                "aiassistant": {
                    "welcome": "welcome",
                    "instructions": "instructions",
                    "options": { "model": "" }
                }
            })
        );
        assert_eq!(
            window.staged_configuration,
            StagedConfiguration {
                model: "model-b".to_owned(),
                history_size: 12,
                language_index: 4,
                local_ports: [100, -11434, 300],
                interface_index: 2,
                voice_index: 3,
                extraction_mode: 1,
                tina_llm_version: "v2".to_owned(),
            }
        );
    }

    #[test]
    fn invalid_port_keeps_json_and_earlier_staged_fields_without_rollback() {
        let mut window = Window {
            selected_primary_index: 0,
            selected_secondary_index: 5,
            visible_models: vec!["new-model".to_owned()],
            visible_welcome: "new welcome".to_owned(),
            visible_instructions: "new instructions".to_owned(),
            history_size: 7,
            local_port_text: "invalid".to_owned(),
            staged_configuration: StagedConfiguration {
                local_ports: [1, 2, 3],
                interface_index: 9,
                ..StagedConfiguration::default()
            },
            ..Window::default()
        };
        let mut assistant_json = "old".to_owned();

        assert!(window.apply_options(&mut assistant_json).is_err());

        assert_ne!(assistant_json, "old");
        assert_eq!(window.staged_configuration.model, "new-model");
        assert_eq!(window.staged_configuration.history_size, 7);
        assert_eq!(window.staged_configuration.language_index, 5);
        assert_eq!(window.staged_configuration.local_ports, [1, 2, 3]);
        assert_eq!(window.staged_configuration.interface_index, 9);
    }

    #[test]
    fn instruction_newlines_follow_the_recovered_three_replacements() {
        assert_eq!(
            normalize_instruction_newlines("first\r\nsecond\nthird\rfourth"),
            "first\r\nsecond\r\nthird\rfourth"
        );
        assert_eq!(normalize_instruction_newlines("a$$NL$$b"), "a\r\nb");
        assert_eq!(normalize_instruction_newlines("unchanged"), "unchanged");
    }

    #[test]
    fn json_prompt_newlines_replace_only_crlf_pairs() {
        let source = "first\r\nsecond\nthird\rfourth".to_owned();

        let normalized = normalize_json_prompt_newlines(&source);

        assert_eq!(normalized, "first\nsecond\nthird\rfourth");
        assert_eq!(source, "first\r\nsecond\nthird\rfourth");
        assert_eq!(normalize_json_prompt_newlines(""), "");
    }

    #[test]
    fn json_slash_normalizer_replaces_only_escaped_forward_slashes() {
        let source =
            r#"{"url":"https:\/\/example.test\/a","backslash":"\\","plain":"/"}"#.to_owned();

        let normalized = normalize_json_forward_slashes(&source);

        assert_eq!(
            normalized,
            r#"{"url":"https://example.test/a","backslash":"\\","plain":"/"}"#
        );
        assert_eq!(
            source,
            r#"{"url":"https:\/\/example.test\/a","backslash":"\\","plain":"/"}"#
        );
    }

    #[test]
    fn clear_instructions_changes_only_the_three_visible_memos() {
        let staged_configuration = StagedConfiguration {
            model: "staged model".to_owned(),
            ..StagedConfiguration::default()
        };
        let mut window = Window {
            prepared_welcome: "prepared welcome".to_owned(),
            visible_welcome: "visible welcome".to_owned(),
            prepared_instructions: "prepared instructions".to_owned(),
            visible_instructions: "visible instructions".to_owned(),
            visible_question: "visible question".to_owned(),
            staged_configuration: staged_configuration.clone(),
            selected_primary_index: 2,
            ..Window::default()
        };

        window.update(Message::ClearInstructions);

        assert_eq!(window.visible_welcome, "");
        assert_eq!(window.visible_instructions, "");
        assert_eq!(window.visible_question, "");
        assert_eq!(window.prepared_welcome, "prepared welcome");
        assert_eq!(window.prepared_instructions, "prepared instructions");
        assert_eq!(window.staged_configuration, staged_configuration);
        assert_eq!(window.selected_primary_index, 2);
    }

    #[test]
    fn instruction_load_selection_preserves_cancel_and_accepted_filter_index() {
        let mut window = Window {
            visible_welcome: "welcome".to_owned(),
            visible_instructions: "instructions".to_owned(),
            visible_question: "question".to_owned(),
            ..Window::default()
        };

        window.handle_instruction_load_selection(None, 7);
        assert_eq!(window.take_instruction_load_request(), None);
        assert_eq!(window.visible_welcome, "welcome");
        assert_eq!(window.visible_instructions, "instructions");
        assert_eq!(window.visible_question, "question");

        window.handle_instruction_load_selection(Some(PathBuf::from("prompt.json")), 7);
        assert_eq!(
            window.take_instruction_load_request(),
            Some(InstructionLoadRequest {
                path: PathBuf::from("prompt.json"),
                filter_index: 7,
            })
        );
    }

    #[test]
    fn instruction_save_selection_preserves_cancel_format_and_separator_flag() {
        let mut window = Window {
            visible_welcome: "welcome".to_owned(),
            visible_instructions: "instructions".to_owned(),
            visible_question: "question".to_owned(),
            ..Window::default()
        };

        window.handle_instruction_save_selection(None, 2);
        assert_eq!(window.take_instruction_save_request(), None);
        assert_eq!(window.visible_welcome, "welcome");
        assert_eq!(window.visible_instructions, "instructions");
        assert_eq!(window.visible_question, "question");

        window.handle_instruction_save_selection(Some(PathBuf::from("prompt.txt")), 2);
        assert_eq!(
            window.take_instruction_save_request(),
            Some(InstructionSaveRequest {
                path: PathBuf::from("prompt.txt"),
                filter_index: 2,
                blank_line_after_sections: true,
            })
        );
    }

    #[test]
    fn json_instruction_load_updates_exact_string_keys_and_normalizes_newlines() {
        let mut window = Window {
            visible_welcome: "old welcome".to_owned(),
            visible_instructions: "old instructions".to_owned(),
            visible_question: "old question".to_owned(),
            ..Window::default()
        };

        window
            .load_instruction_contents(
                "{\"welcome\":\"line 1\\nline 2\",\"Instructions\":\"ignored\",\"question\":\"question\",\"extra\":\"ignored\"}",
                1,
            )
            .expect("load JSON instructions");

        assert_eq!(window.visible_welcome, "line 1\r\nline 2");
        assert_eq!(window.visible_instructions, "old instructions");
        assert_eq!(window.visible_question, "question");
    }

    #[test]
    fn invalid_json_does_not_clear_existing_instruction_fields() {
        let mut window = Window {
            visible_welcome: "welcome".to_owned(),
            visible_instructions: "instructions".to_owned(),
            visible_question: "question".to_owned(),
            ..Window::default()
        };

        assert!(matches!(
            window.load_instruction_contents("not JSON", 1),
            Err(InstructionLoadError::Parse(_))
        ));
        assert_eq!(window.visible_welcome, "welcome");
        assert_eq!(window.visible_instructions, "instructions");
        assert_eq!(window.visible_question, "question");
    }

    #[test]
    fn text_instruction_load_uses_marker_substrings_and_remaining_question_lines() {
        let mut window = Window {
            visible_welcome: "old welcome".to_owned(),
            visible_instructions: "old instructions".to_owned(),
            visible_question: "old question".to_owned(),
            ..Window::default()
        };

        window
            .load_instruction_contents(
                "// Keep the file structure\n// Welcome\nwelcome 1\nwelcome 2\nheading // Instructions\ninstruction\n// Question suffix\nquestion 1\nquestion 2\n",
                2,
            )
            .expect("load text instructions");

        assert_eq!(window.visible_welcome, "welcome 1\r\nwelcome 2\r\n");
        assert_eq!(window.visible_instructions, "instruction\r\n");
        assert_eq!(window.visible_question, "question 1\r\nquestion 2\r\n");
    }

    #[test]
    fn text_instruction_load_does_not_require_or_reorder_markers() {
        let mut window = Window {
            visible_welcome: "old welcome".to_owned(),
            visible_instructions: "old instructions".to_owned(),
            visible_question: "old question".to_owned(),
            ..Window::default()
        };

        window
            .load_instruction_contents("preamble\n// Question\nremaining", 7)
            .expect("load text instructions");

        assert_eq!(window.visible_welcome, "old welcome");
        assert_eq!(window.visible_instructions, "preamble\r\n");
        assert_eq!(window.visible_question, "remaining\r\n");
    }

    #[test]
    fn json_instruction_save_normalizes_values_and_preserves_field_order() {
        let window = Window {
            visible_welcome: "welcome\r\nline".to_owned(),
            visible_instructions: "visit https://example.test/a".to_owned(),
            visible_question: "question\nline".to_owned(),
            ..Window::default()
        };

        let serialized = window
            .serialize_instruction_contents(1, true)
            .expect("serialize JSON instructions");

        assert_eq!(
            serialized,
            "{\"welcome\":\"welcome\\nline\",\"instructions\":\"visit https://example.test/a\",\"question\":\"question\\nline\"}"
        );
        assert_eq!(window.visible_welcome, "welcome\r\nline");
        assert_eq!(window.visible_question, "question\nline");
    }

    #[test]
    fn text_instruction_save_writes_headings_memo_lines_and_blank_separators() {
        let window = Window {
            visible_welcome: "welcome 1\r\nwelcome 2\r\n".to_owned(),
            visible_instructions: "instruction".to_owned(),
            visible_question: String::new(),
            ..Window::default()
        };

        let serialized = window
            .serialize_instruction_contents(2, true)
            .expect("serialize text instructions");

        assert_eq!(
            serialized,
            "// Keep the file structure\r\n// Welcome\r\nwelcome 1\r\nwelcome 2\r\n\r\n// Instructions\r\ninstruction\r\n\r\n// Question\r\n\r\n"
        );
    }

    #[test]
    fn text_instruction_save_can_omit_blank_separators() {
        let window = Window {
            visible_welcome: "welcome".to_owned(),
            visible_instructions: "instructions".to_owned(),
            visible_question: "question".to_owned(),
            ..Window::default()
        };

        let serialized = window
            .serialize_instruction_contents(9, false)
            .expect("serialize text instructions");

        assert_eq!(
            serialized,
            "// Keep the file structure\r\n// Welcome\r\nwelcome\r\n// Instructions\r\ninstructions\r\n// Question\r\nquestion\r\n"
        );
    }

    #[test]
    fn set_api_key_uses_x_and_y_from_two_pointer_reads() {
        let mut window = Window {
            visible_welcome: "unchanged".to_owned(),
            ..Window::default()
        };
        let points = [
            Some(ScreenPoint { x: 12, y: 99 }),
            Some(ScreenPoint { x: 88, y: 34 }),
        ];
        let mut reads = points.into_iter();

        window.set_api_key_click(|| reads.next().expect("pointer read"));

        assert_eq!(
            window.take_api_key_menu_position(),
            Some(ScreenPoint { x: 12, y: 34 })
        );
        assert_eq!(window.visible_welcome, "unchanged");
    }

    #[test]
    fn failed_pointer_reads_still_open_api_key_menu_at_zero_coordinates() {
        let mut window = Window::default();
        let points = [None, Some(ScreenPoint { x: 10, y: 20 })];
        let mut reads = points.into_iter();

        window.set_api_key_click(|| reads.next().expect("pointer read"));

        assert_eq!(
            window.take_api_key_menu_position(),
            Some(ScreenPoint { x: 0, y: 20 })
        );
        assert_eq!(window.take_api_key_menu_position(), None);
    }

    #[test]
    fn accepted_api_key_dialog_writes_exact_text_immediately() {
        let mut window = Window::default();
        let mut store = RecordingApiKeyStore::default();

        window
            .edit_api_key(
                1,
                "GROQ_API_KEY",
                |dialog| {
                    assert_eq!(dialog.prompt(), "Enter your GROQ API Key:");
                    dialog.update(set_api_key::Message::KeyChanged("  key\r\n".to_owned()));
                    1
                },
                &mut store,
            )
            .expect("store accepted API key");

        assert_eq!(
            store.writes,
            [("GROQ_API_KEY".to_owned(), "  key\r\n".to_owned())]
        );
    }

    #[test]
    fn cancelled_api_key_dialog_discards_text_without_store_access() {
        let mut window = Window::default();
        let mut store = RecordingApiKeyStore::default();

        window
            .edit_api_key(
                3,
                "OLLAMA_API_KEY",
                |dialog| {
                    assert_eq!(dialog.prompt(), "Enter your Ollama API Key:");
                    dialog.update(set_api_key::Message::KeyChanged("discarded".to_owned()));
                    2
                },
                &mut store,
            )
            .expect("cancel dialog");

        assert!(store.writes.is_empty());
    }

    #[test]
    fn accepted_empty_api_key_is_not_validated() {
        let mut window = Window::default();
        let mut store = RecordingApiKeyStore::default();

        window
            .edit_api_key(0, "OPENAI_API_KEY", |_| 1, &mut store)
            .expect("store empty API key");

        assert_eq!(store.writes, [("OPENAI_API_KEY".to_owned(), String::new())]);
    }

    #[test]
    fn provider_menu_wrappers_use_exact_selectors_and_value_names() {
        let mut window = Window::default();
        let mut store = RecordingApiKeyStore::default();

        window
            .set_groq_api_key(
                |dialog| {
                    assert_eq!(dialog.provider_selector(), 1);
                    dialog.update(set_api_key::Message::KeyChanged("groq".to_owned()));
                    1
                },
                &mut store,
            )
            .expect("set GROQ key");
        window
            .set_ollama_api_key(
                |dialog| {
                    assert_eq!(dialog.provider_selector(), 3);
                    dialog.update(set_api_key::Message::KeyChanged("ollama".to_owned()));
                    1
                },
                &mut store,
            )
            .expect("set Ollama key");
        window
            .set_openai_api_key(
                |dialog| {
                    assert_eq!(dialog.provider_selector(), 0);
                    dialog.update(set_api_key::Message::KeyChanged("openai".to_owned()));
                    1
                },
                &mut store,
            )
            .expect("set OpenAI key");
        window
            .set_openrouter_api_key(
                |dialog| {
                    assert_eq!(dialog.provider_selector(), 2);
                    dialog.update(set_api_key::Message::KeyChanged("openrouter".to_owned()));
                    1
                },
                &mut store,
            )
            .expect("set OpenRouter key");

        assert_eq!(
            store.writes,
            [
                ("GROQ_API_KEY".to_owned(), "groq".to_owned()),
                ("OLLAMA_API_KEY".to_owned(), "ollama".to_owned()),
                ("OPENAI_API_KEY".to_owned(), "openai".to_owned()),
                ("OPENROUTER_API_KEY".to_owned(), "openrouter".to_owned()),
            ]
        );
    }

    #[test]
    fn interface_port_click_obeys_setup_guard_and_formats_selected_staged_port() {
        let mut window = Window {
            configuration_loaded: false,
            local_port_slot: 1,
            local_port_text: "uncommitted".to_owned(),
            staged_configuration: StagedConfiguration {
                local_ports: [11434, -22, 8080],
                ..StagedConfiguration::default()
            },
            ..Window::default()
        };

        window.update(Message::InterfacePortClicked);
        assert_eq!(window.local_port_text(), "uncommitted");

        window.configuration_loaded = true;
        window.update(Message::InterfacePortClicked);
        assert_eq!(window.local_port_text(), "-22");
        assert_eq!(window.staged_configuration.local_ports, [11434, -22, 8080]);
    }

    #[test]
    fn duplicate_voices_click_uses_interface_port_slot_and_overwrites_edit() {
        let mut window = Window {
            configuration_loaded: true,
            local_port_slot: 2,
            local_port_text: "edited but not committed".to_owned(),
            voice_index: 0,
            staged_configuration: StagedConfiguration {
                local_ports: [1, 2, 65_535],
                ..StagedConfiguration::default()
            },
            ..Window::default()
        };

        window.update(Message::VoicesClicked);

        assert_eq!(window.local_port_text(), "65535");
        assert_eq!(window.voice_index, 0);
    }

    #[test]
    fn model_click_normalizes_local_suffix_and_updates_selected_mode_tokens() {
        let mut window = Window {
            configuration_loaded: true,
            visible_models: vec!["Local |   qwen model   ".to_owned()],
            selected_primary_index: 0,
            extraction_mode: 1,
            staged_configuration: StagedConfiguration {
                model: "staged model".to_owned(),
                ..StagedConfiguration::default()
            },
            ..Window::default()
        };

        window.model_clicked("|");

        assert_eq!(window.selected_model_token(), "<qwen model>");
        assert_eq!(window.intent_model_token(), "<qwen model>");
        assert_eq!(window.staged_configuration.model, "staged model");
        assert_eq!(
            window.extract_model_presentation,
            ExtractModelPresentation::HiddenDisabled
        );
    }

    #[test]
    fn model_click_keeps_nonlocal_or_delimiter_free_model_text() {
        let mut window = Window {
            configuration_loaded: true,
            visible_models: vec!["OpenAI | gpt-model".to_owned(), "Local model".to_owned()],
            selected_primary_index: 0,
            extraction_mode: 0,
            intent_model_token: "<fast-model>".to_owned(),
            ..Window::default()
        };

        window.model_clicked("|");
        assert_eq!(window.selected_model_token(), "<OpenAI | gpt-model>");
        assert_eq!(window.intent_model_token(), "<fast-model>");
        assert_eq!(window.intent_model_text, "<fast-model>");
        assert_eq!(
            window.extract_model_presentation,
            ExtractModelPresentation::VisibleEnabled
        );

        window.selected_primary_index = 1;
        window.model_clicked("|");
        assert_eq!(window.selected_model_token(), "<Local model>");
    }

    #[test]
    fn local_model_suffix_is_limited_to_255_characters_before_trim() {
        let suffix = format!("  {}tail", "x".repeat(255));
        let mut window = Window {
            visible_models: vec![format!("Local |{suffix}")],
            selected_primary_index: 0,
            ..Window::default()
        };

        window.model_clicked("|");

        assert_eq!(
            window.selected_model_token(),
            format!("<{}>", "x".repeat(253))
        );
    }

    #[test]
    fn tina_llm_identifier_uses_long_form_except_for_lm_studio() {
        let mut window = Window {
            tina_llm_versions: vec!["3".to_owned(), "4".to_owned()],
            tina_llm_version_index: 1,
            interface_index: 0,
            ..Window::default()
        };

        window.build_tina_llm_identifier();
        assert_eq!(window.tina_llm_identifier(), "DesignSoft/TINA_AI4_Q4");

        window.interface_index = 1;
        window.build_tina_llm_identifier();
        assert_eq!(window.tina_llm_identifier(), "tina_ai4");

        window.interface_index = 2;
        window.build_tina_llm_identifier();
        assert_eq!(window.tina_llm_identifier(), "DesignSoft/TINA_AI4_Q4");
    }

    #[test]
    fn negative_tina_llm_selection_falls_back_to_first_version() {
        let mut window = Window {
            tina_llm_versions: vec!["first".to_owned(), "second".to_owned()],
            tina_llm_version_index: -1,
            interface_index: 1,
            ..Window::default()
        };

        window.build_tina_llm_identifier();

        assert_eq!(window.tina_llm_identifier(), "tina_aifirst");
        assert_eq!(window.tina_llm_version_index, -1);
        assert_eq!(window.interface_index, 1);
    }

    #[test]
    fn tina_llm_click_is_no_op_before_form_show_ready_state() {
        let mut window = Window {
            configuration_loaded: false,
            tina_llm_versions: vec!["4".to_owned()],
            tina_llm_identifier: "old identifier".to_owned(),
            intent_model_token: "<old token>".to_owned(),
            ..Window::default()
        };

        window.update(Message::TinaLlmClicked);

        assert_eq!(window.tina_llm_identifier(), "old identifier");
        assert_eq!(window.intent_model_token(), "<old token>");
    }

    #[test]
    fn tina_llm_click_rebuilds_fast_token_and_presentation_only() {
        let mut window = Window {
            configuration_loaded: true,
            tina_llm_versions: vec!["4".to_owned()],
            tina_llm_version_index: 0,
            interface_index: 1,
            extraction_mode: 0,
            staged_configuration: StagedConfiguration {
                tina_llm_version: "staged".to_owned(),
                ..StagedConfiguration::default()
            },
            ..Window::default()
        };

        window.update(Message::TinaLlmClicked);

        assert_eq!(window.tina_llm_identifier(), "tina_ai4");
        assert_eq!(window.intent_model_token(), "<tina_ai4>");
        assert_eq!(window.intent_model_text, "<tina_ai4>");
        assert_eq!(
            window.extract_model_presentation,
            ExtractModelPresentation::VisibleEnabled
        );
        assert_eq!(window.staged_configuration.tina_llm_version, "staged");
        assert_eq!(window.interface_index, 1);
    }

    #[test]
    fn extraction_mode_click_obeys_ready_guard() {
        let mut window = Window {
            configuration_loaded: false,
            extraction_mode: 0,
            intent_model_token: "<fast>".to_owned(),
            intent_model_text: "old text".to_owned(),
            extract_model_presentation: ExtractModelPresentation::HiddenDisabled,
            ..Window::default()
        };

        window.update(Message::ExtractionModeClicked);

        assert_eq!(window.intent_model_text, "old text");
        assert_eq!(
            window.extract_model_presentation,
            ExtractModelPresentation::HiddenDisabled
        );
    }

    #[test]
    fn extraction_mode_click_shows_fast_controls_and_hides_other_modes() {
        let mut window = Window {
            configuration_loaded: true,
            extraction_mode: 0,
            intent_model_token: "<fast>".to_owned(),
            intent_model_text: "old text".to_owned(),
            staged_configuration: StagedConfiguration {
                extraction_mode: 7,
                ..StagedConfiguration::default()
            },
            ..Window::default()
        };

        window.update(Message::ExtractionModeClicked);
        assert_eq!(window.intent_model_text, "<fast>");
        assert_eq!(
            window.extract_model_presentation,
            ExtractModelPresentation::VisibleEnabled
        );

        window.extraction_mode = 2;
        window.update(Message::ExtractionModeClicked);
        assert_eq!(window.intent_model_text, "<fast>");
        assert_eq!(
            window.extract_model_presentation,
            ExtractModelPresentation::HiddenDisabled
        );
        assert_eq!(window.staged_configuration.extraction_mode, 7);
    }
}
