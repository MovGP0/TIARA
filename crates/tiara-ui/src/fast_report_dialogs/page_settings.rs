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

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ReportPageSettings {
    pub paper_code: i32,
    pub width_mm: f64,
    pub height_mm: f64,
    pub orientation: Orientation,
    pub margin_left_mm: f64,
    pub margin_top_mm: f64,
    pub margin_right_mm: f64,
    pub margin_bottom_mm: f64,
}

impl ReportPageSettings {
    fn set_orientation(&mut self, orientation: Orientation) {
        if self.orientation == orientation {
            return;
        }

        std::mem::swap(&mut self.width_mm, &mut self.height_mm);
        let left = self.margin_left_mm;
        let right = self.margin_right_mm;
        match orientation {
            Orientation::Landscape => {
                self.margin_left_mm = self.margin_top_mm;
                self.margin_right_mm = self.margin_bottom_mm;
                self.margin_top_mm = right;
                self.margin_bottom_mm = left;
            }
            Orientation::Portrait => {
                self.margin_left_mm = self.margin_bottom_mm;
                self.margin_right_mm = self.margin_top_mm;
                self.margin_top_mm = left;
                self.margin_bottom_mm = right;
            }
        }
        self.orientation = orientation;
    }
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
    KeyDown(u16),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PageSettingsHelpRequest {
    pub form_resource: &'static str,
}

#[derive(Debug, Clone, PartialEq)]
pub struct PageSettingsDialog {
    pub papers: Vec<PaperDefinition>,
    pub selected_paper_name: String,
    pub selected_paper_code: i32,
    pub width_text: String,
    pub height_text: String,
    pub margin_left_text: String,
    pub margin_top_text: String,
    pub margin_right_text: String,
    pub margin_bottom_text: String,
    pub orientation: Orientation,
    pub portrait_preview_enabled: bool,
    pub landscape_preview_enabled: bool,
    pub display_unit: DisplayUnit,
    pub last_error: Option<PageSettingsError>,
    help_request: Option<PageSettingsHelpRequest>,
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
            margin_left_text: String::new(),
            margin_top_text: String::new(),
            margin_right_text: String::new(),
            margin_bottom_text: String::new(),
            orientation,
            portrait_preview_enabled: orientation == Orientation::Portrait,
            landscape_preview_enabled: orientation == Orientation::Landscape,
            display_unit,
            last_error: None,
            help_request: None,
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
                self.dimension_changed();
                Ok(())
            }
            Message::HeightChanged(value) => {
                self.height_text = value;
                self.dimension_changed();
                Ok(())
            }
            Message::KeyDown(key_code) => {
                self.form_key_down(key_code);
                Ok(())
            }
        };
        self.last_error = result.err();
        Task::none()
    }

    /// Requests context help when the page-settings form receives F1.
    ///
    /// Reimplements Ghidra function `FUN_0189cfa0` at `0x0189CFA0`.
    /// Every other key leaves the pending request unchanged.
    pub const fn form_key_down(&mut self, key_code: u16) {
        if key_code == 0x70 {
            self.help_request = Some(PageSettingsHelpRequest {
                form_resource: "frxPageSettingsForm",
            });
        }
    }

    #[must_use]
    pub const fn take_help_request(&mut self) -> Option<PageSettingsHelpRequest> {
        self.help_request.take()
    }

    /// Selects the first paper choice after a manual dimension edit.
    ///
    /// Reimplements Ghidra function `FUN_0189cf70` at `0x0189CF70`.
    /// Dimension changes raised during the guarded form load are no-ops.
    pub fn dimension_changed(&mut self) {
        if self.updating_dimensions {
            return;
        }
        if let Some(paper) = self.papers.first() {
            self.selected_paper_code = paper.code;
            self.selected_paper_name.clone_from(&paper.name);
        } else {
            self.selected_paper_code = 0;
            self.selected_paper_name.clear();
        }
    }

    /// Loads the active report page into the page-settings controls.
    ///
    /// Reimplements Ghidra function `FUN_0189c270` at `0x0189C270`.
    /// The load guard prevents orientation and dimension change handlers from
    /// replacing the source values while the Iced state is initialized.
    pub fn form_show(&mut self, page: ReportPageSettings) {
        self.updating_dimensions = true;
        let paper = self
            .papers
            .iter()
            .find(|paper| paper.code == page.paper_code)
            .or_else(|| {
                self.papers
                    .iter()
                    .find(|paper| paper.code == CUSTOM_PAPER_CODE)
            });
        if let Some(paper) = paper {
            self.selected_paper_code = paper.code;
            self.selected_paper_name.clone_from(&paper.name);
        } else {
            self.selected_paper_code = CUSTOM_PAPER_CODE;
            self.selected_paper_name.clear();
        }

        self.width_text = self.format_measurement(page.width_mm);
        self.height_text = self.format_measurement(page.height_mm);
        self.margin_left_text = self.format_measurement(page.margin_left_mm);
        self.margin_top_text = self.format_measurement(page.margin_top_mm);
        self.margin_right_text = self.format_measurement(page.margin_right_mm);
        self.margin_bottom_text = self.format_measurement(page.margin_bottom_mm);
        self.orientation = page.orientation;
        self.portrait_preview_enabled = page.orientation == Orientation::Portrait;
        self.landscape_preview_enabled = page.orientation == Orientation::Landscape;
        self.last_error = None;
        self.updating_dimensions = false;
    }

    /// Writes accepted page-settings values back to the report page.
    ///
    /// Reimplements Ghidra function `FUN_0189c660` at `0x0189C660`.
    /// Cancel is a no-op. Orientation is applied before blank dimension values
    /// are restored, and blank margin values become zero.
    ///
    /// # Errors
    ///
    /// Returns a paper-catalog or numeric conversion error. Changes that the
    /// recovered handler applies before the error remain visible.
    pub fn form_hide(
        &mut self,
        accepted: bool,
        page: &mut ReportPageSettings,
    ) -> Result<bool, PageSettingsError> {
        if !accepted {
            return Ok(false);
        }

        page.set_orientation(self.orientation);
        page.height_mm = parse_or_replace_blank(
            "Height",
            &mut self.height_text,
            page.height_mm,
            self.display_unit,
        )?;
        page.width_mm = parse_or_replace_blank(
            "Width",
            &mut self.width_text,
            page.width_mm,
            self.display_unit,
        )?;
        let paper = self
            .papers
            .iter()
            .find(|paper| paper.name == self.selected_paper_name)
            .or_else(|| self.papers.first())
            .ok_or(PageSettingsError::NoPaperDefinitions)?;
        page.paper_code = paper.code;
        self.selected_paper_code = paper.code;

        page.margin_left_mm = parse_or_replace_blank(
            "Left margin",
            &mut self.margin_left_text,
            0.0,
            self.display_unit,
        )?;
        page.margin_right_mm = parse_or_replace_blank(
            "Right margin",
            &mut self.margin_right_text,
            0.0,
            self.display_unit,
        )?;
        page.margin_top_mm = parse_or_replace_blank(
            "Top margin",
            &mut self.margin_top_text,
            0.0,
            self.display_unit,
        )?;
        page.margin_bottom_mm = parse_or_replace_blank(
            "Bottom margin",
            &mut self.margin_bottom_text,
            0.0,
            self.display_unit,
        )?;
        Ok(true)
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

    fn format_measurement(&self, millimetres: f64) -> String {
        format_dimension(self.display_unit.millimetres_to_display(millimetres))
    }
}

fn parse_dimension(field: &'static str, value: &str) -> Result<f64, PageSettingsError> {
    value
        .trim()
        .replace(',', ".")
        .parse::<f64>()
        .map_err(|_| PageSettingsError::InvalidDimension {
            field,
            value: value.to_owned(),
        })
}

fn parse_or_replace_blank(
    field: &'static str,
    text: &mut String,
    blank_value_mm: f64,
    display_unit: DisplayUnit,
) -> Result<f64, PageSettingsError> {
    if text.trim().is_empty() {
        *text = format_dimension(display_unit.millimetres_to_display(blank_value_mm));
    }
    parse_dimension(field, text).map(|value| display_unit.to_millimetres(value))
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

    fn assert_close(actual: f64, expected: f64) {
        assert!((actual - expected).abs() < 1e-9);
    }

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

    #[test]
    fn form_show_loads_page_size_orientation_and_margins() {
        let mut dialog = dialog();

        dialog.form_show(ReportPageSettings {
            paper_code: 9,
            width_mm: 210.0,
            height_mm: 297.0,
            orientation: Orientation::Landscape,
            margin_left_mm: 10.0,
            margin_top_mm: 20.0,
            margin_right_mm: 30.0,
            margin_bottom_mm: 40.0,
        });

        assert_eq!(dialog.selected_paper_code, 9);
        assert_eq!(dialog.selected_paper_name, "A4");
        assert_eq!(dialog.width_text, "21");
        assert_eq!(dialog.height_text, "29.70");
        assert_eq!(dialog.margin_left_text, "1");
        assert_eq!(dialog.margin_top_text, "2");
        assert_eq!(dialog.margin_right_text, "3");
        assert_eq!(dialog.margin_bottom_text, "4");
        assert!(!dialog.portrait_preview_enabled);
        assert!(dialog.landscape_preview_enabled);
        assert!(!dialog.is_updating_dimensions());
    }

    #[test]
    fn form_show_falls_back_to_custom_paper_for_unknown_code() {
        let mut dialog = dialog();

        dialog.form_show(ReportPageSettings {
            paper_code: 999,
            width_mm: 100.0,
            height_mm: 200.0,
            orientation: Orientation::Portrait,
            margin_left_mm: 0.0,
            margin_top_mm: 0.0,
            margin_right_mm: 0.0,
            margin_bottom_mm: 0.0,
        });

        assert_eq!(dialog.selected_paper_code, CUSTOM_PAPER_CODE);
        assert_eq!(dialog.selected_paper_name, "Custom");
        assert!(dialog.portrait_preview_enabled);
        assert!(!dialog.landscape_preview_enabled);
    }

    #[test]
    fn form_hide_cancel_does_not_modify_the_report_page() -> Result<(), PageSettingsError> {
        let mut dialog = dialog();
        let mut page = ReportPageSettings {
            paper_code: 9,
            width_mm: 210.0,
            height_mm: 297.0,
            orientation: Orientation::Portrait,
            margin_left_mm: 10.0,
            margin_top_mm: 20.0,
            margin_right_mm: 30.0,
            margin_bottom_mm: 40.0,
        };
        let before = page;

        assert!(!dialog.form_hide(false, &mut page)?);
        assert_eq!(page, before);
        Ok(())
    }

    #[test]
    fn form_hide_writes_accepted_dimensions_paper_and_margins() -> Result<(), PageSettingsError> {
        let mut dialog = dialog();
        dialog.orientation = Orientation::Landscape;
        dialog.selected_paper_name = "Custom".to_owned();
        dialog.width_text = "30".to_owned();
        dialog.height_text = "20".to_owned();
        dialog.margin_left_text = "1".to_owned();
        dialog.margin_top_text = "2".to_owned();
        dialog.margin_right_text = "3".to_owned();
        dialog.margin_bottom_text = "4".to_owned();
        let mut page = ReportPageSettings {
            paper_code: 9,
            width_mm: 210.0,
            height_mm: 297.0,
            orientation: Orientation::Portrait,
            margin_left_mm: 10.0,
            margin_top_mm: 20.0,
            margin_right_mm: 30.0,
            margin_bottom_mm: 40.0,
        };

        assert!(dialog.form_hide(true, &mut page)?);
        assert_eq!(page.paper_code, CUSTOM_PAPER_CODE);
        assert_close(page.width_mm, 300.0);
        assert_close(page.height_mm, 200.0);
        assert_eq!(page.orientation, Orientation::Landscape);
        assert_close(page.margin_left_mm, 10.0);
        assert_close(page.margin_top_mm, 20.0);
        assert_close(page.margin_right_mm, 30.0);
        assert_close(page.margin_bottom_mm, 40.0);
        Ok(())
    }

    #[test]
    fn form_hide_restores_blank_rotated_dimensions_and_zeros_blank_margins()
    -> Result<(), PageSettingsError> {
        let mut dialog = dialog();
        dialog.orientation = Orientation::Landscape;
        dialog.width_text.clear();
        dialog.height_text.clear();
        let mut page = ReportPageSettings {
            paper_code: 9,
            width_mm: 210.0,
            height_mm: 297.0,
            orientation: Orientation::Portrait,
            margin_left_mm: 10.0,
            margin_top_mm: 20.0,
            margin_right_mm: 30.0,
            margin_bottom_mm: 40.0,
        };

        assert!(dialog.form_hide(true, &mut page)?);
        assert_close(page.width_mm, 297.0);
        assert_close(page.height_mm, 210.0);
        assert_eq!(dialog.width_text, "29.70");
        assert_eq!(dialog.height_text, "21");
        assert_close(page.margin_left_mm, 0.0);
        assert_close(page.margin_top_mm, 0.0);
        assert_close(page.margin_right_mm, 0.0);
        assert_close(page.margin_bottom_mm, 0.0);
        Ok(())
    }

    #[test]
    fn manual_width_or_height_change_selects_first_paper() {
        let mut dialog = dialog();
        dialog.selected_paper_code = CUSTOM_PAPER_CODE;
        dialog.selected_paper_name = "Custom".to_owned();

        drop(dialog.update(Message::WidthChanged("22".to_owned())));
        assert_eq!(dialog.selected_paper_code, 9);
        assert_eq!(dialog.selected_paper_name, "A4");

        dialog.selected_paper_code = CUSTOM_PAPER_CODE;
        dialog.selected_paper_name = "Custom".to_owned();
        drop(dialog.update(Message::HeightChanged("30".to_owned())));
        assert_eq!(dialog.selected_paper_code, 9);
        assert_eq!(dialog.selected_paper_name, "A4");
    }

    #[test]
    fn dimension_change_during_form_load_preserves_paper_selection() {
        let mut dialog = dialog();
        dialog.selected_paper_code = CUSTOM_PAPER_CODE;
        dialog.selected_paper_name = "Custom".to_owned();
        dialog.updating_dimensions = true;

        dialog.dimension_changed();

        assert_eq!(dialog.selected_paper_code, CUSTOM_PAPER_CODE);
        assert_eq!(dialog.selected_paper_name, "Custom");
    }

    #[test]
    fn f1_requests_page_settings_context_help() {
        let mut dialog = dialog();

        drop(dialog.update(Message::KeyDown(0x70)));

        assert_eq!(
            dialog.take_help_request(),
            Some(PageSettingsHelpRequest {
                form_resource: "frxPageSettingsForm",
            })
        );
    }

    #[test]
    fn non_f1_key_does_not_request_help() {
        let mut dialog = dialog();

        dialog.form_key_down(0x1b);

        assert_eq!(dialog.take_help_request(), None);
    }
}
