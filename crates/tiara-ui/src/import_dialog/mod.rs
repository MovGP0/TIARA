use iced::widget::{column, text, text_input};
use iced::{Element, Task};

pub const TITLE: &str = "Import from";
pub const FORM_RESOURCE: &str = "ImportDlg";
pub const LIBRARY_EVALUATION: &str = "iced supplies the Import window message, state, text, and layout. A typed draw plan keeps host-owned device previews outside the distributable crate. Small local calculations preserve the recovered Win32 MulDiv DPI rounding and rectangle adjustment, so no additional dependency is needed.";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ImportDevice {
    pub label: String,
    pub preview_key: Option<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DrawBounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DeviceRowDrawPlan {
    pub fill_background: bool,
    pub text: String,
    pub text_origin: (i32, i32),
    pub preview_bounds: DrawBounds,
    pub preview_key: Option<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SearchTextTone {
    #[default]
    Placeholder,
    WindowText,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WindowConstraints {
    pub min_width: u32,
    pub min_height: u32,
    pub max_width: Option<u32>,
    pub max_height: Option<u32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Created {
        width: u32,
        minimum_height: u32,
        current_ppi: u32,
    },
    SearchChanged {
        text: String,
        control_ready: bool,
    },
    SearchEntered,
    SearchExited,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct State {
    devices: Vec<ImportDevice>,
    selected_index: Option<usize>,
    search_fallback_prefix: String,
    search_text: String,
    search_text_tone: SearchTextTone,
    constraints: WindowConstraints,
}

impl State {
    #[must_use]
    pub fn new(devices: Vec<ImportDevice>, search_fallback_prefix: impl Into<String>) -> Self {
        Self {
            devices,
            selected_index: None,
            search_fallback_prefix: search_fallback_prefix.into(),
            search_text: "Search".to_owned(),
            search_text_tone: SearchTextTone::Placeholder,
            constraints: WindowConstraints {
                min_width: 0,
                min_height: 0,
                max_width: None,
                max_height: None,
            },
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created {
                width,
                minimum_height,
                current_ppi,
            } => self.on_create(width, minimum_height, current_ppi),
            Message::SearchChanged {
                text,
                control_ready,
            } => self.on_search_changed(&text, control_ready),
            Message::SearchEntered => self.on_search_entered(),
            Message::SearchExited => self.on_search_exited(),
        }
        Task::none()
    }

    /// Initializes the fixed-width Import window constraints.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01782C60`, symbol `FUN_01782c60` (`TImportDlg.FormCreate`). The
    /// current width becomes both width limits. The recovered stored minimum
    /// height is DPI-scaled from 96 PPI with Win32 `MulDiv` rounding. Maximum
    /// height remains unbounded.
    pub fn on_create(&mut self, width: u32, minimum_height: u32, current_ppi: u32) {
        self.constraints = WindowConstraints {
            min_width: width,
            min_height: scale_for_ppi(minimum_height, current_ppi),
            max_width: Some(width),
            max_height: None,
        };
    }

    #[must_use]
    pub const fn constraints(&self) -> WindowConstraints {
        self.constraints
    }

    /// Selects the closest device after the search edit changes.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01783140`, symbol `FUN_01783140` (`TImportDlg.edSearchChange`). A
    /// change is ignored until the edit control is ready. Nonempty input is
    /// normalized to uppercase and searched first as entered, then with the
    /// recovered resource prefix. If neither form matches, the first device
    /// is selected. The resource prefix is injected because its business name
    /// is not recovered.
    pub fn on_search_changed(&mut self, text: &str, control_ready: bool) {
        text.clone_into(&mut self.search_text);
        if !control_ready || text.is_empty() {
            return;
        }

        let normalized = text.to_uppercase();
        let fallback = format!("{}{normalized}", self.search_fallback_prefix);
        self.selected_index = find_device_prefix(&self.devices, &normalized)
            .or_else(|| find_device_prefix(&self.devices, &fallback))
            .or_else(|| (!self.devices.is_empty()).then_some(0));
    }

    #[must_use]
    pub const fn selected_index(&self) -> Option<usize> {
        self.selected_index
    }

    /// Activates the search edit for user input.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017832A0`, symbol `FUN_017832a0` (`TImportDlg.edSearchEnter`). It
    /// restores the normal window-text tone and removes the placeholder text.
    pub fn on_search_entered(&mut self) {
        self.search_text_tone = SearchTextTone::WindowText;
        self.search_text.clear();
    }

    /// Restores the inactive search placeholder.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017832E0`, symbol `FUN_017832e0` (`TImportDlg.edSearchExit`). It sets
    /// the gray placeholder tone and replaces the edit text with `Search`.
    pub fn on_search_exited(&mut self) {
        self.search_text_tone = SearchTextTone::Placeholder;
        self.search_text.clear();
        self.search_text.push_str("Search");
    }

    #[must_use]
    pub fn search_text(&self) -> &str {
        &self.search_text
    }

    #[must_use]
    pub const fn search_text_tone(&self) -> SearchTextTone {
        self.search_text_tone
    }

    /// Builds the owner-draw operations for one imported device row.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01782CE0`, symbol `FUN_01782ce0`
    /// (`TImportDlg.LBDevicesDrawItem`). The existing selection brush and text
    /// color remain unchanged. The row background is filled, the device label
    /// starts two pixels inside the left edge, and the device object supplies
    /// a preview below the font area. The host resolves the preview key, so
    /// recovered proprietary device data does not enter this crate.
    #[must_use]
    pub fn device_row_draw_plan(
        &self,
        index: usize,
        bounds: DrawBounds,
        logical_font_height: i32,
    ) -> Option<DeviceRowDrawPlan> {
        self.devices.get(index).map(|device| DeviceRowDrawPlan {
            fill_background: true,
            text: device.label.clone(),
            text_origin: (bounds.left.saturating_add(2), bounds.top),
            preview_bounds: DrawBounds {
                top: bounds.top.saturating_sub(logical_font_height),
                ..bounds
            },
            preview_key: device.preview_key.clone(),
        })
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let rows = self.devices.iter().map(|device| text(&device.label).into());
        column![
            text(TITLE).size(24),
            text_input("Search", &self.search_text).on_input(|text| Message::SearchChanged {
                text,
                control_ready: true,
            }),
            column(rows).spacing(4),
        ]
        .padding(8)
        .spacing(8)
        .into()
    }
}

fn scale_for_ppi(value: u32, current_ppi: u32) -> u32 {
    let scaled = u64::from(value)
        .saturating_mul(u64::from(current_ppi))
        .saturating_add(48)
        / 96;
    u32::try_from(scaled).unwrap_or(u32::MAX)
}

fn find_device_prefix(devices: &[ImportDevice], search: &str) -> Option<usize> {
    devices.iter().position(|device| {
        let label = device.label.to_uppercase();
        label == search || label.starts_with(search)
    })
}

#[cfg(test)]
mod tests {
    use iced::Task;

    use super::{
        DeviceRowDrawPlan, DrawBounds, ImportDevice, Message, SearchTextTone, State,
        WindowConstraints,
    };

    fn device(label: &str, preview_key: Option<&str>) -> ImportDevice {
        ImportDevice {
            label: label.to_owned(),
            preview_key: preview_key.map(str::to_owned),
        }
    }

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn create_fixes_width_and_scales_minimum_height() {
        let mut state = State::new(Vec::new(), " ");

        discard(state.update(Message::Created {
            width: 320,
            minimum_height: 200,
            current_ppi: 144,
        }));

        assert_eq!(
            state.constraints(),
            WindowConstraints {
                min_width: 320,
                min_height: 300,
                max_width: Some(320),
                max_height: None,
            }
        );
    }

    #[test]
    fn create_saturates_an_overflowing_scaled_height() {
        let mut state = State::new(Vec::new(), " ");

        state.on_create(640, u32::MAX, u32::MAX);

        assert_eq!(state.constraints().min_height, u32::MAX);
    }

    #[test]
    fn row_draw_plan_fills_background_draws_text_and_offsets_preview() {
        let state = State::new(vec![device("Amplifier", Some("device:amplifier"))], " ");
        let bounds = DrawBounds {
            left: 8,
            top: 20,
            right: 128,
            bottom: 68,
        };

        assert_eq!(
            state.device_row_draw_plan(0, bounds, -12),
            Some(DeviceRowDrawPlan {
                fill_background: true,
                text: "Amplifier".to_owned(),
                text_origin: (10, 20),
                preview_bounds: DrawBounds { top: 32, ..bounds },
                preview_key: Some("device:amplifier".to_owned()),
            })
        );
    }

    #[test]
    fn row_draw_plan_returns_none_for_an_unknown_index() {
        let state = State::new(vec![device("Amplifier", None)], " ");

        assert_eq!(
            state.device_row_draw_plan(1, DrawBounds::default(), -12),
            None
        );
    }

    #[test]
    fn search_change_selects_a_case_insensitive_prefix() {
        let mut state = State::new(
            vec![device("Amplifier", None), device("NPN Transistor", None)],
            " ",
        );

        discard(state.update(Message::SearchChanged {
            text: "npn".to_owned(),
            control_ready: true,
        }));

        assert_eq!(state.selected_index(), Some(1));
    }

    #[test]
    fn search_change_uses_injected_prefix_then_defaults_to_first_device() {
        let mut state = State::new(vec![device("Visible", None), device("@Hidden", None)], "@");

        state.on_search_changed("hid", true);
        assert_eq!(state.selected_index(), Some(1));

        state.on_search_changed("missing", true);
        assert_eq!(state.selected_index(), Some(0));
    }

    #[test]
    fn search_change_is_a_no_op_when_control_is_not_ready_or_text_is_empty() {
        let mut state = State::new(
            vec![device("Amplifier", None), device("NPN Transistor", None)],
            " ",
        );
        state.on_search_changed("npn", true);

        state.on_search_changed("amp", false);
        state.on_search_changed("", true);

        assert_eq!(state.selected_index(), Some(1));
    }

    #[test]
    fn search_enter_restores_normal_tone_and_clears_placeholder() {
        let mut state = State::new(Vec::new(), " ");

        discard(state.update(Message::SearchEntered));

        assert_eq!(state.search_text(), "");
        assert_eq!(state.search_text_tone(), SearchTextTone::WindowText);
    }

    #[test]
    fn search_exit_restores_placeholder_tone_and_text() {
        let mut state = State::new(Vec::new(), " ");
        state.on_search_entered();
        state.on_search_changed("amplifier", true);

        discard(state.update(Message::SearchExited));

        assert_eq!(state.search_text(), "Search");
        assert_eq!(state.search_text_tone(), SearchTextTone::Placeholder);
    }
}
