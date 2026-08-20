use std::collections::BTreeMap;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CatalogDevice {
    pub name: String,
    pub category_index: usize,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct HdlCatalog {
    pub categories: Vec<String>,
    pub devices: Vec<CatalogDevice>,
    descriptions_by_lowercase_name: BTreeMap<String, String>,
}

impl HdlCatalog {
    #[must_use]
    pub fn new(
        categories: Vec<String>,
        devices: Vec<CatalogDevice>,
        descriptions: impl IntoIterator<Item = (String, String)>,
    ) -> Self {
        Self {
            categories,
            devices,
            descriptions_by_lowercase_name: descriptions
                .into_iter()
                .map(|(name, description)| (name.to_lowercase(), description))
                .collect(),
        }
    }

    #[must_use]
    pub fn description(&self, name: &str) -> &str {
        self.descriptions_by_lowercase_name
            .get(&name.to_lowercase())
            .map_or("", String::as_str)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PickerLists {
    pub complete_entries: Vec<String>,
    pub active_entries: Vec<String>,
    pub display_entries: Vec<String>,
    pub category_index: usize,
}

impl PickerLists {
    #[must_use]
    pub const fn new(complete_entries: Vec<String>) -> Self {
        Self {
            complete_entries,
            active_entries: Vec::new(),
            display_entries: Vec::new(),
            category_index: 0,
        }
    }

    /// Reimplements Ghidra function `FUN_01706ab0` at `0x01706AB0`.
    pub fn rebuild(&mut self, category_index: usize, catalog: &HdlCatalog) {
        self.category_index = category_index;
        self.active_entries = if category_index == 0 {
            self.complete_entries.clone()
        } else {
            catalog
                .devices
                .iter()
                .filter(|device| device.category_index == category_index - 1)
                .map(|device| device.name.to_uppercase())
                .collect()
        };
        self.display_entries =
            format_display_entries(&self.complete_entries, &self.active_entries, catalog);
    }
}

/// Reimplements Ghidra function `FUN_01706490` at `0x01706490`.
///
/// Raw names and ordering remain unchanged. Descriptions use lowercase lookup
/// keys, and the separate display strings use the widest master name plus two
/// spaces as the description column.
#[must_use]
pub fn format_display_entries(
    complete_entries: &[String],
    active_entries: &[String],
    catalog: &HdlCatalog,
) -> Vec<String> {
    let description_column = complete_entries
        .iter()
        .map(|entry| entry.chars().count())
        .max()
        .unwrap_or_default()
        + 2;
    active_entries
        .iter()
        .map(|entry| {
            let padding = description_column.saturating_sub(entry.chars().count());
            format!(
                "{entry}{}{description}",
                " ".repeat(padding),
                description = catalog.description(entry),
            )
        })
        .collect()
}

#[must_use]
pub fn position_display(selected_index: Option<usize>, visible_count: usize) -> String {
    let position = selected_index.map_or(0, |index| index.saturating_add(1));
    format!("{position}/{visible_count}")
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PickerTarget {
    pub selected_entry: String,
    pub secondary_text: String,
    pub reset_value: u64,
}

/// Reimplements Ghidra function `FUN_01709150` at `0x01709150`.
///
/// The caller-owned target changes only for an accepted, in-range staged
/// index. The selected string is copied before picker-owned lists are dropped.
pub fn copy_accepted_entry(
    target: &mut PickerTarget,
    complete_entries: &[String],
    modal_accepted: bool,
    staged_complete_index: Option<usize>,
) -> i32 {
    let Some(entry) = modal_accepted
        .then_some(staged_complete_index)
        .flatten()
        .and_then(|index| complete_entries.get(index))
    else {
        return -1;
    };
    target.selected_entry.clone_from(entry);
    target.secondary_text.clear();
    target.reset_value = 0;
    57
}

#[cfg(test)]
mod tests {
    use super::{
        CatalogDevice, HdlCatalog, PickerLists, PickerTarget, copy_accepted_entry, position_display,
    };

    fn catalog() -> HdlCatalog {
        HdlCatalog::new(
            vec!["Logic".to_owned(), "Memory".to_owned()],
            vec![
                CatalogDevice {
                    name: "and2".to_owned(),
                    category_index: 0,
                },
                CatalogDevice {
                    name: "ram".to_owned(),
                    category_index: 1,
                },
            ],
            [
                ("and2".to_owned(), "Two-input AND".to_owned()),
                ("ram".to_owned(), "Memory".to_owned()),
            ],
        )
    }

    #[test]
    fn all_category_preserves_master_names_and_builds_descriptions() {
        let mut lists = PickerLists::new(vec!["AND2".to_owned(), "RAM".to_owned()]);
        lists.rebuild(0, &catalog());
        assert_eq!(lists.active_entries, ["AND2", "RAM"]);
        assert_eq!(lists.display_entries[0], "AND2  Two-input AND");
        assert_eq!(lists.display_entries[1], "RAM   Memory");
    }

    #[test]
    fn category_rebuild_uses_uppercase_catalog_device_names() {
        let mut lists = PickerLists::new(vec!["AND2".to_owned(), "RAM".to_owned()]);
        lists.rebuild(2, &catalog());
        assert_eq!(lists.active_entries, ["RAM"]);
        assert_eq!(lists.display_entries, ["RAM   Memory"]);
    }

    #[test]
    fn position_display_uses_one_based_selection_and_zero_for_none() {
        assert_eq!(position_display(Some(0), 12), "1/12");
        assert_eq!(position_display(None, 0), "0/0");
    }

    #[test]
    fn copy_back_changes_target_only_for_valid_acceptance() {
        let entries = ["AND2".to_owned()];
        let original = PickerTarget {
            selected_entry: "OLD".to_owned(),
            secondary_text: "keep".to_owned(),
            reset_value: 9,
        };
        let mut target = original.clone();
        assert_eq!(copy_accepted_entry(&mut target, &entries, true, None), -1);
        assert_eq!(target, original);
        assert_eq!(
            copy_accepted_entry(&mut target, &entries, true, Some(0)),
            57
        );
        assert_eq!(target.selected_entry, "AND2");
        assert!(target.secondary_text.is_empty());
        assert_eq!(target.reset_value, 0);
    }
}
