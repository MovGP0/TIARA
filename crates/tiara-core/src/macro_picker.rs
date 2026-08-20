use std::fmt;

pub const ALL_FILTER_SENTINEL: &str = "[All]";

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub enum CatalogFilter {
    #[default]
    All,
    Named(String),
}

impl CatalogFilter {
    #[must_use]
    pub fn from_selection(index: usize, text: impl Into<String>) -> Self {
        if index == 0 {
            Self::All
        } else {
            Self::Named(text.into())
        }
    }

    #[must_use]
    pub fn matches(&self, value: &str) -> bool {
        match self {
            Self::All => true,
            Self::Named(filter) => filter == value,
        }
    }

    #[must_use]
    pub fn display_value(&self) -> &str {
        match self {
            Self::All => "All",
            Self::Named(value) => value,
        }
    }

    #[must_use]
    pub fn catalog_value(&self) -> &str {
        match self {
            Self::All => ALL_FILTER_SENTINEL,
            Self::Named(value) => value,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum PickerView {
    #[default]
    List,
    Tree,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct PickerMode(pub u8);

impl PickerMode {
    #[must_use]
    pub const fn allows_automatic_shape(self) -> bool {
        !matches!(self.0, 2..=4)
    }

    #[must_use]
    pub const fn supplies_subgroups(self) -> bool {
        self.0 == 0
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MacroShape {
    pub name: String,
    pub library: String,
}

impl MacroShape {
    #[must_use]
    pub fn new(name: impl Into<String>, library: impl Into<String>) -> Self {
        Self {
            name: name.into(),
            library: library.into(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeLibraryEntry {
    pub lookup_name: String,
    pub shape: MacroShape,
}

impl ShapeLibraryEntry {
    #[must_use]
    pub fn new(lookup_name: impl Into<String>, shape: MacroShape) -> Self {
        Self {
            lookup_name: lookup_name.into(),
            shape,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct LiveMacroGraphic {
    shape: Option<MacroShape>,
    geometry_update_count: usize,
}

impl LiveMacroGraphic {
    #[must_use]
    pub const fn shape(&self) -> Option<&MacroShape> {
        self.shape.as_ref()
    }

    #[must_use]
    pub const fn geometry_update_count(&self) -> usize {
        self.geometry_update_count
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct MacroDefinitionShapeState {
    stored_shape_name: String,
    active_shape: Option<MacroShape>,
    live_graphic: Option<LiveMacroGraphic>,
    reference_storage: bool,
    reference: String,
}

impl MacroDefinitionShapeState {
    #[must_use]
    pub fn new(active_shape: Option<MacroShape>) -> Self {
        let stored_shape_name = active_shape
            .as_ref()
            .map_or_else(String::new, |shape| shape.name.clone());
        Self {
            stored_shape_name,
            active_shape,
            live_graphic: None,
            reference_storage: false,
            reference: String::new(),
        }
    }

    pub fn attach_live_graphic(&mut self) {
        self.live_graphic = Some(LiveMacroGraphic {
            shape: self.active_shape.clone(),
            geometry_update_count: 0,
        });
    }

    pub fn initialize_reference_storage(
        &mut self,
        reference_storage: bool,
        reference: impl Into<String>,
    ) {
        self.reference_storage = reference_storage;
        self.reference = reference.into();
    }

    /// Implements Ghidra function `FUN_01768c30` at `0x01768C30`.
    ///
    /// The requested lookup name is stored before the exact library search.
    /// A found entry replaces the active shape with an owned clone and updates
    /// the live graphic shape and geometry. A missing entry keeps the prior
    /// active shape and graphic after the stored name has changed.
    pub fn assign_named_shape(
        &mut self,
        requested_name: impl Into<String>,
        library: &[ShapeLibraryEntry],
    ) -> bool {
        self.stored_shape_name = requested_name.into();
        let Some(shape) = library
            .iter()
            .find(|entry| entry.lookup_name == self.stored_shape_name)
            .map(|entry| entry.shape.clone())
        else {
            return false;
        };
        self.replace_active_shape(shape);
        true
    }

    /// Implements Ghidra function `FUN_01768da0` at `0x01768DA0`.
    ///
    /// A prepared shape is copied into owned definition state, and its name,
    /// shape data, and live geometry are updated immediately. `None` clears
    /// the stored name, active shape, and live graphic shape data. The clone
    /// keeps caller-owned prepared shapes independent from definition state.
    pub fn assign_prepared_shape(&mut self, shape: Option<&MacroShape>) {
        let Some(shape) = shape else {
            self.stored_shape_name.clear();
            self.active_shape = None;
            if let Some(graphic) = &mut self.live_graphic {
                graphic.shape = None;
            }
            return;
        };
        self.stored_shape_name.clone_from(&shape.name);
        self.replace_active_shape(shape.clone());
    }

    /// Implements Ghidra function `FUN_01768ff0` at `0x01768FF0`.
    ///
    /// A changed reference-storage flag is stored. Only a transition to false
    /// clears a non-empty retired reference. Equal values and transitions to
    /// true preserve the reference string.
    pub fn set_reference_storage(&mut self, enabled: bool) {
        if self.reference_storage == enabled {
            return;
        }
        self.reference_storage = enabled;
        if !enabled {
            self.reference.clear();
        }
    }

    #[must_use]
    pub fn stored_shape_name(&self) -> &str {
        &self.stored_shape_name
    }

    #[must_use]
    pub const fn active_shape(&self) -> Option<&MacroShape> {
        self.active_shape.as_ref()
    }

    #[must_use]
    pub const fn live_graphic(&self) -> Option<&LiveMacroGraphic> {
        self.live_graphic.as_ref()
    }

    #[must_use]
    pub const fn reference_storage(&self) -> bool {
        self.reference_storage
    }

    #[must_use]
    pub fn reference(&self) -> &str {
        &self.reference
    }

    fn replace_active_shape(&mut self, shape: MacroShape) {
        self.active_shape = Some(shape);
        if let Some(graphic) = &mut self.live_graphic {
            graphic.shape.clone_from(&self.active_shape);
            graphic.geometry_update_count = graphic.geometry_update_count.saturating_add(1);
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MacroDevice {
    pub name: String,
    pub manufacturer: String,
    pub subgroup: String,
    pub category: String,
    pub internal: bool,
    pub shapes: Vec<MacroShape>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MacroPickerFilterState {
    devices: Vec<MacroDevice>,
    filtered_indices: Vec<usize>,
    subgroup_items: Vec<String>,
    manufacturer: CatalogFilter,
    subgroup: CatalogFilter,
    active_category: CatalogFilter,
    saved_category: CatalogFilter,
    remembered_manufacturer: String,
    mode: PickerMode,
    show_all_components: bool,
}

impl MacroPickerFilterState {
    #[must_use]
    pub fn new(devices: Vec<MacroDevice>, category: CatalogFilter, mode: PickerMode) -> Self {
        let mut state = Self {
            devices,
            filtered_indices: Vec::new(),
            subgroup_items: Vec::new(),
            manufacturer: CatalogFilter::All,
            subgroup: CatalogFilter::All,
            saved_category: category.clone(),
            active_category: category,
            remembered_manufacturer: String::new(),
            mode,
            show_all_components: false,
        };
        state.rebuild_subgroups_and_devices();
        state
    }

    pub fn apply_manufacturer(&mut self, manufacturer: CatalogFilter) {
        self.remembered_manufacturer = manufacturer.display_value().to_owned();
        self.manufacturer = manufacturer;
        self.subgroup = CatalogFilter::All;
        self.rebuild_subgroups_and_devices();
    }

    pub fn apply_subgroup(&mut self, subgroup: CatalogFilter) {
        self.subgroup = subgroup;
        self.rebuild_devices();
    }

    pub fn toggle_show_all_components(&mut self, checked: bool) {
        self.show_all_components = checked;
        if checked {
            self.saved_category.clone_from(&self.active_category);
            self.active_category = CatalogFilter::All;
        } else {
            self.active_category.clone_from(&self.saved_category);
        }
        let manufacturer = self.manufacturer.clone();
        self.apply_manufacturer(manufacturer);
    }

    #[must_use]
    pub fn filtered_devices(&self) -> impl ExactSizeIterator<Item = &MacroDevice> {
        self.filtered_indices
            .iter()
            .map(|index| &self.devices[*index])
    }

    #[must_use]
    pub fn filtered_device(&self, index: usize) -> Option<&MacroDevice> {
        self.filtered_indices
            .get(index)
            .map(|device_index| &self.devices[*device_index])
    }

    #[must_use]
    pub fn subgroup_items(&self) -> &[String] {
        &self.subgroup_items
    }

    #[must_use]
    pub fn manufacturer_items(&self) -> Vec<String> {
        let mut items = Vec::new();
        for device in &self.devices {
            if !device.internal
                && self.active_category.matches(&device.category)
                && !items.contains(&device.manufacturer)
            {
                items.push(device.manufacturer.clone());
            }
        }
        items
    }

    #[must_use]
    pub const fn manufacturer(&self) -> &CatalogFilter {
        &self.manufacturer
    }

    #[must_use]
    pub const fn subgroup(&self) -> &CatalogFilter {
        &self.subgroup
    }

    #[must_use]
    pub const fn active_category(&self) -> &CatalogFilter {
        &self.active_category
    }

    #[must_use]
    pub fn remembered_manufacturer(&self) -> &str {
        &self.remembered_manufacturer
    }

    #[must_use]
    pub const fn show_all_components(&self) -> bool {
        self.show_all_components
    }

    fn rebuild_subgroups_and_devices(&mut self) {
        self.subgroup_items.clear();
        if self.mode.supplies_subgroups() {
            for device in &self.devices {
                if !device.internal
                    && self.active_category.matches(&device.category)
                    && self.manufacturer.matches(&device.manufacturer)
                    && !self.subgroup_items.contains(&device.subgroup)
                {
                    self.subgroup_items.push(device.subgroup.clone());
                }
            }
        }
        self.rebuild_devices();
    }

    fn rebuild_devices(&mut self) {
        self.filtered_indices.clear();
        for (index, device) in self.devices.iter().enumerate() {
            if !device.internal
                && self.active_category.matches(&device.category)
                && self.manufacturer.matches(&device.manufacturer)
                && self.subgroup.matches(&device.subgroup)
            {
                self.filtered_indices.push(index);
            }
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PositionCounter {
    pub position: usize,
    pub total: usize,
}

impl PositionCounter {
    #[must_use]
    pub const fn from_selection(selected_index: Option<usize>, total: usize) -> Self {
        Self {
            position: match selected_index {
                Some(index) => index.saturating_add(1),
                None => 0,
            },
            total,
        }
    }
}

impl fmt::Display for PositionCounter {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(formatter, "{}/{}", self.position, self.total)
    }
}

#[cfg(test)]
mod tests {
    use super::{
        CatalogFilter, LiveMacroGraphic, MacroDefinitionShapeState, MacroDevice,
        MacroPickerFilterState, MacroShape, PickerMode, PositionCounter, ShapeLibraryEntry,
    };

    fn device(
        name: &str,
        manufacturer: &str,
        subgroup: &str,
        category: &str,
        internal: bool,
    ) -> MacroDevice {
        MacroDevice {
            name: name.to_owned(),
            manufacturer: manufacturer.to_owned(),
            subgroup: subgroup.to_owned(),
            category: category.to_owned(),
            internal,
            shapes: Vec::new(),
        }
    }

    #[test]
    fn filters_exclude_internal_devices_and_rebuild_subgroups() {
        let devices = vec![
            device("A", "Acme", "Logic", "Digital", false),
            device("B", "Acme", "Power", "Analog", false),
            device("C", "Other", "Logic", "Digital", false),
            device("Hidden", "Acme", "Logic", "Digital", true),
        ];
        let mut state = MacroPickerFilterState::new(
            devices,
            CatalogFilter::Named("Digital".to_owned()),
            PickerMode(0),
        );
        state.apply_manufacturer(CatalogFilter::Named("Acme".to_owned()));
        assert_eq!(state.subgroup_items(), &["Logic"]);
        assert_eq!(
            state
                .filtered_devices()
                .map(|device| device.name.as_str())
                .collect::<Vec<_>>(),
            ["A"]
        );
        assert_eq!(state.remembered_manufacturer(), "Acme");
    }

    #[test]
    fn show_all_preserves_and_restores_category_then_resets_subgroup() {
        let devices = vec![
            device("A", "Acme", "Logic", "Digital", false),
            device("B", "Acme", "Power", "Analog", false),
        ];
        let mut state = MacroPickerFilterState::new(
            devices,
            CatalogFilter::Named("Digital".to_owned()),
            PickerMode(0),
        );
        state.apply_manufacturer(CatalogFilter::Named("Acme".to_owned()));
        state.apply_subgroup(CatalogFilter::Named("Logic".to_owned()));
        state.toggle_show_all_components(true);
        assert_eq!(state.active_category(), &CatalogFilter::All);
        assert_eq!(state.subgroup(), &CatalogFilter::All);
        assert_eq!(state.filtered_devices().len(), 2);
        state.toggle_show_all_components(false);
        assert_eq!(
            state.active_category(),
            &CatalogFilter::Named("Digital".to_owned())
        );
        assert_eq!(state.filtered_devices().len(), 1);
    }

    #[test]
    fn counters_are_one_based_with_zero_for_no_tree_selection() {
        assert_eq!(
            PositionCounter::from_selection(Some(0), 5).to_string(),
            "1/5"
        );
        assert_eq!(PositionCounter::from_selection(None, 5).to_string(), "0/5");
    }

    #[test]
    fn named_shape_assignment_keeps_old_shape_when_lookup_fails() {
        let old_shape = MacroShape::new("OLD", "Local");
        let new_shape = MacroShape::new("DIP14", "Standard");
        let library = vec![ShapeLibraryEntry::new("Standard.DIP14", new_shape.clone())];
        let mut state = MacroDefinitionShapeState::new(Some(old_shape.clone()));
        state.attach_live_graphic();

        assert!(!state.assign_named_shape("Missing.Shape", &library));
        assert_eq!(state.stored_shape_name(), "Missing.Shape");
        assert_eq!(state.active_shape(), Some(&old_shape));
        assert_eq!(
            state.live_graphic().and_then(LiveMacroGraphic::shape),
            Some(&old_shape)
        );

        assert!(state.assign_named_shape("Standard.DIP14", &library));
        assert_eq!(state.active_shape(), Some(&new_shape));
        assert_eq!(
            state
                .live_graphic()
                .map(LiveMacroGraphic::geometry_update_count),
            Some(1)
        );
    }

    #[test]
    fn prepared_shape_assignment_owns_clone_and_none_clears_shape_data() {
        let mut prepared = MacroShape::new("AUTO", "Generated");
        let mut state = MacroDefinitionShapeState::new(None);
        state.attach_live_graphic();
        state.assign_prepared_shape(Some(&prepared));
        prepared.name = "CHANGED BY CALLER".to_owned();

        assert_eq!(state.stored_shape_name(), "AUTO");
        assert_eq!(
            state.active_shape().map(|shape| shape.name.as_str()),
            Some("AUTO")
        );
        assert_eq!(
            state
                .live_graphic()
                .map(LiveMacroGraphic::geometry_update_count),
            Some(1)
        );

        state.assign_prepared_shape(None);
        assert_eq!(state.stored_shape_name(), "");
        assert_eq!(state.active_shape(), None);
        assert_eq!(state.live_graphic().and_then(LiveMacroGraphic::shape), None);
    }

    #[test]
    fn reference_cleanup_only_occurs_on_changed_transition_to_false() {
        let mut unchanged_false = MacroDefinitionShapeState::default();
        unchanged_false.initialize_reference_storage(false, "kept-on-equal-false");
        unchanged_false.set_reference_storage(false);
        assert_eq!(unchanged_false.reference(), "kept-on-equal-false");

        let mut transition = MacroDefinitionShapeState::default();
        transition.initialize_reference_storage(true, "library.macro");
        transition.set_reference_storage(true);
        assert_eq!(transition.reference(), "library.macro");
        transition.set_reference_storage(false);
        assert!(!transition.reference_storage());
        assert_eq!(transition.reference(), "");

        transition.initialize_reference_storage(false, "new-reference");
        transition.set_reference_storage(true);
        assert_eq!(transition.reference(), "new-reference");
    }
}
