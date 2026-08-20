#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct EquationBounds {
    pub width: u32,
    pub height: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
#[allow(clippy::struct_excessive_bools)]
pub struct EquationFont {
    pub family: String,
    pub size_points: u16,
    pub bold: bool,
    pub italic: bool,
    pub underline: bool,
    pub strikeout: bool,
    pub color_rgba: [u8; 4],
}

impl Default for EquationFont {
    fn default() -> Self {
        Self {
            family: "Arial".to_owned(),
            size_points: 10,
            bold: false,
            italic: false,
            underline: false,
            strikeout: false,
            color_rgba: [0, 0, 0, 255],
        }
    }
}

impl EquationFont {
    #[must_use]
    pub fn summary(&self) -> String {
        let mut styles = Vec::new();
        if self.bold {
            styles.push("Bold");
        }
        if self.italic {
            styles.push("Italic");
        }
        if self.underline {
            styles.push("UnderLine");
        }
        if self.strikeout {
            styles.push("StrikeOut");
        }
        let style = if styles.is_empty() {
            "Normal".to_owned()
        } else {
            styles.join(", ")
        };
        format!(
            "Name: {}, Size: {}, Style: {style}",
            self.family, self.size_points
        )
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct EquationRatios {
    pub exponent_size: f64,
    pub exponent_overlap: f64,
    pub index_size: f64,
    pub index_overlap: f64,
    pub fraction_distance: f64,
    pub special_overlap: f64,
}

impl Default for EquationRatios {
    fn default() -> Self {
        Self {
            exponent_size: 0.7,
            exponent_overlap: 0.1,
            index_size: 0.7,
            index_overlap: 0.1,
            fraction_distance: 0.2,
            special_overlap: 0.1,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct EquationStyle {
    pub font: EquationFont,
    pub ratios: EquationRatios,
    pub line_height: f64,
    pub style_source: String,
    pub cached_bounds: Option<EquationBounds>,
}

impl Default for EquationStyle {
    fn default() -> Self {
        Self {
            font: EquationFont::default(),
            ratios: EquationRatios::default(),
            line_height: 1.0,
            style_source: String::new(),
            cached_bounds: None,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct AutoformatRule {
    pub source: String,
    pub target: String,
}

impl AutoformatRule {
    #[must_use]
    pub fn new(source: impl Into<String>, target: impl Into<String>) -> Self {
        Self {
            source: source.into(),
            target: target.into(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EquationAutoformatSettings {
    pub enabled: bool,
    pub rules: Vec<AutoformatRule>,
}

impl Default for EquationAutoformatSettings {
    fn default() -> Self {
        Self {
            enabled: true,
            rules: Vec::new(),
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct EquationStyleSettingsResult {
    pub style: EquationStyle,
    pub autoformat: EquationAutoformatSettings,
}

#[cfg(test)]
mod tests {
    use super::EquationFont;

    #[test]
    fn font_summary_lists_name_size_and_enabled_styles_only() {
        let font = EquationFont {
            family: "Cambria Math".to_owned(),
            size_points: 12,
            bold: true,
            underline: true,
            color_rgba: [255, 0, 0, 255],
            ..EquationFont::default()
        };

        assert_eq!(
            font.summary(),
            "Name: Cambria Math, Size: 12, Style: Bold, UnderLine"
        );
        assert!(!font.summary().contains("255"));
    }
}
