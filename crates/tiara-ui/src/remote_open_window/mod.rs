use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use iced::Task;
use xmltree::{Element as XmlElement, XMLNode};

pub const TITLE: &str = "Open";
pub const LIST_COLUMNS: [&str; 3] = ["Name", "Size", "Date"];
pub const PREVIEW_ENDPOINT: &str = "tina4web.dll/schimg?";
pub const SCHEMATIC_ENDPOINT: &str = "tina4web.dll/schematic?";
pub const SELECTION_PARAMETER: &str = "tsc";
pub const PREVIEW_FILE_NAME: &str = "preview.gif";
pub const AJAX_ENDPOINT: &str = "ajaxfuncsgwt.php?";
pub const FOLDER_OPERATION: &str = "getUserFolders";
pub const FILE_OPERATION: &str = "getFolderFiles";
pub const XML_FORMAT: &str = "xml";
pub const EXAMPLES_ROOT_PREFIX: &str = "EXAMPLESROOT|";
pub const REMOTE_KEY_SEPARATOR: &str = "|";

pub type FolderId = u64;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ListPresentation {
    List,
    Report,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ColumnAlignment {
    Left,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ReportColumn {
    pub caption: &'static str,
    pub alignment: ColumnAlignment,
    pub width: u16,
}

pub const REPORT_COLUMNS: [ReportColumn; 3] = [
    ReportColumn {
        caption: "Name",
        alignment: ColumnAlignment::Left,
        width: 150,
    },
    ReportColumn {
        caption: "Size",
        alignment: ColumnAlignment::Left,
        width: 80,
    },
    ReportColumn {
        caption: "Date",
        alignment: ColumnAlignment::Left,
        width: 140,
    },
];

/// Ports Ghidra function `FUN_014bdd20` at `0x014BDD20`.
///
/// Returns the three report columns created during `OpenWindow` initialization:
/// left-aligned Name, Size, and Date columns with widths 150, 80, and 140.
#[must_use]
pub const fn report_columns() -> &'static [ReportColumn; 3] {
    &REPORT_COLUMNS
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FolderLoadState {
    NotLoaded,
    Loaded,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalState {
    Open,
    Accepted,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RemoteFetch<T> {
    Available(T),
    Unavailable,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RemoteFolderRecord {
    pub name: String,
    pub path: String,
    pub parent_path: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RemoteFileRow {
    pub name: String,
    pub size: String,
    pub date: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FolderNode {
    pub id: FolderId,
    pub parent: Option<FolderId>,
    pub name: String,
    pub path: String,
    pub children: Vec<FolderId>,
    pub load_state: FolderLoadState,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RemoteSelection {
    pub folder_path: String,
    pub file_name: String,
}

impl RemoteSelection {
    #[must_use]
    pub fn key(&self) -> String {
        format!(
            "{}{}{}",
            self.folder_path, REMOTE_KEY_SEPARATOR, self.file_name
        )
    }

    #[must_use]
    pub fn rooted_key(&self) -> String {
        format!("{EXAMPLES_ROOT_PREFIX}{}", self.key())
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FolderListRequest {
    pub endpoint: &'static str,
    pub operation: &'static str,
    pub parent_path: Option<String>,
    pub format: &'static str,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileListRequest {
    pub endpoint: &'static str,
    pub operation: &'static str,
    pub folder_path: String,
    pub rooted_folder_key: String,
    pub format: &'static str,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PreviewRequest {
    pub endpoint: &'static str,
    pub selection_parameter: &'static str,
    pub selection: RemoteSelection,
    pub rooted_selection_key: String,
    pub width: u32,
    pub height: u32,
    pub destination_file_name: &'static str,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SchematicRequest {
    pub endpoint: &'static str,
    pub selection_parameter: &'static str,
    pub selection: RemoteSelection,
    pub rooted_selection_key: String,
    pub destination_file_name: String,
}

pub trait RemoteOpenAdapter {
    /// Reports whether the remote-example prerequisite checks passed.
    fn prerequisites_available(&mut self) -> bool;

    /// Loads root folders for `None`, or child folders for a parent path.
    ///
    /// # Errors
    ///
    /// Returns an adapter or transport exception. A handled server failure is
    /// represented by [`RemoteFetch::Unavailable`].
    fn load_folders(
        &mut self,
        request: &FolderListRequest,
    ) -> Result<RemoteFetch<Vec<RemoteFolderRecord>>, String>;

    /// Loads remote file rows for one folder path.
    ///
    /// # Errors
    ///
    /// Returns an adapter or transport exception. A handled server failure is
    /// represented by [`RemoteFetch::Unavailable`].
    fn load_files(
        &mut self,
        request: &FileListRequest,
    ) -> Result<RemoteFetch<Vec<RemoteFileRow>>, String>;

    /// Downloads a selected preview and returns a readable local image path.
    ///
    /// # Errors
    ///
    /// Returns an adapter, transport, or local-file exception. Missing or
    /// rejected output is represented by [`RemoteFetch::Unavailable`].
    fn download_preview(
        &mut self,
        request: &PreviewRequest,
    ) -> Result<RemoteFetch<PathBuf>, String>;

    /// Downloads an accepted schematic and returns its helper-managed path.
    ///
    /// # Errors
    ///
    /// Returns an adapter, transport, or local-file exception. Missing output
    /// is represented by [`RemoteFetch::Unavailable`].
    fn download_schematic(
        &mut self,
        request: &SchematicRequest,
    ) -> Result<RemoteFetch<PathBuf>, String>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PendingRemoteAction {
    LoadFolder(FolderId),
    RefreshPreview,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    ShowList,
    ShowReport,
    FolderSelected(Option<FolderId>),
    FileSelected(Option<usize>),
    PreviewSizeChanged { width: u32, height: u32 },
    Accept,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FolderLoadOutcome {
    pub child_folders_available: bool,
    pub files_available: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    presentation: ListPresentation,
    folders: BTreeMap<FolderId, FolderNode>,
    root_folders: Vec<FolderId>,
    next_folder_id: FolderId,
    file_rows: Vec<RemoteFileRow>,
    selected_folder: Option<FolderId>,
    selected_file: Option<usize>,
    preview_path: Option<PathBuf>,
    preview_width: u32,
    preview_height: u32,
    modal_state: ModalState,
    pending_action: Option<PendingRemoteAction>,
}

impl Window {
    #[must_use]
    pub fn new(root_records: Vec<RemoteFolderRecord>) -> Self {
        let mut window = Self {
            presentation: ListPresentation::Report,
            folders: BTreeMap::new(),
            root_folders: Vec::new(),
            next_folder_id: 1,
            file_rows: Vec::new(),
            selected_folder: None,
            selected_file: None,
            preview_path: None,
            preview_width: 0,
            preview_height: 0,
            modal_state: ModalState::Open,
            pending_action: None,
        };
        window.root_folders = window.insert_folders(None, root_records);
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ShowList => self.show_list(),
            Message::ShowReport => self.show_report(),
            Message::FolderSelected(selection) => {
                self.selected_folder = selection.filter(|id| self.folders.contains_key(id));
                self.pending_action = self.selected_folder.map(PendingRemoteAction::LoadFolder);
            }
            Message::FileSelected(selection) => {
                self.selected_file = selection.filter(|index| *index < self.file_rows.len());
                self.pending_action = Some(PendingRemoteAction::RefreshPreview);
            }
            Message::PreviewSizeChanged { width, height } => {
                self.preview_width = width;
                self.preview_height = height;
                self.pending_action = Some(PendingRemoteAction::RefreshPreview);
            }
            Message::Accept => {
                let _accepted = self.accept_if_selection_complete();
            }
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_014bebc0` at `0x014BEBC0`.
    ///
    /// Changes only the existing file-row presentation to Delphi `vsList`.
    /// It does not clear rows, change selection, load data, or refresh preview.
    pub const fn show_list(&mut self) {
        self.presentation = ListPresentation::List;
    }

    /// Ports Ghidra function `FUN_014bebe0` at `0x014BEBE0`.
    ///
    /// Builds a size-specific preview request from the complete selection and
    /// replaces the preview only when the adapter returns an available local
    /// image. Missing selection or output preserves the current preview.
    ///
    /// # Errors
    ///
    /// Returns an adapter error without replacing the current preview.
    pub fn download_selected_preview(
        &mut self,
        adapter: &mut impl RemoteOpenAdapter,
    ) -> Result<bool, String> {
        let Some(selection) = self.current_selection() else {
            self.pending_action = None;
            return Ok(false);
        };
        let request = PreviewRequest {
            endpoint: PREVIEW_ENDPOINT,
            selection_parameter: SELECTION_PARAMETER,
            rooted_selection_key: selection.rooted_key(),
            selection,
            width: self.preview_width,
            height: self.preview_height,
            destination_file_name: PREVIEW_FILE_NAME,
        };
        let result = adapter.download_preview(&request)?;
        self.pending_action = None;
        match result {
            RemoteFetch::Available(path) => {
                self.preview_path = Some(path);
                Ok(true)
            }
            RemoteFetch::Unavailable => Ok(false),
        }
    }

    /// Ports Ghidra function `FUN_014bf040` at `0x014BF040`.
    ///
    /// A missing tree selection is a no-op. The first completed child-folder
    /// request marks the node loaded even when the server reports unavailable,
    /// so later clicks do not retry it. The file list is always cleared before
    /// its request. A successful file response replaces rows and clears the
    /// preview; an unavailable response keeps the prior preview.
    ///
    /// # Errors
    ///
    /// Returns an adapter exception at the point where it occurs. A child
    /// exception does not mark the folder loaded or begin the file request. A
    /// file exception occurs after the file rows were cleared.
    pub fn select_remote_folder(
        &mut self,
        folder_id: Option<FolderId>,
        adapter: &mut impl RemoteOpenAdapter,
    ) -> Result<Option<FolderLoadOutcome>, String> {
        let Some(folder_id) = folder_id else {
            self.pending_action = None;
            return Ok(None);
        };
        let Some(folder) = self.folders.get(&folder_id) else {
            self.pending_action = None;
            return Ok(None);
        };
        let path = folder.path.clone();
        let must_load_children = folder.load_state == FolderLoadState::NotLoaded;
        self.selected_folder = Some(folder_id);

        let mut child_folders_available = true;
        if must_load_children {
            child_folders_available = self.load_remote_folders(Some(&path), adapter)?;
            if let Some(folder) = self.folders.get_mut(&folder_id) {
                folder.load_state = FolderLoadState::Loaded;
            }
        }

        let files_available = self.load_remote_file_rows(&path, adapter)?;
        self.pending_action = None;
        Ok(Some(FolderLoadOutcome {
            child_folders_available,
            files_available,
        }))
    }

    /// Ports Ghidra function `FUN_014bf0a0` at `0x014BF0A0`.
    ///
    /// Refreshes the preview through the shared selected-file loader. It has no
    /// sender-specific branch and does not change the current selections.
    ///
    /// # Errors
    ///
    /// Returns the shared preview adapter error.
    pub fn refresh_preview_for_file_click(
        &mut self,
        adapter: &mut impl RemoteOpenAdapter,
    ) -> Result<bool, String> {
        self.download_selected_preview(adapter)
    }

    /// Ports Ghidra function `FUN_014bdf00` at `0x014BDF00`.
    ///
    /// Returns immediately for a repeated root load when root nodes already
    /// exist. Otherwise, it constructs the recovered `getUserFolders` request,
    /// applies available parsed folder records, and selects the matching parent
    /// path after a successful response. A handled unavailable response returns
    /// `false` and does not add nodes.
    ///
    /// # Errors
    ///
    /// Returns an adapter exception without applying partial response records.
    pub fn load_remote_folders(
        &mut self,
        parent_path: Option<&str>,
        adapter: &mut impl RemoteOpenAdapter,
    ) -> Result<bool, String> {
        if parent_path.is_none() && !self.root_folders.is_empty() {
            return Ok(true);
        }
        if parent_path.is_none() {
            self.folders.clear();
            self.root_folders.clear();
            self.selected_folder = None;
            self.next_folder_id = 1;
        }
        let request = FolderListRequest {
            endpoint: AJAX_ENDPOINT,
            operation: FOLDER_OPERATION,
            parent_path: parent_path.map(str::to_owned),
            format: XML_FORMAT,
        };
        let RemoteFetch::Available(records) = adapter.load_folders(&request)? else {
            return Ok(false);
        };
        for record in records {
            let parent = self.folder_id_by_path(&record.parent_path);
            let mut inserted = self.insert_folders(parent, vec![record]);
            if let Some(id) = inserted.pop() {
                if let Some(parent) = parent {
                    if let Some(parent_node) = self.folders.get_mut(&parent) {
                        parent_node.children.push(id);
                    }
                } else {
                    self.root_folders.push(id);
                }
            }
        }
        self.selected_folder = parent_path.and_then(|path| self.folder_id_by_path(path));
        Ok(true)
    }

    /// Ports Ghidra function `FUN_014be5c0` at `0x014BE5C0`.
    ///
    /// Clears the existing file rows before constructing the recovered
    /// `getFolderFiles` request. Available parsed rows replace the list and
    /// clear the preview. A handled unavailable response returns `false`, keeps
    /// the list empty, and preserves the previous preview.
    ///
    /// # Errors
    ///
    /// Returns an adapter exception after clearing the file rows.
    pub fn load_remote_file_rows(
        &mut self,
        folder_path: &str,
        adapter: &mut impl RemoteOpenAdapter,
    ) -> Result<bool, String> {
        self.file_rows.clear();
        self.selected_file = None;
        let request = FileListRequest {
            endpoint: AJAX_ENDPOINT,
            operation: FILE_OPERATION,
            folder_path: folder_path.to_owned(),
            rooted_folder_key: format!("{EXAMPLES_ROOT_PREFIX}{folder_path}"),
            format: XML_FORMAT,
        };
        let RemoteFetch::Available(rows) = adapter.load_files(&request)? else {
            return Ok(false);
        };
        self.file_rows = rows;
        self.preview_path = None;
        Ok(true)
    }

    /// Ports Ghidra function `FUN_014bf0d0` at `0x014BF0D0`.
    ///
    /// Changes only the existing file-row presentation to Delphi `vsReport`.
    /// The report columns remain Name, Size, and Date.
    pub const fn show_report(&mut self) {
        self.presentation = ListPresentation::Report;
    }

    /// Ports Ghidra function `FUN_014bf140` at `0x014BF140`.
    ///
    /// Sets the accepted modal state only when a folder and file are selected.
    /// An incomplete selection is a silent no-op that leaves the dialog open.
    #[must_use]
    pub fn accept_if_selection_complete(&mut self) -> bool {
        if self.current_selection().is_none() {
            return false;
        }
        self.modal_state = ModalState::Accepted;
        true
    }

    fn insert_folders(
        &mut self,
        parent: Option<FolderId>,
        records: Vec<RemoteFolderRecord>,
    ) -> Vec<FolderId> {
        records
            .into_iter()
            .map(|record| {
                let id = self.next_folder_id;
                self.next_folder_id = self.next_folder_id.saturating_add(1);
                self.folders.insert(
                    id,
                    FolderNode {
                        id,
                        parent,
                        name: record.name,
                        path: record.path,
                        children: Vec::new(),
                        load_state: FolderLoadState::NotLoaded,
                    },
                );
                id
            })
            .collect()
    }

    #[must_use]
    pub fn current_selection(&self) -> Option<RemoteSelection> {
        let folder = self.folders.get(&self.selected_folder?)?;
        let file = self.file_rows.get(self.selected_file?)?;
        Some(RemoteSelection {
            folder_path: folder.path.clone(),
            file_name: file.name.clone(),
        })
    }

    /// Ports Ghidra function `FUN_014beb40` at `0x014BEB40`.
    ///
    /// Returns an empty key unless both a folder node and file row are
    /// selected. A complete selection joins the folder path and file name with
    /// the recovered remote-key separator.
    #[must_use]
    pub fn selected_remote_key(&self) -> String {
        self.current_selection()
            .map_or_else(String::new, |selection| selection.key())
    }

    fn folder_id_by_path(&self, path: &str) -> Option<FolderId> {
        self.folders
            .values()
            .find(|folder| folder.path == path)
            .map(|folder| folder.id)
    }

    #[must_use]
    pub const fn presentation(&self) -> ListPresentation {
        self.presentation
    }

    #[must_use]
    pub fn root_folders(&self) -> &[FolderId] {
        &self.root_folders
    }

    #[must_use]
    pub fn folder(&self, id: FolderId) -> Option<&FolderNode> {
        self.folders.get(&id)
    }

    #[must_use]
    pub fn file_rows(&self) -> &[RemoteFileRow] {
        &self.file_rows
    }

    #[must_use]
    pub fn preview_path(&self) -> Option<&Path> {
        self.preview_path.as_deref()
    }

    #[must_use]
    pub const fn modal_state(&self) -> ModalState {
        self.modal_state
    }

    #[must_use]
    pub const fn pending_action(&self) -> Option<PendingRemoteAction> {
        self.pending_action
    }
}

/// Ports Ghidra function `FUN_014be2b0` at `0x014BE2B0`.
///
/// Parses every `folder` element into its name, service-specific path, and
/// parent path in document order. The recovered symbol for the path-related
/// XML attribute is unavailable, so the service adapter supplies its name.
/// Missing attributes produce empty values, matching the recovered getter and
/// node-construction path.
///
/// `xmltree` is used instead of a custom XML tokenizer.
///
/// # Errors
///
/// Returns an XML parse error with remote-folder context.
pub fn parse_remote_folder_xml(
    xml: &str,
    path_attribute: &str,
) -> Result<Vec<RemoteFolderRecord>, String> {
    let root = XmlElement::parse(xml.as_bytes())
        .map_err(|error| format!("Invalid remote folder XML: {error}"))?;
    let mut elements = Vec::new();
    collect_named_elements(&root, "folder", &mut elements);
    Ok(elements
        .into_iter()
        .map(|element| RemoteFolderRecord {
            name: xml_attribute(element, "name"),
            path: xml_attribute(element, path_attribute),
            parent_path: xml_attribute(element, "parent"),
        })
        .collect())
}

/// Ports Ghidra function `FUN_014be850` at `0x014BE850`.
///
/// Parses every `file` element in document order. The name becomes the main
/// row text, while size and date remain the two report subitems.
///
/// `xmltree` is used instead of a custom XML tokenizer.
///
/// # Errors
///
/// Returns an XML parse error with remote-file context.
pub fn parse_remote_file_xml(xml: &str) -> Result<Vec<RemoteFileRow>, String> {
    let root = XmlElement::parse(xml.as_bytes())
        .map_err(|error| format!("Invalid remote file XML: {error}"))?;
    let mut elements = Vec::new();
    collect_named_elements(&root, "file", &mut elements);
    Ok(elements
        .into_iter()
        .map(|element| RemoteFileRow {
            name: xml_attribute(element, "name"),
            size: xml_attribute(element, "size"),
            date: xml_attribute(element, "date"),
        })
        .collect())
}

fn collect_named_elements<'a>(
    element: &'a XmlElement,
    name: &str,
    output: &mut Vec<&'a XmlElement>,
) {
    if element.name == name {
        output.push(element);
    }
    for child in &element.children {
        if let XMLNode::Element(child) = child {
            collect_named_elements(child, name, output);
        }
    }
}

fn xml_attribute(element: &XmlElement, name: &str) -> String {
    element.attributes.get(name).cloned().unwrap_or_default()
}

/// Ports Ghidra function `FUN_014c4380` at `0x014C4380`.
///
/// Checks remote prerequisites, loads the root folders, and gives a new iced
/// window to the modal adapter. Only an accepted selection constructs a
/// schematic request and downloads its derived file name. Cancel, rejected
/// prerequisites, unavailable roots, and unavailable output return no path.
///
/// The adapter owns service URL resolution, authentication, escaping, network
/// transport, helper-managed storage, and server error presentation.
///
/// # Errors
///
/// Returns a root-folder or schematic-download adapter exception.
pub fn open_remote_schematic(
    adapter: &mut impl RemoteOpenAdapter,
    show_modal: impl FnOnce(Window) -> Option<RemoteSelection>,
) -> Result<Option<PathBuf>, String> {
    if !adapter.prerequisites_available() {
        return Ok(None);
    }
    let mut window = Window::new(Vec::new());
    if !window.load_remote_folders(None, adapter)? {
        return Ok(None);
    }
    let selection = show_modal(window);
    let Some(selection) = selection else {
        return Ok(None);
    };
    let Some(destination_file_name) = Path::new(&selection.file_name)
        .file_name()
        .and_then(|name| name.to_str())
        .filter(|name| !name.is_empty())
        .map(str::to_owned)
    else {
        return Ok(None);
    };
    let request = SchematicRequest {
        endpoint: SCHEMATIC_ENDPOINT,
        selection_parameter: SELECTION_PARAMETER,
        rooted_selection_key: selection.rooted_key(),
        selection,
        destination_file_name,
    };
    match adapter.download_schematic(&request)? {
        RemoteFetch::Available(path) => Ok(Some(path)),
        RemoteFetch::Unavailable => Ok(None),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug)]
    struct TestAdapter {
        prerequisites: bool,
        folder_results: Vec<Result<RemoteFetch<Vec<RemoteFolderRecord>>, String>>,
        file_results: Vec<Result<RemoteFetch<Vec<RemoteFileRow>>, String>>,
        preview_result: Result<RemoteFetch<PathBuf>, String>,
        schematic_result: Result<RemoteFetch<PathBuf>, String>,
        folder_calls: Vec<FolderListRequest>,
        file_calls: Vec<FileListRequest>,
        preview_requests: Vec<PreviewRequest>,
        schematic_requests: Vec<SchematicRequest>,
    }

    impl Default for TestAdapter {
        fn default() -> Self {
            Self {
                prerequisites: true,
                folder_results: Vec::new(),
                file_results: Vec::new(),
                preview_result: Ok(RemoteFetch::Unavailable),
                schematic_result: Ok(RemoteFetch::Unavailable),
                folder_calls: Vec::new(),
                file_calls: Vec::new(),
                preview_requests: Vec::new(),
                schematic_requests: Vec::new(),
            }
        }
    }

    impl RemoteOpenAdapter for TestAdapter {
        fn prerequisites_available(&mut self) -> bool {
            self.prerequisites
        }

        fn load_folders(
            &mut self,
            request: &FolderListRequest,
        ) -> Result<RemoteFetch<Vec<RemoteFolderRecord>>, String> {
            self.folder_calls.push(request.clone());
            self.folder_results.remove(0)
        }

        fn load_files(
            &mut self,
            request: &FileListRequest,
        ) -> Result<RemoteFetch<Vec<RemoteFileRow>>, String> {
            self.file_calls.push(request.clone());
            self.file_results.remove(0)
        }

        fn download_preview(
            &mut self,
            request: &PreviewRequest,
        ) -> Result<RemoteFetch<PathBuf>, String> {
            self.preview_requests.push(request.clone());
            self.preview_result.clone()
        }

        fn download_schematic(
            &mut self,
            request: &SchematicRequest,
        ) -> Result<RemoteFetch<PathBuf>, String> {
            self.schematic_requests.push(request.clone());
            self.schematic_result.clone()
        }
    }

    #[test]
    fn list_and_report_commands_change_presentation_only() {
        let mut window = window();
        let rows = window.file_rows.clone();
        let preview = window.preview_path.clone();

        window.show_list();
        assert_eq!(window.presentation(), ListPresentation::List);
        assert_eq!(window.file_rows, rows);
        assert_eq!(window.preview_path, preview);

        window.show_report();
        assert_eq!(window.presentation(), ListPresentation::Report);
        assert_eq!(LIST_COLUMNS, ["Name", "Size", "Date"]);
        assert_eq!(report_columns(), &REPORT_COLUMNS);
        assert_eq!(REPORT_COLUMNS.map(|column| column.width), [150, 80, 140]);
    }

    #[test]
    fn iced_messages_stage_remote_actions_without_live_window_io() {
        let mut window = window();
        let root = window.root_folders()[0];

        drop(window.update(Message::ShowList));
        assert_eq!(window.presentation(), ListPresentation::List);

        drop(window.update(Message::FolderSelected(Some(root))));
        assert_eq!(
            window.pending_action(),
            Some(PendingRemoteAction::LoadFolder(root))
        );

        drop(window.update(Message::FileSelected(Some(0))));
        assert_eq!(
            window.pending_action(),
            Some(PendingRemoteAction::RefreshPreview)
        );

        drop(window.update(Message::Accept));
        assert_eq!(window.modal_state(), ModalState::Accepted);
    }

    #[test]
    fn missing_folder_selection_is_a_noop() {
        let mut window = window();
        let before = window.clone();
        let mut adapter = TestAdapter::default();

        let outcome = window
            .select_remote_folder(None, &mut adapter)
            .expect("missing selection must succeed");

        assert_eq!(outcome, None);
        assert_eq!(window, before);
        assert!(adapter.folder_calls.is_empty());
        assert!(adapter.file_calls.is_empty());
    }

    #[test]
    fn repeated_root_load_uses_existing_nodes_without_service_request() {
        let mut window = window();
        let roots = window.root_folders.clone();
        let mut adapter = TestAdapter::default();

        let loaded = window
            .load_remote_folders(None, &mut adapter)
            .expect("root shortcut must succeed");

        assert!(loaded);
        assert_eq!(window.root_folders, roots);
        assert!(adapter.folder_calls.is_empty());
    }

    #[test]
    fn first_folder_click_loads_children_and_files_then_clears_preview() {
        let mut window = window();
        let root = window.root_folders()[0];
        let mut adapter = TestAdapter {
            folder_results: vec![Ok(RemoteFetch::Available(vec![folder_with_parent(
                "Child",
                "root/child",
                "root",
            )]))],
            file_results: vec![Ok(RemoteFetch::Available(vec![file("new.tsc")]))],
            ..TestAdapter::default()
        };

        let outcome = window
            .select_remote_folder(Some(root), &mut adapter)
            .expect("folder load must succeed");

        assert_eq!(
            outcome,
            Some(FolderLoadOutcome {
                child_folders_available: true,
                files_available: true,
            })
        );
        assert_eq!(window.folder(root).expect("root exists").children.len(), 1);
        assert_eq!(
            window.folder(root).expect("root exists").load_state,
            FolderLoadState::Loaded
        );
        assert_eq!(window.file_rows(), [file("new.tsc")]);
        assert_eq!(window.preview_path(), None);
    }

    #[test]
    fn unavailable_child_load_is_marked_and_not_retried() {
        let mut window = window();
        let root = window.root_folders()[0];
        let mut adapter = TestAdapter {
            folder_results: vec![Ok(RemoteFetch::Unavailable)],
            file_results: vec![Ok(RemoteFetch::Unavailable), Ok(RemoteFetch::Unavailable)],
            ..TestAdapter::default()
        };

        window
            .select_remote_folder(Some(root), &mut adapter)
            .expect("handled failure must succeed");
        window
            .select_remote_folder(Some(root), &mut adapter)
            .expect("second click must succeed");

        assert_eq!(adapter.folder_calls.len(), 1);
        assert_eq!(adapter.folder_calls[0].parent_path.as_deref(), Some("root"));
        assert_eq!(adapter.folder_calls[0].endpoint, AJAX_ENDPOINT);
        assert_eq!(adapter.folder_calls[0].operation, FOLDER_OPERATION);
        assert_eq!(
            adapter
                .file_calls
                .iter()
                .map(|request| request.folder_path.as_str())
                .collect::<Vec<_>>(),
            ["root", "root"]
        );
        assert_eq!(adapter.file_calls[0].operation, FILE_OPERATION);
        assert_eq!(adapter.file_calls[0].rooted_folder_key, "EXAMPLESROOT|root");
    }

    #[test]
    fn unavailable_file_load_clears_rows_but_preserves_preview() {
        let mut window = window();
        let root = window.root_folders()[0];
        let old_preview = window.preview_path.clone();
        let mut adapter = TestAdapter {
            folder_results: vec![Ok(RemoteFetch::Available(Vec::new()))],
            file_results: vec![Ok(RemoteFetch::Unavailable)],
            ..TestAdapter::default()
        };

        window
            .select_remote_folder(Some(root), &mut adapter)
            .expect("handled failure must succeed");

        assert!(window.file_rows().is_empty());
        assert_eq!(window.preview_path, old_preview);
    }

    #[test]
    fn child_adapter_exception_stops_before_mark_and_file_load() {
        let mut window = window();
        let root = window.root_folders()[0];
        let mut adapter = TestAdapter {
            folder_results: vec![Err("transport".to_owned())],
            ..TestAdapter::default()
        };

        let error = window
            .select_remote_folder(Some(root), &mut adapter)
            .expect_err("exception must propagate");

        assert_eq!(error, "transport");
        assert_eq!(
            window.folder(root).expect("root exists").load_state,
            FolderLoadState::NotLoaded
        );
        assert!(adapter.file_calls.is_empty());
    }

    #[test]
    fn preview_requires_complete_selection_and_uses_current_size() {
        let mut window = window();
        let mut adapter = TestAdapter {
            preview_result: Ok(RemoteFetch::Available(PathBuf::from("preview.gif"))),
            ..TestAdapter::default()
        };

        assert!(
            !window
                .download_selected_preview(&mut adapter)
                .expect("missing selection must succeed")
        );
        assert!(adapter.preview_requests.is_empty());

        select_first_file(&mut window);
        window.preview_width = 320;
        window.preview_height = 200;
        assert!(
            window
                .refresh_preview_for_file_click(&mut adapter)
                .expect("preview must succeed")
        );

        let request = &adapter.preview_requests[0];
        assert_eq!(request.endpoint, PREVIEW_ENDPOINT);
        assert_eq!(request.selection_parameter, SELECTION_PARAMETER);
        assert_eq!(request.selection.folder_path, "root");
        assert_eq!(request.selection.file_name, "example.tsc");
        assert_eq!(
            request.rooted_selection_key,
            "EXAMPLESROOT|root|example.tsc"
        );
        assert_eq!((request.width, request.height), (320, 200));
        assert_eq!(window.preview_path(), Some(Path::new("preview.gif")));
    }

    #[test]
    fn unavailable_preview_preserves_existing_picture() {
        let mut window = window();
        select_first_file(&mut window);
        let old_preview = window.preview_path.clone();
        let mut adapter = TestAdapter::default();

        assert!(
            !window
                .download_selected_preview(&mut adapter)
                .expect("missing output must succeed")
        );

        assert_eq!(window.preview_path, old_preview);
    }

    #[test]
    fn accept_requires_both_folder_and_file_selections() {
        let mut window = window();

        assert!(!window.accept_if_selection_complete());
        assert_eq!(window.selected_remote_key(), "");
        assert_eq!(window.modal_state(), ModalState::Open);

        select_first_file(&mut window);
        assert_eq!(window.selected_remote_key(), "root|example.tsc");
        assert!(window.accept_if_selection_complete());
        assert_eq!(window.modal_state(), ModalState::Accepted);
    }

    #[test]
    fn workflow_stops_before_window_when_prerequisite_fails() {
        let mut adapter = TestAdapter {
            prerequisites: false,
            ..TestAdapter::default()
        };
        let mut shown = false;

        let result = open_remote_schematic(&mut adapter, |_| {
            shown = true;
            None
        })
        .expect("prerequisite rejection must succeed");

        assert_eq!(result, None);
        assert!(!shown);
        assert!(adapter.folder_calls.is_empty());
    }

    #[test]
    fn workflow_cancel_does_not_download_schematic() {
        let mut adapter = TestAdapter {
            folder_results: vec![Ok(RemoteFetch::Available(vec![folder("Root", "root")]))],
            ..TestAdapter::default()
        };

        let result = open_remote_schematic(&mut adapter, |_| None)
            .expect("dialog cancellation must succeed");

        assert_eq!(result, None);
        assert!(adapter.schematic_requests.is_empty());
    }

    #[test]
    fn accepted_workflow_downloads_derived_schematic_file_name() {
        let mut adapter = TestAdapter {
            folder_results: vec![Ok(RemoteFetch::Available(vec![folder("Root", "root")]))],
            schematic_result: Ok(RemoteFetch::Available(PathBuf::from("cache/example.tsc"))),
            ..TestAdapter::default()
        };

        let result = open_remote_schematic(&mut adapter, |_| {
            Some(RemoteSelection {
                folder_path: "root/examples".to_owned(),
                file_name: "folder/example.tsc".to_owned(),
            })
        })
        .expect("accepted download must succeed");

        assert_eq!(result, Some(PathBuf::from("cache/example.tsc")));
        assert_eq!(adapter.schematic_requests.len(), 1);
        let request = &adapter.schematic_requests[0];
        assert_eq!(request.endpoint, SCHEMATIC_ENDPOINT);
        assert_eq!(request.selection_parameter, SELECTION_PARAMETER);
        assert_eq!(
            request.rooted_selection_key,
            "EXAMPLESROOT|root/examples|folder/example.tsc"
        );
        assert_eq!(request.destination_file_name, "example.tsc");
    }

    #[test]
    fn folder_xml_parser_preserves_document_order_and_parent_paths() {
        let records = parse_remote_folder_xml(
            r#"<folders><folder name="Analog" path="root/analog" parent="root"/><group><folder name="Digital" path="root/digital" parent="root"/></group></folders>"#,
            "path",
        )
        .expect("folder XML must parse");

        assert_eq!(
            records,
            [
                RemoteFolderRecord {
                    name: "Analog".to_owned(),
                    path: "root/analog".to_owned(),
                    parent_path: "root".to_owned(),
                },
                RemoteFolderRecord {
                    name: "Digital".to_owned(),
                    path: "root/digital".to_owned(),
                    parent_path: "root".to_owned(),
                },
            ]
        );
    }

    #[test]
    fn file_xml_parser_maps_name_size_and_date_to_rows() {
        let rows = parse_remote_file_xml(
            r#"<files><file name="one.tsc" size="12 KB" date="2026-08-20"/><file name="two.tsc" size="8 KB" date="2026-08-19"/></files>"#,
        )
        .expect("file XML must parse");

        assert_eq!(
            rows[0],
            RemoteFileRow {
                name: "one.tsc".to_owned(),
                size: "12 KB".to_owned(),
                date: "2026-08-20".to_owned(),
            }
        );
        assert_eq!(rows[1].name, "two.tsc");
    }

    #[test]
    fn invalid_remote_xml_reports_parser_context() {
        let folder_error =
            parse_remote_folder_xml("<folders>", "path").expect_err("invalid folder XML must fail");
        let file_error = parse_remote_file_xml("<files>").expect_err("invalid file XML must fail");

        assert!(folder_error.starts_with("Invalid remote folder XML:"));
        assert!(file_error.starts_with("Invalid remote file XML:"));
    }

    fn window() -> Window {
        let mut window = Window::new(vec![folder("Root", "root")]);
        window.file_rows = vec![file("example.tsc")];
        window.preview_path = Some(PathBuf::from("old-preview.gif"));
        window
    }

    fn select_first_file(window: &mut Window) {
        window.selected_folder = window.root_folders.first().copied();
        window.selected_file = Some(0);
    }

    fn folder(name: &str, path: &str) -> RemoteFolderRecord {
        folder_with_parent(name, path, "")
    }

    fn folder_with_parent(name: &str, path: &str, parent_path: &str) -> RemoteFolderRecord {
        RemoteFolderRecord {
            name: name.to_owned(),
            path: path.to_owned(),
            parent_path: parent_path.to_owned(),
        }
    }

    fn file(name: &str) -> RemoteFileRow {
        RemoteFileRow {
            name: name.to_owned(),
            size: "1 KB".to_owned(),
            date: "2026-08-20".to_owned(),
        }
    }
}
