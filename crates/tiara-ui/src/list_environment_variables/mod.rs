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
}
