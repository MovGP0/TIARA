//! Pure `ShapeEdit` drawing, ordering, and undo state.

use std::collections::BTreeMap;
use std::path::PathBuf;

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Bounds {
    pub x: f32,
    pub y: f32,
    pub width: f32,
    pub height: f32,
}

impl Bounds {
    #[must_use]
    pub fn union(self, other: Self) -> Self {
        let left = self.x.min(other.x);
        let top = self.y.min(other.y);
        let right = (self.x + self.width).max(other.x + other.width);
        let bottom = (self.y + self.height).max(other.y + other.height);
        Self {
            x: left,
            y: top,
            width: right - left,
            height: bottom - top,
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq, PartialOrd, Ord)]
pub struct ObjectId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ObjectKind {
    Line,
    Rectangle,
    Ellipse,
    Arc,
    Text,
    Pin { variant: i64 },
    Polygon,
    Bitmap,
    CursorRectangle,
    SensingRectangle,
    Protected,
    Other,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct NativeColor(pub u32);

#[derive(Debug, Clone, PartialEq)]
pub struct ShapeObject {
    pub id: ObjectId,
    pub kind: ObjectKind,
    pub selected: bool,
    pub object_color: NativeColor,
    pub fill_color: NativeColor,
    pub line_width: u8,
    pub bounds: Bounds,
    pub rotation_quarter_turns: i8,
    pub name: String,
    pub pin_order: usize,
    pub attributes: BTreeMap<String, String>,
}

impl ShapeObject {
    #[must_use]
    pub fn new(id: u64, kind: ObjectKind, bounds: Bounds) -> Self {
        Self {
            id: ObjectId(id),
            kind,
            selected: false,
            object_color: NativeColor::default(),
            fill_color: NativeColor::default(),
            line_width: 1,
            bounds,
            rotation_quarter_turns: 0,
            name: String::new(),
            pin_order: 0,
            attributes: BTreeMap::new(),
        }
    }

    #[must_use]
    pub const fn is_pin(&self) -> bool {
        matches!(self.kind, ObjectKind::Pin { .. })
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct Device {
    pub name: String,
    pub objects: Vec<ShapeObject>,
}

#[derive(Debug, Clone, PartialEq)]
struct Snapshot {
    devices: Vec<Device>,
    current_device: Option<usize>,
    dirty: bool,
    sort_by_name: bool,
}

#[derive(Debug, Default)]
pub struct UndoManager {
    undo: Vec<Snapshot>,
    redo: Vec<Snapshot>,
}

impl UndoManager {
    fn record(&mut self, snapshot: Snapshot) {
        self.undo.push(snapshot);
        self.redo.clear();
    }

    fn undo(&mut self, current: Snapshot) -> Option<Snapshot> {
        let previous = self.undo.pop()?;
        self.redo.push(current);
        Some(previous)
    }

    fn redo(&mut self, current: Snapshot) -> Option<Snapshot> {
        let next = self.redo.pop()?;
        self.undo.push(current);
        Some(next)
    }

    fn clear(&mut self) {
        self.undo.clear();
        self.redo.clear();
    }
}

#[derive(Debug)]
pub struct Document {
    pub devices: Vec<Device>,
    pub current_device: Option<usize>,
    pub temporary_object: Option<ShapeObject>,
    pub filename: PathBuf,
    pub dirty: bool,
    pub sort_by_name: bool,
    undo: UndoManager,
    pub redraw_generation: u64,
}

impl Default for Document {
    fn default() -> Self {
        Self {
            devices: vec![Device {
                name: "Device1".to_owned(),
                objects: Vec::new(),
            }],
            current_device: Some(0),
            temporary_object: None,
            filename: PathBuf::from("NONAME.DDB"),
            dirty: false,
            sort_by_name: false,
            undo: UndoManager::default(),
            redraw_generation: 0,
        }
    }
}

impl Document {
    #[must_use]
    pub fn current(&self) -> Option<&Device> {
        self.current_device
            .and_then(|index| self.devices.get(index))
    }

    pub fn current_mut(&mut self) -> Option<&mut Device> {
        self.current_device
            .and_then(|index| self.devices.get_mut(index))
    }

    pub const fn redraw(&mut self) {
        self.redraw_generation = self.redraw_generation.saturating_add(1);
    }

    pub fn reset_new(&mut self) {
        self.devices = vec![Device {
            name: "Device1".to_owned(),
            objects: Vec::new(),
        }];
        self.current_device = Some(0);
        self.temporary_object = None;
        self.filename = PathBuf::from("NONAME.DDB");
        self.dirty = false;
        self.sort_by_name = false;
        self.undo.clear();
        self.redraw();
    }

    pub fn replace_loaded(&mut self, devices: Vec<Device>, filename: PathBuf) {
        self.devices = devices;
        self.current_device = (!self.devices.is_empty()).then_some(0);
        self.temporary_object = None;
        self.filename = filename;
        self.dirty = false;
        self.undo.clear();
        self.clear_selection();
        self.redraw();
    }

    pub fn clear_selection(&mut self) {
        for device in &mut self.devices {
            for object in &mut device.objects {
                object.selected = false;
            }
        }
    }

    pub fn select_all(&mut self) {
        if let Some(device) = self.current_mut() {
            for object in &mut device.objects {
                object.selected = true;
            }
        }
        self.redraw();
    }

    pub fn delete_selected(&mut self) -> usize {
        let before = self.snapshot();
        let Some(device) = self.current_mut() else {
            self.redraw();
            return 0;
        };
        let old_len = device.objects.len();
        device
            .objects
            .retain(|object| !object.selected || object.kind == ObjectKind::Protected);
        let removed = old_len.saturating_sub(device.objects.len());
        if removed > 0 {
            self.undo.record(before);
            self.dirty = true;
        }
        self.redraw();
        removed
    }

    pub fn rotate_selected(&mut self, left: bool) -> usize {
        let before = self.snapshot();
        let mut changed = 0usize;
        let turn = if left { -1 } else { 1 };
        if let Some(device) = self.current_mut() {
            for object in &mut device.objects {
                if object.selected {
                    object.rotation_quarter_turns =
                        object.rotation_quarter_turns.wrapping_add(turn);
                    changed = changed.saturating_add(1);
                }
            }
        }
        let temporary_changed = if let Some(object) = &mut self.temporary_object {
            object.rotation_quarter_turns = object.rotation_quarter_turns.wrapping_add(turn);
            1
        } else {
            0
        };
        if changed > 0 {
            self.undo.record(before);
            self.dirty = true;
        }
        if changed > 0 || temporary_changed > 0 {
            self.redraw();
        }
        changed.saturating_add(temporary_changed)
    }

    pub fn apply_object_color(&mut self, color: NativeColor) -> usize {
        self.mutate_selected(|object| object.object_color = color)
    }

    pub fn apply_line_width(&mut self, width: u8, embedded: bool) -> usize {
        if embedded {
            return 0;
        }
        self.mutate_selected(|object| object.line_width = width)
    }

    pub fn bring_to_front(&mut self) {
        self.reorder(|objects| {
            let mut unselected = objects
                .iter()
                .filter(|object| !object.selected)
                .cloned()
                .collect::<Vec<_>>();
            unselected.extend(objects.iter().filter(|object| object.selected).cloned());
            unselected
        });
    }

    pub fn send_to_back(&mut self) {
        self.reorder(|objects| {
            let mut selected = objects
                .iter()
                .filter(|object| object.selected)
                .cloned()
                .collect::<Vec<_>>();
            selected.extend(objects.iter().filter(|object| !object.selected).cloned());
            selected
        });
    }

    pub fn bring_forward(&mut self) {
        let before = self.snapshot();
        let mut changed = false;
        if let Some(device) = self.current_mut() {
            for index in (0..device.objects.len().saturating_sub(1)).rev() {
                if device.objects[index].selected && !device.objects[index + 1].selected {
                    device.objects.swap(index, index + 1);
                    changed = true;
                }
            }
        }
        self.finish_order_change(before, changed);
    }

    pub fn send_backward(&mut self) {
        let before = self.snapshot();
        let mut changed = false;
        if let Some(device) = self.current_mut() {
            for index in 1..device.objects.len() {
                if device.objects[index].selected && !device.objects[index - 1].selected {
                    device.objects.swap(index - 1, index);
                    changed = true;
                }
            }
        }
        self.finish_order_change(before, changed);
    }

    pub fn remove_cursor_rectangles(&mut self) -> usize {
        let Some(device) = self.current_mut() else {
            self.redraw();
            return 0;
        };
        let before = device.objects.len();
        device
            .objects
            .retain(|object| object.kind != ObjectKind::CursorRectangle);
        let removed = before.saturating_sub(device.objects.len());
        self.redraw();
        removed
    }

    #[must_use]
    pub fn drawing_bounds(&self) -> Option<Bounds> {
        self.current()?
            .objects
            .iter()
            .filter(|object| object.kind != ObjectKind::Protected)
            .map(|object| object.bounds)
            .reduce(Bounds::union)
    }

    pub fn recalculate_sensing_rectangle(&mut self) -> bool {
        let bounds = self.current().and_then(|device| {
            device
                .objects
                .iter()
                .filter(|object| {
                    !object.is_pin()
                        && object.kind != ObjectKind::Protected
                        && object.kind != ObjectKind::SensingRectangle
                })
                .map(|object| object.bounds)
                .reduce(Bounds::union)
        });
        let changed = if let (Some(bounds), Some(device)) = (bounds, self.current_mut())
            && let Some(sensing) = device
                .objects
                .iter_mut()
                .find(|object| object.kind == ObjectKind::SensingRectangle)
        {
            sensing.bounds = bounds;
            true
        } else {
            false
        };
        self.redraw();
        changed
    }

    pub fn set_pin_order(&mut self, ids: &[ObjectId]) -> bool {
        let before = self.snapshot();
        let mut changed = false;
        if let Some(device) = self.current_mut() {
            for (order, id) in ids.iter().enumerate() {
                if let Some(pin) = device
                    .objects
                    .iter_mut()
                    .find(|object| object.id == *id && object.is_pin())
                    && pin.pin_order != order
                {
                    pin.pin_order = order;
                    changed = true;
                }
            }
        }
        if changed {
            self.undo.record(before);
            self.dirty = true;
        }
        changed
    }

    pub fn append_objects(&mut self, objects: Vec<ShapeObject>, mark_dirty: bool) -> usize {
        if objects.is_empty() {
            self.redraw();
            return 0;
        }
        let before = self.snapshot();
        let count = objects.len();
        if let Some(device) = self.current_mut() {
            device.objects.extend(objects);
            self.undo.record(before);
            if mark_dirty {
                self.dirty = true;
            }
        }
        self.redraw();
        count
    }

    pub fn replace_objects(&mut self, updates: &[ShapeObject], mark_dirty: bool) -> usize {
        let before = self.snapshot();
        let mut changed = 0usize;
        if let Some(device) = self.current_mut() {
            for update in updates {
                if let Some(object) = device
                    .objects
                    .iter_mut()
                    .find(|object| object.id == update.id)
                    && object != update
                {
                    *object = update.clone();
                    changed = changed.saturating_add(1);
                }
            }
        }
        if changed > 0 {
            self.undo.record(before);
            if mark_dirty {
                self.dirty = true;
            }
            self.redraw();
        }
        changed
    }

    pub fn set_sort_by_name(&mut self, enabled: bool) {
        if self.sort_by_name == enabled {
            return;
        }
        let selected_name = self.current().map(|device| device.name.clone());
        self.sort_by_name = enabled;
        if enabled {
            self.devices
                .sort_by_key(|device| device.name.to_lowercase());
            self.dirty = true;
        }
        self.current_device = selected_name
            .and_then(|name| self.devices.iter().position(|device| device.name == name));
    }

    #[must_use]
    pub fn device_position_status(&self) -> String {
        let position = self
            .current_device
            .map_or(0, |index| index.saturating_add(1));
        format!("{position} of {} devices", self.devices.len())
    }

    pub fn undo(&mut self) -> bool {
        self.clear_selection();
        let current = self.snapshot();
        let Some(snapshot) = self.undo.undo(current) else {
            self.redraw();
            return false;
        };
        self.restore(snapshot);
        self.redraw();
        true
    }

    pub fn redo(&mut self) -> bool {
        self.clear_selection();
        let current = self.snapshot();
        let Some(snapshot) = self.undo.redo(current) else {
            self.redraw();
            return false;
        };
        self.restore(snapshot);
        self.redraw();
        true
    }

    #[must_use]
    pub fn clone_devices(&self) -> Vec<Device> {
        self.devices.clone()
    }

    fn mutate_selected(&mut self, mut mutation: impl FnMut(&mut ShapeObject)) -> usize {
        let before = self.snapshot();
        let mut changed = 0usize;
        if let Some(device) = self.current_mut() {
            for object in &mut device.objects {
                if object.selected {
                    mutation(object);
                    changed = changed.saturating_add(1);
                }
            }
        }
        if changed > 0 {
            self.undo.record(before);
            self.dirty = true;
            self.redraw();
        }
        changed
    }

    fn reorder(&mut self, ordering: impl FnOnce(&[ShapeObject]) -> Vec<ShapeObject>) {
        let before = self.snapshot();
        let mut changed = false;
        if let Some(device) = self.current_mut() {
            let ordered = ordering(&device.objects);
            changed = ordered != device.objects;
            device.objects = ordered;
        }
        self.finish_order_change(before, changed);
    }

    fn finish_order_change(&mut self, before: Snapshot, changed: bool) {
        if changed {
            self.undo.record(before);
            self.dirty = true;
        }
        self.redraw();
    }

    fn snapshot(&self) -> Snapshot {
        Snapshot {
            devices: self.devices.clone(),
            current_device: self.current_device,
            dirty: self.dirty,
            sort_by_name: self.sort_by_name,
        }
    }

    fn restore(&mut self, snapshot: Snapshot) {
        self.devices = snapshot.devices;
        self.current_device = snapshot.current_device;
        self.dirty = snapshot.dirty;
        self.sort_by_name = snapshot.sort_by_name;
    }
}
