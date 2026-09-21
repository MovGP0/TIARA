//! The Schematic Editor toolbar, as the original resource lays it out.
//!
//! One bar across the top of the window, in three panels: 7 general commands
//! pinned left, 24 editing tools filling the middle, and the component picker
//! pinned right. 34 items in all, 30 of them buttons and 2 drop-downs, with 32
//! carrying the address of the handler the original runs.
//!
//! Everything is in the order the resource positions it, which is not the order
//! it declares it in. `GeneralTools` declares Paste first and Open fourth, and
//! draws Open first and Paste sixth; ordering by declaration reverses the bar.

// The handler addresses are written the way the original names them, without
// the grouping that would otherwise be idiomatic: they are identifiers here.
#![allow(clippy::unreadable_literal)]

/// What one item on the bar is.
#[derive(Debug, Clone, Copy, PartialEq)]
pub enum ToolKind {
    /// A button that runs a command.
    Button,
    /// The divider the resource draws between groups.
    Divider,
    /// A drop-down, such as the zoom factor or the component list.
    Picker {
        /// How wide the resource makes it.
        width: f32,
    },
}

/// Where a panel sits on the bar.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Align {
    /// Pinned to the left at its own width.
    Left,
    /// Filling whatever is left between the other two.
    Fill,
    /// Pinned to the right at its own width.
    Right,
}

/// One item on the bar.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ToolItem {
    /// The name the resource gives it, such as `ToolZoom`.
    pub name: &'static str,
    /// The short hint, which the original shows beside the pointer.
    pub hint: &'static str,
    /// The longer description, where the resource carries one.
    pub description: &'static str,
    /// Where the original's handler for this item sits.
    pub handler: Option<u32>,
    /// Whether the resource starts it enabled.
    pub enabled: bool,
    /// Whether the resource shows it at all.
    pub visible: bool,
    /// Whether it is a button, a divider or a drop-down.
    pub kind: ToolKind,
    /// What a drop-down offers, where the resource lists it.
    ///
    /// Empty for the component list, which the original fills from the
    /// component library rather than from the resource.
    pub choices: &'static [&'static str],
    /// What a drop-down starts on.
    pub default: &'static str,
}

impl ToolItem {
    /// Whether this draws a divider rather than a control.
    #[must_use]
    pub fn is_divider(&self) -> bool {
        self.kind == ToolKind::Divider
    }

    /// How wide a drop-down is, if it is one.
    #[must_use]
    pub const fn picker_width(&self) -> Option<f32> {
        match self.kind {
            ToolKind::Picker { width } => Some(width),
            _ => None,
        }
    }
}

/// One panel of the bar.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ToolPanel {
    /// The name the resource gives the panel.
    pub name: &'static str,
    /// Where it sits on the bar.
    pub align: Align,
    /// Its items, in the order the resource positions them.
    pub items: &'static [ToolItem],
}

/// The whole bar, left to right.
pub static TOOLBAR: &[ToolPanel] = &[
    ToolPanel {
        name: "GeneralTools",
        align: Align::Left,
        items: &[
            ToolItem {
                name: "DFOpenBtn",
                hint: "Open",
                description: "",
                handler: Some(0x01C75560),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "DFOpenFromWebBtn",
                hint: "Open files from the web",
                description: "",
                handler: Some(0x01CA2170),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "DFSaveBtn",
                hint: "Save",
                description: "",
                handler: Some(0x01C77390),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolClose",
                hint: "Close (Ctrl+F4)",
                description: "",
                handler: Some(0x01C98960),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "DFCopyBtn",
                hint: "Copy",
                description: "",
                handler: Some(0x01C77BB0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "DFPasteBtn",
                hint: "Paste",
                description: "",
                handler: Some(0x01C77C10),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "Bevel6",
                hint: "",
                description: "",
                handler: None,
                enabled: true,
                visible: true,
                kind: ToolKind::Divider,
                choices: &[],
                default: "",
            },
        ],
    },
    ToolPanel {
        name: "EditorTools",
        align: Align::Fill,
        items: &[
            ToolItem {
                name: "ToolEdit",
                hint: "Editing tool",
                description: "",
                handler: Some(0x01C6D690),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolComp",
                hint: "Last component",
                description: "Inserts the last inserted component",
                handler: Some(0x01C6D6A0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolWire",
                hint: "Wire",
                description: "Click and drag to place wire",
                handler: Some(0x01C6D6F0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolText",
                hint: "Text",
                description: "Click where you want to place the text",
                handler: Some(0x01C6D750),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolHideRecon",
                hint: "Hide/Reconnect",
                description: "",
                handler: Some(0x01C6D920),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolDelete",
                hint: "Delete",
                description: "Delete the selected component",
                handler: Some(0x01C76C90),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolRLeft",
                hint: "Rotate left",
                description: "Rotate the selected component left (counterclockwise)",
                handler: Some(0x01C70530),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolRRight",
                hint: "Rotate right",
                description: "Rotate the selected component right (clockwise)",
                handler: Some(0x01C70550),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolMirror",
                hint: "Mirror",
                description: "Mirror the selected component along the Y axis",
                handler: Some(0x01C70570),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolGrid",
                hint: "Grid On/Off",
                description: "Turns the grid on or off in the schematic editor",
                handler: Some(0x01C73F30),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolZoom",
                hint: "Zoom",
                description: "Click: Zoom In;   Ctrl-Click: Zoom Out;   Drag: Zoom Window",
                handler: Some(0x01C740C0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ZoomFactor",
                hint: "Zoom",
                description: "Select or type the appropiate zoom factor",
                handler: Some(0x01C70590),
                enabled: true,
                visible: true,
                kind: ToolKind::Picker { width: 60.0 },
                choices: &[
                    "500%", "450%", "400%", "350%", "300%", "250%", "200%", "150%", "100%", "75%",
                    "50%", "25%", "10%", "All", "P. Width", "Whole P.",
                ],
                default: "100%",
            },
            ToolItem {
                name: "ToolInteractive",
                hint: "Interactive mode On/Off",
                description: "",
                handler: Some(0x01C87E40),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolInteractModeSelect",
                hint: "Select interactive mode",
                description: "",
                handler: Some(0x01C898A0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolIntProbe",
                hint: "Interactive probe",
                description: "",
                handler: Some(0x01C9C130),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolOptTarget",
                hint: "Select optimization target",
                description: "Select the target of optimization mode",
                handler: Some(0x01C747E0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolSelectObj",
                hint: "Select control object",
                description: "Select the object of parameter stepping or optimization",
                handler: Some(0x01C74820),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "sbPower",
                hint: "Set power source/sink/loss",
                description: "",
                handler: Some(0x01C7DAE0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "sbAIAssistant",
                hint: "AI Assistant",
                description: "",
                handler: Some(0x01CA4DA0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "sbRunLastSimulation",
                hint: "Run last simulation",
                description: "",
                handler: Some(0x01C7DB90),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolError",
                hint: "Faults enabled",
                description: "Faults will show up in the circuit when this button is down",
                handler: Some(0x01C77A70),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "sbEnable3DView",
                hint: "2D/3D View",
                description: "",
                handler: Some(0x01C99100),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "sbStartPCBDesigner",
                hint: "PCB Design",
                description: "",
                handler: Some(0x01C99370),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "sbEBooks",
                hint: "Electronic Books",
                description: "",
                handler: Some(0x01CA2020),
                enabled: true,
                visible: false,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
        ],
    },
    ToolPanel {
        name: "CompDropDownP",
        align: Align::Right,
        items: &[
            ToolItem {
                name: "Bevel1",
                hint: "",
                description: "",
                handler: None,
                enabled: true,
                visible: true,
                kind: ToolKind::Divider,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "ToolSearchComp",
                hint: "Find Component",
                description: "",
                handler: Some(0x01C97CE0),
                enabled: true,
                visible: true,
                kind: ToolKind::Button,
                choices: &[],
                default: "",
            },
            ToolItem {
                name: "CompDropDown",
                hint: "Component list",
                description: "",
                handler: Some(0x01C703E0),
                enabled: true,
                visible: true,
                kind: ToolKind::Picker { width: 150.0 },
                choices: &[],
                default: "",
            },
        ],
    },
];

/// One panel by name.
#[must_use]
pub fn panel(name: &str) -> Option<&'static ToolPanel> {
    TOOLBAR.iter().find(|panel| panel.name == name)
}

/// The item with one name, on whichever panel it sits.
#[must_use]
pub fn find(name: &str) -> Option<&'static ToolItem> {
    TOOLBAR
        .iter()
        .flat_map(|panel| panel.items.iter())
        .find(|item| item.name == name)
}

#[cfg(test)]
mod tests {
    use super::{Align, TOOLBAR, ToolItem, ToolKind, find, panel};

    fn every_item() -> Vec<&'static ToolItem> {
        TOOLBAR
            .iter()
            .flat_map(|panel| panel.items.iter())
            .collect()
    }

    #[test]
    fn the_bar_has_the_three_panels_the_resource_gives_it() {
        let names: Vec<&str> = TOOLBAR.iter().map(|panel| panel.name).collect();

        assert_eq!(names, vec!["GeneralTools", "EditorTools", "CompDropDownP"]);
    }

    #[test]
    fn they_are_aligned_the_way_the_resource_aligns_them() {
        assert_eq!(panel("GeneralTools").expect("left").align, Align::Left);
        assert_eq!(panel("EditorTools").expect("middle").align, Align::Fill);
        assert_eq!(panel("CompDropDownP").expect("right").align, Align::Right);
    }

    #[test]
    fn the_general_panel_runs_in_the_order_the_original_draws_it() {
        // Declaration order in the resource is Paste, Copy, Save, Open, and the
        // original draws Open first. Ordering by declaration reverses the bar.
        let drawn: Vec<&str> = panel("GeneralTools")
            .expect("the general panel")
            .items
            .iter()
            .filter(|item| !item.is_divider())
            .map(|item| item.hint)
            .collect();

        assert_eq!(
            drawn,
            vec![
                "Open",
                "Open files from the web",
                "Save",
                "Close (Ctrl+F4)",
                "Copy",
                "Paste",
            ]
        );
    }

    #[test]
    fn the_editing_panel_starts_with_the_editing_tool() {
        let first = panel("EditorTools").expect("the editing panel").items[0];

        assert_eq!(first.hint, "Editing tool");
    }

    #[test]
    fn the_zoom_factor_is_a_drop_down_on_the_editing_panel() {
        let zoom = find("ZoomFactor").expect("the zoom factor");

        assert_eq!(zoom.picker_width(), Some(60.0));
        assert!(matches!(zoom.kind, ToolKind::Picker { .. }));
    }

    #[test]
    fn the_zoom_factor_offers_what_the_resource_lists() {
        let zoom = find("ZoomFactor").expect("the zoom factor");

        assert_eq!(zoom.default, "100%");
        assert_eq!(zoom.choices.first(), Some(&"500%"));
        assert_eq!(zoom.choices.last(), Some(&"Whole P."));
        assert!(zoom.choices.contains(&"All"));
        assert_eq!(zoom.choices.len(), 16);
    }

    #[test]
    fn the_component_list_is_filled_from_the_library_not_the_resource() {
        let list = find("CompDropDown").expect("the component list");

        assert!(list.choices.is_empty());
    }

    #[test]
    fn only_a_drop_down_carries_choices() {
        for item in every_item() {
            if item.picker_width().is_none() {
                assert!(item.choices.is_empty(), "{}", item.name);
            }
        }
    }

    #[test]
    fn the_component_list_is_a_drop_down_on_the_right_panel() {
        let list = find("CompDropDown").expect("the component list");

        assert_eq!(list.picker_width(), Some(150.0));
        assert_eq!(list.hint, "Component list");
    }

    #[test]
    fn the_find_component_button_sits_before_the_component_list() {
        let right = panel("CompDropDownP").expect("the right panel");
        let names: Vec<&str> = right.items.iter().map(|item| item.name).collect();

        assert_eq!(names, vec!["Bevel1", "ToolSearchComp", "CompDropDown"]);
    }

    #[test]
    fn every_button_runs_something() {
        for item in every_item() {
            if item.kind == ToolKind::Button {
                assert!(item.handler.is_some(), "{} runs nothing", item.name);
            }
        }
    }

    #[test]
    fn a_divider_runs_nothing_and_says_nothing() {
        for item in every_item() {
            if item.is_divider() {
                assert!(item.handler.is_none());
                assert!(item.hint.is_empty());
                assert!(item.picker_width().is_none());
            }
        }
        assert!(every_item().iter().any(|item| item.is_divider()));
    }

    #[test]
    fn every_item_is_named_once() {
        let mut names: Vec<&str> = every_item().into_iter().map(|item| item.name).collect();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
    }

    #[test]
    fn a_name_nothing_uses_finds_nothing() {
        assert!(find("ToolThereIsNoSuchButton").is_none());
        assert!(panel("NoSuchPanel").is_none());
    }
}
