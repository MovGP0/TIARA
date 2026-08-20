#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CatalogueEntry {
    pub display_name: String,
    pub classification: String,
}

impl CatalogueEntry {
    #[must_use]
    pub fn is_eligible_for(&self, classification_filter: Option<&str>) -> bool {
        self.classification != "[Internal]"
            && classification_filter.is_none_or(|filter| self.classification == filter)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DataCatalogueSection {
    pub heading: String,
    pub count_label: String,
    pub classification_filter: String,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SharedCatalogue {
    pub spice_subcircuits: Vec<CatalogueEntry>,
    pub spice_models: Vec<CatalogueEntry>,
    pub four_pole_s_parameters: Vec<CatalogueEntry>,
    pub two_pole_s_parameters: Vec<CatalogueEntry>,
    pub data_entries: Vec<CatalogueEntry>,
    pub data_sections: Vec<DataCatalogueSection>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TinaModel {
    pub display_name: String,
    pub eligible: bool,
}

/// Reimplements Ghidra function `FUN_0172f660` at `0x0172F660`.
///
/// Eligible models retain increasing source order. Lines contain four padded
/// 30-character columns, including the final partial or empty line.
pub fn append_tina_model_inventory(lines: &mut Vec<String>, models: &[TinaModel]) -> usize {
    lines.extend([
        String::new(),
        String::new(),
        "TINA Models".to_owned(),
        String::new(),
    ]);
    let eligible: Vec<&str> = models
        .iter()
        .filter(|model| model.eligible)
        .map(|model| model.display_name.as_str())
        .collect();
    append_columns(lines, &eligible, 4, 30, true);
    lines.push(String::new());
    lines.push(format!("#Number of TINA Models : {}", eligible.len()));
    eligible.len()
}

/// Reimplements Ghidra function `FUN_01718ac0` at `0x01718AC0`.
///
/// Fixed SPICE and S-parameter sections precede the four caller-supplied
/// data-driven sections. Empty sections still emit headings and zero counts.
pub fn append_shared_catalogue(lines: &mut Vec<String>, catalogue: &SharedCatalogue) -> usize {
    let fixed_sections = [
        FixedSection {
            heading: "%SPICE Subcircuits",
            count_label: "#Number of SPICE Subcircuits :",
            entries: &catalogue.spice_subcircuits,
        },
        FixedSection {
            heading: "%SPICE .MODELs",
            count_label: "#Number of SPICE .MODELs :",
            entries: &catalogue.spice_models,
        },
        FixedSection {
            heading: "%S-parameter /4 poles/",
            count_label: "#Number of 4 poles :",
            entries: &catalogue.four_pole_s_parameters,
        },
        FixedSection {
            heading: "%S-parameter /2 poles/",
            count_label: "#Number of 2 poles :",
            entries: &catalogue.two_pole_s_parameters,
        },
    ];
    let mut fixed_count = 0;
    for section in fixed_sections {
        fixed_count += append_catalogue_section(
            lines,
            section.heading,
            section.count_label,
            section.entries,
            None,
        );
    }
    let mut data_count = 0;
    for section in &catalogue.data_sections {
        data_count += append_catalogue_section(
            lines,
            &section.heading,
            &section.count_label,
            &catalogue.data_entries,
            Some(&section.classification_filter),
        );
    }
    lines.extend([String::new(), String::new()]);
    lines.push(format!(
        "#Number of components in Spice catalogue : {fixed_count}"
    ));
    fixed_count + data_count
}

struct FixedSection<'a> {
    heading: &'static str,
    count_label: &'static str,
    entries: &'a [CatalogueEntry],
}

fn append_catalogue_section(
    lines: &mut Vec<String>,
    heading: &str,
    count_label: &str,
    entries: &[CatalogueEntry],
    classification_filter: Option<&str>,
) -> usize {
    lines.extend([
        String::new(),
        String::new(),
        heading.to_owned(),
        String::new(),
    ]);
    let eligible: Vec<&str> = entries
        .iter()
        .filter(|entry| entry.is_eligible_for(classification_filter))
        .map(|entry| entry.display_name.as_str())
        .collect();
    append_columns(lines, &eligible, 2, 40, false);
    lines.push(String::new());
    lines.push(format!("{count_label} {}", eligible.len()));
    eligible.len()
}

fn append_columns(
    lines: &mut Vec<String>,
    entries: &[&str],
    column_count: usize,
    column_width: usize,
    append_empty_final_line: bool,
) {
    for chunk in entries.chunks(column_count) {
        let mut line = String::new();
        for entry in chunk {
            line.push_str(entry);
            line.push_str(&" ".repeat(column_width.saturating_sub(entry.chars().count())));
        }
        lines.push(line);
    }
    if entries.is_empty() && append_empty_final_line {
        lines.push(String::new());
    }
}

#[cfg(test)]
mod tests {
    use super::{
        CatalogueEntry, DataCatalogueSection, SharedCatalogue, TinaModel, append_shared_catalogue,
        append_tina_model_inventory,
    };

    fn entry(name: &str, classification: &str) -> CatalogueEntry {
        CatalogueEntry {
            display_name: name.to_owned(),
            classification: classification.to_owned(),
        }
    }

    #[test]
    fn tina_inventory_golden_output_preserves_order_columns_and_count() {
        let models = [
            TinaModel {
                display_name: "A".to_owned(),
                eligible: true,
            },
            TinaModel {
                display_name: "SKIP".to_owned(),
                eligible: false,
            },
            TinaModel {
                display_name: "B".to_owned(),
                eligible: true,
            },
            TinaModel {
                display_name: "C".to_owned(),
                eligible: true,
            },
            TinaModel {
                display_name: "D".to_owned(),
                eligible: true,
            },
            TinaModel {
                display_name: "E".to_owned(),
                eligible: true,
            },
        ];
        let mut lines = Vec::new();
        assert_eq!(append_tina_model_inventory(&mut lines, &models), 5);
        assert_eq!(
            lines,
            [
                "",
                "",
                "TINA Models",
                "",
                "A                             B                             C                             D                             ",
                "E                             ",
                "",
                "#Number of TINA Models : 5",
            ]
        );
    }

    #[test]
    fn tina_inventory_keeps_empty_section_and_zero_count() {
        let mut lines = Vec::new();
        assert_eq!(append_tina_model_inventory(&mut lines, &[]), 0);
        assert_eq!(
            lines,
            [
                "",
                "",
                "TINA Models",
                "",
                "",
                "",
                "#Number of TINA Models : 0"
            ]
        );
    }

    #[test]
    fn shared_catalogue_golden_output_preserves_sections_filters_and_subtotal() {
        let catalogue = SharedCatalogue {
            spice_subcircuits: vec![
                entry("SUB1", "Public"),
                entry("HIDDEN", "[Internal]"),
                entry("SUB2", "Public"),
            ],
            spice_models: vec![],
            four_pole_s_parameters: vec![entry("S4", "Public")],
            two_pole_s_parameters: vec![],
            data_entries: vec![
                entry("MCU1", "[MCU]"),
                entry("FPGA1", "[FPGA]"),
                entry("SECRET", "[Internal]"),
            ],
            data_sections: vec![
                DataCatalogueSection {
                    heading: "%MCUs".to_owned(),
                    count_label: "#Number of MCUs:".to_owned(),
                    classification_filter: "[MCU]".to_owned(),
                },
                DataCatalogueSection {
                    heading: "%FPGAs".to_owned(),
                    count_label: "#Number of FPGAs:".to_owned(),
                    classification_filter: "[FPGA]".to_owned(),
                },
                DataCatalogueSection {
                    heading: "%Empty A".to_owned(),
                    count_label: "#Number of Empty A:".to_owned(),
                    classification_filter: "[A]".to_owned(),
                },
                DataCatalogueSection {
                    heading: "%Empty B".to_owned(),
                    count_label: "#Number of Empty B:".to_owned(),
                    classification_filter: "[B]".to_owned(),
                },
            ],
        };
        let mut lines = Vec::new();
        assert_eq!(append_shared_catalogue(&mut lines, &catalogue), 5);
        let report = lines.join("\n");
        let nonempty: Vec<&str> = lines
            .iter()
            .map(String::as_str)
            .filter(|line| !line.is_empty())
            .collect();
        assert_eq!(
            nonempty,
            [
                "%SPICE Subcircuits",
                "SUB1                                    SUB2                                    ",
                "#Number of SPICE Subcircuits : 2",
                "%SPICE .MODELs",
                "#Number of SPICE .MODELs : 0",
                "%S-parameter /4 poles/",
                "S4                                      ",
                "#Number of 4 poles : 1",
                "%S-parameter /2 poles/",
                "#Number of 2 poles : 0",
                "%MCUs",
                "MCU1                                    ",
                "#Number of MCUs: 1",
                "%FPGAs",
                "FPGA1                                   ",
                "#Number of FPGAs: 1",
                "%Empty A",
                "#Number of Empty A: 0",
                "%Empty B",
                "#Number of Empty B: 0",
                "#Number of components in Spice catalogue : 3",
            ]
        );
        assert!(report.starts_with("\n\n%SPICE Subcircuits\n\n"));
        assert!(report.contains("%SPICE .MODELs\n\n\n#Number of SPICE .MODELs : 0"));
        assert!(!report.contains("HIDDEN"));
        assert!(!report.contains("SECRET"));
    }
}
