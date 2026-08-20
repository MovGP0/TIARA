use std::fmt;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub enum CatalogLibrary {
    #[default]
    Tina,
    AllManufacturers,
    Manufacturer(String),
}

impl fmt::Display for CatalogLibrary {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Tina => formatter.write_str("Tina"),
            Self::AllManufacturers => formatter.write_str("All Manufacturer"),
            Self::Manufacturer(name) => formatter.write_str(name),
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CatalogEntry {
    pub type_name: String,
    pub model_name: String,
    pub manufacturer: String,
    pub supports_general_tolerance: bool,
    pub parameter_rows: Vec<(String, String)>,
    pub memo_lines: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CatalogInventory {
    pub entries: Vec<CatalogEntry>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ManufacturerParameters {
    pub library_filter: Option<String>,
    pub linked_type: String,
    pub memo_lines: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CatalogRecord {
    pub type_name: String,
    pub model_name: String,
    pub library: CatalogLibrary,
    pub option_flags: [bool; 2],
    pub manufacturer_parameters: Option<ManufacturerParameters>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ToleranceModel {
    #[default]
    None,
    General,
}

impl fmt::Display for ToleranceModel {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::None => "None",
            Self::General => "General",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Distribution {
    #[default]
    Uniform,
    Gaussian,
    General,
}

impl fmt::Display for Distribution {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Uniform => "Uniform",
            Self::Gaussian => "Gaussian",
            Self::General => "General",
        })
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct GeneralDistributionParameters {
    pub fields: [String; 7],
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct ToleranceRecord {
    pub distribution: Distribution,
    pub tolerance_percent: f32,
    pub general_parameters: Option<GeneralDistributionParameters>,
}
