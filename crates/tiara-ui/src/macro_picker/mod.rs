use iced::widget::{button, checkbox, column, container, pick_list, row, text};
use iced::{Element, Length, Task};
use tiara_core::macro_picker::{
    CatalogFilter, MacroDevice, MacroPickerFilterState, MacroShape, PickerMode, PickerView,
    PositionCounter,
};

pub const TITLE: &str = "Macro Picker";
pub const FORM_RESOURCE: &str = "MacroPicker";
pub const LIBRARY_EVALUATION: &str = "iced 0.13 supplies the picker controls and message/update state; Rust Vec, enums, iterators, and Clone supply the catalog filter and selector transaction; no additional tree, filter, or modal crate is needed";

const AUTOMATIC_SHAPE: u8 = 1;
const AUTOMATIC_TOGGLE_ENABLED: u8 = 2;
const OK_ENABLED: u8 = 4;
const SHAPE_SELECTOR_REQUESTED: u8 = 8;
const LAST_KEY_CONSUMED: u8 = 16;

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Created { width: i32, height: i32 },
    Destroyed,
    Shown { remembered_manufacturer: String },
    ManufacturerChanged(String),
    SubgroupChanged(String),
    ShowAllComponents(bool),
    ListSelected(Option<usize>),
    ListDoubleClicked,
    ListKeyPressed { character: char, timestamp_ms: u32 },
    TreeSelected(Option<usize>),
    TreeDoubleClicked,
    AutomaticShapeChanged(bool),
    RequestShapeSelector,
    Accept,
    HelpRequested,
    HelpFallback,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HelpEventResult {
    pub handled: bool,
    pub call_default_help: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WindowConstraints {
    pub min_width: i32,
    pub min_height: i32,
    pub max_width: Option<i32>,
    pub max_height: Option<i32>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CustomDrawStage {
    PrePaint,
    PostPaint,
    PreErase,
    PostErase,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ColumnAlignment {
    Left,
    Right,
    Center,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HeaderSection {
    pub width: i32,
    pub alignment: ColumnAlignment,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DrawBounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TextDrawOperation {
    pub text: String,
    pub bounds: DrawBounds,
    pub alignment: ColumnAlignment,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TreeItemDrawPlan {
    pub paint_images: bool,
    pub default_draw: bool,
    pub white_text_background: bool,
    pub text_operations: Vec<TextDrawOperation>,
}

pub trait ShapeSelectorAdapter {
    fn select_shape(&mut self, device: &MacroDevice, current_shape: &str) -> Option<MacroShape>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    filters: MacroPickerFilterState,
    view_mode: PickerView,
    mode: PickerMode,
    selected_index: Option<usize>,
    position_text: String,
    shape_name: String,
    shape_library: String,
    manufacturer_items: Vec<String>,
    working_items: Vec<String>,
    help_topic: String,
    help_requests: Vec<String>,
    constraints: WindowConstraints,
    help_context: u32,
    catalog_ready: bool,
    manufacturer_enabled: bool,
    type_search_prefix: String,
    last_type_search_ms: u32,
    ensure_visible_index: Option<usize>,
    flags: u8,
    modal_result: Option<i32>,
    visible: bool,
}

impl Window {
    #[must_use]
    pub fn new(
        devices: Vec<MacroDevice>,
        category: CatalogFilter,
        mode: PickerMode,
        view_mode: PickerView,
    ) -> Self {
        let filters = MacroPickerFilterState::new(devices, category, mode);
        let manufacturer_items = with_all_item(filters.manufacturer_items());
        let selected_index = (filters.filtered_devices().len() != 0).then_some(0);
        let mut window = Self {
            filters,
            view_mode,
            mode,
            selected_index,
            position_text: String::new(),
            shape_name: String::new(),
            shape_library: String::new(),
            manufacturer_items,
            working_items: Vec::new(),
            help_topic: String::new(),
            help_requests: Vec::new(),
            constraints: WindowConstraints::default(),
            help_context: 0,
            catalog_ready: false,
            manufacturer_enabled: false,
            type_search_prefix: String::new(),
            last_type_search_ms: 0,
            ensure_visible_index: None,
            flags: AUTOMATIC_SHAPE | AUTOMATIC_TOGGLE_ENABLED,
            modal_result: None,
            visible: true,
        };
        window.synchronize_automatic_shape(true);
        window.refresh_position();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created { width, height } => self.on_create(width, height),
            Message::Destroyed => self.on_destroy(),
            Message::Shown {
                remembered_manufacturer,
            } => self.on_show(&remembered_manufacturer),
            Message::ManufacturerChanged(value) => self.apply_manufacturer_filter(value),
            Message::SubgroupChanged(value) => self.apply_subgroup_filter(value),
            Message::ShowAllComponents(checked) => self.toggle_show_all_components(checked),
            Message::ListSelected(index) => {
                self.selected_index = index;
                self.update_list_position();
            }
            Message::ListDoubleClicked => self.list_double_clicked(),
            Message::ListKeyPressed {
                character,
                timestamp_ms,
            } => {
                let consumed = self.list_key_pressed(character, timestamp_ms);
                self.set_flag(LAST_KEY_CONSUMED, consumed);
            }
            Message::TreeSelected(index) => {
                self.selected_index = index;
                self.update_tree_position();
            }
            Message::TreeDoubleClicked => self.tree_double_clicked(),
            Message::AutomaticShapeChanged(checked) => {
                self.synchronize_automatic_shape(checked);
            }
            Message::RequestShapeSelector => self.set_flag(SHAPE_SELECTOR_REQUESTED, true),
            Message::Accept | Message::HelpFallback => self.accept_modal(),
            Message::HelpRequested => {
                self.on_help();
            }
        }
        Task::none()
    }

    /// Dispatches the stored picker help topic through the host help service.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01703D10`, symbol `FUN_01703d10` (`TMacroPicker.FormHelp`). It always
    /// suppresses default help and reports the event as handled. A nonempty
    /// topic is queued unchanged so the shared host adapter can distinguish
    /// `$` external targets from compiled-help keywords. An empty topic causes
    /// no host request.
    pub fn on_help(&mut self) -> HelpEventResult {
        if !self.help_topic.is_empty() {
            self.help_requests.push(self.help_topic.clone());
        }
        HelpEventResult {
            handled: true,
            call_default_help: false,
        }
    }

    /// Builds the custom draw operations for one multi-column tree item.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01702860`, symbol `FUN_01702860`
    /// (`TMacroPicker.tvDevicesAdvancedCustomDrawItem`). Image painting and
    /// default drawing remain enabled for every stage. Only post-paint uses a
    /// white text background and draws the secondary item text in header
    /// sections after the first. Left and right edges receive the recovered
    /// two-pixel alignment inset.
    #[must_use]
    pub fn tree_item_draw_plan(
        stage: CustomDrawStage,
        item_top: i32,
        item_bottom: i32,
        sections: &[HeaderSection],
        secondary_text: &str,
    ) -> TreeItemDrawPlan {
        let mut plan = TreeItemDrawPlan {
            paint_images: true,
            default_draw: true,
            white_text_background: stage == CustomDrawStage::PostPaint,
            text_operations: Vec::new(),
        };
        if stage != CustomDrawStage::PostPaint {
            return plan;
        }

        let mut section_left = sections.first().map_or(0, |section| section.width.max(0));
        for section in sections.iter().skip(1) {
            let section_right = section_left.saturating_add(section.width.max(0));
            let mut left = section_left;
            let mut right = section_right;
            if matches!(
                section.alignment,
                ColumnAlignment::Left | ColumnAlignment::Center
            ) {
                left = left.saturating_add(2);
            }
            if matches!(
                section.alignment,
                ColumnAlignment::Right | ColumnAlignment::Center
            ) {
                right = right.saturating_sub(2);
            }
            plan.text_operations.push(TextDrawOperation {
                text: secondary_text.to_owned(),
                bounds: DrawBounds {
                    left,
                    top: item_top,
                    right,
                    bottom: item_bottom,
                },
                alignment: section.alignment,
            });
            section_left = section_right;
        }
        plan
    }

    /// Accepts the current picker selection after a list double-click.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017026E0`, symbol `FUN_017026e0`
    /// (`TMacroPicker.lvDevicesDblClick`). The recovered handler delegates
    /// unconditionally to the same modal accept transition as the OK button.
    pub const fn list_double_clicked(&mut self) {
        self.accept_modal();
    }

    /// Accepts the current picker selection after a tree double-click.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01702BA0`, symbol `FUN_01702ba0`
    /// (`TMacroPicker.tvDevicesDblClick`). The recovered handler delegates
    /// unconditionally to the same modal accept transition as the OK button.
    pub const fn tree_double_clicked(&mut self) {
        self.accept_modal();
    }

    /// Applies timed prefix selection to the visible device list.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017026F0`, symbol `FUN_017026f0`
    /// (`TMacroPicker.lvDevicesKeyPress`). Backspace and Escape clear the
    /// prefix without consuming the key. Characters from U+0020 through
    /// U+00FF reset the prefix after a gap greater than 2,000 ms, append while
    /// it has fewer than 50 characters, select the first case-insensitive
    /// prefix match, request that row be visible, and consume the key.
    pub fn list_key_pressed(&mut self, character: char, timestamp_ms: u32) -> bool {
        if matches!(character, '\u{8}' | '\u{1b}') {
            self.type_search_prefix.clear();
            return false;
        }
        if !('\u{20}'..='\u{ff}').contains(&character) {
            return false;
        }

        if timestamp_ms.wrapping_sub(self.last_type_search_ms) > 2_000 {
            self.type_search_prefix.clear();
        }
        self.last_type_search_ms = timestamp_ms;
        if self.type_search_prefix.chars().count() < 50 {
            self.type_search_prefix.push(character);
        }

        let normalized_prefix = self.type_search_prefix.to_lowercase();
        let matching_index = {
            self.filters
                .filtered_devices()
                .position(|device| device.name.to_lowercase().starts_with(&normalized_prefix))
        };
        if let Some(index) = matching_index {
            self.selected_index = Some(index);
            self.ensure_visible_index = Some(index);
            self.update_list_position();
        }
        true
    }

    /// Rebuilds catalog choices and restores the prior manufacturer.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017024F0`, symbol `FUN_017024f0` (`TMacroPicker.FormShow`). It
    /// reapplies the automatic-shape control state, obtains manufacturer rows
    /// from the shared catalog, sorts them, restores an exact remembered row
    /// or falls back to index zero, runs the manufacturer filter, enables the
    /// selector only when catalog rows exist, and refreshes position text.
    pub fn on_show(&mut self, remembered_manufacturer: &str) {
        let automatic_shape = self.automatic_shape();
        self.synchronize_automatic_shape(automatic_shape);

        self.working_items = self.filters.manufacturer_items();
        self.working_items.sort();
        self.manufacturer_enabled = !self.working_items.is_empty();
        self.manufacturer_items = with_all_item(self.working_items.clone());

        let selected_index = self
            .manufacturer_items
            .iter()
            .position(|item| item == remembered_manufacturer)
            .unwrap_or(0);
        let selected_manufacturer = self.manufacturer_items[selected_index].clone();
        self.apply_manufacturer_filter(selected_manufacturer);
        self.update_list_position();
        self.update_tree_position();
    }

    /// Releases the picker-owned working string list.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017024D0`, symbol `FUN_017024d0` (`TMacroPicker.FormDestroy`).
    /// `std::mem::take` transfers the allocation to Rust's standard `Drop`
    /// path. An empty list and repeated destruction are safe no-ops.
    pub fn on_destroy(&mut self) {
        drop(std::mem::take(&mut self.working_items));
    }

    /// Initializes the picker constraints and its owned catalog helpers.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01702430`, symbol `FUN_01702430` (`TMacroPicker.FormCreate`). It
    /// fixes the minimum and maximum width to the current form width, sets the
    /// current height as the minimum height, clears the working query, assigns
    /// help context 1, creates an empty owned string list, and resolves the
    /// shared catalog service used by the typed filter state.
    pub fn on_create(&mut self, width: i32, height: i32) {
        self.constraints = WindowConstraints {
            min_width: width,
            min_height: height,
            max_width: Some(width),
            max_height: None,
        };
        self.help_topic.clear();
        self.help_context = 1;
        self.working_items = Vec::new();
        self.catalog_ready = true;
    }

    /// Implements Ghidra function `FUN_017025f0` at `0x017025F0`.
    ///
    /// A visible list reports its one-based selected row and row count. A
    /// hidden list does not change the position label.
    pub fn update_list_position(&mut self) {
        if self.view_mode != PickerView::List {
            return;
        }
        self.position_text = PositionCounter::from_selection(
            self.selected_index,
            self.filters.filtered_devices().len(),
        )
        .to_string();
    }

    /// Implements Ghidra function `FUN_01702a20` at `0x01702A20`.
    ///
    /// A visible tree reports its one-based selected row and node count. No
    /// selected node reports position zero. A hidden tree is a no-op.
    pub fn update_tree_position(&mut self) {
        if self.view_mode != PickerView::Tree {
            return;
        }
        self.position_text = PositionCounter::from_selection(
            self.selected_index,
            self.filters.filtered_devices().len(),
        )
        .to_string();
    }

    /// Implements Ghidra function `FUN_01702bb0` at `0x01702BB0`.
    ///
    /// Index zero maps to the all-manufacturers sentinel. The change resets
    /// the subgroup to All, rebuilds subgroup and device rows, and remembers
    /// the manufacturer for this process.
    pub fn apply_manufacturer_filter(&mut self, value: String) {
        let index = self
            .manufacturer_items
            .iter()
            .position(|item| item == &value)
            .unwrap_or(0);
        self.filters
            .apply_manufacturer(CatalogFilter::from_selection(index, value));
        self.refresh_after_filter();
    }

    /// Implements Ghidra function `FUN_01702e40` at `0x01702E40`.
    ///
    /// The shared OK handler and the inherited Help fallback both return the
    /// modal accept result. A normal Help command can be handled by its own
    /// route before it reaches this fallback.
    pub const fn accept_modal(&mut self) {
        self.modal_result = Some(1);
        self.visible = false;
    }

    /// Implements Ghidra function `FUN_01702e50` at `0x01702E50`.
    ///
    /// The selector receives the current device and shape. Only its accepted
    /// selected row commits both the visible shape name and hidden library.
    /// Load failure, cancellation, and no selection return `None` and keep the
    /// existing transaction unchanged.
    pub fn browse_shape(&mut self, selector: &mut impl ShapeSelectorAdapter) {
        self.set_flag(SHAPE_SELECTOR_REQUESTED, false);
        let Some(device) = self
            .selected_index
            .and_then(|index| self.filters.filtered_device(index))
            .cloned()
        else {
            return;
        };
        let Some(shape) = selector.select_shape(&device, &self.shape_name) else {
            return;
        };
        self.shape_name = shape.name;
        self.shape_library = shape.library;
        self.recompute_ok();
    }

    /// Implements Ghidra function `FUN_01703240` at `0x01703240`.
    ///
    /// Automatic mode writes `<Auto>`, clears the hidden library, and disables
    /// manual shape controls. Manual mode clears the visible shape and enables
    /// those controls. Picker modes 2 through 4 also disable the automatic
    /// checkbox. OK requires a non-empty shape and at least one device row.
    pub fn synchronize_automatic_shape(&mut self, checked: bool) {
        self.set_flag(AUTOMATIC_TOGGLE_ENABLED, self.mode.allows_automatic_shape());
        let automatic = checked && self.mode.allows_automatic_shape();
        self.set_flag(AUTOMATIC_SHAPE, automatic);
        if automatic {
            "<Auto>".clone_into(&mut self.shape_name);
            self.shape_library.clear();
        } else {
            self.shape_name.clear();
        }
        self.recompute_ok();
    }

    /// Implements Ghidra function `FUN_01703350` at `0x01703350`.
    ///
    /// A typed All subgroup maps to the all-subgroups sentinel. Every subgroup
    /// change refreshes the visible device rows.
    pub fn apply_subgroup_filter(&mut self, value: String) {
        let subgroup_items = self.subgroup_items();
        let index = subgroup_items
            .iter()
            .position(|item| item == &value)
            .unwrap_or(0);
        self.filters
            .apply_subgroup(CatalogFilter::from_selection(index, value));
        self.refresh_after_filter();
    }

    /// Implements Ghidra function `FUN_017034a0` at `0x017034A0`.
    ///
    /// Enabling Show All saves the active category and applies All. Disabling
    /// it restores the saved category. Both routes rebuild the manufacturer
    /// path, reset the subgroup to All, refresh devices, and remember the
    /// current manufacturer.
    pub fn toggle_show_all_components(&mut self, checked: bool) {
        self.filters.toggle_show_all_components(checked);
        self.manufacturer_items = with_all_item(self.filters.manufacturer_items());
        self.refresh_after_filter();
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let manufacturer = self.filters.manufacturer().display_value().to_owned();
        let subgroup = self.filters.subgroup().display_value().to_owned();
        let subgroup_items = self.subgroup_items();
        let mut automatic = checkbox("Automatic shape", self.automatic_shape());
        if self.automatic_toggle_enabled() {
            automatic = automatic.on_toggle(Message::AutomaticShapeChanged);
        }
        let mut browse = button("Browse shape");
        if self.shape_controls_enabled() {
            browse = browse.on_press(Message::RequestShapeSelector);
        }
        let mut accept = button("OK");
        if self.ok_enabled() {
            accept = accept.on_press(Message::Accept);
        }
        let devices = self
            .filters
            .filtered_devices()
            .map(|device| text(device.name.as_str()).into())
            .collect::<Vec<Element<'_, Message>>>();

        container(
            column![
                text(TITLE).size(24),
                checkbox("Show all components", self.filters.show_all_components())
                    .on_toggle(Message::ShowAllComponents),
                row![
                    pick_list(
                        self.manufacturer_items.as_slice(),
                        Some(manufacturer),
                        Message::ManufacturerChanged,
                    ),
                    pick_list(subgroup_items, Some(subgroup), Message::SubgroupChanged,),
                ]
                .spacing(8),
                column(devices).spacing(4),
                text(self.position_text.as_str()),
                automatic,
                row![text(self.shape_name.as_str()), browse].spacing(8),
                accept,
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub fn position_text(&self) -> &str {
        &self.position_text
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<i32> {
        self.modal_result
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.visible
    }

    #[must_use]
    pub const fn constraints(&self) -> WindowConstraints {
        self.constraints
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn catalog_ready(&self) -> bool {
        self.catalog_ready
    }

    #[must_use]
    pub const fn manufacturer_enabled(&self) -> bool {
        self.manufacturer_enabled
    }

    #[must_use]
    pub fn selected_manufacturer(&self) -> &str {
        self.filters.manufacturer().display_value()
    }

    #[must_use]
    pub fn type_search_prefix(&self) -> &str {
        &self.type_search_prefix
    }

    #[must_use]
    pub const fn last_key_consumed(&self) -> bool {
        self.has_flag(LAST_KEY_CONSUMED)
    }

    #[must_use]
    pub const fn ensure_visible_index(&self) -> Option<usize> {
        self.ensure_visible_index
    }

    pub fn set_help_topic(&mut self, topic: impl Into<String>) {
        self.help_topic = topic.into();
    }

    #[must_use]
    pub fn help_requests(&self) -> &[String] {
        &self.help_requests
    }

    pub fn take_help_requests(&mut self) -> Vec<String> {
        std::mem::take(&mut self.help_requests)
    }

    #[must_use]
    pub fn shape_name(&self) -> &str {
        &self.shape_name
    }

    #[must_use]
    pub fn shape_library(&self) -> &str {
        &self.shape_library
    }

    #[must_use]
    pub fn filtered_device_names(&self) -> Vec<&str> {
        self.filters
            .filtered_devices()
            .map(|device| device.name.as_str())
            .collect()
    }

    #[must_use]
    pub fn subgroup_items(&self) -> Vec<String> {
        with_all_item(self.filters.subgroup_items().to_vec())
    }

    #[must_use]
    pub fn remembered_manufacturer(&self) -> &str {
        self.filters.remembered_manufacturer()
    }

    #[must_use]
    pub const fn automatic_shape(&self) -> bool {
        self.has_flag(AUTOMATIC_SHAPE)
    }

    #[must_use]
    pub const fn automatic_toggle_enabled(&self) -> bool {
        self.has_flag(AUTOMATIC_TOGGLE_ENABLED)
    }

    #[must_use]
    pub const fn shape_controls_enabled(&self) -> bool {
        !self.automatic_shape()
    }

    #[must_use]
    pub const fn ok_enabled(&self) -> bool {
        self.has_flag(OK_ENABLED)
    }

    #[must_use]
    pub const fn shape_selector_requested(&self) -> bool {
        self.has_flag(SHAPE_SELECTOR_REQUESTED)
    }

    fn refresh_after_filter(&mut self) {
        self.selected_index = (self.filters.filtered_devices().len() != 0).then_some(0);
        self.refresh_position();
        self.recompute_ok();
    }

    fn refresh_position(&mut self) {
        match self.view_mode {
            PickerView::List => self.update_list_position(),
            PickerView::Tree => self.update_tree_position(),
        }
    }

    fn recompute_ok(&mut self) {
        let enabled = !self.shape_name.is_empty() && self.filters.filtered_devices().len() != 0;
        self.set_flag(OK_ENABLED, enabled);
    }

    const fn has_flag(&self, flag: u8) -> bool {
        self.flags & flag != 0
    }

    const fn set_flag(&mut self, flag: u8, enabled: bool) {
        if enabled {
            self.flags |= flag;
        } else {
            self.flags &= !flag;
        }
    }
}

fn with_all_item(mut items: Vec<String>) -> Vec<String> {
    items.insert(0, "All".to_owned());
    items
}

#[cfg(test)]
mod tests {
    use super::{
        ColumnAlignment, CustomDrawStage, DrawBounds, HeaderSection, HelpEventResult, Message,
        ShapeSelectorAdapter, Window, WindowConstraints,
    };
    use tiara_core::macro_picker::{
        CatalogFilter, MacroDevice, MacroShape, PickerMode, PickerView,
    };

    #[derive(Default)]
    struct Selector {
        result: Option<MacroShape>,
        calls: Vec<(String, String)>,
    }

    impl ShapeSelectorAdapter for Selector {
        fn select_shape(
            &mut self,
            device: &MacroDevice,
            current_shape: &str,
        ) -> Option<MacroShape> {
            self.calls
                .push((device.name.clone(), current_shape.to_owned()));
            self.result.clone()
        }
    }

    fn devices() -> Vec<MacroDevice> {
        vec![
            MacroDevice {
                name: "NAND".to_owned(),
                manufacturer: "Acme".to_owned(),
                subgroup: "Logic".to_owned(),
                category: "Digital".to_owned(),
                internal: false,
                shapes: vec![MacroShape::new("DIP14", "Through-hole")],
            },
            MacroDevice {
                name: "OPAMP".to_owned(),
                manufacturer: "Acme".to_owned(),
                subgroup: "Amplifiers".to_owned(),
                category: "Analog".to_owned(),
                internal: false,
                shapes: Vec::new(),
            },
            MacroDevice {
                name: "NOR".to_owned(),
                manufacturer: "Other".to_owned(),
                subgroup: "Logic".to_owned(),
                category: "Digital".to_owned(),
                internal: false,
                shapes: Vec::new(),
            },
        ]
    }

    fn window(view: PickerView, mode: PickerMode) -> Window {
        Window::new(
            devices(),
            CatalogFilter::Named("Digital".to_owned()),
            mode,
            view,
        )
    }

    #[test]
    fn create_fixes_width_sets_minimum_height_and_initializes_helpers() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.help_topic = "stale help topic".to_owned();
        window.working_items = vec!["stale row".to_owned()];

        window.on_create(340, 345);

        assert_eq!(
            window.constraints(),
            WindowConstraints {
                min_width: 340,
                min_height: 345,
                max_width: Some(340),
                max_height: None,
            }
        );
        assert_eq!(window.help_context(), 1);
        assert!(window.catalog_ready());
        assert!(window.help_topic.is_empty());
        assert!(window.working_items.is_empty());
    }

    #[test]
    fn create_message_routes_the_current_form_dimensions() {
        let mut window = window(PickerView::Tree, PickerMode(0));

        drop(window.update(Message::Created {
            width: 332,
            height: 317,
        }));

        assert_eq!(window.constraints().min_width, 332);
        assert_eq!(window.constraints().max_width, Some(332));
        assert_eq!(window.constraints().min_height, 317);
    }

    #[test]
    fn destroy_releases_owned_working_items_and_is_repeatable() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.working_items = vec!["first".to_owned(), "second".to_owned()];

        drop(window.update(Message::Destroyed));
        assert!(window.working_items.is_empty());

        window.on_destroy();
        assert!(window.working_items.is_empty());
    }

    #[test]
    fn show_restores_exact_remembered_manufacturer_and_refreshes_position() {
        let mut window = window(PickerView::List, PickerMode(0));

        window.on_show("Other");

        assert_eq!(window.manufacturer_items, ["All", "Acme", "Other"]);
        assert_eq!(window.selected_manufacturer(), "Other");
        assert_eq!(window.filtered_device_names(), ["NOR"]);
        assert_eq!(window.position_text(), "1/1");
        assert!(window.manufacturer_enabled());
    }

    #[test]
    fn show_uses_all_fallback_when_remembered_manufacturer_is_missing() {
        let mut window = window(PickerView::Tree, PickerMode(0));

        drop(window.update(Message::Shown {
            remembered_manufacturer: "Missing".to_owned(),
        }));

        assert_eq!(window.selected_manufacturer(), "All");
        assert_eq!(window.filtered_device_names(), ["NAND", "NOR"]);
        assert_eq!(window.position_text(), "1/2");
    }

    #[test]
    fn show_disables_manufacturer_selector_for_empty_catalog_result() {
        let mut window = Window::new(
            Vec::new(),
            CatalogFilter::Named("Digital".to_owned()),
            PickerMode(0),
            PickerView::List,
        );

        window.on_show("");

        assert!(!window.manufacturer_enabled());
        assert_eq!(window.selected_manufacturer(), "All");
        assert_eq!(window.position_text(), "0/0");
    }

    #[test]
    fn list_and_tree_position_updates_obey_visibility_and_empty_selection() {
        let mut list = window(PickerView::List, PickerMode(0));
        drop(list.update(Message::ListSelected(Some(1))));
        assert_eq!(list.position_text(), "2/2");
        drop(list.update(Message::TreeSelected(None)));
        assert_eq!(list.position_text(), "2/2");

        let mut tree = window(PickerView::Tree, PickerMode(0));
        drop(tree.update(Message::TreeSelected(None)));
        assert_eq!(tree.position_text(), "0/2");
        drop(tree.update(Message::ListSelected(Some(1))));
        assert_eq!(tree.position_text(), "0/2");
    }

    #[test]
    fn manufacturer_and_subgroup_filters_refresh_devices_and_remember_selection() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.apply_manufacturer_filter("Acme".to_owned());
        assert_eq!(window.filtered_device_names(), ["NAND"]);
        assert_eq!(window.subgroup_items(), ["All", "Logic"]);
        assert_eq!(window.remembered_manufacturer(), "Acme");
        window.apply_subgroup_filter("Logic".to_owned());
        assert_eq!(window.filtered_device_names(), ["NAND"]);
        window.apply_manufacturer_filter("All".to_owned());
        assert_eq!(window.filtered_device_names(), ["NAND", "NOR"]);
    }

    #[test]
    fn shared_ok_and_help_fallback_return_modal_accept() {
        let mut ok = window(PickerView::List, PickerMode(0));
        drop(ok.update(Message::Accept));
        assert_eq!(ok.modal_result(), Some(1));
        assert!(!ok.is_visible());

        let mut help = window(PickerView::List, PickerMode(0));
        drop(help.update(Message::HelpFallback));
        assert_eq!(help.modal_result(), Some(1));
    }

    #[test]
    fn list_double_click_uses_shared_modal_accept_transition() {
        let mut window = window(PickerView::List, PickerMode(0));

        drop(window.update(Message::ListDoubleClicked));

        assert_eq!(window.modal_result(), Some(1));
        assert!(!window.is_visible());
    }

    #[test]
    fn tree_double_click_uses_shared_modal_accept_transition() {
        let mut window = window(PickerView::Tree, PickerMode(0));

        drop(window.update(Message::TreeDoubleClicked));

        assert_eq!(window.modal_result(), Some(1));
        assert!(!window.is_visible());
    }

    #[test]
    fn list_key_prefix_selects_and_requests_matching_row_visibility() {
        let mut window = window(PickerView::List, PickerMode(0));

        assert!(window.list_key_pressed('n', 100));
        assert!(window.list_key_pressed('o', 2_100));

        assert_eq!(window.type_search_prefix(), "no");
        assert_eq!(window.ensure_visible_index(), Some(1));
        assert_eq!(window.position_text(), "2/2");
    }

    #[test]
    fn list_key_prefix_resets_only_after_more_than_two_seconds() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.list_key_pressed('n', 100);
        window.list_key_pressed('a', 2_100);
        assert_eq!(window.type_search_prefix(), "na");

        window.list_key_pressed('n', 4_101);

        assert_eq!(window.type_search_prefix(), "n");
        assert_eq!(window.ensure_visible_index(), Some(0));
    }

    #[test]
    fn clear_and_unsupported_keys_are_not_consumed() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.list_key_pressed('n', 100);

        drop(window.update(Message::ListKeyPressed {
            character: '\u{8}',
            timestamp_ms: 200,
        }));
        assert_eq!(window.type_search_prefix(), "");
        assert!(!window.last_key_consumed());

        drop(window.update(Message::ListKeyPressed {
            character: '\u{100}',
            timestamp_ms: 300,
        }));
        assert!(!window.last_key_consumed());
    }

    #[test]
    fn list_key_prefix_is_capped_at_fifty_characters() {
        let mut window = window(PickerView::List, PickerMode(0));

        for timestamp_ms in 1..=55 {
            assert!(window.list_key_pressed('a', timestamp_ms));
        }

        assert_eq!(window.type_search_prefix().chars().count(), 50);
    }

    #[test]
    fn non_post_paint_keeps_default_flags_without_custom_text() {
        let sections = [HeaderSection {
            width: 120,
            alignment: ColumnAlignment::Left,
        }];

        let plan =
            Window::tree_item_draw_plan(CustomDrawStage::PrePaint, 10, 30, &sections, "secondary");

        assert!(plan.paint_images);
        assert!(plan.default_draw);
        assert!(!plan.white_text_background);
        assert!(plan.text_operations.is_empty());
    }

    #[test]
    fn post_paint_skips_first_section_and_applies_alignment_insets() {
        let sections = [
            HeaderSection {
                width: 100,
                alignment: ColumnAlignment::Left,
            },
            HeaderSection {
                width: 80,
                alignment: ColumnAlignment::Left,
            },
            HeaderSection {
                width: 70,
                alignment: ColumnAlignment::Right,
            },
            HeaderSection {
                width: 60,
                alignment: ColumnAlignment::Center,
            },
        ];

        let plan =
            Window::tree_item_draw_plan(CustomDrawStage::PostPaint, 12, 32, &sections, "secondary");

        assert!(plan.white_text_background);
        assert_eq!(plan.text_operations.len(), 3);
        assert_eq!(
            plan.text_operations[0].bounds,
            DrawBounds {
                left: 102,
                top: 12,
                right: 180,
                bottom: 32,
            }
        );
        assert_eq!(plan.text_operations[1].bounds.left, 180);
        assert_eq!(plan.text_operations[1].bounds.right, 248);
        assert_eq!(plan.text_operations[2].bounds.left, 252);
        assert_eq!(plan.text_operations[2].bounds.right, 308);
        assert!(
            plan.text_operations
                .iter()
                .all(|operation| operation.text == "secondary")
        );
    }

    #[test]
    fn help_suppresses_default_and_queues_exact_nonempty_topic() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.set_help_topic("$https://example.invalid/help");

        let result = window.on_help();

        assert_eq!(
            result,
            HelpEventResult {
                handled: true,
                call_default_help: false,
            }
        );
        assert_eq!(window.help_requests(), ["$https://example.invalid/help"]);
        assert_eq!(
            window.take_help_requests(),
            ["$https://example.invalid/help"]
        );
        assert!(window.help_requests().is_empty());
    }

    #[test]
    fn empty_help_topic_is_handled_without_host_request() {
        let mut window = window(PickerView::Tree, PickerMode(0));

        drop(window.update(Message::HelpRequested));

        assert!(window.help_requests().is_empty());
    }

    #[test]
    fn shape_selector_is_transactional_for_cancel_and_accept() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.synchronize_automatic_shape(false);
        let mut selector = Selector::default();
        window.browse_shape(&mut selector);
        assert_eq!(window.shape_name(), "");
        assert_eq!(selector.calls, [("NAND".to_owned(), String::new())]);

        selector.result = Some(MacroShape::new("DIP14", "Through-hole"));
        window.browse_shape(&mut selector);
        assert_eq!(window.shape_name(), "DIP14");
        assert_eq!(window.shape_library(), "Through-hole");
        assert!(window.ok_enabled());
    }

    #[test]
    fn automatic_shape_updates_controls_and_respects_locked_modes() {
        let mut normal = window(PickerView::List, PickerMode(0));
        assert_eq!(normal.shape_name(), "<Auto>");
        assert!(!normal.shape_controls_enabled());
        assert!(normal.ok_enabled());
        normal.synchronize_automatic_shape(false);
        assert_eq!(normal.shape_name(), "");
        assert!(normal.shape_controls_enabled());
        assert!(!normal.ok_enabled());

        let locked = window(PickerView::List, PickerMode(3));
        assert!(!locked.automatic_toggle_enabled());
        assert!(!locked.automatic_shape());
        assert!(locked.shape_controls_enabled());
    }

    #[test]
    fn show_all_restores_category_and_resets_subgroup() {
        let mut window = window(PickerView::List, PickerMode(0));
        window.apply_manufacturer_filter("Acme".to_owned());
        window.apply_subgroup_filter("Logic".to_owned());
        window.toggle_show_all_components(true);
        assert_eq!(window.filtered_device_names(), ["NAND", "OPAMP"]);
        assert_eq!(window.subgroup_items(), ["All", "Logic", "Amplifiers"]);
        window.toggle_show_all_components(false);
        assert_eq!(window.filtered_device_names(), ["NAND"]);
        assert_eq!(window.subgroup_items(), ["All", "Logic"]);
    }
}
