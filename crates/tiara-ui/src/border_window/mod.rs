//! Modeless page-border editor state and update logic.

use iced::Task;

const MILLIMETRES_PER_INCH: f64 = 25.4;
const MIN_FLOAT_EDIT_VALUE: f64 = -1.0e50;
const MAX_FLOAT_EDIT_VALUE: f64 = 1.0e50;

pub const PAGE_SETUP_SECTION: &str = "Diagram Page Setup";
pub const LEFT_MARGIN_KEY: &str = "LeftMargin";
pub const RIGHT_MARGIN_KEY: &str = "RightMargin";
pub const TOP_MARGIN_KEY: &str = "TopMargin";
pub const BOTTOM_MARGIN_KEY: &str = "BottomMargin";
pub const LIBRARY_EVALUATION: &str = "iced supplies the staged message and update path. The Rust standard library supplies floating-point parsing and arithmetic. Typed host effects retain the active-diagram margin write, page-setup persistence, layout propagation, and redraw boundary without a live window or an additional crate.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum LengthUnit {
    #[default]
    Millimetres,
    Inches,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct PageDimensions {
    pub width_mm: f64,
    pub height_mm: f64,
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct NormalizedMargins {
    pub left: f64,
    pub right: f64,
    pub top: f64,
    pub bottom: f64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    CloseRequested,
    ExitClicked,
    FormCreated,
    FormShown,
    RefreshFromModel,
    UnitSelected(LengthUnit),
    LeftChanged(String),
    LeftExited,
    LeftIncremented,
    LeftDecremented,
    RightChanged(String),
    RightExited,
    RightSpinUp,
    RightSpinDown,
    TopChanged(String),
    TopExited,
    TopSpinUp,
    TopSpinDown,
    WidthHeightChanged(String),
    WidthHeightExited,
    WidthHeightSpinUp,
    WidthHeightSpinDown,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum UnitLabelPage {
    #[default]
    Millimetres,
    Inches,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WindowCloseAction {
    Hide,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MarginEditError {
    InvalidNumber,
    OutOfRange,
}

pub trait BorderMarginEffects {
    fn set_active_left_margin(&mut self, normalized: f64);
    fn set_active_right_margin(&mut self, normalized: f64);
    fn set_active_top_margin(&mut self, normalized: f64);
    fn set_active_bottom_margin(&mut self, normalized: f64);
    fn write_page_setup_value(&mut self, section: &str, key: &str, value: f64);
    fn propagate_margins_and_redraw(&mut self, margins: NormalizedMargins);
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct BorderWindow {
    pub visible: bool,
    pub left_text: String,
    pub right_text: String,
    pub top_text: String,
    pub width_height_text: String,
    pub margins: NormalizedMargins,
    pub page_dimensions: PageDimensions,
    /// Process-wide display unit used by recovered conversion branches.
    pub unit: LengthUnit,
    /// Current `UnitCB` selection. The recovered change handler does not write
    /// the process-wide unit value.
    pub selected_unit: LengthUnit,
    pub unit_label_page: UnitLabelPage,
}

impl BorderWindow {
    /// Applies one iced message without requiring a live window.
    ///
    /// # Errors
    ///
    /// Returns the numeric conversion or range error from a left-field exit.
    pub fn update(
        &mut self,
        message: Message,
        effects: &mut impl BorderMarginEffects,
    ) -> Result<Task<Message>, MarginEditError> {
        match message {
            Message::CloseRequested => {
                if self.form_close_action() == WindowCloseAction::Hide {
                    self.visible = false;
                }
            }
            Message::ExitClicked => self.hide_from_exit(),
            Message::FormCreated => self.initialize_unit_controls(),
            Message::FormShown => self.show_and_refresh_controls(),
            Message::RefreshFromModel => self.refresh_controls(),
            Message::UnitSelected(unit) => self.select_unit_and_refresh(unit),
            Message::LeftChanged(value) => self.left_text = value,
            Message::LeftExited => self.commit_left_margin(effects)?,
            Message::LeftIncremented => self.increment_left_text()?,
            Message::LeftDecremented => self.decrement_left_text()?,
            Message::RightChanged(value) => self.right_text = value,
            Message::RightExited => self.commit_right_margin(effects)?,
            Message::RightSpinUp => self.decrement_right_text_on_spin_up()?,
            Message::RightSpinDown => self.increment_right_text_on_spin_down()?,
            Message::TopChanged(value) => self.top_text = value,
            Message::TopExited => self.commit_top_margin(effects)?,
            Message::TopSpinUp => self.decrement_top_text_on_spin_up()?,
            Message::TopSpinDown => self.increment_top_text_on_spin_down()?,
            Message::WidthHeightChanged(value) => self.width_height_text = value,
            Message::WidthHeightExited => self.commit_width_height_ratio(effects)?,
            Message::WidthHeightSpinUp => self.decrement_width_height_text_on_spin_up()?,
            Message::WidthHeightSpinDown => self.increment_width_height_text_on_spin_down()?,
        }

        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a65f30` at `0x01A65F30`.
    ///
    /// The refresh converts normalized active-diagram margins to displayed
    /// left, right-edge, and top distances. It uses millimetres directly or
    /// divides those distances by 25.4 for inches. The width-to-height field is
    /// the physical usable width divided by physical usable height and is not
    /// unit-dependent. This method changes only staged control text.
    pub fn refresh_controls(&mut self) {
        let usable_width = (self.margins.right - self.margins.left) * self.page_dimensions.width_mm;
        let usable_height =
            (self.margins.bottom - self.margins.top) * self.page_dimensions.height_mm;
        let distance_scale = match self.unit {
            LengthUnit::Millimetres => 1.0,
            LengthUnit::Inches => MILLIMETRES_PER_INCH,
        };

        self.left_text =
            (self.margins.left * self.page_dimensions.width_mm / distance_scale).to_string();
        self.right_text = ((1.0 - self.margins.right) * self.page_dimensions.width_mm
            / distance_scale)
            .to_string();
        self.top_text =
            (self.margins.top * self.page_dimensions.height_mm / distance_scale).to_string();
        self.width_height_text = (usable_width / usable_height).to_string();
    }

    /// Implements Ghidra function `FUN_01a65d70` at `0x01A65D70`.
    ///
    /// The modeless Border Window selects the hide action for a title-bar close
    /// request. Its retained state is not destroyed or rolled back.
    #[must_use]
    pub const fn form_close_action(&self) -> WindowCloseAction {
        WindowCloseAction::Hide
    }

    /// Implements Ghidra function `FUN_01a66120` at `0x01A66120`.
    ///
    /// Exit hides the persistent modeless editor directly. It does not parse a
    /// numeric field, write a page setting, set a modal result, run a close
    /// query, copy values, destroy state, or roll back committed margins.
    pub const fn hide_from_exit(&mut self) {
        self.visible = false;
    }

    /// Implements Ghidra function `FUN_01a66330` at `0x01A66330`.
    ///
    /// Form creation selects item zero in the recovered `UnitCB` list and the
    /// matching millimetre label page. It does not refresh values, update the
    /// margin model, persist settings, relayout, or redraw.
    pub const fn initialize_unit_controls(&mut self) {
        self.selected_unit = LengthUnit::Millimetres;
        self.unit_label_page = UnitLabelPage::Millimetres;
    }

    /// Implements Ghidra function `FUN_01a66380` at `0x01A66380`.
    ///
    /// A `UnitCB` change selects the millimetre label page for item zero or the
    /// inch page for the other recovered item, then refreshes all control text.
    /// The numeric conversion still uses the separate process-wide unit mode;
    /// this handler does not update that value or any normalized margin.
    pub fn select_unit_and_refresh(&mut self, selected_unit: LengthUnit) {
        self.selected_unit = selected_unit;
        self.unit_label_page = match selected_unit {
            LengthUnit::Millimetres => UnitLabelPage::Millimetres,
            LengthUnit::Inches => UnitLabelPage::Inches,
        };
        self.refresh_controls();
    }

    /// Implements Ghidra function `FUN_01a66410` at `0x01A66410`.
    ///
    /// When the retained form is shown, the label notebook follows the
    /// process-wide unit mode and all control text is refreshed from normalized
    /// margins. The recovered handler does not change `UnitCB` selection,
    /// margin state, persistence, layout, or redraw.
    pub fn show_and_refresh_controls(&mut self) {
        self.unit_label_page = match self.unit {
            LengthUnit::Millimetres => UnitLabelPage::Millimetres,
            LengthUnit::Inches => UnitLabelPage::Inches,
        };
        self.refresh_controls();
    }

    /// Implements Ghidra function `FUN_01a66130` at `0x01A66130`.
    ///
    /// The left spin-button up event parses the staged `FloatEdit` value, adds
    /// exactly `1.0`, and writes only the staged text. Margin commit remains an
    /// independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn increment_left_text(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.left_text)?;
        self.left_text = (value + 1.0).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a66170` at `0x01A66170`.
    ///
    /// The left spin-button down event parses the staged `FloatEdit` value,
    /// subtracts exactly `1.0`, and writes only the staged text. Margin commit
    /// remains an independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn decrement_left_text(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.left_text)?;
        self.left_text = (value - 1.0).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a661b0` at `0x01A661B0`.
    ///
    /// The right spin-button up event parses the staged `FloatEdit` value,
    /// subtracts exactly `1.0`, and writes only the staged right-edge distance.
    /// The direction is reversed from the left spin-up handler. Margin commit
    /// remains an independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn decrement_right_text_on_spin_up(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.right_text)?;
        self.right_text = (value - 1.0).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a661f0` at `0x01A661F0`.
    ///
    /// The right spin-button down event parses the staged `FloatEdit` value,
    /// adds exactly `1.0`, and writes only the staged right-edge distance. The
    /// direction is reversed from the left spin-down handler. Margin commit
    /// remains an independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn increment_right_text_on_spin_down(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.right_text)?;
        self.right_text = (value + 1.0).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a66230` at `0x01A66230`.
    ///
    /// The top spin-button up event parses the staged `FloatEdit` value,
    /// subtracts exactly `1.0`, and writes only staged top-distance text. This
    /// preserves the recovered screen-direction convention. Margin commit
    /// remains an independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn decrement_top_text_on_spin_up(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.top_text)?;
        self.top_text = (value - 1.0).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a66270` at `0x01A66270`.
    ///
    /// The top spin-button down event parses the staged `FloatEdit` value, adds
    /// exactly `1.0`, and writes only staged top-distance text. This preserves
    /// the recovered screen-direction convention. Margin commit remains an
    /// independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn increment_top_text_on_spin_down(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.top_text)?;
        self.top_text = (value + 1.0).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a662b0` at `0x01A662B0`.
    ///
    /// The width-to-height spin-button up event parses the staged `FloatEdit`
    /// value, subtracts exactly `0.1`, and writes only staged ratio text. The
    /// bottom-margin commit remains an independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn decrement_width_height_text_on_spin_up(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.width_height_text)?;
        self.width_height_text = (value - 0.1).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a662f0` at `0x01A662F0`.
    ///
    /// The width-to-height spin-button down event parses the staged `FloatEdit`
    /// value, adds exactly `0.1`, and writes only staged ratio text. The
    /// bottom-margin commit remains an independent focus-exit event.
    ///
    /// # Errors
    ///
    /// Returns the `FloatEdit` conversion or generic-range error without
    /// changing the staged text.
    pub fn increment_width_height_text_on_spin_down(&mut self) -> Result<(), MarginEditError> {
        let value = parse_float_edit(&self.width_height_text)?;
        self.width_height_text = (value + 0.1).to_string();
        Ok(())
    }

    /// Implements Ghidra function `FUN_01a65790` at `0x01A65790`.
    ///
    /// The staged left distance is parsed with the recovered generic
    /// `TFloatEdit` range. Millimetres divide by page width directly. Inches
    /// divide by page width converted to inches. A valid value updates the
    /// active normalized margin, writes `Diagram Page Setup/LeftMargin`, then
    /// propagates all margins and redraws the diagram.
    ///
    /// # Errors
    ///
    /// Returns [`MarginEditError::InvalidNumber`] when the staged text cannot
    /// be parsed. Returns [`MarginEditError::OutOfRange`] outside the inclusive
    /// recovered range `-1e50..=1e50`. No model or host effect changes first.
    pub fn commit_left_margin(
        &mut self,
        effects: &mut impl BorderMarginEffects,
    ) -> Result<(), MarginEditError> {
        let displayed_distance = parse_float_edit(&self.left_text)?;
        let page_width = match self.unit {
            LengthUnit::Millimetres => self.page_dimensions.width_mm,
            LengthUnit::Inches => self.page_dimensions.width_mm / MILLIMETRES_PER_INCH,
        };
        let normalized = displayed_distance / page_width;

        self.margins.left = normalized;
        effects.set_active_left_margin(normalized);
        effects.write_page_setup_value(PAGE_SETUP_SECTION, LEFT_MARGIN_KEY, normalized);
        effects.propagate_margins_and_redraw(self.margins);

        Ok(())
    }

    /// Implements Ghidra function `FUN_01a65910` at `0x01A65910`.
    ///
    /// The staged right distance is parsed with the recovered generic
    /// `TFloatEdit` range. The value is divided by the page width in the active
    /// display unit and subtracted from one. A valid value updates the active
    /// normalized right coordinate, writes `Diagram Page Setup/RightMargin`,
    /// then propagates all margins and redraws the diagram.
    ///
    /// # Errors
    ///
    /// Returns [`MarginEditError::InvalidNumber`] when the staged text cannot
    /// be parsed. Returns [`MarginEditError::OutOfRange`] outside the inclusive
    /// recovered range `-1e50..=1e50`. No model or host effect changes first.
    pub fn commit_right_margin(
        &mut self,
        effects: &mut impl BorderMarginEffects,
    ) -> Result<(), MarginEditError> {
        let displayed_distance = parse_float_edit(&self.right_text)?;
        let page_width = match self.unit {
            LengthUnit::Millimetres => self.page_dimensions.width_mm,
            LengthUnit::Inches => self.page_dimensions.width_mm / MILLIMETRES_PER_INCH,
        };
        let normalized = 1.0 - displayed_distance / page_width;

        self.margins.right = normalized;
        effects.set_active_right_margin(normalized);
        effects.write_page_setup_value(PAGE_SETUP_SECTION, RIGHT_MARGIN_KEY, normalized);
        effects.propagate_margins_and_redraw(self.margins);

        Ok(())
    }

    /// Implements Ghidra function `FUN_01a65ac0` at `0x01A65AC0`.
    ///
    /// The staged top distance is parsed with the recovered generic
    /// `TFloatEdit` range. Millimetres divide by page height directly. Inches
    /// divide by page height converted to inches. A valid value updates the
    /// active normalized top margin, writes `Diagram Page Setup/TopMargin`,
    /// then propagates all margins and redraws the diagram.
    ///
    /// # Errors
    ///
    /// Returns [`MarginEditError::InvalidNumber`] when the staged text cannot
    /// be parsed. Returns [`MarginEditError::OutOfRange`] outside the inclusive
    /// recovered range `-1e50..=1e50`. No model or host effect changes first.
    pub fn commit_top_margin(
        &mut self,
        effects: &mut impl BorderMarginEffects,
    ) -> Result<(), MarginEditError> {
        let displayed_distance = parse_float_edit(&self.top_text)?;
        let page_height = match self.unit {
            LengthUnit::Millimetres => self.page_dimensions.height_mm,
            LengthUnit::Inches => self.page_dimensions.height_mm / MILLIMETRES_PER_INCH,
        };
        let normalized = displayed_distance / page_height;

        self.margins.top = normalized;
        effects.set_active_top_margin(normalized);
        effects.write_page_setup_value(PAGE_SETUP_SECTION, TOP_MARGIN_KEY, normalized);
        effects.propagate_margins_and_redraw(self.margins);

        Ok(())
    }

    /// Implements Ghidra function `FUN_01a65c40` at `0x01A65C40`.
    ///
    /// The staged width-to-height ratio is dimensionless. The recovered
    /// formula converts normalized usable width to a physical height, divides
    /// that height by the page height, and adds the current top coordinate to
    /// derive the bottom coordinate. It does not add a zero-ratio guard.
    ///
    /// # Errors
    ///
    /// Returns [`MarginEditError::InvalidNumber`] when the staged text cannot
    /// be parsed. Returns [`MarginEditError::OutOfRange`] outside the inclusive
    /// recovered range `-1e50..=1e50`. No model or host effect changes first.
    pub fn commit_width_height_ratio(
        &mut self,
        effects: &mut impl BorderMarginEffects,
    ) -> Result<(), MarginEditError> {
        let ratio = parse_float_edit(&self.width_height_text)?;
        let usable_width = (self.margins.right - self.margins.left) * self.page_dimensions.width_mm;
        let normalized = usable_width / ratio / self.page_dimensions.height_mm + self.margins.top;

        self.margins.bottom = normalized;
        effects.set_active_bottom_margin(normalized);
        effects.write_page_setup_value(PAGE_SETUP_SECTION, BOTTOM_MARGIN_KEY, normalized);
        effects.propagate_margins_and_redraw(self.margins);

        Ok(())
    }
}

fn parse_float_edit(text: &str) -> Result<f64, MarginEditError> {
    let value = text
        .trim()
        .parse::<f64>()
        .map_err(|_| MarginEditError::InvalidNumber)?;

    if !(MIN_FLOAT_EDIT_VALUE..=MAX_FLOAT_EDIT_VALUE).contains(&value) {
        return Err(MarginEditError::OutOfRange);
    }

    Ok(value)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq)]
    enum Effect {
        SetLeft(f64),
        SetRight(f64),
        SetTop(f64),
        SetBottom(f64),
        Write {
            section: String,
            key: String,
            value: f64,
        },
        Propagate(NormalizedMargins),
    }

    #[derive(Debug, Default)]
    struct Effects {
        calls: Vec<Effect>,
    }

    impl BorderMarginEffects for Effects {
        fn set_active_left_margin(&mut self, normalized: f64) {
            self.calls.push(Effect::SetLeft(normalized));
        }

        fn set_active_right_margin(&mut self, normalized: f64) {
            self.calls.push(Effect::SetRight(normalized));
        }

        fn set_active_top_margin(&mut self, normalized: f64) {
            self.calls.push(Effect::SetTop(normalized));
        }

        fn set_active_bottom_margin(&mut self, normalized: f64) {
            self.calls.push(Effect::SetBottom(normalized));
        }

        fn write_page_setup_value(&mut self, section: &str, key: &str, value: f64) {
            self.calls.push(Effect::Write {
                section: section.to_owned(),
                key: key.to_owned(),
                value,
            });
        }

        fn propagate_margins_and_redraw(&mut self, margins: NormalizedMargins) {
            self.calls.push(Effect::Propagate(margins));
        }
    }

    fn window(unit: LengthUnit, left_text: &str) -> BorderWindow {
        BorderWindow {
            visible: true,
            left_text: left_text.to_owned(),
            right_text: String::new(),
            top_text: String::new(),
            width_height_text: String::new(),
            margins: NormalizedMargins {
                left: 0.1,
                right: 0.9,
                top: 0.2,
                bottom: 0.8,
            },
            page_dimensions: PageDimensions {
                width_mm: 254.0,
                height_mm: 127.0,
            },
            unit,
            selected_unit: unit,
            unit_label_page: match unit {
                LengthUnit::Millimetres => UnitLabelPage::Millimetres,
                LengthUnit::Inches => UnitLabelPage::Inches,
            },
        }
    }

    fn assert_close(actual: f64, expected: f64) {
        let tolerance = f64::EPSILON * expected.abs().max(1.0);
        assert!((actual - expected).abs() <= tolerance);
    }

    fn control_value(text: &str) -> f64 {
        text.parse().unwrap()
    }

    #[test]
    fn left_exit_commits_metric_normalized_margin_in_recovered_order() {
        let mut window = window(LengthUnit::Millimetres, "25.4");
        let mut effects = Effects::default();

        let task = window.update(Message::LeftExited, &mut effects).unwrap();
        let expected = 25.4 / 254.0;

        assert_close(window.margins.left, expected);
        assert_eq!(
            effects.calls,
            [
                Effect::SetLeft(expected),
                Effect::Write {
                    section: PAGE_SETUP_SECTION.to_owned(),
                    key: LEFT_MARGIN_KEY.to_owned(),
                    value: expected,
                },
                Effect::Propagate(window.margins),
            ]
        );
        drop(task);
    }

    #[test]
    fn left_exit_converts_page_width_to_inches() {
        let mut window = window(LengthUnit::Inches, "2.5");
        let mut effects = Effects::default();

        window.commit_left_margin(&mut effects).unwrap();

        assert_close(window.margins.left, 0.25);
        assert_eq!(effects.calls[0], Effect::SetLeft(0.25));
    }

    #[test]
    fn changed_message_stages_text_without_model_effects() {
        let mut window = window(LengthUnit::Millimetres, "1");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window
            .update(Message::LeftChanged("12.5".to_owned()), &mut effects)
            .unwrap();

        assert_eq!(window.left_text, "12.5");
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn invalid_left_text_does_not_commit_or_redraw() {
        let mut window = window(LengthUnit::Millimetres, "not a number");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let result = window.commit_left_margin(&mut effects);

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
    }

    #[test]
    fn left_text_outside_generic_float_edit_range_is_rejected() {
        let mut window = window(LengthUnit::Millimetres, "1.0000001e50");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let result = window.commit_left_margin(&mut effects);

        assert_eq!(result, Err(MarginEditError::OutOfRange));
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
    }

    #[test]
    fn right_exit_commits_distance_from_metric_page_edge() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.right_text = "25.4".to_owned();
        let mut effects = Effects::default();

        let task = window.update(Message::RightExited, &mut effects).unwrap();
        let expected = 1.0 - 25.4 / 254.0;

        assert_close(window.margins.right, expected);
        assert_eq!(
            effects.calls,
            [
                Effect::SetRight(expected),
                Effect::Write {
                    section: PAGE_SETUP_SECTION.to_owned(),
                    key: RIGHT_MARGIN_KEY.to_owned(),
                    value: expected,
                },
                Effect::Propagate(window.margins),
            ]
        );
        drop(task);
    }

    #[test]
    fn right_exit_converts_page_width_to_inches() {
        let mut window = window(LengthUnit::Inches, "unused");
        window.right_text = "2.5".to_owned();
        let mut effects = Effects::default();

        window.commit_right_margin(&mut effects).unwrap();

        assert_close(window.margins.right, 0.75);
        assert_eq!(effects.calls[0], Effect::SetRight(0.75));
    }

    #[test]
    fn top_exit_commits_metric_normalized_margin() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.top_text = "25.4".to_owned();
        let mut effects = Effects::default();

        let task = window.update(Message::TopExited, &mut effects).unwrap();
        let expected = 25.4 / 127.0;

        assert_close(window.margins.top, expected);
        assert_eq!(
            effects.calls,
            [
                Effect::SetTop(expected),
                Effect::Write {
                    section: PAGE_SETUP_SECTION.to_owned(),
                    key: TOP_MARGIN_KEY.to_owned(),
                    value: expected,
                },
                Effect::Propagate(window.margins),
            ]
        );
        drop(task);
    }

    #[test]
    fn top_exit_converts_page_height_to_inches() {
        let mut window = window(LengthUnit::Inches, "unused");
        window.top_text = "1.25".to_owned();
        let mut effects = Effects::default();

        window.commit_top_margin(&mut effects).unwrap();

        assert_close(window.margins.top, 0.25);
        assert_eq!(effects.calls[0], Effect::SetTop(0.25));
    }

    #[test]
    fn width_height_exit_derives_bottom_coordinate_and_updates_layout() {
        let mut window = window(LengthUnit::Inches, "unused");
        window.width_height_text = "2".to_owned();
        let mut effects = Effects::default();

        let task = window
            .update(Message::WidthHeightExited, &mut effects)
            .unwrap();
        let expected = ((0.9 - 0.1) * 254.0) / 2.0 / 127.0 + 0.2;

        assert_close(window.margins.bottom, expected);
        assert_eq!(
            effects.calls,
            [
                Effect::SetBottom(expected),
                Effect::Write {
                    section: PAGE_SETUP_SECTION.to_owned(),
                    key: BOTTOM_MARGIN_KEY.to_owned(),
                    value: expected,
                },
                Effect::Propagate(window.margins),
            ]
        );
        drop(task);
    }

    #[test]
    fn zero_width_height_ratio_preserves_recovered_unguarded_division() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.width_height_text = "0".to_owned();
        let mut effects = Effects::default();

        window.commit_width_height_ratio(&mut effects).unwrap();

        assert!(window.margins.bottom.is_infinite());
        assert!(matches!(effects.calls[0], Effect::SetBottom(value) if value.is_infinite()));
        assert_eq!(effects.calls.len(), 3);
    }

    #[test]
    fn close_request_hides_the_retained_modeless_window() {
        let mut window = window(LengthUnit::Millimetres, "staged");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        assert_eq!(window.form_close_action(), WindowCloseAction::Hide);
        let task = window
            .update(Message::CloseRequested, &mut effects)
            .unwrap();

        assert!(!window.visible);
        assert_eq!(window.left_text, "staged");
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn refresh_populates_metric_controls_without_model_or_host_changes() {
        let mut window = window(LengthUnit::Millimetres, "staged");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window
            .update(Message::RefreshFromModel, &mut effects)
            .unwrap();

        assert_close(control_value(&window.left_text), 25.4);
        assert_close(control_value(&window.right_text), 25.4);
        assert_close(control_value(&window.top_text), 25.4);
        assert_close(
            control_value(&window.width_height_text),
            (0.9 - 0.1) * 254.0 / ((0.8 - 0.2) * 127.0),
        );
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn refresh_converts_only_distance_controls_to_inches() {
        let mut window = window(LengthUnit::Inches, "staged");

        window.refresh_controls();

        assert_close(control_value(&window.left_text), 1.0);
        assert_close(control_value(&window.right_text), 1.0);
        assert_close(control_value(&window.top_text), 1.0);
        assert_close(
            control_value(&window.width_height_text),
            (0.9 - 0.1) * 254.0 / ((0.8 - 0.2) * 127.0),
        );
    }

    #[test]
    fn exit_click_only_hides_the_persistent_window() {
        let mut window = window(LengthUnit::Millimetres, "staged");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let first_task = window.update(Message::ExitClicked, &mut effects).unwrap();
        let second_task = window.update(Message::ExitClicked, &mut effects).unwrap();

        assert!(!window.visible);
        assert_eq!(window.left_text, "staged");
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop((first_task, second_task));
    }

    #[test]
    fn left_spin_up_stages_one_unit_increment_without_committing() {
        let mut window = window(LengthUnit::Millimetres, "12.5");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window
            .update(Message::LeftIncremented, &mut effects)
            .unwrap();

        assert_close(control_value(&window.left_text), 13.5);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn left_spin_up_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "invalid");

        let result = window.increment_left_text();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.left_text, "invalid");
    }

    #[test]
    fn left_spin_down_stages_one_unit_decrement_without_committing() {
        let mut window = window(LengthUnit::Millimetres, "12.5");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window
            .update(Message::LeftDecremented, &mut effects)
            .unwrap();

        assert_close(control_value(&window.left_text), 11.5);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn left_spin_down_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "invalid");

        let result = window.decrement_left_text();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.left_text, "invalid");
    }

    #[test]
    fn right_spin_up_stages_recovered_reverse_decrement() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.right_text = "12.5".to_owned();
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window.update(Message::RightSpinUp, &mut effects).unwrap();

        assert_close(control_value(&window.right_text), 11.5);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn right_spin_up_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.right_text = "invalid".to_owned();

        let result = window.decrement_right_text_on_spin_up();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.right_text, "invalid");
    }

    #[test]
    fn right_spin_down_stages_recovered_reverse_increment() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.right_text = "12.5".to_owned();
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window.update(Message::RightSpinDown, &mut effects).unwrap();

        assert_close(control_value(&window.right_text), 13.5);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn right_spin_down_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.right_text = "invalid".to_owned();

        let result = window.increment_right_text_on_spin_down();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.right_text, "invalid");
    }

    #[test]
    fn top_spin_up_stages_recovered_screen_direction_decrement() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.top_text = "12.5".to_owned();
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window.update(Message::TopSpinUp, &mut effects).unwrap();

        assert_close(control_value(&window.top_text), 11.5);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn top_spin_up_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.top_text = "invalid".to_owned();

        let result = window.decrement_top_text_on_spin_up();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.top_text, "invalid");
    }

    #[test]
    fn top_spin_down_stages_recovered_screen_direction_increment() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.top_text = "12.5".to_owned();
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window.update(Message::TopSpinDown, &mut effects).unwrap();

        assert_close(control_value(&window.top_text), 13.5);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn top_spin_down_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.top_text = "invalid".to_owned();

        let result = window.increment_top_text_on_spin_down();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.top_text, "invalid");
    }

    #[test]
    fn width_height_spin_up_stages_one_tenth_decrement() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.width_height_text = "2.5".to_owned();
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window
            .update(Message::WidthHeightSpinUp, &mut effects)
            .unwrap();

        assert_close(control_value(&window.width_height_text), 2.4);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn width_height_spin_up_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.width_height_text = "invalid".to_owned();

        let result = window.decrement_width_height_text_on_spin_up();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.width_height_text, "invalid");
    }

    #[test]
    fn width_height_spin_down_stages_one_tenth_increment() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.width_height_text = "2.5".to_owned();
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window
            .update(Message::WidthHeightSpinDown, &mut effects)
            .unwrap();

        assert_close(control_value(&window.width_height_text), 2.6);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn width_height_spin_down_parse_error_preserves_staged_text() {
        let mut window = window(LengthUnit::Millimetres, "unused");
        window.width_height_text = "invalid".to_owned();

        let result = window.increment_width_height_text_on_spin_down();

        assert_eq!(result, Err(MarginEditError::InvalidNumber));
        assert_eq!(window.width_height_text, "invalid");
    }

    #[test]
    fn form_create_selects_metric_unit_and_label_page_only() {
        let mut window = window(LengthUnit::Inches, "staged");
        let original_margins = window.margins;
        let original_text = window.left_text.clone();
        let mut effects = Effects::default();

        let task = window.update(Message::FormCreated, &mut effects).unwrap();

        assert_eq!(window.unit, LengthUnit::Inches);
        assert_eq!(window.selected_unit, LengthUnit::Millimetres);
        assert_eq!(window.unit_label_page, UnitLabelPage::Millimetres);
        assert_eq!(window.left_text, original_text);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn unit_change_selects_label_page_but_uses_process_unit_for_refresh() {
        let mut window = window(LengthUnit::Millimetres, "staged");
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window
            .update(Message::UnitSelected(LengthUnit::Inches), &mut effects)
            .unwrap();

        assert_eq!(window.selected_unit, LengthUnit::Inches);
        assert_eq!(window.unit_label_page, UnitLabelPage::Inches);
        assert_eq!(window.unit, LengthUnit::Millimetres);
        assert_close(control_value(&window.left_text), 25.4);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }

    #[test]
    fn metric_combo_item_uses_metric_labels_with_process_inch_values() {
        let mut window = window(LengthUnit::Inches, "staged");

        window.select_unit_and_refresh(LengthUnit::Millimetres);

        assert_eq!(window.selected_unit, LengthUnit::Millimetres);
        assert_eq!(window.unit_label_page, UnitLabelPage::Millimetres);
        assert_eq!(window.unit, LengthUnit::Inches);
        assert_close(control_value(&window.left_text), 1.0);
    }

    #[test]
    fn form_show_uses_process_unit_without_changing_combo_selection() {
        let mut window = window(LengthUnit::Inches, "staged");
        window.selected_unit = LengthUnit::Millimetres;
        window.unit_label_page = UnitLabelPage::Millimetres;
        let original_margins = window.margins;
        let mut effects = Effects::default();

        let task = window.update(Message::FormShown, &mut effects).unwrap();

        assert_eq!(window.unit_label_page, UnitLabelPage::Inches);
        assert_eq!(window.selected_unit, LengthUnit::Millimetres);
        assert_close(control_value(&window.left_text), 1.0);
        assert_eq!(window.margins, original_margins);
        assert!(effects.calls.is_empty());
        drop(task);
    }
}
