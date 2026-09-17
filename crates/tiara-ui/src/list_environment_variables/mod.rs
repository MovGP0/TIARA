//! Iced state for the recovered read-only TINA folder list dialog.

pub const TITLE: &str = "Environment Variables";
pub const FORM_RESOURCE: &str = "frmListEnvVars";

pub const SETTINGS_FOLDER_KEY: &str = "d.ListEnvVars_sSettingsFolder";
pub const CATALOG_FOLDER_KEY: &str = "d.ListEnvVars_sCatalogFolder";
pub const COMMON_CATALOG_FOLDER_KEY: &str = "d.ListEnvVars_sCommonCatalogFolder";
pub const TEMP_FOLDER_KEY: &str = "d.ListEnvVars_sTempFolder";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct EnvironmentFolderPaths<'a> {
    pub settings: &'a str,
    pub private_catalog: &'a str,
    pub common_catalog: &'a str,
    pub temporary: &'a str,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EnvironmentFolderRow {
    pub label: String,
    pub path: String,
}

pub trait EnvironmentFolderListHost {
    fn install_notification_hook(&mut self);
    fn localize(&mut self, key: &str) -> String;
}

pub trait EnvironmentFolderOpenHost {
    fn folder_text_at_pointer(&mut self) -> Option<String>;
    fn explore_folder(&mut self, path: &str);
}

/// The recovered Delphi `TMouseButton` values reported by the folder list.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseButton {
    Left,
    Right,
    Middle,
}

/// A pointer position in folder-list client coordinates.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ClientPoint {
    pub x: i32,
    pub y: i32,
}

/// A pointer position in screen coordinates.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ScreenPoint {
    pub x: i32,
    pub y: i32,
}

/// The single sub-item hit-test record the recovered form keeps for its popup
/// commands.
///
/// The recovered form clears this record on every mouse-down, so a cleared
/// record carries row and column zero and names no folder value.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct SubItemHitTest {
    pub point: ClientPoint,
    pub row: usize,
    pub column: usize,
}

impl SubItemHitTest {
    /// Reports whether the record names a folder-path cell rather than the
    /// label column.
    #[must_use]
    pub const fn names_path_cell(&self) -> bool {
        self.column > 0
    }
}

pub trait EnvironmentFolderContextMenuHost {
    /// Resolves the list row whose label cell covers the point.
    fn row_at(&mut self, point: ClientPoint) -> Option<usize>;

    /// Resolves the row and column of the cell under the point.
    fn sub_item_at(&mut self, point: ClientPoint) -> Option<(usize, usize)>;

    fn client_to_screen(&mut self, point: ClientPoint) -> ScreenPoint;

    fn show_folder_popup_menu(&mut self, at: ScreenPoint);
}

pub trait EnvironmentFolderClipboardHost {
    /// Reads one folder-path cell. A missing cell reads as an empty value.
    fn sub_item_text(&mut self, row: usize, sub_item_index: usize) -> String;

    fn open_clipboard(&mut self);

    /// Publishes the exact text as `CF_UNICODETEXT`.
    fn write_unicode_text(&mut self, text: &str);

    fn close_clipboard(&mut self);
}

pub trait EnvironmentFolderHookHost {
    /// The list notification handler that the create path saved.
    type Hook;

    fn saved_notification_hook(&self) -> Self::Hook;

    fn set_notification_hook(&mut self, hook: Self::Hook);
}

pub trait EnvironmentFolderModalHost {
    /// Shows the read-only folder list and reports how the user closed it.
    fn show_environment_folder_dialog(&mut self, paths: EnvironmentFolderPaths<'_>) -> ModalResult;
}

/// The recovered modal outcome of the folder list dialog.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Closed,
    Cancel,
}

/// Implements Ghidra function `FUN_01b75f80` at `0x01B75F80`.
///
/// Installs the list notification hook and creates a fixed-order snapshot of
/// the settings, private catalog, common catalog, and temporary folder paths.
/// Empty paths remain visible rows. This function does not enumerate operating-
/// system environment variables, sort, filter, validate, or persist paths.
pub fn create_environment_folder_rows(
    paths: EnvironmentFolderPaths<'_>,
    host: &mut impl EnvironmentFolderListHost,
) -> Vec<EnvironmentFolderRow> {
    host.install_notification_hook();
    [
        (SETTINGS_FOLDER_KEY, paths.settings),
        (CATALOG_FOLDER_KEY, paths.private_catalog),
        (COMMON_CATALOG_FOLDER_KEY, paths.common_catalog),
        (TEMP_FOLDER_KEY, paths.temporary),
    ]
    .into_iter()
    .map(|(key, path)| EnvironmentFolderRow {
        label: host.localize(key),
        path: path.to_owned(),
    })
    .collect()
}

/// Implements Ghidra function `FUN_01b76360` at `0x01B76360`.
///
/// Resolves the folder cell under the pointer and requests Explorer for its
/// exact nonempty text. A missing or empty cell is a silent no-op. The shell
/// request result is intentionally not checked by this recovered UI path.
pub fn open_environment_folder_at_pointer(host: &mut impl EnvironmentFolderOpenHost) -> bool {
    let Some(path) = host
        .folder_text_at_pointer()
        .filter(|path| !path.is_empty())
    else {
        return false;
    };

    host.explore_folder(&path);
    true
}

/// Implements Ghidra function `FUN_01b76540` at `0x01B76540`.
///
/// Clears the single sub-item hit-test record on every mouse-down and stores
/// the client point. Only the right button continues. A point that the label
/// column already claims keeps the popup closed, because the popup commands
/// address a folder-path cell. Otherwise a sub-item hit test resolves the cell
/// and the popup opens at the screen position of the same point. A failed hit
/// test leaves the record cleared, so the copy command stays a no-op. The
/// handler reads no folder value, changes no selection, and persists nothing.
pub fn record_folder_context_target(
    button: MouseButton,
    point: ClientPoint,
    host: &mut impl EnvironmentFolderContextMenuHost,
) -> SubItemHitTest {
    let cleared = SubItemHitTest {
        point,
        ..SubItemHitTest::default()
    };
    if button != MouseButton::Right || host.row_at(point).is_some() {
        return cleared;
    }

    let Some((row, column)) = host.sub_item_at(point) else {
        return cleared;
    };

    let at = host.client_to_screen(point);
    host.show_folder_popup_menu(at);
    SubItemHitTest { point, row, column }
}

/// Implements Ghidra function `FUN_01b76620` at `0x01B76620`.
///
/// Reads the folder-path cell that the preceding right-click hit test recorded
/// and publishes its exact text on the process-wide clipboard as Unicode text.
/// An empty value performs no clipboard operation, so the clipboard keeps its
/// previous content. The command copies one path, never a `name=value` pair and
/// never all four rows.
///
/// The recovered handler indexes the sub-item list without a guard. The popup
/// only becomes reachable through a successful sub-item hit test, so a cleared
/// record is reported here as the documented no-op instead of an out-of-range
/// read.
pub fn copy_folder_path_to_clipboard(
    hit: SubItemHitTest,
    host: &mut impl EnvironmentFolderClipboardHost,
) -> bool {
    if !hit.names_path_cell() {
        return false;
    }

    let text = host.sub_item_text(hit.row, hit.column - 1);
    if text.is_empty() {
        return false;
    }

    host.open_clipboard();
    host.write_unicode_text(&text);
    host.close_clipboard();
    true
}

/// Implements Ghidra function `FUN_01b766e0` at `0x01B766E0`.
///
/// Restores the list notification handler that the create path saved, which
/// re-enables interactive column-width tracking. The recovered handler assigns
/// the saved value unconditionally and performs no other teardown: it writes no
/// setting, reports no error, and leaves the four folder paths unchanged.
pub fn restore_environment_folder_hook(host: &mut impl EnvironmentFolderHookHost) {
    let saved = host.saved_notification_hook();
    host.set_notification_hook(saved);
}

/// Implements Ghidra function `FUN_01b7c620` at `0x01B7C620`.
///
/// Opens the read-only folder list as an application-owned modal dialog and
/// discards its modal result. Editor Options stages nothing from this dialog,
/// so the launcher writes no setting and updates no Editor Options control. The
/// dialog reads the four current folder strings when it opens; it never
/// refreshes while open, and a later click reads them again.
pub fn show_environment_folders_modally(
    paths: EnvironmentFolderPaths<'_>,
    host: &mut impl EnvironmentFolderModalHost,
) {
    let _ = host.show_environment_folder_dialog(paths);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Host {
        hooks: usize,
        keys: Vec<String>,
    }

    impl EnvironmentFolderListHost for Host {
        fn install_notification_hook(&mut self) {
            self.hooks += 1;
        }

        fn localize(&mut self, key: &str) -> String {
            self.keys.push(key.to_owned());
            format!("label:{key}")
        }
    }

    #[derive(Default)]
    struct OpenHost {
        text: Option<String>,
        explored: Vec<String>,
    }

    impl EnvironmentFolderOpenHost for OpenHost {
        fn folder_text_at_pointer(&mut self) -> Option<String> {
            self.text.take()
        }

        fn explore_folder(&mut self, path: &str) {
            self.explored.push(path.to_owned());
        }
    }

    #[test]
    fn create_installs_hook_and_keeps_all_four_paths_in_fixed_order() {
        let mut host = Host::default();

        let rows = create_environment_folder_rows(
            EnvironmentFolderPaths {
                settings: "settings",
                private_catalog: "",
                common_catalog: "common",
                temporary: "temporary",
            },
            &mut host,
        );

        assert_eq!(host.hooks, 1);
        assert_eq!(
            host.keys,
            [
                SETTINGS_FOLDER_KEY,
                CATALOG_FOLDER_KEY,
                COMMON_CATALOG_FOLDER_KEY,
                TEMP_FOLDER_KEY,
            ]
        );
        assert_eq!(rows.len(), 4);
        assert_eq!(rows[0].path, "settings");
        assert_eq!(rows[1].path, "");
        assert_eq!(rows[2].path, "common");
        assert_eq!(rows[3].path, "temporary");
        assert_eq!(rows[0].label, format!("label:{SETTINGS_FOLDER_KEY}"));
    }

    #[test]
    fn double_click_explores_only_a_nonempty_path_under_the_pointer() {
        let mut host = OpenHost::default();
        assert!(!open_environment_folder_at_pointer(&mut host));

        host.text = Some(String::new());
        assert!(!open_environment_folder_at_pointer(&mut host));
        assert!(host.explored.is_empty());

        host.text = Some(r"C:\Users\Example\Settings".to_owned());
        assert!(open_environment_folder_at_pointer(&mut host));
        assert_eq!(host.explored, [r"C:\Users\Example\Settings"]);
    }

    #[derive(Default)]
    struct ContextHost {
        label_column_rows: Vec<ClientPoint>,
        cells: Vec<(ClientPoint, usize, usize)>,
        popups: Vec<ScreenPoint>,
    }

    impl EnvironmentFolderContextMenuHost for ContextHost {
        fn row_at(&mut self, point: ClientPoint) -> Option<usize> {
            self.label_column_rows
                .iter()
                .position(|candidate| *candidate == point)
        }

        fn sub_item_at(&mut self, point: ClientPoint) -> Option<(usize, usize)> {
            self.cells
                .iter()
                .find(|(candidate, _, _)| *candidate == point)
                .map(|(_, row, column)| (*row, *column))
        }

        fn client_to_screen(&mut self, point: ClientPoint) -> ScreenPoint {
            ScreenPoint {
                x: point.x + 100,
                y: point.y + 200,
            }
        }

        fn show_folder_popup_menu(&mut self, at: ScreenPoint) {
            self.popups.push(at);
        }
    }

    #[derive(Default)]
    struct ClipboardHost {
        cells: Vec<((usize, usize), String)>,
        log: Vec<String>,
    }

    impl EnvironmentFolderClipboardHost for ClipboardHost {
        fn sub_item_text(&mut self, row: usize, sub_item_index: usize) -> String {
            self.cells
                .iter()
                .find(|(cell, _)| *cell == (row, sub_item_index))
                .map_or_else(String::new, |(_, text)| text.clone())
        }

        fn open_clipboard(&mut self) {
            self.log.push("open".to_owned());
        }

        fn write_unicode_text(&mut self, text: &str) {
            self.log.push(format!("write:{text}"));
        }

        fn close_clipboard(&mut self) {
            self.log.push("close".to_owned());
        }
    }

    #[derive(Default)]
    struct HookHost {
        saved: u32,
        installed: Vec<u32>,
    }

    impl EnvironmentFolderHookHost for HookHost {
        type Hook = u32;

        fn saved_notification_hook(&self) -> u32 {
            self.saved
        }

        fn set_notification_hook(&mut self, hook: u32) {
            self.installed.push(hook);
        }
    }

    #[derive(Default)]
    struct ModalHost {
        shown: Vec<String>,
        result: Option<ModalResult>,
    }

    impl EnvironmentFolderModalHost for ModalHost {
        fn show_environment_folder_dialog(
            &mut self,
            paths: EnvironmentFolderPaths<'_>,
        ) -> ModalResult {
            self.shown.push(paths.settings.to_owned());
            self.result.take().unwrap_or(ModalResult::Closed)
        }
    }

    const PATH_CELL: ClientPoint = ClientPoint { x: 240, y: 48 };
    const LABEL_CELL: ClientPoint = ClientPoint { x: 20, y: 48 };

    #[test]
    fn right_click_on_a_path_cell_records_it_and_opens_the_popup_in_screen_space() {
        let mut host = ContextHost {
            cells: vec![(PATH_CELL, 2, 1)],
            ..ContextHost::default()
        };

        let hit = record_folder_context_target(MouseButton::Right, PATH_CELL, &mut host);

        assert_eq!(
            hit,
            SubItemHitTest {
                point: PATH_CELL,
                row: 2,
                column: 1,
            }
        );
        assert_eq!(host.popups, [ScreenPoint { x: 340, y: 248 }]);
    }

    #[test]
    fn only_a_right_click_outside_the_label_column_opens_the_popup() {
        let mut host = ContextHost {
            label_column_rows: vec![LABEL_CELL],
            cells: vec![(PATH_CELL, 2, 1), (LABEL_CELL, 2, 0)],
            ..ContextHost::default()
        };

        for button in [MouseButton::Left, MouseButton::Middle] {
            let hit = record_folder_context_target(button, PATH_CELL, &mut host);
            assert_eq!(hit.point, PATH_CELL);
            assert!(!hit.names_path_cell());
        }

        let hit = record_folder_context_target(MouseButton::Right, LABEL_CELL, &mut host);
        assert!(!hit.names_path_cell());
        assert!(host.popups.is_empty());
    }

    #[test]
    fn a_failed_sub_item_hit_test_clears_the_record_and_keeps_the_popup_closed() {
        let mut host = ContextHost::default();
        let empty = ClientPoint { x: 400, y: 900 };

        let hit = record_folder_context_target(MouseButton::Right, empty, &mut host);

        assert_eq!(
            hit,
            SubItemHitTest {
                point: empty,
                row: 0,
                column: 0,
            }
        );
        assert!(host.popups.is_empty());
    }

    #[test]
    fn copy_publishes_the_exact_recorded_path_between_open_and_close() {
        let mut host = ClipboardHost {
            cells: vec![((2, 0), r"C:\ProgramData\TINA\Catalog".to_owned())],
            ..ClipboardHost::default()
        };

        assert!(copy_folder_path_to_clipboard(
            SubItemHitTest {
                point: PATH_CELL,
                row: 2,
                column: 1,
            },
            &mut host,
        ));
        assert_eq!(
            host.log,
            [
                "open".to_owned(),
                r"write:C:\ProgramData\TINA\Catalog".to_owned(),
                "close".to_owned(),
            ]
        );
    }

    #[test]
    fn copy_is_a_no_op_for_a_cleared_record_and_for_an_empty_path() {
        let mut host = ClipboardHost {
            cells: vec![((3, 0), String::new())],
            ..ClipboardHost::default()
        };

        assert!(!copy_folder_path_to_clipboard(
            SubItemHitTest::default(),
            &mut host
        ));
        assert!(!copy_folder_path_to_clipboard(
            SubItemHitTest {
                point: PATH_CELL,
                row: 3,
                column: 1,
            },
            &mut host,
        ));
        assert!(host.log.is_empty());
    }

    #[test]
    fn destroy_reinstalls_the_saved_list_notification_hook() {
        let mut host = HookHost {
            saved: 7,
            installed: Vec::new(),
        };

        restore_environment_folder_hook(&mut host);

        assert_eq!(host.installed, [7]);
        assert_eq!(host.saved, 7);
    }

    #[test]
    fn the_launcher_shows_the_folder_list_modally_and_ignores_the_result() {
        let mut host = ModalHost {
            result: Some(ModalResult::Cancel),
            ..ModalHost::default()
        };

        show_environment_folders_modally(
            EnvironmentFolderPaths {
                settings: r"C:\Users\Example\TINA",
                private_catalog: "",
                common_catalog: "",
                temporary: "",
            },
            &mut host,
        );

        assert_eq!(host.shown, [r"C:\Users\Example\TINA"]);
    }
}
