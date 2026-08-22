use std::fmt;

use iced::widget::{button, column, row, text, text_input};
use iced::{Element, Length, Task};

pub const CUSTOM_PAPER_CODE: i32 = 0x100;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Orientation {
    Portrait,
    Landscape,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DisplayUnit {
    Millimetres,
    Centimetres,
    Inches,
}

impl DisplayUnit {
    const fn to_millimetres(self, value: f64) -> f64 {
        match self {
            Self::Millimetres => value,
            Self::Centimetres => value * 10.0,
            Self::Inches => value * 25.4,
        }
    }

    const fn millimetres_to_display(self, value: f64) -> f64 {
        match self {
            Self::Millimetres => value,
            Self::Centimetres => value / 10.0,
            Self::Inches => value / 25.4,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct PaperDefinition {
    pub code: i32,
    pub name: String,
    pub width_mm: f64,
    pub height_mm: f64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PageSettingsError {
    NoPaperDefinitions,
    InvalidDimension { field: &'static str, value: String },
}

impl fmt::Display for PageSettingsError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::NoPaperDefinitions => formatter.write_str("No paper definitions are available."),
            Self::InvalidDimension { field, value } => {
                write!(formatter, "{field} is not a valid dimension: {value}")
            }
        }
    }
}

impl std::error::Error for PageSettingsError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    PortraitSelected,
    LandscapeSelected,
    PaperSelected(String),
    WidthChanged(String),
    HeightChanged(String),
}

#[derive(Debug, Clone, PartialEq)]
pub struct PageSettingsDialog {
    pub papers: Vec<PaperDefinition>,
    pub selected_paper_name: String,
    pub selected_paper_code: i32,
    pub width_text: String,
    pub height_text: String,
    pub orientation: Orientation,
    pub portrait_preview_enabled: bool,
    pub landscape_preview_enabled: bool,
    pub display_unit: DisplayUnit,
    pub last_error: Option<PageSettingsError>,
    updating_dimensions: bool,
}

impl PageSettingsDialog {
    #[must_use]
    pub fn new(
        papers: Vec<PaperDefinition>,
        selected_paper_name: impl Into<String>,
        width_text: impl Into<String>,
        height_text: impl Into<String>,
        orientation: Orientation,
        display_unit: DisplayUnit,
    ) -> Self {
        Self {
            papers,
            selected_paper_name: selected_paper_name.into(),
            selected_paper_code: 0,
            width_text: width_text.into(),
            height_text: height_text.into(),
            orientation,
            portrait_preview_enabled: orientation == Orientation::Portrait,
            landscape_preview_enabled: orientation == Orientation::Landscape,
            display_unit,
            last_error: None,
            updating_dimensions: false,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        let result = match message {
            Message::PortraitSelected => self.update_orientation(Orientation::Portrait),
            Message::LandscapeSelected => self.update_orientation(Orientation::Landscape),
            Message::PaperSelected(name) => {
                self.selected_paper_name = name;
                self.update_paper_dimensions().map(|_| ())
            }
            Message::WidthChanged(value) => {
                self.width_text = value;
                Ok(())
            }
            Message::HeightChanged(value) => {
                self.height_text = value;
                Ok(())
            }
        };
        self.last_error = result.err();
        Task::none()
    }

    /// Updates orientation previews and recalculates staged dimensions.
    ///
    /// Reimplements Ghidra function `FUN_0189ccf0` at `0x0189CCF0`.
    /// The report page is not modified by this dialog-local operation.
    ///
    /// # Errors
    ///
    /// Returns a dimension or paper-definition error from the shared size
    /// update after the preview states have changed.
    pub fn update_orientation(
        &mut self,
        orientation: Orientation,
    ) -> Result<(), PageSettingsError> {
        self.orientation = orientation;
        self.portrait_preview_enabled = orientation == Orientation::Portrait;
        self.landscape_preview_enabled = orientation == Orientation::Landscape;
        self.update_paper_dimensions().map(|_| ())
    }

    /// Resolves the selected paper and updates staged width and height text.
    ///
    /// Reimplements Ghidra function `FUN_0189cd50` at `0x0189CD50`.
    /// Reentry is a no-op. Unknown paper names use the first definition.
    /// Numeric conversion errors propagate and the update guard is released.
    ///
    /// # Errors
    ///
    /// Returns [`PageSettingsError::NoPaperDefinitions`] for an empty catalog,
    /// or [`PageSettingsError::InvalidDimension`] when an edit cannot be read.
    pub fn update_paper_dimensions(&mut self) -> Result<bool, PageSettingsError> {
        if self.updating_dimensions {
            return Ok(false);
        }
        self.updating_dimensions = true;
        let result = self.calculate_paper_dimensions();
        self.updating_dimensions = false;
        result.map(|()| true)
    }

    #[must_use]
    pub const fn is_updating_dimensions(&self) -> bool {
        self.updating_dimensions
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let error = self
            .last_error
            .as_ref()
            .map_or_else(String::new, ToString::to_string);
        column![
            text("FastReport Page Settings"),
            text_input("Paper", &self.selected_paper_name).on_input(Message::PaperSelected),
            row![
                button("Portrait").on_press(Message::PortraitSelected),
                button("Landscape").on_press(Message::LandscapeSelected),
            ]
            .spacing(8),
            text_input("Width", &self.width_text).on_input(Message::WidthChanged),
            text_input("Height", &self.height_text).on_input(Message::HeightChanged),
            text(error),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }

    fn calculate_paper_dimensions(&mut self) -> Result<(), PageSettingsError> {
        let paper = self
            .papers
            .iter()
            .find(|paper| paper.name == self.selected_paper_name)
            .or_else(|| self.papers.first())
            .cloned()
            .ok_or(PageSettingsError::NoPaperDefinitions)?;
        let entered_width = parse_dimension("Width", &self.width_text)?;
        let entered_height = parse_dimension("Height", &self.height_text)?;
        let entered_width_mm = self.display_unit.to_millimetres(entered_width);
        let entered_height_mm = self.display_unit.to_millimetres(entered_height);
        let (base_width, base_height) = if paper.code == CUSTOM_PAPER_CODE {
            (entered_width_mm, entered_height_mm)
        } else {
            (paper.width_mm, paper.height_mm)
        };
        let (width_mm, height_mm) = orient_dimensions(base_width, base_height, self.orientation);

        self.selected_paper_code = paper.code;
        self.selected_paper_name = paper.name;
        self.width_text = format_dimension(self.display_unit.millimetres_to_display(width_mm));
        self.height_text = format_dimension(self.display_unit.millimetres_to_display(height_mm));
        Ok(())
    }
}

fn parse_dimension(field: &'static str, value: &str) -> Result<f64, PageSettingsError> {
    value
        .replace(',', ".")
        .parse::<f64>()
        .map_err(|_| PageSettingsError::InvalidDimension {
            field,
            value: value.to_owned(),
        })
}

const fn orient_dimensions(width: f64, height: f64, orientation: Orientation) -> (f64, f64) {
    let short = width.min(height);
    let long = width.max(height);
    match orientation {
        Orientation::Portrait => (short, long),
        Orientation::Landscape => (long, short),
    }
}

fn format_dimension(value: f64) -> String {
    if value.fract().abs() <= f64::EPSILON {
        format!("{value:.0}")
    } else {
        format!("{value:.2}")
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn papers() -> Vec<PaperDefinition> {
        vec![
            PaperDefinition {
                code: 9,
                name: "A4".to_owned(),
                width_mm: 210.0,
                height_mm: 297.0,
            },
            PaperDefinition {
                code: CUSTOM_PAPER_CODE,
                name: "Custom".to_owned(),
                width_mm: 0.0,
                height_mm: 0.0,
            },
        ]
    }

    fn dialog() -> PageSettingsDialog {
        PageSettingsDialog::new(
            papers(),
            "A4",
            "21",
            "29.70",
            Orientation::Portrait,
            DisplayUnit::Centimetres,
        )
    }

    #[test]
    fn orientation_updates_preview_and_standard_paper_dimensions() -> Result<(), PageSettingsError>
    {
        let mut dialog = dialog();
        dialog.update_orientation(Orientation::Landscape)?;
        assert!(!dialog.portrait_preview_enabled);
        assert!(dialog.landscape_preview_enabled);
        assert_eq!(dialog.width_text, "29.70");
        assert_eq!(dialog.height_text, "21");
        Ok(())
    }

    #[test]
    fn unknown_paper_name_falls_back_to_first_definition() -> Result<(), PageSettingsError> {
        let mut dialog = dialog();
        dialog.selected_paper_name = "Unknown".to_owned();
        assert!(dialog.update_paper_dimensions()?);
        assert_eq!(dialog.selected_paper_code, 9);
        assert_eq!(dialog.selected_paper_name, "A4");
        Ok(())
    }

    #[test]
    fn custom_paper_uses_entered_dimensions_and_orientation() -> Result<(), PageSettingsError> {
        let mut dialog = PageSettingsDialog::new(
            papers(),
            "Custom",
            "8.5",
            "11",
            Orientation::Landscape,
            DisplayUnit::Inches,
        );
        assert!(dialog.update_paper_dimensions()?);
        assert_eq!(dialog.selected_paper_code, CUSTOM_PAPER_CODE);
        assert_eq!(dialog.width_text, "11");
        assert_eq!(dialog.height_text, "8.50");
        Ok(())
    }

    #[test]
    fn conversion_error_propagates_and_releases_guard() {
        let mut dialog = dialog();
        dialog.width_text = "not a number".to_owned();
        assert!(matches!(
            dialog.update_paper_dimensions(),
            Err(PageSettingsError::InvalidDimension { field: "Width", .. })
        ));
        assert!(!dialog.is_updating_dimensions());
        assert_eq!(dialog.height_text, "29.70");
    }

    #[test]
    fn reentrant_size_update_is_a_noop() -> Result<(), PageSettingsError> {
        let mut dialog = dialog();
        dialog.updating_dimensions = true;
        assert!(!dialog.update_paper_dimensions()?);
        assert_eq!(dialog.width_text, "21");
        Ok(())
    }

    #[test]
    fn iced_orientation_message_runs_without_a_live_window() {
        let mut dialog = dialog();
        drop(dialog.update(Message::LandscapeSelected));
        assert_eq!(dialog.orientation, Orientation::Landscape);
        assert!(dialog.last_error.is_none());
    }
}
