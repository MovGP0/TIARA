use std::time::{Duration, Instant};

use iced::widget::{button, checkbox, column, container, row, scrollable, text, text_input};
use iced::{Element, Length, Subscription, Task};
use tiara_core::equation_style::{
    AutoformatRule, EquationAutoformatSettings, EquationFont, EquationStyle,
    EquationStyleSettingsResult,
};

pub const TITLE: &str = "Settings";
pub const FORM_RESOURCE: &str = "EEConfigDlg";
pub const PREVIEW_DELAY: Duration = Duration::from_millis(200);
pub const HELP_CONTEXT: u32 = 0x20e;
pub const SOURCE_HEADER_RESOURCE_ID: u32 = 0x857;
pub const TARGET_HEADER_RESOURCE_ID: u32 = 0x858;
const TIMER_POLL_INTERVAL: Duration = Duration::from_millis(25);
const MINIMUM_AUTOFORMAT_ROWS: usize = 6;
const SAMPLE_EXPRESSION: &str = "f(x) = (a + b) / (c + d)";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RatioKind {
    ExponentSize,
    ExponentOverlap,
    IndexSize,
    IndexOverlap,
    FractionDistance,
    SpecialOverlap,
}

impl RatioKind {
    const ALL: [Self; 6] = [
        Self::ExponentSize,
        Self::ExponentOverlap,
        Self::IndexSize,
        Self::IndexOverlap,
        Self::FractionDistance,
        Self::SpecialOverlap,
    ];

    const fn index(self) -> usize {
        match self {
            Self::ExponentSize => 0,
            Self::ExponentOverlap => 1,
            Self::IndexSize => 2,
            Self::IndexOverlap => 3,
            Self::FractionDistance => 4,
            Self::SpecialOverlap => 5,
        }
    }

    const fn label(self) -> &'static str {
        match self {
            Self::ExponentSize => "Exponent relative size [%]",
            Self::ExponentOverlap => "Exponent base overlap [%]",
            Self::IndexSize => "Index relative size [%]",
            Self::IndexOverlap => "Index label overlap [%]",
            Self::FractionDistance => "Num/Den distance",
            Self::SpecialOverlap => "Special overlap",
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    RatioChanged(RatioKind, String),
    TimerTick(Instant),
    RequestFont,
    FontSelected(Option<EquationFont>),
    AutoformatEnabled(bool),
    AutoformatSourceChanged(usize, String),
    AutoformatTargetChanged(usize, String),
    AutoformatCellSelected { column: usize, row: usize },
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SampleRenderState {
    pub expression: String,
    pub width: u32,
    pub height: u32,
    pub origin: (u32, u32),
    pub generation: u64,
}

pub trait FontDialogAdapter {
    fn select_font(&mut self, current: &EquationFont) -> Option<EquationFont>;
}

pub trait ResourceTextAdapter {
    fn text(&mut self, resource_id: u32) -> String;
}

#[derive(Debug)]
pub struct Window {
    caller_style: EquationStyle,
    private_style: EquationStyle,
    caller_autoformat: EquationAutoformatSettings,
    private_autoformat: EquationAutoformatSettings,
    ratio_edits: [String; 6],
    font_summary: String,
    sample: SampleRenderState,
    preview_deadline: Option<Instant>,
    font_dialog_seed: Option<EquationFont>,
    accepted_settings: Option<EquationStyleSettingsResult>,
    visible: bool,
    help_context: u32,
    autoformat_headers: [String; 2],
}

impl Window {
    /// Implements Ghidra function `FUN_01466720` at `0x01466720`.
    ///
    /// The supplied live style is cloned into private staging state. The six
    /// ratios are exposed as percentages and the initial iced sample is built.
    #[must_use]
    pub fn new(caller_style: EquationStyle, caller_autoformat: EquationAutoformatSettings) -> Self {
        let private_style = caller_style.clone();
        let private_autoformat = normalize_autoformat_rows(caller_autoformat.clone());
        let ratio_edits = ratio_percentages(&private_style);
        let font_summary = private_style.font.summary();
        let sample = SampleRenderState {
            expression: SAMPLE_EXPRESSION.to_owned(),
            width: 0,
            height: 0,
            origin: (2, 2),
            generation: 0,
        };
        let mut window = Self {
            caller_style,
            private_style,
            caller_autoformat,
            private_autoformat,
            ratio_edits,
            font_summary,
            sample,
            preview_deadline: None,
            font_dialog_seed: None,
            accepted_settings: None,
            visible: true,
            help_context: 0,
            autoformat_headers: [String::new(), String::new()],
        };
        window.rebuild_sample();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::RatioChanged(kind, value) => {
                self.ratio_edits[kind.index()] = value;
                if let Ok(percent) = self.ratio_edits[kind.index()].parse::<i32>() {
                    self.stage_ratio(kind, percent, Instant::now());
                }
            }
            Message::TimerTick(now) => {
                let _ = self.run_delayed_refresh(now);
            }
            Message::RequestFont => {
                self.font_dialog_seed = Some(self.private_style.font.clone());
            }
            Message::FontSelected(selection) => self.apply_font_dialog_result(selection),
            Message::AutoformatEnabled(enabled) => self.private_autoformat.enabled = enabled,
            Message::AutoformatSourceChanged(index, value) => {
                if let Some(rule) = self.private_autoformat.rules.get_mut(index) {
                    rule.source = value;
                }
            }
            Message::AutoformatTargetChanged(index, value) => {
                if let Some(rule) = self.private_autoformat.rules.get_mut(index) {
                    rule.target = value;
                }
            }
            Message::AutoformatCellSelected { column, row } => {
                let _ = self.select_autoformat_cell(column, row);
            }
            Message::Accept => self.accept(),
            Message::Cancel => self.cancel(),
        }
        Task::none()
    }

    pub fn subscription(&self) -> Subscription<Message> {
        if self.preview_deadline.is_some() {
            iced::time::every(TIMER_POLL_INTERVAL).map(Message::TimerTick)
        } else {
            Subscription::none()
        }
    }

    /// Implements Ghidra function `FUN_01466580` at `0x01466580`.
    ///
    /// Iced owns the preview surface. This adapter measures the private style,
    /// replaces the prior render state, preserves the recovered margins, and
    /// increments the draw generation without changing the caller style.
    pub fn rebuild_sample(&mut self) {
        let font_size = u32::from(self.private_style.font.size_points);
        let character_count =
            u32::try_from(self.sample.expression.chars().count()).unwrap_or(u32::MAX);
        let measured_width = character_count.saturating_mul(font_size.max(1)) / 2;
        let measured_height =
            rounded_dimension(f64::from(font_size) * self.private_style.line_height);
        self.sample.width = measured_width.saturating_add(4);
        self.sample.height = measured_height.saturating_add(6);
        self.sample.origin = (2, 2);
        self.sample.generation = self.sample.generation.saturating_add(1);
        self.private_style.cached_bounds = Some(tiara_core::equation_style::EquationBounds {
            width: self.sample.width,
            height: self.sample.height,
        });
    }

    /// Implements Ghidra function `FUN_014666a0` at `0x014666A0`.
    ///
    /// The shared formatter reports the private font name, size, and style
    /// flags. Color and other complete font fields remain staged but omitted.
    pub fn update_font_summary(&mut self) {
        self.font_summary = self.private_style.font.summary();
    }

    /// Implements Ghidra function `FUN_01466950` at `0x01466950`.
    ///
    /// Consuming the window lets Rust release its dialog-private equation
    /// style and all other staged resources without a manual destructor.
    pub fn on_destroy(self) {
        drop(self);
    }

    /// Implements Ghidra function `FUN_01466CA0` at `0x01466CA0`.
    ///
    /// Activation refreshes the private font summary and does not commit it to
    /// the caller.
    pub fn on_activate(&mut self) {
        self.update_font_summary();
    }

    /// Implements Ghidra function `FUN_01466CE0` at `0x01466CE0`.
    ///
    /// The recovered create handler assigns help context `0x20e` and obtains
    /// the two replacement-grid headers from application string resources
    /// `0x857` and `0x858`. The adapter keeps proprietary catalog data outside
    /// the distributable crate.
    pub fn on_create(&mut self, resources: &mut impl ResourceTextAdapter) {
        self.help_context = HELP_CONTEXT;
        self.autoformat_headers = [
            resources.text(SOURCE_HEADER_RESOURCE_ID),
            resources.text(TARGET_HEADER_RESOURCE_ID),
        ];
    }

    /// Implements Ghidra function `FUN_01466970` at `0x01466970`.
    pub fn stage_exponent_size(&mut self, percent: i32, now: Instant) {
        self.stage_ratio(RatioKind::ExponentSize, percent, now);
    }

    /// Implements Ghidra function `FUN_014669e0` at `0x014669E0`.
    pub fn stage_exponent_overlap(&mut self, percent: i32, now: Instant) {
        self.stage_ratio(RatioKind::ExponentOverlap, percent, now);
    }

    /// Implements Ghidra function `FUN_01466a50` at `0x01466A50`.
    pub fn stage_index_size(&mut self, percent: i32, now: Instant) {
        self.stage_ratio(RatioKind::IndexSize, percent, now);
    }

    /// Implements Ghidra function `FUN_01466ac0` at `0x01466AC0`.
    pub fn stage_index_overlap(&mut self, percent: i32, now: Instant) {
        self.stage_ratio(RatioKind::IndexOverlap, percent, now);
    }

    /// Implements Ghidra function `FUN_01466b30` at `0x01466B30`.
    pub fn stage_fraction_distance(&mut self, percent: i32, now: Instant) {
        self.stage_ratio(RatioKind::FractionDistance, percent, now);
    }

    /// Implements Ghidra function `FUN_01466ba0` at `0x01466BA0`.
    pub fn stage_special_overlap(&mut self, percent: i32, now: Instant) {
        self.stage_ratio(RatioKind::SpecialOverlap, percent, now);
    }

    /// Implements Ghidra function `FUN_01466c10` at `0x01466C10`.
    ///
    /// The adapter receives a complete private-font copy. Cancellation keeps
    /// all state unchanged. Acceptance updates the summary and sample only.
    pub fn edit_font(&mut self, dialog: &mut impl FontDialogAdapter) {
        let selection = dialog.select_font(&self.private_style.font);
        self.apply_font_dialog_result(selection);
    }

    /// Applies the result from an asynchronous or platform font-dialog host.
    pub fn apply_font_dialog_result(&mut self, selection: Option<EquationFont>) {
        self.font_dialog_seed = None;
        let Some(font) = selection else {
            return;
        };
        self.private_style.font = font;
        self.update_font_summary();
        self.rebuild_sample();
    }

    /// Implements Ghidra function `FUN_01466cb0` at `0x01466CB0`.
    ///
    /// The preview runs once after the most recently restarted 200 ms delay.
    #[must_use]
    pub fn run_delayed_refresh(&mut self, now: Instant) -> bool {
        let Some(deadline) = self.preview_deadline else {
            return false;
        };
        if now < deadline {
            return false;
        }
        self.rebuild_sample();
        self.preview_deadline = None;
        true
    }

    /// Implements Ghidra function `FUN_01466db0` at `0x01466DB0`.
    ///
    /// Only column one of the final row can extend the staged grid, and only
    /// when that row's source cell is nonempty.
    #[must_use]
    pub fn select_autoformat_cell(&mut self, column: usize, selected_row: usize) -> bool {
        let Some(last_row) = self.private_autoformat.rules.len().checked_sub(1) else {
            return false;
        };
        if column != 1 || selected_row != last_row {
            return false;
        }
        if self.private_autoformat.rules[last_row].source.is_empty() {
            return false;
        }
        self.private_autoformat
            .rules
            .push(AutoformatRule::default());
        true
    }

    pub fn accept(&mut self) {
        let autoformat = EquationAutoformatSettings {
            enabled: self.private_autoformat.enabled,
            rules: self
                .private_autoformat
                .rules
                .iter()
                .filter(|rule| !rule.source.is_empty())
                .cloned()
                .collect(),
        };
        self.caller_style.clone_from(&self.private_style);
        self.caller_autoformat.clone_from(&autoformat);
        self.accepted_settings = Some(EquationStyleSettingsResult {
            style: self.private_style.clone(),
            autoformat,
        });
        self.visible = false;
    }

    pub const fn cancel(&mut self) {
        self.visible = false;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let ratio_controls =
            RatioKind::ALL
                .into_iter()
                .fold(column![].spacing(4), |controls, kind| {
                    controls.push(
                        row![
                            text(kind.label()).width(Length::Fill),
                            text_input("", &self.ratio_edits[kind.index()])
                                .on_input(move |value| Message::RatioChanged(kind, value)),
                        ]
                        .spacing(8),
                    )
                });

        let rules = self.private_autoformat.rules.iter().enumerate().fold(
            column![].spacing(4),
            |rules, (index, rule)| {
                rules.push(
                    row![
                        text_input(&self.autoformat_headers[0], &rule.source)
                            .on_input(move |value| Message::AutoformatSourceChanged(index, value)),
                        text_input(&self.autoformat_headers[1], &rule.target)
                            .on_input(move |value| Message::AutoformatTargetChanged(index, value)),
                        button("+").on_press(Message::AutoformatCellSelected {
                            column: 1,
                            row: index,
                        }),
                    ]
                    .spacing(6),
                )
            },
        );

        let sample_width = f32::from(u16::try_from(self.sample.width).unwrap_or(u16::MAX));
        let sample_height = f32::from(u16::try_from(self.sample.height).unwrap_or(u16::MAX));
        let sample = container(
            text(&self.sample.expression).size(f32::from(self.private_style.font.size_points)),
        )
        .padding([2, 2])
        .width(Length::Fixed(sample_width))
        .height(Length::Fixed(sample_height));

        container(
            column![
                text(TITLE).size(24),
                ratio_controls,
                row![
                    text(&self.font_summary).width(Length::Fill),
                    button("Set ...").on_press(Message::RequestFont),
                ]
                .spacing(8),
                text("Sample"),
                sample,
                checkbox("Autoformat Expression", self.private_autoformat.enabled)
                    .on_toggle(Message::AutoformatEnabled),
                scrollable(rules).height(Length::Fill),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn caller_style(&self) -> &EquationStyle {
        &self.caller_style
    }

    #[must_use]
    pub const fn private_style(&self) -> &EquationStyle {
        &self.private_style
    }

    #[must_use]
    pub const fn private_autoformat(&self) -> &EquationAutoformatSettings {
        &self.private_autoformat
    }

    #[must_use]
    pub const fn accepted_settings(&self) -> Option<&EquationStyleSettingsResult> {
        self.accepted_settings.as_ref()
    }

    #[must_use]
    pub const fn sample(&self) -> &SampleRenderState {
        &self.sample
    }

    #[must_use]
    pub fn font_summary(&self) -> &str {
        &self.font_summary
    }

    #[must_use]
    pub const fn pending_font_dialog(&self) -> Option<&EquationFont> {
        self.font_dialog_seed.as_ref()
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.visible
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn autoformat_headers(&self) -> &[String; 2] {
        &self.autoformat_headers
    }

    fn stage_ratio(&mut self, kind: RatioKind, percent: i32, now: Instant) {
        let ratio = f64::from(percent) / 100.0;
        match kind {
            RatioKind::ExponentSize => self.private_style.ratios.exponent_size = ratio,
            RatioKind::ExponentOverlap => self.private_style.ratios.exponent_overlap = ratio,
            RatioKind::IndexSize => self.private_style.ratios.index_size = ratio,
            RatioKind::IndexOverlap => self.private_style.ratios.index_overlap = ratio,
            RatioKind::FractionDistance => self.private_style.ratios.fraction_distance = ratio,
            RatioKind::SpecialOverlap => self.private_style.ratios.special_overlap = ratio,
        }
        self.preview_deadline = Some(now + PREVIEW_DELAY);
    }
}

fn ratio_percentages(style: &EquationStyle) -> [String; 6] {
    [
        style.ratios.exponent_size,
        style.ratios.exponent_overlap,
        style.ratios.index_size,
        style.ratios.index_overlap,
        style.ratios.fraction_distance,
        style.ratios.special_overlap,
    ]
    .map(|ratio| (ratio * 100.0).round().to_string())
}

fn rounded_dimension(value: f64) -> u32 {
    let bounded = value.round().clamp(1.0, f64::from(u32::MAX));
    #[allow(clippy::cast_possible_truncation, clippy::cast_sign_loss)]
    {
        bounded as u32
    }
}

fn normalize_autoformat_rows(
    mut settings: EquationAutoformatSettings,
) -> EquationAutoformatSettings {
    let row_count = MINIMUM_AUTOFORMAT_ROWS.max(settings.rules.len().saturating_add(1));
    settings.rules.resize(row_count, AutoformatRule::default());
    settings
}

#[cfg(test)]
mod tests {
    use std::time::{Duration, Instant};

    use super::{FontDialogAdapter, PREVIEW_DELAY, ResourceTextAdapter, Window};
    use tiara_core::equation_style::{
        AutoformatRule, EquationAutoformatSettings, EquationFont, EquationStyle,
    };

    struct FontDialog {
        selection: Option<EquationFont>,
        seed: Option<EquationFont>,
    }

    impl FontDialogAdapter for FontDialog {
        fn select_font(&mut self, current: &EquationFont) -> Option<EquationFont> {
            self.seed = Some(current.clone());
            self.selection.clone()
        }
    }

    #[derive(Default)]
    struct Resources {
        requests: Vec<u32>,
    }

    impl ResourceTextAdapter for Resources {
        fn text(&mut self, resource_id: u32) -> String {
            self.requests.push(resource_id);
            format!("resource-{resource_id:x}")
        }
    }

    #[test]
    fn lifecycle_loads_grid_headers_refreshes_font_and_releases_staging() {
        let mut window = Window::new(
            EquationStyle::default(),
            EquationAutoformatSettings::default(),
        );
        let mut resources = Resources::default();

        window.on_create(&mut resources);

        assert_eq!(window.help_context(), super::HELP_CONTEXT);
        assert_eq!(resources.requests, [0x857, 0x858]);
        assert_eq!(
            window.autoformat_headers(),
            &["resource-857".to_owned(), "resource-858".to_owned()]
        );
        window.private_style.font.family = "Lifecycle Font".to_owned();
        window.on_activate();
        assert!(window.font_summary().contains("Lifecycle Font"));
        window.on_destroy();
    }

    #[test]
    fn initialization_deep_copies_style_and_renders_the_first_sample() {
        let style = EquationStyle::default();
        let window = Window::new(style.clone(), EquationAutoformatSettings::default());

        assert_eq!(window.caller_style(), &style);
        assert_eq!(window.private_style().font, style.font);
        assert_eq!(window.private_style().ratios, style.ratios);
        assert!(window.private_style().cached_bounds.is_some());
        assert_eq!(window.sample().origin, (2, 2));
        assert_eq!(window.sample().generation, 1);
        assert_eq!(window.private_autoformat().rules.len(), 6);
    }

    #[test]
    fn each_ratio_stages_percentage_and_restarts_one_delayed_refresh() {
        let mut window = Window::new(
            EquationStyle::default(),
            EquationAutoformatSettings::default(),
        );
        let start = Instant::now();
        window.stage_exponent_size(80, start);
        window.stage_exponent_overlap(15, start + Duration::from_millis(50));
        window.stage_index_size(75, start + Duration::from_millis(75));
        window.stage_index_overlap(20, start + Duration::from_millis(100));
        window.stage_fraction_distance(25, start + Duration::from_millis(125));
        window.stage_special_overlap(30, start + Duration::from_millis(150));

        assert!((window.private_style().ratios.exponent_size - 0.8).abs() <= f64::EPSILON);
        assert!((window.private_style().ratios.special_overlap - 0.3).abs() <= f64::EPSILON);
        let generation = window.sample().generation;
        assert!(!window.run_delayed_refresh(start + PREVIEW_DELAY));
        assert!(window.run_delayed_refresh(start + Duration::from_millis(350)));
        assert_eq!(window.sample().generation, generation + 1);
        assert!(!window.run_delayed_refresh(start + Duration::from_millis(400)));
    }

    #[test]
    fn font_cancel_is_noop_and_acceptance_updates_private_summary_and_sample() {
        let mut window = Window::new(
            EquationStyle::default(),
            EquationAutoformatSettings::default(),
        );
        let generation = window.sample().generation;
        let mut cancel = FontDialog {
            selection: None,
            seed: None,
        };
        window.edit_font(&mut cancel);
        assert_eq!(window.sample().generation, generation);
        assert_eq!(cancel.seed, Some(EquationFont::default()));

        let selected = EquationFont {
            family: "Cambria Math".to_owned(),
            size_points: 14,
            italic: true,
            color_rgba: [255, 0, 0, 255],
            ..EquationFont::default()
        };
        let mut accept = FontDialog {
            selection: Some(selected.clone()),
            seed: None,
        };
        window.edit_font(&mut accept);
        assert_eq!(window.private_style().font, selected);
        assert!(window.font_summary().contains("Italic"));
        assert!(!window.font_summary().contains("255"));
        assert_eq!(window.sample().generation, generation + 1);
        assert_eq!(window.caller_style().font, EquationFont::default());
    }

    #[test]
    fn autoformat_grid_extends_only_from_nonempty_source_at_editable_end() {
        let mut window = Window::new(
            EquationStyle::default(),
            EquationAutoformatSettings::default(),
        );
        let last = window.private_autoformat().rules.len() - 1;
        assert!(!window.select_autoformat_cell(0, last));
        assert!(!window.select_autoformat_cell(1, last));
        window.private_autoformat.rules[last].source = "alpha".to_owned();
        assert!(window.select_autoformat_cell(1, last));
        assert_eq!(window.private_autoformat().rules.len(), 7);
    }

    #[test]
    fn cancel_discards_private_changes_and_accept_returns_filtered_settings() {
        let style = EquationStyle::default();
        let autoformat = EquationAutoformatSettings {
            enabled: true,
            rules: vec![AutoformatRule::new("a", "b")],
        };
        let mut cancel = Window::new(style.clone(), autoformat.clone());
        cancel.private_style.ratios.exponent_size = 0.5;
        cancel.cancel();
        assert_eq!(cancel.caller_style(), &style);

        let mut accept = Window::new(style, autoformat);
        accept.private_style.ratios.exponent_size = 0.5;
        accept.private_autoformat.rules[1] = AutoformatRule::new("x", "y");
        accept.accept();
        let Some(result) = accept.accepted_settings() else {
            panic!("accept must produce settings");
        };
        assert!((result.style.ratios.exponent_size - 0.5).abs() <= f64::EPSILON);
        assert_eq!(result.autoformat.rules.len(), 2);
        assert!(!accept.is_visible());
    }
}
