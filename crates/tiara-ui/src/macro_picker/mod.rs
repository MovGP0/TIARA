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

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ManufacturerChanged(String),
    SubgroupChanged(String),
    ShowAllComponents(bool),
    ListSelected(Option<usize>),
    TreeSelected(Option<usize>),
    AutomaticShapeChanged(bool),
    RequestShapeSelector,
    Accept,
    HelpFallback,
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
            Message::ManufacturerChanged(value) => self.apply_manufacturer_filter(value),
            Message::SubgroupChanged(value) => self.apply_subgroup_filter(value),
            Message::ShowAllComponents(checked) => self.toggle_show_all_components(checked),
            Message::ListSelected(index) => {
                self.selected_index = index;
                self.update_list_position();
            }
            Message::TreeSelected(index) => {
                self.selected_index = index;
                self.update_tree_position();
            }
            Message::AutomaticShapeChanged(checked) => {
                self.synchronize_automatic_shape(checked);
            }
            Message::RequestShapeSelector => self.set_flag(SHAPE_SELECTOR_REQUESTED, true),
            Message::Accept | Message::HelpFallback => self.accept_modal(),
        }
        Task::none()
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
    use super::{Message, ShapeSelectorAdapter, Window};
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
