use std::fs::File;
use std::path::{Path, PathBuf};

use iced::widget::{button, checkbox, column, radio, row, text, text_input};
use iced::{Alignment, Element, Length, Task};
use rfd::AsyncFileDialog;
use xmltree::{Element as XmlElement, XMLNode};

pub const TITLE: &str = "Modify replication file";
pub const FORM_RESOURCE: &str = "ModReplicationFile";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FileSource {
    User,
    Global,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct DuplicateCategories {
    efficiency: bool,
    line: bool,
    load: bool,
}

impl Default for DuplicateCategories {
    fn default() -> Self {
        Self {
            efficiency: true,
            line: true,
            load: true,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct ReplicationOptions {
    source_file: PathBuf,
    result_folder: PathBuf,
    file_source: FileSource,
    duplicate_categories: DuplicateCategories,
    light_load_mode: bool,
    design_parameter_number: usize,
}

#[derive(Debug, Clone)]
pub enum Message {
    SourceFileChanged(String),
    ResultFolderChanged(String),
    FileSourceChanged(FileSource),
    DuplicateEfficiencyChanged(bool),
    DuplicateLineChanged(bool),
    DuplicateLoadChanged(bool),
    LightLoadModeChanged(bool),
    DesignParameterChanged(String),
    SelectSourceFile,
    SelectResultFolder,
    SourceFileSelected(Option<PathBuf>),
    ResultFolderSelected(Option<PathBuf>),
    Run,
    RunCompleted(Result<Option<PathBuf>, String>),
}

#[derive(Debug)]
pub struct Window {
    source_file: String,
    result_folder: String,
    file_source: FileSource,
    duplicate_categories: DuplicateCategories,
    light_load_mode: bool,
    design_parameter_text: String,
    design_parameter_enabled: bool,
    last_output: Option<PathBuf>,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            source_file: String::new(),
            result_folder: String::new(),
            file_source: FileSource::User,
            duplicate_categories: DuplicateCategories::default(),
            light_load_mode: true,
            design_parameter_text: "0".to_owned(),
            design_parameter_enabled: true,
            last_output: None,
            last_error: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::SourceFileChanged(value) => self.source_file = value,
            Message::ResultFolderChanged(value) => self.result_folder = value,
            Message::FileSourceChanged(value) => self.file_source = value,
            Message::DuplicateEfficiencyChanged(value) => {
                self.duplicate_categories.efficiency = value;
            }
            Message::DuplicateLineChanged(value) => self.duplicate_categories.line = value,
            Message::DuplicateLoadChanged(value) => self.duplicate_categories.load = value,
            Message::LightLoadModeChanged(value) => self.toggle_light_load_controls(value),
            Message::DesignParameterChanged(value) => self.design_parameter_text = value,
            Message::SelectSourceFile => return self.select_source_replication_file(),
            Message::SelectResultFolder => return self.select_result_folder(),
            Message::SourceFileSelected(selection) => {
                if let Some(path) = selection {
                    self.source_file = path.to_string_lossy().into_owned();
                }
            }
            Message::ResultFolderSelected(selection) => {
                if let Some(path) = selection {
                    self.result_folder = path.to_string_lossy().into_owned();
                }
            }
            Message::Run => return self.run_replication_file_generation(),
            Message::RunCompleted(result) => match result {
                Ok(Some(path)) => {
                    self.last_output = Some(path);
                    self.last_error = None;
                }
                Ok(None) => {}
                Err(error) => self.last_error = Some(error),
            },
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_012eb1c0` at `0x012EB1C0`.
    ///
    /// The database maps the original function to
    /// `TModReplicationFile.bResultFolderClick`. It opens an unseeded folder
    /// picker and changes the result edit only after acceptance.
    pub fn select_result_folder(&self) -> Task<Message> {
        Task::perform(pick_result_folder(), Message::ResultFolderSelected)
    }

    /// Ports Ghidra function `FUN_012edd20` at `0x012EDD20`.
    ///
    /// The database maps the original function to
    /// `TModReplicationFile.btnSourceFolderClick`. The adapter applies an XML
    /// filter, seeds the dialog from the current edit, and leaves the edit
    /// unchanged when the dialog is canceled.
    pub fn select_source_replication_file(&self) -> Task<Message> {
        Task::perform(
            pick_source_xml(self.source_file.clone()),
            Message::SourceFileSelected,
        )
    }

    /// Ports Ghidra function `FUN_012ede90` at `0x012EDE90`.
    ///
    /// The database maps the original function to
    /// `TModReplicationFile.chkbLightLoadModeClick`. It synchronizes the
    /// design-parameter label and editor enabled state without changing the
    /// current number.
    pub const fn toggle_light_load_controls(&mut self, checked: bool) {
        self.light_load_mode = checked;
        self.design_parameter_enabled = checked;
    }

    /// Ports Ghidra function `FUN_012eb240` at `0x012EB240`.
    ///
    /// The database maps the original function to
    /// `TModReplicationFile.bRunClick`. It validates and loads the source,
    /// creates selected category variants, rewrites the selected MODE0 action
    /// parameter, saves a `_mod` XML file, and reports success only after the
    /// save completes.
    pub fn run_replication_file_generation(&self) -> Task<Message> {
        let options = ReplicationOptions {
            source_file: PathBuf::from(&self.source_file),
            result_folder: PathBuf::from(&self.result_folder),
            file_source: self.file_source,
            duplicate_categories: self.duplicate_categories.clone(),
            light_load_mode: self.light_load_mode,
            design_parameter_number: self.design_parameter_text.parse().unwrap_or_default(),
        };
        Task::perform(
            async move { generate_replication_file(&options) },
            Message::RunCompleted,
        )
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let parameter_input =
            text_input("0", &self.design_parameter_text).width(Length::Fixed(64.0));
        let parameter_input = if self.design_parameter_enabled {
            parameter_input.on_input(Message::DesignParameterChanged)
        } else {
            parameter_input
        };
        let mut content = column![
            path_row(
                "Source file",
                &self.source_file,
                Message::SourceFileChanged,
                "Select file",
                Message::SelectSourceFile,
            ),
            path_row(
                "Result folder",
                &self.result_folder,
                Message::ResultFolderChanged,
                "Select folder",
                Message::SelectResultFolder,
            ),
            row![
                text("File source:").width(Length::Fixed(96.0)),
                radio(
                    "User",
                    FileSource::User,
                    Some(self.file_source),
                    Message::FileSourceChanged,
                ),
                radio(
                    "Global",
                    FileSource::Global,
                    Some(self.file_source),
                    Message::FileSourceChanged,
                ),
            ]
            .spacing(12),
            row![
                text("Duplicate:").width(Length::Fixed(96.0)),
                checkbox("Efficiency", self.duplicate_categories.efficiency)
                    .on_toggle(Message::DuplicateEfficiencyChanged),
                checkbox("Line", self.duplicate_categories.line)
                    .on_toggle(Message::DuplicateLineChanged),
                checkbox("Load", self.duplicate_categories.load)
                    .on_toggle(Message::DuplicateLoadChanged),
            ]
            .spacing(12),
            row![
                checkbox("VFM (light load mode)", self.light_load_mode)
                    .on_toggle(Message::LightLoadModeChanged),
                text("Number of the parameter in the design:"),
                parameter_input,
            ]
            .spacing(12)
            .align_y(Alignment::Center),
            button("Run").on_press(Message::Run),
        ]
        .padding(16)
        .spacing(14);

        if let Some(path) = &self.last_output {
            content = content.push(text(format!("Successful. Look: {}", path.display())));
        }
        if let Some(error) = &self.last_error {
            content = content.push(text(error));
        }

        content.into()
    }
}

fn path_row<'a>(
    label: &'a str,
    value: &'a str,
    on_input: fn(String) -> Message,
    button_label: &'a str,
    button_message: Message,
) -> iced::widget::Row<'a, Message> {
    row![
        text(label).width(Length::Fixed(96.0)),
        text_input("", value).on_input(on_input).width(Length::Fill),
        button(button_label).on_press(button_message),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
}

async fn pick_result_folder() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .pick_folder()
        .await
        .map(|handle| handle.path().to_path_buf())
}

async fn pick_source_xml(initial_directory: String) -> Option<PathBuf> {
    let dialog = AsyncFileDialog::new()
        .add_filter("Extensible Markup Language", &["xml"])
        .set_directory(initial_directory);
    dialog
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

fn generate_replication_file(options: &ReplicationOptions) -> Result<Option<PathBuf>, String> {
    if !options.source_file.is_file() {
        return Ok(None);
    }
    let Ok(source) = File::open(&options.source_file) else {
        return Ok(None);
    };
    let Ok(root) = XmlElement::parse(source) else {
        return Ok(None);
    };
    let Some(output) = transform_replication_document(&root, options) else {
        return Ok(None);
    };
    let output_path = output_path(&options.source_file, &options.result_folder)
        .ok_or_else(|| "The source file has no output name".to_owned())?;
    let destination = File::create(&output_path).map_err(|error| error.to_string())?;
    output
        .write(destination)
        .map_err(|error| error.to_string())?;
    Ok(Some(output_path))
}

fn transform_replication_document(
    root: &XmlElement,
    options: &ReplicationOptions,
) -> Option<XmlElement> {
    if root.name != "replicate" {
        return None;
    }
    let circuits: Vec<&XmlElement> = root
        .children
        .iter()
        .filter_map(XMLNode::as_element)
        .filter(|element| element.name == "circuit")
        .collect();
    if circuits.is_empty() {
        return None;
    }

    let mut output = XmlElement::new("replicate");
    for circuit in circuits {
        let file = circuit.attributes.get("file").cloned().unwrap_or_default();
        let file = file.replace("%23", "#");
        let selected = category_is_selected(&file, options);
        let suffixes: &[&str] = if selected && options.light_load_mode {
            &["_AVG_MODE1", "_SW_MODE1", "_AVG_MODE0", "_SW_MODE0"]
        } else if selected {
            &["_AVG", "_SW"]
        } else {
            &[""]
        };

        for suffix in suffixes {
            let mut variant = circuit.clone();
            normalize_circuit_path(&mut variant, options.file_source);
            variant
                .attributes
                .insert("file".to_owned(), insert_suffix(&file, suffix));
            if suffix.contains("MODE0") {
                rewrite_mode0_parameters(&mut variant, options.design_parameter_number);
            }
            output.children.push(XMLNode::Element(variant));
        }
    }
    Some(output)
}

fn category_is_selected(file: &str, options: &ReplicationOptions) -> bool {
    (file.contains("Efficiency") && options.duplicate_categories.efficiency)
        || (file.contains("Line") && options.duplicate_categories.line)
        || (file.contains("Load") && options.duplicate_categories.load)
}

fn normalize_circuit_path(circuit: &mut XmlElement, source: FileSource) {
    if let Some(path) = circuit.attributes.get_mut("path") {
        *path = match source {
            FileSource::User => path.replace("CGLOBAL", "CUSER"),
            FileSource::Global => path.replace("CUSER", "CGLOBAL"),
        };
    }
}

fn insert_suffix(file: &str, suffix: &str) -> String {
    file.find('.').map_or_else(
        || format!("{file}{suffix}"),
        |position| format!("{}{suffix}{}", &file[..position], &file[position..]),
    )
}

fn rewrite_mode0_parameters(element: &mut XmlElement, parameter_number: usize) {
    for child in &mut element.children {
        let XMLNode::Element(child) = child else {
            continue;
        };
        if child.name == "parameters" {
            let current = child.get_text().unwrap_or_default();
            let replacement = replace_comma_field(&current, parameter_number, "0");
            child
                .children
                .retain(|node| !matches!(node, XMLNode::Text(_) | XMLNode::CData(_)));
            child.children.insert(0, XMLNode::Text(replacement));
        } else {
            rewrite_mode0_parameters(child, parameter_number);
        }
    }
}

fn replace_comma_field(value: &str, parameter_number: usize, replacement: &str) -> String {
    let mut fields: Vec<&str> = value.split(',').collect();
    let index = parameter_number.saturating_sub(1);
    if let Some(field) = fields.get_mut(index) {
        *field = replacement;
    }
    fields.join(",")
}

fn output_path(source_file: &Path, result_folder: &Path) -> Option<PathBuf> {
    let name = source_file.file_name()?.to_string_lossy();
    let modified_name = insert_suffix(&name, "_mod");
    if result_folder.as_os_str().is_empty() {
        Some(PathBuf::from(modified_name))
    } else {
        Some(result_folder.join(modified_name))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn options(light_load_mode: bool) -> ReplicationOptions {
        ReplicationOptions {
            source_file: PathBuf::from("source.xml"),
            result_folder: PathBuf::new(),
            file_source: FileSource::User,
            duplicate_categories: DuplicateCategories {
                efficiency: true,
                line: false,
                load: false,
            },
            light_load_mode,
            design_parameter_number: 2,
        }
    }

    fn sample_document() -> XmlElement {
        XmlElement::parse(
            br#"<replicate>
                <circuit path="CGLOBAL/Test" file="Efficiency%23case.xml">
                    <version><action><parameters>1,2,3</parameters></action></version>
                </circuit>
                <circuit path="CUSER/Test" file="Line.xml" />
            </replicate>"#
                .as_slice(),
        )
        .expect("valid test XML")
    }

    #[test]
    fn light_load_toggle_preserves_the_parameter_text() {
        let mut window = Window {
            design_parameter_text: "4".to_owned(),
            ..Window::default()
        };

        window.toggle_light_load_controls(false);

        assert!(!window.design_parameter_enabled);
        assert_eq!(window.design_parameter_text, "4");
    }

    #[test]
    fn simple_mode_creates_two_selected_variants_and_keeps_unselected_circuit() {
        let output = transform_replication_document(&sample_document(), &options(false))
            .expect("replicate root");
        let circuits: Vec<&XmlElement> = output
            .children
            .iter()
            .filter_map(XMLNode::as_element)
            .collect();

        assert_eq!(circuits.len(), 3);
        assert_eq!(circuits[0].attributes["file"], "Efficiency#case_AVG.xml");
        assert_eq!(circuits[1].attributes["file"], "Efficiency#case_SW.xml");
        assert_eq!(circuits[2].attributes["file"], "Line.xml");
        assert_eq!(circuits[0].attributes["path"], "CUSER/Test");
    }

    #[test]
    fn light_load_mode_creates_four_variants_and_rewrites_mode0_parameter() {
        let output = transform_replication_document(&sample_document(), &options(true))
            .expect("replicate root");
        let circuits: Vec<&XmlElement> = output
            .children
            .iter()
            .filter_map(XMLNode::as_element)
            .collect();

        assert_eq!(circuits.len(), 5);
        assert_eq!(
            circuits[2].attributes["file"],
            "Efficiency#case_AVG_MODE0.xml"
        );
        let parameters = circuits[2]
            .get_child("version")
            .and_then(|version| version.get_child("action"))
            .and_then(|action| action.get_child("parameters"))
            .and_then(XmlElement::get_text)
            .expect("parameters");
        assert_eq!(parameters, "1,0,3");
    }

    #[test]
    fn output_name_inserts_mod_before_the_first_period() {
        assert_eq!(
            output_path(Path::new("folder/name.v1.xml"), Path::new("result")),
            Some(PathBuf::from("result/name_mod.v1.xml"))
        );
    }
}
