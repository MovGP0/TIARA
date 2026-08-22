use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

use crate::shared::window_shell;

pub const TITLE: &str = "Macro Properties";
pub const FORM_RESOURCE: &str = "MacroPropertiesForm";
pub const LIBRARY_EVALUATION: &str = "iced 0.13 supplies the form controls and message/update state; Rust enums, Vec, Option, sorting, and integer geometry supply the staged transaction and auto-shape layout; text measurement and the modal shape catalog remain typed adapters because neither the standard library nor iced exposes the recovered application catalog contract";

const STATUS: &str = "Edit macro properties";
const TOOLBAR: &[&str] = &[];
const AUTO_SHAPE_UPDATED_RESOURCE: u16 = 0x085e;
const GRID: i32 = 8;
const PIN_SPACING: i32 = 16;
const CHANGE_STORAGE_ENABLED: u8 = 1;
const EMBED_ENABLED: u8 = 2;
const ACCEPTED: u8 = 4;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TerminalSide {
    Left,
    Top,
    Right,
    Bottom,
}

impl TerminalSide {
    const fn index(self) -> usize {
        match self {
            Self::Left => 0,
            Self::Top => 1,
            Self::Right => 2,
            Self::Bottom => 3,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Terminal {
    pub label: String,
    pub side: TerminalSide,
    pub order: i32,
    pub emphasized: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextRole {
    Caption,
    PinLabel { emphasized: bool },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TextExtent {
    pub width: i32,
    pub height: i32,
}

pub trait TextMeasurer {
    fn measure(&self, text: &str, role: TextRole) -> TextExtent;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Point {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Bounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

impl Bounds {
    #[must_use]
    pub const fn width(self) -> i32 {
        self.right - self.left
    }

    #[must_use]
    pub const fn height(self) -> i32 {
        self.bottom - self.top
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapePin {
    pub label: String,
    pub side: TerminalSide,
    pub position: Point,
    pub emphasized: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AutoShape {
    pub name: String,
    pub body: Bounds,
    pub caption_position: Point,
    pub pins: Vec<ShapePin>,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct MacroCircuit {
    pub terminals: Vec<Terminal>,
}

/// Builds a graphical auto-shape from a macro circuit.
///
/// Reimplements Ghidra function `FUN_019a26a0` at `0x019A26A0`. Terminals are
/// grouped and ordered by side, label extents and caption extents determine an
/// aligned body, and pins are distributed on the four body edges.
#[must_use]
pub fn generate_auto_shape(
    circuit: &MacroCircuit,
    name: &str,
    measurer: &impl TextMeasurer,
) -> AutoShape {
    let mut groups: [Vec<Terminal>; 4] = std::array::from_fn(|_| Vec::new());
    for terminal in &circuit.terminals {
        groups[terminal.side.index()].push(terminal.clone());
    }
    for group in &mut groups {
        group.sort_by_key(|terminal| terminal.order);
    }

    let caption = measurer.measure(name, TextRole::Caption);
    let horizontal_label_width = maximum_label_width(&groups[0], &groups[2], measurer);
    let vertical_label_width = maximum_label_width(&groups[1], &groups[3], measurer);

    let minimum_width = pin_span(groups[1].len()).max(pin_span(groups[3].len()));
    let measured_width = align_strict(
        align_strict(caption.width, GRID)
            .saturating_add(align_strict(horizontal_label_width.saturating_mul(2), GRID)),
        PIN_SPACING,
    );
    let width = minimum_width.max(measured_width);

    let minimum_height = pin_span(groups[0].len()).max(pin_span(groups[2].len()));
    let measured_height = align_strict(
        align_strict(caption.height, GRID)
            .saturating_add(align_strict(vertical_label_width.saturating_mul(2), GRID)),
        PIN_SPACING,
    );
    let height = minimum_height.max(measured_height);
    let body = Bounds {
        left: -(width / 2),
        top: -(height / 2),
        right: width / 2,
        bottom: height / 2,
    };

    let mut pins = Vec::with_capacity(circuit.terminals.len());
    append_pins(&mut pins, &groups[0], body);
    append_pins(&mut pins, &groups[1], body);
    append_pins(&mut pins, &groups[2], body);
    append_pins(&mut pins, &groups[3], body);

    AutoShape {
        name: name.to_owned(),
        body,
        caption_position: Point {
            x: body.left + 4,
            y: body.top - 15,
        },
        pins,
    }
}

fn maximum_label_width(
    first: &[Terminal],
    second: &[Terminal],
    measurer: &impl TextMeasurer,
) -> i32 {
    first
        .iter()
        .chain(second)
        .map(|terminal| {
            measurer
                .measure(
                    &terminal.label,
                    TextRole::PinLabel {
                        emphasized: terminal.emphasized,
                    },
                )
                .width
        })
        .max()
        .unwrap_or(0)
}

fn pin_span(count: usize) -> i32 {
    i32::try_from(count)
        .unwrap_or(i32::MAX)
        .saturating_add(1)
        .saturating_mul(PIN_SPACING)
        .max(PIN_SPACING)
}

fn align_strict(value: i32, alignment: i32) -> i32 {
    value
        .max(0)
        .div_euclid(alignment)
        .saturating_add(1)
        .saturating_mul(alignment)
}

fn append_pins(pins: &mut Vec<ShapePin>, terminals: &[Terminal], body: Bounds) {
    let count = i32::try_from(terminals.len()).unwrap_or(i32::MAX);
    if count == 0 {
        return;
    }
    let side = terminals[0].side;
    let span = match side {
        TerminalSide::Left | TerminalSide::Right => body.height(),
        TerminalSide::Top | TerminalSide::Bottom => body.width(),
    };
    let step = span.div_euclid(count.saturating_add(1)).div_euclid(GRID) * GRID;
    let start = span
        .saturating_sub(step.saturating_mul(count.saturating_sub(1)))
        .div_euclid(PIN_SPACING)
        * GRID;

    for (index, terminal) in terminals.iter().enumerate() {
        let offset = start.saturating_add(
            i32::try_from(index)
                .unwrap_or(i32::MAX)
                .saturating_mul(step),
        );
        let position = match side {
            TerminalSide::Left => Point {
                x: body.left,
                y: body.top + offset,
            },
            TerminalSide::Top => Point {
                x: body.left + offset,
                y: body.top,
            },
            TerminalSide::Right => Point {
                x: body.right,
                y: body.top + offset,
            },
            TerminalSide::Bottom => Point {
                x: body.left + offset,
                y: body.bottom,
            },
        };
        pins.push(ShapePin {
            label: terminal.label.clone(),
            side,
            position,
            emphasized: terminal.emphasized,
        });
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct ShapeReference {
    pub library_qualifier: Option<String>,
    pub name: String,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct MacroDefinition {
    pub name: String,
    pub default_label: String,
    pub default_parameters: String,
    pub shape: ShapeReference,
    pub referenced_storage: bool,
    pub storage_reference: String,
    pub active_shape: Option<AutoShape>,
    pub live_graphic_shape: Option<AutoShape>,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct MacroInstance {
    pub embed_reference: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeSelection {
    pub display_name: String,
    pub library_qualifier: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ShapeDialogResult {
    Cancelled,
    Accepted(Option<ShapeSelection>),
}

pub trait ShapeDialog {
    fn select_shape(&mut self, circuit: &MacroCircuit, current_shape: &str) -> ShapeDialogResult;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    BrowseShape,
    UpdateAutoShape,
    CloseAccepted,
    CloseCancelled,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    NameChanged(String),
    DefaultLabelChanged(String),
    DefaultParametersChanged(String),
    BrowseShape,
    StoreByContent,
    EmbedMacro,
    UpdateAutoShape,
    Accept,
    Cancel,
    NoOp,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    definition: MacroDefinition,
    instance: MacroInstance,
    working_circuit: Option<MacroCircuit>,
    name: String,
    default_label: String,
    default_parameters: String,
    shape_name: String,
    shape_qualifier: String,
    staged_referenced_storage: bool,
    staged_embed_reference: String,
    flags: u8,
    notification_resource: Option<u16>,
    pending_action: Option<Action>,
}

impl Window {
    #[must_use]
    pub fn new(
        definition: MacroDefinition,
        instance: MacroInstance,
        working_circuit: Option<MacroCircuit>,
    ) -> Self {
        let mut flags = 0;
        if definition.referenced_storage {
            flags |= CHANGE_STORAGE_ENABLED;
        }
        if !instance.embed_reference.is_empty() {
            flags |= EMBED_ENABLED;
        }
        Self {
            name: definition.name.clone(),
            default_label: definition.default_label.clone(),
            default_parameters: definition.default_parameters.clone(),
            shape_name: definition.shape.name.clone(),
            shape_qualifier: definition
                .shape
                .library_qualifier
                .clone()
                .unwrap_or_default(),
            staged_referenced_storage: definition.referenced_storage,
            staged_embed_reference: instance.embed_reference.clone(),
            definition,
            instance,
            working_circuit,
            flags,
            notification_resource: None,
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::NameChanged(value) => self.name = value,
            Message::DefaultLabelChanged(value) => self.default_label = value,
            Message::DefaultParametersChanged(value) => self.default_parameters = value,
            Message::BrowseShape => self.pending_action = Some(Action::BrowseShape),
            Message::StoreByContent => self.stage_store_by_content(),
            Message::EmbedMacro => self.stage_embed_macro(),
            Message::UpdateAutoShape => self.pending_action = Some(Action::UpdateAutoShape),
            Message::Accept => {
                self.accept();
                self.pending_action = Some(Action::CloseAccepted);
            }
            Message::Cancel => self.pending_action = Some(Action::CloseCancelled),
            Message::NoOp => {}
        }
        Task::none()
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    /// Stages a shape chosen in the Macro Shapes dialog.
    ///
    /// Reimplements Ghidra function `FUN_01b92290` at `0x01B92290`. A missing
    /// working circuit, Cancel, or an accepted dialog without a selection is a
    /// no-op. The macro definition is not changed before outer acceptance.
    pub fn browse_shape(&mut self, dialog: &mut impl ShapeDialog) {
        let Some(circuit) = self.working_circuit.as_ref() else {
            return;
        };
        let ShapeDialogResult::Accepted(Some(selection)) =
            dialog.select_shape(circuit, &self.shape_name)
        else {
            return;
        };
        self.shape_name = selection.display_name;
        self.shape_qualifier = selection.library_qualifier;
    }

    /// Stages referenced-storage mode as false and disables its command.
    ///
    /// Reimplements Ghidra function `FUN_01b92440` at `0x01B92440`. The macro
    /// definition remains unchanged until outer acceptance.
    pub const fn stage_store_by_content(&mut self) {
        self.staged_referenced_storage = false;
        self.flags &= !CHANGE_STORAGE_ENABLED;
    }

    /// Clears the staged instance reference and disables its command.
    ///
    /// Reimplements Ghidra function `FUN_01b92470` at `0x01B92470`. The
    /// selected macro instance remains unchanged until outer acceptance.
    pub fn stage_embed_macro(&mut self) {
        self.staged_embed_reference.clear();
        self.flags &= !EMBED_ENABLED;
    }

    /// Generates and immediately applies a new macro auto-shape.
    ///
    /// Reimplements Ghidra function `FUN_01b924a0` at `0x01B924A0`. A missing
    /// working circuit is a no-op. A generated shape updates the definition and
    /// attached live graphic immediately, updates the visible name, clears the
    /// picker qualifier, and stages localized message resource `0x085E`.
    pub fn update_auto_shape(&mut self, measurer: &impl TextMeasurer) -> bool {
        let Some(circuit) = self.working_circuit.as_ref() else {
            return false;
        };
        let shape = generate_auto_shape(circuit, &self.name, measurer);
        self.definition.shape = ShapeReference {
            library_qualifier: None,
            name: shape.name.clone(),
        };
        self.definition.active_shape = Some(shape.clone());
        if self.definition.live_graphic_shape.is_some() {
            self.definition.live_graphic_shape = Some(shape.clone());
        }
        self.shape_name = shape.name;
        self.shape_qualifier.clear();
        self.notification_resource = Some(AUTO_SHAPE_UPDATED_RESOURCE);
        true
    }

    /// Applies the staged form values to the macro definition and instance.
    ///
    /// Reimplements Ghidra function `FUN_01b92970` at `0x01B92970`. This path
    /// has no local validation, rollback, retry, or error recovery.
    pub fn accept(&mut self) {
        self.definition.name.clone_from(&self.name);
        self.definition
            .default_label
            .clone_from(&self.default_label);
        self.definition
            .default_parameters
            .clone_from(&self.default_parameters);
        self.definition.shape = ShapeReference {
            library_qualifier: (!self.shape_qualifier.is_empty())
                .then(|| self.shape_qualifier.clone()),
            name: self.shape_name.clone(),
        };
        if self.definition.referenced_storage != self.staged_referenced_storage
            && !self.staged_referenced_storage
        {
            self.definition.storage_reference.clear();
        }
        self.definition.referenced_storage = self.staged_referenced_storage;
        self.instance
            .embed_reference
            .clone_from(&self.staged_embed_reference);
        self.flags |= ACCEPTED;
    }

    #[must_use]
    pub const fn definition(&self) -> &MacroDefinition {
        &self.definition
    }

    #[must_use]
    pub const fn instance(&self) -> &MacroInstance {
        &self.instance
    }

    #[must_use]
    pub const fn is_accepted(&self) -> bool {
        self.flags & ACCEPTED != 0
    }

    #[must_use]
    pub const fn change_storage_enabled(&self) -> bool {
        self.flags & CHANGE_STORAGE_ENABLED != 0
    }

    #[must_use]
    pub const fn embed_enabled(&self) -> bool {
        self.flags & EMBED_ENABLED != 0
    }

    #[must_use]
    pub const fn staged_referenced_storage(&self) -> bool {
        self.staged_referenced_storage
    }

    #[must_use]
    pub fn staged_embed_reference(&self) -> &str {
        &self.staged_embed_reference
    }

    #[must_use]
    pub fn shape_name(&self) -> &str {
        &self.shape_name
    }

    #[must_use]
    pub fn shape_qualifier(&self) -> &str {
        &self.shape_qualifier
    }

    #[must_use]
    pub const fn notification_resource(&self) -> Option<u16> {
        self.notification_resource
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let browse = button("...").on_press(Message::BrowseShape);
        let storage = if self.change_storage_enabled() {
            button("Store macro by content").on_press(Message::StoreByContent)
        } else {
            button("Store macro by content")
        };
        let embed = if self.embed_enabled() {
            button("Embed macro in circuit").on_press(Message::EmbedMacro)
        } else {
            button("Embed macro in circuit")
        };
        let notification = self
            .notification_resource
            .map_or_else(String::new, |resource| {
                format!("Message resource 0x{resource:04X}")
            });
        let body = container(
            column![
                row![
                    text("Shape").width(Length::Fixed(130.0)),
                    text_input("", &self.shape_name).width(Length::Fill),
                    browse,
                ]
                .spacing(8),
                row![
                    text("Name").width(Length::Fixed(130.0)),
                    text_input("", &self.name).on_input(Message::NameChanged),
                ]
                .spacing(8),
                row![
                    text("Default label").width(Length::Fixed(130.0)),
                    text_input("", &self.default_label).on_input(Message::DefaultLabelChanged),
                ]
                .spacing(8),
                row![
                    text("Default parameters").width(Length::Fixed(130.0)),
                    text_input("", &self.default_parameters)
                        .on_input(Message::DefaultParametersChanged),
                ]
                .spacing(8),
                row![storage, embed].spacing(8),
                button("Update Auto-Shape").on_press(Message::UpdateAutoShape),
                text(notification),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(14)
        .width(Length::Fill)
        .height(Length::Fill);
        window_shell::frame(TITLE, menu, toolbar, body.into(), STATUS)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct FixedMeasurer;

    impl TextMeasurer for FixedMeasurer {
        fn measure(&self, text: &str, role: TextRole) -> TextExtent {
            let multiplier = match role {
                TextRole::Caption => 7,
                TextRole::PinLabel { emphasized: false } => 9,
                TextRole::PinLabel { emphasized: true } => 12,
            };
            TextExtent {
                width: i32::try_from(text.len()).unwrap_or(i32::MAX) * multiplier,
                height: 10,
            }
        }
    }

    #[derive(Debug)]
    struct FakeDialog {
        result: ShapeDialogResult,
        calls: usize,
        initial_shape: Option<String>,
    }

    impl ShapeDialog for FakeDialog {
        fn select_shape(
            &mut self,
            _circuit: &MacroCircuit,
            current_shape: &str,
        ) -> ShapeDialogResult {
            self.calls += 1;
            self.initial_shape = Some(current_shape.to_owned());
            self.result.clone()
        }
    }

    fn definition() -> MacroDefinition {
        MacroDefinition {
            name: "Old name".into(),
            default_label: "Old label".into(),
            default_parameters: "R=1k".into(),
            shape: ShapeReference {
                library_qualifier: Some("Library".into()),
                name: "Old shape".into(),
            },
            referenced_storage: true,
            storage_reference: "library.tsm".into(),
            active_shape: None,
            live_graphic_shape: Some(AutoShape {
                name: "Old shape".into(),
                body: Bounds {
                    left: -8,
                    top: -8,
                    right: 8,
                    bottom: 8,
                },
                caption_position: Point { x: 0, y: 0 },
                pins: Vec::new(),
            }),
        }
    }

    fn circuit() -> MacroCircuit {
        MacroCircuit {
            terminals: vec![
                Terminal {
                    label: "IN_B".into(),
                    side: TerminalSide::Left,
                    order: 20,
                    emphasized: false,
                },
                Terminal {
                    label: "IN_A".into(),
                    side: TerminalSide::Left,
                    order: 10,
                    emphasized: true,
                },
                Terminal {
                    label: "CLOCK".into(),
                    side: TerminalSide::Top,
                    order: 0,
                    emphasized: false,
                },
                Terminal {
                    label: "OUT".into(),
                    side: TerminalSide::Right,
                    order: 0,
                    emphasized: false,
                },
                Terminal {
                    label: "GROUND".into(),
                    side: TerminalSide::Bottom,
                    order: 0,
                    emphasized: false,
                },
            ],
        }
    }

    #[test]
    fn auto_shape_groups_orders_and_aligns_terminals() {
        let shape = generate_auto_shape(&circuit(), "Amplifier", &FixedMeasurer);

        assert_eq!(shape.name, "Amplifier");
        assert_eq!(shape.body.width() % PIN_SPACING, 0);
        assert_eq!(shape.body.height() % PIN_SPACING, 0);
        assert_eq!(shape.pins.len(), 5);
        assert_eq!(shape.pins[0].label, "IN_A");
        assert_eq!(shape.pins[1].label, "IN_B");
        assert_eq!(shape.pins[0].position.x, shape.body.left);
        assert_eq!(shape.pins[2].position.y, shape.body.top);
        assert_eq!(shape.pins[3].position.x, shape.body.right);
        assert_eq!(shape.pins[4].position.y, shape.body.bottom);
    }

    #[test]
    fn shape_browse_no_op_paths_preserve_staged_values() {
        let mut no_circuit = Window::new(definition(), MacroInstance::default(), None);
        let mut dialog = FakeDialog {
            result: ShapeDialogResult::Accepted(Some(ShapeSelection {
                display_name: "New".into(),
                library_qualifier: "Other".into(),
            })),
            calls: 0,
            initial_shape: None,
        };
        no_circuit.browse_shape(&mut dialog);
        assert_eq!(dialog.calls, 0);
        assert_eq!(no_circuit.shape_name(), "Old shape");

        let mut window = Window::new(definition(), MacroInstance::default(), Some(circuit()));
        dialog.result = ShapeDialogResult::Cancelled;
        window.browse_shape(&mut dialog);
        assert_eq!(window.shape_name(), "Old shape");
        dialog.result = ShapeDialogResult::Accepted(None);
        window.browse_shape(&mut dialog);
        assert_eq!(window.shape_qualifier(), "Library");
    }

    #[test]
    fn shape_browse_stages_both_selected_values() {
        let mut window = Window::new(definition(), MacroInstance::default(), Some(circuit()));
        let mut dialog = FakeDialog {
            result: ShapeDialogResult::Accepted(Some(ShapeSelection {
                display_name: "New shape".into(),
                library_qualifier: "Other library".into(),
            })),
            calls: 0,
            initial_shape: None,
        };

        window.browse_shape(&mut dialog);

        assert_eq!(dialog.initial_shape.as_deref(), Some("Old shape"));
        assert_eq!(window.shape_name(), "New shape");
        assert_eq!(window.shape_qualifier(), "Other library");
        assert_eq!(window.definition().shape.name, "Old shape");
    }

    #[test]
    fn storage_and_embed_commands_only_change_staged_state() {
        let instance = MacroInstance {
            embed_reference: "external.tsm".into(),
        };
        let mut window = Window::new(definition(), instance, Some(circuit()));

        window.stage_store_by_content();
        window.stage_embed_macro();

        assert!(!window.staged_referenced_storage());
        assert!(!window.change_storage_enabled());
        assert_eq!(window.staged_embed_reference(), "");
        assert!(!window.embed_enabled());
        assert!(window.definition().referenced_storage);
        assert_eq!(window.instance().embed_reference, "external.tsm");
    }

    #[test]
    fn accept_applies_staged_fields_and_clears_reference_storage() {
        let instance = MacroInstance {
            embed_reference: "external.tsm".into(),
        };
        let mut window = Window::new(definition(), instance, Some(circuit()));
        let _ = window.update(Message::NameChanged("New name".into()));
        let _ = window.update(Message::DefaultLabelChanged("New label".into()));
        let _ = window.update(Message::DefaultParametersChanged("C=2u".into()));
        let mut dialog = FakeDialog {
            result: ShapeDialogResult::Accepted(Some(ShapeSelection {
                display_name: "Catalog shape".into(),
                library_qualifier: "Catalog".into(),
            })),
            calls: 0,
            initial_shape: None,
        };
        window.browse_shape(&mut dialog);
        window.stage_store_by_content();
        window.stage_embed_macro();

        window.accept();

        assert!(window.is_accepted());
        assert_eq!(window.definition().name, "New name");
        assert_eq!(window.definition().default_label, "New label");
        assert_eq!(window.definition().default_parameters, "C=2u");
        assert_eq!(window.definition().shape.name, "Catalog shape");
        assert_eq!(
            window.definition().shape.library_qualifier.as_deref(),
            Some("Catalog")
        );
        assert!(!window.definition().referenced_storage);
        assert_eq!(window.definition().storage_reference, "");
        assert_eq!(window.instance().embed_reference, "");
    }

    #[test]
    fn update_auto_shape_without_working_circuit_is_no_op() {
        let original = definition();
        let mut window = Window::new(original.clone(), MacroInstance::default(), None);

        assert!(!window.update_auto_shape(&FixedMeasurer));
        assert_eq!(window.definition(), &original);
        assert_eq!(window.notification_resource(), None);
    }

    #[test]
    fn update_auto_shape_mutates_definition_and_live_graphic_immediately() {
        let mut window = Window::new(definition(), MacroInstance::default(), Some(circuit()));
        let _ = window.update(Message::NameChanged("Generated".into()));

        assert!(window.update_auto_shape(&FixedMeasurer));

        let Some(active) = window.definition().active_shape.clone() else {
            panic!("the generated shape must be active");
        };
        assert_eq!(active.name, "Generated");
        assert_eq!(window.definition().shape.name, "Generated");
        assert_eq!(window.definition().shape.library_qualifier, None);
        assert_eq!(
            window.definition().live_graphic_shape.as_ref(),
            Some(&active)
        );
        assert_eq!(window.shape_name(), "Generated");
        assert_eq!(window.shape_qualifier(), "");
        assert_eq!(
            window.notification_resource(),
            Some(AUTO_SHAPE_UPDATED_RESOURCE)
        );
        let _ = window.update(Message::Cancel);
        assert_eq!(window.definition().active_shape.as_ref(), Some(&active));
    }
}
