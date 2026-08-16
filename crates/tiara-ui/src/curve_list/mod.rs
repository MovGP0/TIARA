use std::collections::BTreeSet;

use iced::widget::{button, checkbox, column, container, row, scrollable, text, text_input};
use iced::{Element, Length};

pub const TITLE: &str = "Show/hide curves";

const FILTER_CATEGORIES: [CurveCategory; 6] = [
    CurveCategory::NodalVoltage,
    CurveCategory::Current,
    CurveCategory::OtherVoltage,
    CurveCategory::UserDefined,
    CurveCategory::Output,
    CurveCategory::Measurement,
];

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum CurveCategory {
    Current,
    NodalVoltage,
    OtherVoltage,
    UserDefined,
    Output,
    Measurement,
}

impl CurveCategory {
    const fn label(self) -> &'static str {
        match self {
            Self::Current => "Currents",
            Self::NodalVoltage => "Nodal Voltages",
            Self::OtherVoltage => "Other Voltages",
            Self::UserDefined => "User defined",
            Self::Output => "Outputs",
            Self::Measurement => "Measurement",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CurveDescriptor {
    pub id: String,
    pub display_name: String,
    pub object_categories: BTreeSet<CurveCategory>,
}

impl CurveDescriptor {
    #[must_use]
    pub fn new(id: impl Into<String>, display_name: impl Into<String>) -> Self {
        Self {
            id: id.into(),
            display_name: display_name.into(),
            object_categories: BTreeSet::new(),
        }
    }

    #[must_use]
    pub fn with_category(mut self, category: CurveCategory) -> Self {
        self.object_categories.insert(category);
        self
    }

    fn matches_category(&self, category: CurveCategory) -> bool {
        match category {
            CurveCategory::Current => self.display_name.starts_with("I_"),
            CurveCategory::NodalVoltage => self.display_name.starts_with("VP"),
            CurveCategory::OtherVoltage => self.display_name.starts_with("V_"),
            CurveCategory::UserDefined | CurveCategory::Output | CurveCategory::Measurement => {
                self.object_categories.contains(&category)
            }
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct CurveRow {
    curve: CurveDescriptor,
    checked: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CloseDisposition {
    #[default]
    KeepOpen,
    Release,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum ToggleState {
    #[default]
    Off,
    On,
}

impl ToggleState {
    const fn from_bool(value: bool) -> Self {
        if value { Self::On } else { Self::Off }
    }

    const fn is_on(self) -> bool {
        matches!(self, Self::On)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagramSynchronization {
    pub checked_visible_curve_ids: Vec<String>,
    pub unchecked_visible_curve_ids: Vec<String>,
    pub persist: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    FilterTextChanged(String),
    CategoryChanged(CurveCategory, bool),
    CurveChecked(usize, bool),
    CheckAll,
    CheckFirst,
    Ok,
    Cancel,
}

#[derive(Debug, Clone)]
pub struct Window {
    master_curves: Vec<CurveDescriptor>,
    visible_rows: Vec<CurveRow>,
    diagram_curve_ids: BTreeSet<String>,
    enabled_categories: BTreeSet<CurveCategory>,
    available_categories: BTreeSet<CurveCategory>,
    filter_text: String,
    initialization_guard: ToggleState,
    current_diagram_available: ToggleState,
    close_requested: ToggleState,
    helpers_allocated: usize,
    editor_cleanup_enabled: ToggleState,
    editor_interaction_ended: ToggleState,
    editor_refresh_generation: u64,
    redraw_generation: u64,
    persistence_generation: u64,
    last_synchronization: Option<DiagramSynchronization>,
    help_context: u32,
}

impl Default for Window {
    fn default() -> Self {
        let mut window = Self {
            master_curves: Vec::new(),
            visible_rows: Vec::new(),
            diagram_curve_ids: BTreeSet::new(),
            enabled_categories: [
                CurveCategory::Current,
                CurveCategory::NodalVoltage,
                CurveCategory::OtherVoltage,
                CurveCategory::UserDefined,
                CurveCategory::Output,
            ]
            .into_iter()
            .collect(),
            available_categories: FILTER_CATEGORIES.into_iter().collect(),
            filter_text: String::new(),
            initialization_guard: ToggleState::On,
            current_diagram_available: ToggleState::Off,
            close_requested: ToggleState::Off,
            helpers_allocated: 4,
            editor_cleanup_enabled: ToggleState::On,
            editor_interaction_ended: ToggleState::Off,
            editor_refresh_generation: 0,
            redraw_generation: 0,
            persistence_generation: 0,
            last_synchronization: None,
            help_context: 0,
        };
        window.create_form();
        window
    }
}

impl Window {
    #[must_use]
    pub fn new(
        curves: impl IntoIterator<Item = CurveDescriptor>,
        diagram_curve_ids: impl IntoIterator<Item = String>,
    ) -> Self {
        let mut window = Self {
            diagram_curve_ids: diagram_curve_ids.into_iter().collect(),
            current_diagram_available: ToggleState::On,
            ..Self::default()
        };
        window.copy_available_curve_inventory(curves);
        window.show_form(true);
        window
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::FilterTextChanged(value) => {
                self.filter_text = value;
                self.apply_filter_text_key_up();
            }
            Message::CategoryChanged(category, enabled) => {
                self.set_category_enabled(category, enabled);
                self.apply_filter_change();
            }
            Message::CurveChecked(index, checked) => {
                if let Some(row) = self.visible_rows.get_mut(index) {
                    row.checked = checked;
                }
                self.apply_curve_checklist_click();
            }
            Message::CheckAll => self.check_all_filtered_curves(),
            Message::CheckFirst => self.check_first_filtered_curve(),
            Message::Ok => self.request_ok_close(),
            Message::Cancel => self.request_cancel_close(),
        }
    }

    pub fn set_category_enabled(&mut self, category: CurveCategory, enabled: bool) {
        if enabled {
            self.enabled_categories.insert(category);
        } else {
            self.enabled_categories.remove(&category);
        }
    }

    pub const fn set_current_diagram_available(&mut self, available: bool) {
        self.current_diagram_available = ToggleState::from_bool(available);
    }

    pub const fn set_editor_cleanup_enabled(&mut self, enabled: bool) {
        self.editor_cleanup_enabled = ToggleState::from_bool(enabled);
    }

    /// Ports Ghidra function `FUN_0135d9d0` at `0x0135D9D0`.
    ///
    /// The database maps the original function to `TCurveListFrm.FormCreate`.
    /// Rust collections replace the four owned Delphi helper collections. The
    /// form starts under its initialization guard, enables editor cleanup, and
    /// stores recovered help context `0x21E`.
    pub fn create_form(&mut self) {
        self.initialization_guard = ToggleState::On;
        self.master_curves.clear();
        self.visible_rows.clear();
        self.diagram_curve_ids.clear();
        self.helpers_allocated = 4;
        self.editor_cleanup_enabled = ToggleState::On;
        self.help_context = 0x21e;
    }

    /// Ports Ghidra function `FUN_0135edf0` at `0x0135EDF0`.
    ///
    /// The database maps the original function to `TCurveListFrm.FormShow`.
    /// It applies the shared Save All Analysis Results state to Currents,
    /// Nodal Voltages, Other Voltages, and Outputs. User-defined curves remain
    /// enabled. It then rebuilds the checklist, releases the initialization
    /// guard, and requests an editor refresh.
    pub fn show_form(&mut self, save_all_analysis_results: bool) {
        for category in [
            CurveCategory::Current,
            CurveCategory::NodalVoltage,
            CurveCategory::OtherVoltage,
            CurveCategory::Output,
        ] {
            self.set_category_available(category, save_all_analysis_results);
            self.set_category_enabled(category, save_all_analysis_results);
        }
        self.set_category_available(CurveCategory::UserDefined, true);
        self.set_category_enabled(CurveCategory::UserDefined, true);
        self.rebuild_filtered_checklist();
        self.initialization_guard = ToggleState::Off;
        self.editor_refresh_generation = self.editor_refresh_generation.saturating_add(1);
    }

    fn set_category_available(&mut self, category: CurveCategory, available: bool) {
        if available {
            self.available_categories.insert(category);
        } else {
            self.available_categories.remove(&category);
        }
    }

    /// Ports Ghidra function `FUN_0135e230` at `0x0135E230`.
    pub fn copy_available_curve_inventory(
        &mut self,
        curves: impl IntoIterator<Item = CurveDescriptor>,
    ) {
        self.master_curves.clear();
        self.master_curves.extend(curves);
    }

    /// Ports Ghidra function `FUN_0135e310` at `0x0135E310`.
    pub fn rebuild_filtered_checklist(&mut self) {
        let filter = self.filter_text.to_lowercase();
        self.visible_rows = self
            .master_curves
            .iter()
            .filter(|curve| {
                self.enabled_categories
                    .iter()
                    .any(|category| curve.matches_category(*category))
            })
            .filter(|curve| {
                filter.is_empty() || curve.display_name.to_lowercase().contains(&filter)
            })
            .map(|curve| CurveRow {
                curve: curve.clone(),
                checked: self.diagram_curve_ids.contains(&curve.id),
            })
            .collect();
    }

    /// Ports Ghidra function `FUN_0135ea90` at `0x0135EA90`.
    #[must_use]
    pub fn unchecked_visible_curves(&self) -> Vec<CurveDescriptor> {
        self.visible_rows
            .iter()
            .filter(|row| !row.checked)
            .map(|row| row.curve.clone())
            .collect()
    }

    /// Ports Ghidra function `FUN_0135ed00` at `0x0135ED00`.
    pub fn synchronize_visible_curves(&mut self, persist: bool) {
        if self.initialization_guard.is_on() || !self.current_diagram_available.is_on() {
            return;
        }

        let checked_visible_curve_ids = self
            .visible_rows
            .iter()
            .filter(|row| row.checked)
            .map(|row| row.curve.id.clone())
            .collect::<Vec<_>>();
        let unchecked_visible_curve_ids = self
            .unchecked_visible_curves()
            .into_iter()
            .map(|curve| curve.id)
            .collect::<Vec<_>>();

        for curve_id in &checked_visible_curve_ids {
            self.diagram_curve_ids.insert(curve_id.clone());
        }
        for curve_id in &unchecked_visible_curve_ids {
            self.diagram_curve_ids.remove(curve_id);
        }

        self.redraw_generation = self.redraw_generation.saturating_add(1);
        if persist {
            self.persistence_generation = self.persistence_generation.saturating_add(1);
        }
        self.last_synchronization = Some(DiagramSynchronization {
            checked_visible_curve_ids,
            unchecked_visible_curve_ids,
            persist,
        });
    }

    /// Ports Ghidra function `FUN_0135edd0` at `0x0135EDD0`.
    pub fn apply_filter_change(&mut self) {
        self.rebuild_filtered_checklist();
        self.synchronize_visible_curves(true);
    }

    /// Ports Ghidra function `FUN_0135e210` at `0x0135E210`.
    pub fn apply_filter_text_key_up(&mut self) {
        self.apply_filter_change();
    }

    /// Ports Ghidra function `FUN_0135ef90` at `0x0135EF90`.
    pub fn apply_curve_checklist_click(&mut self) {
        self.synchronize_visible_curves(true);
    }

    /// Ports Ghidra function `FUN_0135efa0` at `0x0135EFA0`.
    pub fn check_all_filtered_curves(&mut self) {
        if self.visible_rows.is_empty() {
            return;
        }
        for row in &mut self.visible_rows {
            row.checked = true;
        }
        self.synchronize_visible_curves(true);
    }

    /// Ports Ghidra function `FUN_0135f020` at `0x0135F020`.
    pub fn check_first_filtered_curve(&mut self) {
        if self.visible_rows.is_empty() {
            return;
        }
        for (index, row) in self.visible_rows.iter_mut().enumerate() {
            row.checked = index == 0;
        }
        self.synchronize_visible_curves(true);
    }

    /// Ports Ghidra function `FUN_0135edc0` at `0x0135EDC0`.
    pub const fn request_ok_close(&mut self) {
        self.close_requested = ToggleState::On;
    }

    /// Ports Ghidra function `FUN_0135ef80` at `0x0135EF80`.
    pub const fn request_cancel_close(&mut self) {
        self.close_requested = ToggleState::On;
    }

    /// Ports Ghidra function `FUN_0135daa0` at `0x0135DAA0`.
    pub fn release_owned_state(&mut self, schematic_editor_exists: bool) {
        self.master_curves.clear();
        self.visible_rows.clear();
        self.helpers_allocated = 0;
        if schematic_editor_exists {
            if self.editor_cleanup_enabled.is_on() {
                self.editor_interaction_ended = ToggleState::On;
            }
            self.editor_refresh_generation = self.editor_refresh_generation.saturating_add(1);
        }
    }

    /// Ports Ghidra function `FUN_0135ef50` at `0x0135EF50`.
    pub fn close(&mut self, schematic_editor_exists: bool) -> CloseDisposition {
        self.release_owned_state(schematic_editor_exists);
        CloseDisposition::Release
    }

    #[must_use]
    pub fn visible_curve_names(&self) -> Vec<&str> {
        self.visible_rows
            .iter()
            .map(|row| row.curve.display_name.as_str())
            .collect()
    }

    #[must_use]
    pub const fn diagram_curve_ids(&self) -> &BTreeSet<String> {
        &self.diagram_curve_ids
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close_requested.is_on()
    }

    #[must_use]
    pub const fn redraw_generation(&self) -> u64 {
        self.redraw_generation
    }

    #[must_use]
    pub const fn persistence_generation(&self) -> u64 {
        self.persistence_generation
    }

    #[must_use]
    pub const fn last_synchronization(&self) -> Option<&DiagramSynchronization> {
        self.last_synchronization.as_ref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let filters = FILTER_CATEGORIES.into_iter().fold(
            column![text("Filter").size(18)].spacing(5),
            |controls, category| {
                controls.push(
                    checkbox(
                        category.label(),
                        self.enabled_categories.contains(&category),
                    )
                    .on_toggle_maybe(
                        self.available_categories
                            .contains(&category)
                            .then_some(move |enabled| Message::CategoryChanged(category, enabled)),
                    ),
                )
            },
        );

        let curves = self.visible_rows.iter().enumerate().fold(
            column![text("Curves:").size(18)].spacing(4),
            |rows, (index, curve)| {
                rows.push(
                    checkbox(&curve.curve.display_name, curve.checked)
                        .on_toggle(move |checked| Message::CurveChecked(index, checked)),
                )
            },
        );

        container(
            column![
                text(TITLE).size(24),
                row![
                    container(
                        column![
                            text_input("Filter", &self.filter_text)
                                .on_input(Message::FilterTextChanged),
                            filters,
                        ]
                        .spacing(8),
                    )
                    .width(Length::FillPortion(2)),
                    container(scrollable(curves).height(Length::Fill))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(12)
                .height(Length::Fill),
                row![
                    button("Check all curves").on_press(Message::CheckAll),
                    button("Check only first curve").on_press(Message::CheckFirst),
                    button("OK").on_press(Message::Ok),
                ]
                .spacing(8),
            ]
            .spacing(12),
        )
        .padding(12)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

#[derive(Debug, Default)]
pub struct CurveListManager {
    pub window: Option<Window>,
}

impl CurveListManager {
    /// Ports Ghidra function `FUN_01a8aa10` at `0x01A8AA10`.
    pub fn open_for_plot(
        &mut self,
        active_plot_exists: bool,
        curves: impl IntoIterator<Item = CurveDescriptor>,
        diagram_curve_ids: impl IntoIterator<Item = String>,
    ) -> bool {
        if self.window.is_some() || !active_plot_exists {
            return false;
        }
        self.window = Some(Window::new(curves, diagram_curve_ids));
        true
    }

    pub fn close(&mut self, schematic_editor_exists: bool) -> CloseDisposition {
        let Some(mut window) = self.window.take() else {
            return CloseDisposition::KeepOpen;
        };
        window.close(schematic_editor_exists)
    }
}

#[cfg(test)]
mod tests {
    use super::{
        CloseDisposition, CurveCategory, CurveDescriptor, CurveListManager, Message, Window,
    };

    fn curves() -> Vec<CurveDescriptor> {
        vec![
            CurveDescriptor::new("i", "I_R1"),
            CurveDescriptor::new("vp", "VP1"),
            CurveDescriptor::new("v", "V_OUT"),
            CurveDescriptor::new("user", "Formula").with_category(CurveCategory::UserDefined),
            CurveDescriptor::new("measurement", "Power").with_category(CurveCategory::Measurement),
        ]
    }

    #[test]
    fn inventory_copy_preserves_order_and_object_identity() {
        let mut window = Window::default();
        window.copy_available_curve_inventory(curves());
        window.rebuild_filtered_checklist();

        assert_eq!(
            window.visible_curve_names(),
            vec!["I_R1", "VP1", "V_OUT", "Formula"]
        );
    }

    #[test]
    fn create_initializes_owned_helpers_guard_and_help_context() {
        let window = Window::default();

        assert!(window.initialization_guard.is_on());
        assert_eq!(window.helpers_allocated, 4);
        assert!(window.editor_cleanup_enabled.is_on());
        assert_eq!(window.help_context, 0x21e);
    }

    #[test]
    fn show_applies_save_all_state_and_releases_initialization_guard() {
        let mut window = Window::default();
        window.copy_available_curve_inventory(curves());

        window.show_form(false);

        assert!(!window.initialization_guard.is_on());
        assert!(
            !window
                .available_categories
                .contains(&CurveCategory::Current)
        );
        assert!(
            window
                .available_categories
                .contains(&CurveCategory::UserDefined)
        );
        assert_eq!(window.visible_curve_names(), vec!["Formula"]);
        assert_eq!(window.editor_refresh_generation, 1);
    }

    #[test]
    fn category_and_text_filters_form_a_union_and_use_case_insensitive_substrings() {
        let mut window = Window::new(curves(), Vec::<String>::new());
        for category in [
            CurveCategory::Current,
            CurveCategory::NodalVoltage,
            CurveCategory::OtherVoltage,
            CurveCategory::UserDefined,
            CurveCategory::Output,
        ] {
            window.set_category_enabled(category, false);
        }
        window.update(Message::CategoryChanged(CurveCategory::Measurement, true));
        window.update(Message::FilterTextChanged("owe".to_owned()));

        assert_eq!(window.visible_curve_names(), vec!["Power"]);
    }

    #[test]
    fn filtered_out_curves_are_not_explicit_removals() {
        let mut window = Window::new(curves(), ["i".to_owned(), "vp".to_owned()]);

        window.update(Message::CategoryChanged(CurveCategory::Current, false));

        assert!(window.diagram_curve_ids().contains("i"));
        assert!(window.diagram_curve_ids().contains("vp"));
        let synchronization = window.last_synchronization().expect("synchronization");
        assert!(
            !synchronization
                .unchecked_visible_curve_ids
                .contains(&"i".to_owned())
        );
    }

    #[test]
    fn checklist_click_applies_all_visible_checks_and_persists() {
        let mut window = Window::new(curves(), ["i".to_owned()]);

        window.update(Message::CurveChecked(1, true));
        window.update(Message::CurveChecked(0, false));

        assert!(!window.diagram_curve_ids().contains("i"));
        assert!(window.diagram_curve_ids().contains("vp"));
        assert_eq!(window.redraw_generation(), 2);
        assert_eq!(window.persistence_generation(), 2);
    }

    #[test]
    fn synchronization_guards_keep_the_diagram_unchanged() {
        let mut window = Window::new(curves(), ["i".to_owned()]);
        window.set_current_diagram_available(false);

        window.update(Message::CurveChecked(0, false));

        assert!(window.diagram_curve_ids().contains("i"));
        assert_eq!(window.redraw_generation(), 0);
        assert_eq!(window.persistence_generation(), 0);
    }

    #[test]
    fn check_all_and_check_first_apply_only_the_visible_subset() {
        let mut window = Window::new(curves(), ["measurement".to_owned()]);

        window.update(Message::CheckAll);
        assert!(window.diagram_curve_ids().contains("i"));
        assert!(window.diagram_curve_ids().contains("measurement"));

        window.update(Message::CheckFirst);
        assert!(window.diagram_curve_ids().contains("i"));
        assert!(!window.diagram_curve_ids().contains("vp"));
        assert!(window.diagram_curve_ids().contains("measurement"));
    }

    #[test]
    fn empty_check_commands_are_noops() {
        let mut window = Window::new(Vec::new(), Vec::<String>::new());

        window.check_all_filtered_curves();
        window.check_first_filtered_curve();

        assert_eq!(window.redraw_generation(), 0);
        assert_eq!(window.persistence_generation(), 0);
    }

    #[test]
    fn ok_and_cancel_request_the_same_non_transactional_close() {
        let mut ok_window = Window::default();
        ok_window.update(Message::Ok);
        assert!(ok_window.close_requested());

        let mut cancel_window = Window::default();
        cancel_window.update(Message::Cancel);
        assert!(cancel_window.close_requested());
    }

    #[test]
    fn close_cleanup_releases_helpers_and_respects_the_editor_cleanup_guard() {
        let mut window = Window::new(curves(), Vec::<String>::new());
        window.set_editor_cleanup_enabled(false);

        assert_eq!(window.close(true), CloseDisposition::Release);

        assert_eq!(window.helpers_allocated, 0);
        assert!(window.master_curves.is_empty());
        assert!(window.visible_rows.is_empty());
        assert!(!window.editor_interaction_ended.is_on());
        assert_eq!(window.editor_refresh_generation, 2);
    }

    #[test]
    fn manager_enforces_one_modeless_window_and_active_plot_guard() {
        let mut manager = CurveListManager::default();

        assert!(!manager.open_for_plot(false, curves(), Vec::<String>::new()));
        assert!(manager.open_for_plot(true, curves(), Vec::<String>::new()));
        assert!(!manager.open_for_plot(true, curves(), Vec::<String>::new()));
        assert_eq!(manager.close(true), CloseDisposition::Release);
        assert_eq!(manager.close(true), CloseDisposition::KeepOpen);
    }
}
