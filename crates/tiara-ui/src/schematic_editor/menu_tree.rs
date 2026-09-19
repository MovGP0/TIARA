//! The Schematic Editor menu, as the original resource defines it.
//!
//! Recovered from the `SchematicEditor.MainMenu` DFM resource: 338 entries over
//! 4 levels, of which 41 open a submenu and 39 are separators. 260 carry the
//! address of the handler the original runs, which is what lets a command be
//! connected to its recovered behaviour rather than guessed from its caption.
//!
//! The shell this replaces held a flat list of captions taken from a
//! screenshot, with a literal `"  >"` on the entries that should have opened a
//! submenu — so those entries could never open anything. Nesting here is real.

/// One entry in the menu.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MenuEntry {
    /// The text shown, with the accelerator marker removed.
    ///
    /// A separator carries [`SEPARATOR`].
    pub caption: &'static str,
    /// The name the original resource gives this item, such as `mnNew`.
    ///
    /// This is the item's identity: captions repeat across menus, names do not.
    pub name: &'static str,
    /// The keyboard shortcut shown beside the caption, where the original has one.
    pub shortcut: Option<&'static str>,
    /// Where the original's handler for this item sits.
    ///
    /// `None` for a submenu parent or a separator, and for the few items the
    /// resource leaves without an `OnClick`.
    pub handler: Option<u32>,
    /// The submenu this entry opens, empty when it is a command.
    pub children: &'static [MenuEntry],
}

/// The caption a separator carries.
pub const SEPARATOR: &str = "-";

impl MenuEntry {
    /// A separator line.
    #[must_use]
    pub const fn separator() -> Self {
        Self {
            caption: SEPARATOR,
            name: "",
            shortcut: None,
            handler: None,
            children: &[],
        }
    }

    /// Whether this entry draws a separator rather than a command.
    #[must_use]
    pub fn is_separator(&self) -> bool {
        self.caption == SEPARATOR
    }

    /// Whether this entry opens a submenu.
    #[must_use]
    pub const fn opens_a_submenu(&self) -> bool {
        !self.children.is_empty()
    }
}

/// Every menu of the Schematic Editor menu bar, in the order it shows them.
pub static MAIN_MENU: &[MenuEntry] = &[
    MenuEntry {
        caption: "File",
        name: "mnFile",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "New",
                name: "mnNew",
                shortcut: Some("Ctrl+N"),
                handler: Some(0x01C75530),
                children: &[],
            },
            MenuEntry {
                caption: "Open...",
                name: "Open",
                shortcut: Some("Ctrl+O"),
                handler: Some(0x01C75560),
                children: &[],
            },
            MenuEntry {
                caption: "Open Examples...",
                name: "OpenExamples",
                shortcut: None,
                handler: Some(0x01C9C3B0),
                children: &[],
            },
            MenuEntry {
                caption: "Open from the Web...",
                name: "mnOpenFileFromWeb",
                shortcut: None,
                handler: Some(0x01CA2170),
                children: &[],
            },
            MenuEntry {
                caption: "Open SMPS Converter...",
                name: "ConvertersMnu",
                shortcut: None,
                handler: Some(0x01C76610),
                children: &[],
            },
            MenuEntry {
                caption: "Save",
                name: "Save",
                shortcut: Some("Ctrl+S"),
                handler: Some(0x01C77390),
                children: &[],
            },
            MenuEntry {
                caption: "Save As...",
                name: "SaveAs",
                shortcut: None,
                handler: Some(0x01C76B40),
                children: &[],
            },
            MenuEntry {
                caption: "Save All",
                name: "mnSaveAll",
                shortcut: None,
                handler: Some(0x01C945B0),
                children: &[],
            },
            MenuEntry {
                caption: "Close",
                name: "mnClose",
                shortcut: Some("Ctrl+F4"),
                handler: Some(0x01C94450),
                children: &[],
            },
            MenuEntry {
                caption: "Close All",
                name: "mnCloseAll",
                shortcut: None,
                handler: Some(0x01C94500),
                children: &[],
            },
            MenuEntry {
                caption: "TinaCloud",
                name: "mnCloud",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Login ...",
                        name: "mnLoginToCloud",
                        shortcut: None,
                        handler: Some(0x01C937A0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Download...",
                        name: "mnDownloadFromCloud",
                        shortcut: None,
                        handler: Some(0x01C948A0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Upload",
                        name: "mnUploadToCloud",
                        shortcut: None,
                        handler: Some(0x01C98460),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Logout",
                        name: "mnLogoutFromCloud",
                        shortcut: None,
                        handler: Some(0x01C937C0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "PCB library",
                name: "pcbdirectory1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "TINA",
                        name: "TINAPCB1",
                        shortcut: None,
                        handler: Some(0x01C957F0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "ALTIUM",
                        name: "AltiumPCBProject1",
                        shortcut: None,
                        handler: Some(0x01C959D0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "ORCAD",
                        name: "ORCADPCB1",
                        shortcut: None,
                        handler: Some(0x01C94CB0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "PCAD",
                        name: "PCADPCB1",
                        shortcut: None,
                        handler: Some(0x01C94E90),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "PROTEL",
                        name: "PROTELPCB1",
                        shortcut: None,
                        handler: Some(0x01C95070),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "REDAC",
                        name: "REDACPCB1",
                        shortcut: None,
                        handler: Some(0x01C95250),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "TANGO",
                        name: "TANGOPCB1",
                        shortcut: None,
                        handler: Some(0x01C95430),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "EDS",
                        name: "EDSPCB1",
                        shortcut: None,
                        handler: Some(0x01C95610),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Export",
                name: "Export",
                shortcut: None,
                handler: Some(0x01C96D70),
                children: &[
                    MenuEntry {
                        caption: "Netlist...",
                        name: "ExportNetlist",
                        shortcut: None,
                        handler: Some(0x01C81430),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Picture (*.EMF;*.BMP;*.JPG;*.GIF;*PNG)...",
                        name: "ExportWMF",
                        shortcut: None,
                        handler: Some(0x01C81940),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "PCB...",
                        name: "PCBAuto1",
                        shortcut: None,
                        handler: Some(0x01C95BB0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Altium schematic...",
                        name: "ExportAltiumSchematic",
                        shortcut: None,
                        handler: Some(0x01C968D0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "XML...",
                        name: "ExportXML",
                        shortcut: None,
                        handler: Some(0x01CA30F0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Import",
                name: "Import",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "XML...",
                        name: "ImportXML",
                        shortcut: None,
                        handler: Some(0x01CA35C0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Import TINA Libraries and Designs...",
                        name: "ImportUserLibs",
                        shortcut: None,
                        handler: Some(0x01CA2AC0),
                        children: &[],
                    },
                    MenuEntry::separator(),
                    MenuEntry {
                        caption: "TINA 2.xx (*.ICE)...",
                        name: "ImportTINA",
                        shortcut: None,
                        handler: Some(0x01C83490),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Palmtop Circuit (*.SCH)...",
                        name: "ImportPalmtopCircuit",
                        shortcut: None,
                        handler: Some(0x01C834A0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "PSpice Netlist (*.CIR)...",
                        name: "ImportPSpice",
                        shortcut: None,
                        handler: Some(0x01C834B0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "EDIF (*.EDF)...",
                        name: "ImportEDIF",
                        shortcut: None,
                        handler: Some(0x01C834C0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Logic Converter (*.TLC)...",
                        name: "ImportDigit",
                        shortcut: None,
                        handler: Some(0x01C92B60),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "IBIS File (*.IBS)...",
                        name: "ImportIbis",
                        shortcut: None,
                        handler: Some(0x01CA4A80),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "LTSpice File (*.asc)...",
                        name: "mnLTSpiceImport",
                        shortcut: None,
                        handler: Some(0x01C937F0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Bill of Materials...",
                name: "ListofMaterials1",
                shortcut: None,
                handler: Some(0x01C93D20),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Enter Macro",
                name: "mnOpenMacro",
                shortcut: None,
                handler: Some(0x01C8D130),
                children: &[],
            },
            MenuEntry {
                caption: "Leave Macro",
                name: "mnCloseMacro",
                shortcut: None,
                handler: Some(0x01C8D180),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Page Setup...",
                name: "PrintSetup",
                shortcut: None,
                handler: Some(0x01C81320),
                children: &[],
            },
            MenuEntry {
                caption: "Print Preview",
                name: "mnPrintPreview",
                shortcut: None,
                handler: Some(0x01C87B20),
                children: &[],
            },
            MenuEntry {
                caption: "Print...",
                name: "Print",
                shortcut: Some("Ctrl+P"),
                handler: Some(0x01C81330),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Exit",
                name: "mnExit",
                shortcut: None,
                handler: Some(0x01C76B90),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "Edit",
        name: "Edit",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Undo",
                name: "mnUndo",
                shortcut: Some("Ctrl+Z"),
                handler: Some(0x01C8EC70),
                children: &[],
            },
            MenuEntry {
                caption: "Redo",
                name: "mnRedo",
                shortcut: Some("Ctrl+Y"),
                handler: Some(0x01C8ED20),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Cut",
                name: "Cut",
                shortcut: Some("Ctrl+X"),
                handler: Some(0x01C77B30),
                children: &[],
            },
            MenuEntry {
                caption: "Copy",
                name: "Copy",
                shortcut: Some("Ctrl+C"),
                handler: Some(0x01C77BB0),
                children: &[],
            },
            MenuEntry {
                caption: "Paste",
                name: "Paste",
                shortcut: Some("Ctrl+V"),
                handler: Some(0x01C77C10),
                children: &[],
            },
            MenuEntry {
                caption: "Delete",
                name: "mnDelete",
                shortcut: Some("Ctrl+Del"),
                handler: Some(0x01C76C90),
                children: &[],
            },
            MenuEntry {
                caption: "Select All",
                name: "mnSelectAll",
                shortcut: Some("Ctrl+A"),
                handler: Some(0x01C76F20),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Rotate Left",
                name: "mnRotateLeft",
                shortcut: Some("Ctrl+L"),
                handler: Some(0x01C76FF0),
                children: &[],
            },
            MenuEntry {
                caption: "Rotate Right",
                name: "mnRotateRight",
                shortcut: Some("Ctrl+R"),
                handler: Some(0x01C77010),
                children: &[],
            },
            MenuEntry {
                caption: "Mirror",
                name: "mnMirror",
                shortcut: None,
                handler: Some(0x01C77030),
                children: &[],
            },
            MenuEntry {
                caption: "Properties...",
                name: "mnEditAttributes",
                shortcut: None,
                handler: Some(0x01C77050),
                children: &[],
            },
            MenuEntry {
                caption: "Symbol...",
                name: "mnEditSymbol",
                shortcut: None,
                handler: Some(0x01C931A0),
                children: &[],
            },
            MenuEntry {
                caption: "Sharing",
                name: "Sharing1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Lock...",
                        name: "mnLock",
                        shortcut: None,
                        handler: Some(0x01C93610),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Unlock...",
                        name: "mnUnlock",
                        shortcut: None,
                        handler: Some(0x01C938D0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Clear lock",
                        name: "mnClearLock",
                        shortcut: None,
                        handler: Some(0x01C93BF0),
                        children: &[],
                    },
                    MenuEntry::separator(),
                    MenuEntry {
                        caption: "Reconcile...",
                        name: "mnReconciliate",
                        shortcut: None,
                        handler: Some(0x01C93B70),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Arrange",
                name: "mnArrange",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Bring To Front",
                        name: "mnBringToFront",
                        shortcut: None,
                        handler: Some(0x01C97710),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Send To Back",
                        name: "mnSendToBack",
                        shortcut: None,
                        handler: Some(0x01C97760),
                        children: &[],
                    },
                    MenuEntry::separator(),
                    MenuEntry {
                        caption: "Bring Forward",
                        name: "mnBringForward",
                        shortcut: None,
                        handler: Some(0x01C977B0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Send Backward",
                        name: "mnSendBackward",
                        shortcut: None,
                        handler: Some(0x01C97800),
                        children: &[],
                    },
                ],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Hide/Reconnect",
                name: "mnHideReconnect",
                shortcut: None,
                handler: Some(0x01C772E0),
                children: &[],
            },
            MenuEntry {
                caption: "Change Bitmap",
                name: "mnChangeBitmap",
                shortcut: Some("Ctrl+F7"),
                handler: Some(0x01C99730),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "Insert",
        name: "Insert",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Last Component",
                name: "mnComponent",
                shortcut: Some("Ctrl+Ins"),
                handler: Some(0x01C773A0),
                children: &[],
            },
            MenuEntry {
                caption: "Wire",
                name: "mnWire",
                shortcut: Some("Ctrl+Space"),
                handler: Some(0x01C773B0),
                children: &[],
            },
            MenuEntry {
                caption: "Bus",
                name: "mnBus",
                shortcut: Some("Ctrl+B"),
                handler: Some(0x01C92B00),
                children: &[],
            },
            MenuEntry {
                caption: "Input",
                name: "mnInput",
                shortcut: Some("Ctrl+I"),
                handler: Some(0x01C773C0),
                children: &[],
            },
            MenuEntry {
                caption: "Output",
                name: "mnOutput",
                shortcut: Some("Ctrl+U"),
                handler: Some(0x01C77410),
                children: &[],
            },
            MenuEntry {
                caption: "Text",
                name: "mnText",
                shortcut: Some("Ctrl+T"),
                handler: Some(0x01C77460),
                children: &[],
            },
            MenuEntry {
                caption: "Graphics...",
                name: "mnGraphics",
                shortcut: Some("Ctrl+G"),
                handler: Some(0x01C83FB0),
                children: &[],
            },
            MenuEntry {
                caption: "Title Block...",
                name: "mnTitleBlock",
                shortcut: None,
                handler: Some(0x01C94A50),
                children: &[],
            },
            MenuEntry {
                caption: "Shape",
                name: "mnShape",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Line",
                        name: "mnLine",
                        shortcut: None,
                        handler: Some(0x01C97500),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Arrow",
                        name: "mnArrow",
                        shortcut: None,
                        handler: None,
                        children: &[
                            MenuEntry {
                                caption: "Linear",
                                name: "mnArrowLinear",
                                shortcut: None,
                                handler: Some(0x01C97500),
                                children: &[],
                            },
                            MenuEntry {
                                caption: "Rounded corner",
                                name: "mnArrowRoundedCorner",
                                shortcut: None,
                                handler: Some(0x01C97500),
                                children: &[],
                            },
                            MenuEntry {
                                caption: "Circular",
                                name: "mnArrowCircular",
                                shortcut: None,
                                handler: Some(0x01C97500),
                                children: &[],
                            },
                        ],
                    },
                    MenuEntry {
                        caption: "Polygon",
                        name: "mnPolygon",
                        shortcut: None,
                        handler: Some(0x01C97500),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Rectangle",
                        name: "mnRectangle",
                        shortcut: None,
                        handler: Some(0x01C97500),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Ellipse",
                        name: "mnEllipse",
                        shortcut: None,
                        handler: Some(0x01C97500),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Arc",
                        name: "mnArc",
                        shortcut: None,
                        handler: Some(0x01C97500),
                        children: &[],
                    },
                ],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Macro...",
                name: "mnMacro",
                shortcut: Some("Ctrl+M"),
                handler: Some(0x01C89BA0),
                children: &[],
            },
            MenuEntry {
                caption: "Block...",
                name: "mnBlock",
                shortcut: None,
                handler: Some(0x01C93170),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Auto Repeat",
                name: "mnAutoRepeat",
                shortcut: None,
                handler: Some(0x01C83D30),
                children: &[],
            },
            MenuEntry {
                caption: "Auto Wire",
                name: "mnAutoReWire",
                shortcut: None,
                handler: Some(0x01C849A0),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "View",
        name: "View",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Normal View",
                name: "mnNormalView",
                shortcut: None,
                handler: Some(0x01C83DB0),
                children: &[],
            },
            MenuEntry {
                caption: "Page Layout View",
                name: "mnPageLayoutView",
                shortcut: None,
                handler: Some(0x01C83D80),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Zoom",
                name: "Zoom",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Normal",
                        name: "ZoomNormal",
                        shortcut: Some("Alt+N"),
                        handler: Some(0x01C75250),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "All",
                        name: "ZoomAll",
                        shortcut: Some("Alt+L"),
                        handler: Some(0x01C75310),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Window",
                        name: "mnZoomWindow",
                        shortcut: None,
                        handler: Some(0x01C75410),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "In",
                        name: "ZoomIn",
                        shortcut: Some("Alt+I"),
                        handler: Some(0x01C75420),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Out",
                        name: "ZoomOut",
                        shortcut: Some("Alt+O"),
                        handler: Some(0x01C75480),
                        children: &[],
                    },
                    MenuEntry::separator(),
                    MenuEntry {
                        caption: "Page Width",
                        name: "PageWidth",
                        shortcut: None,
                        handler: Some(0x01C83EF0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Whole Page",
                        name: "WholePage",
                        shortcut: None,
                        handler: Some(0x01C83F50),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Language",
                name: "mnLanguage",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "English",
                        name: "mnNative",
                        shortcut: None,
                        handler: Some(0x01CA3C00),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Other",
                        name: "mnOther1",
                        shortcut: None,
                        handler: Some(0x01CA3C00),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Grid",
                name: "mnGrid",
                shortcut: None,
                handler: Some(0x01C77300),
                children: &[],
            },
            MenuEntry {
                caption: "Pin Markers",
                name: "mnPinMarkers",
                shortcut: None,
                handler: Some(0x01C77310),
                children: &[],
            },
            MenuEntry {
                caption: "Values",
                name: "mnAppendValueToLabel",
                shortcut: None,
                handler: Some(0x01C8E8B0),
                children: &[],
            },
            MenuEntry {
                caption: "Units",
                name: "mnAppendUnitToLabel",
                shortcut: None,
                handler: Some(0x01C98920),
                children: &[],
            },
            MenuEntry {
                caption: "Tolerance",
                name: "mnAppendToleranceToLabel",
                shortcut: None,
                handler: Some(0x01CA3A90),
                children: &[],
            },
            MenuEntry {
                caption: "Labels",
                name: "mnShowLabels",
                shortcut: None,
                handler: Some(0x01C976A0),
                children: &[],
            },
            MenuEntry {
                caption: "Wire IDs",
                name: "mnShowWireIDs",
                shortcut: None,
                handler: Some(0x01C976E0),
                children: &[],
            },
            MenuEntry {
                caption: "Package Numbers",
                name: "mnPackageNumbers",
                shortcut: None,
                handler: Some(0x01C9AFE0),
                children: &[],
            },
            MenuEntry {
                caption: "Node Numbers",
                name: "mnNodeNumbers",
                shortcut: None,
                handler: Some(0x01C98660),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Redraw",
                name: "mnRedraw",
                shortcut: Some("F5"),
                handler: Some(0x01C76FD0),
                children: &[],
            },
            MenuEntry {
                caption: "Live 3D Breadboard",
                name: "mnBreadBoardView",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "New",
                        name: "mnBreadBoardViewNew",
                        shortcut: None,
                        handler: Some(0x01CA19D0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Continue",
                        name: "mnBreadBoardViewContinue",
                        shortcut: None,
                        handler: Some(0x01CA19E0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "3D View",
                name: "mn3DView",
                shortcut: None,
                handler: Some(0x01C9B010),
                children: &[],
            },
            MenuEntry {
                caption: "2D View",
                name: "mn2DView",
                shortcut: None,
                handler: Some(0x01C9B040),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Tool Bar",
                name: "mnToolBar",
                shortcut: None,
                handler: Some(0x01C77320),
                children: &[],
            },
            MenuEntry {
                caption: "Component Bar",
                name: "mnComponentBar",
                shortcut: None,
                handler: Some(0x01C77330),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Exam Manager",
                name: "mnFaultManager",
                shortcut: None,
                handler: Some(0x01C7CEF0),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Transient Statistics",
                name: "mnTransientStatistics",
                shortcut: None,
                handler: Some(0x01C9CED0),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Show Digital Node States",
                name: "mnShowDigitalNodeStates",
                shortcut: None,
                handler: Some(0x01CA3AE0),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Options...",
                name: "mnEditorOptions",
                shortcut: None,
                handler: Some(0x01C83BA0),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "Analysis",
        name: "mnAnalysis",
        shortcut: None,
        handler: Some(0x01C805B0),
        children: &[
            MenuEntry {
                caption: "ERC...",
                name: "mnERC",
                shortcut: None,
                handler: Some(0x01C93DA0),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Mode...",
                name: "Mode",
                shortcut: Some("Ctrl+Alt+M"),
                handler: Some(0x01C760D0),
                children: &[],
            },
            MenuEntry {
                caption: "Faults enabled",
                name: "ErrorInsertion1",
                shortcut: None,
                handler: Some(0x01C77A40),
                children: &[],
            },
            MenuEntry {
                caption: "Stress Analysis Enabled",
                name: "StressReportEnabled",
                shortcut: None,
                handler: Some(0x01C9BED0),
                children: &[],
            },
            MenuEntry {
                caption: "Power Dissipation Analysis Enabled",
                name: "PowerDissipationCalculation",
                shortcut: None,
                handler: Some(0x01C94C60),
                children: &[],
            },
            MenuEntry {
                caption: "Enable MCU Code debugger",
                name: "EnableMCUCodedebugger",
                shortcut: None,
                handler: Some(0x01C9C360),
                children: &[],
            },
            MenuEntry {
                caption: "Enable HDL Debugger",
                name: "EnableHDLDebugger",
                shortcut: None,
                handler: Some(0x01CA3BD0),
                children: &[],
            },
            MenuEntry {
                caption: "Select Optimization Target",
                name: "OptimizationTarget2",
                shortcut: None,
                handler: Some(0x01C77B10),
                children: &[],
            },
            MenuEntry {
                caption: "Select Control Object",
                name: "OptimizationTarget1",
                shortcut: None,
                handler: Some(0x01C77B20),
                children: &[],
            },
            MenuEntry {
                caption: "Set Analysis Parameters...",
                name: "SetParameters",
                shortcut: Some("Ctrl+Alt+P"),
                handler: Some(0x01C76BB0),
                children: &[],
            },
            MenuEntry {
                caption: "Define global parameters...",
                name: "mnSetGlobalParameters",
                shortcut: None,
                handler: Some(0x01CA3B60),
                children: &[],
            },
            MenuEntry {
                caption: "Set parameter limits...",
                name: "mnSetCompValueLimits",
                shortcut: None,
                handler: Some(0x01CA3B10),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Batch Simulation...",
                name: "mnBatchSimulation",
                shortcut: Some("Ctrl+Alt+B"),
                handler: Some(0x01C93120),
                children: &[],
            },
            MenuEntry {
                caption: "Add spice commands...",
                name: "mnSpiceCommands",
                shortcut: None,
                handler: Some(0x01C90510),
                children: &[],
            },
            MenuEntry {
                caption: "Run last simulation",
                name: "RunLastSimulation",
                shortcut: Some("Ctrl+Alt+L"),
                handler: Some(0x01C890F0),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "DC Analysis",
                name: "DCAnalysis",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Calculate nodal voltages",
                        name: "CalculateOperatingPoint",
                        shortcut: Some("Ctrl+Alt+D"),
                        handler: Some(0x01C75720),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Table of DC results",
                        name: "mnTableofDCresults",
                        shortcut: None,
                        handler: Some(0x01C984D0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "DC Transfer Characteristic...",
                        name: "DCTransferCharacteristic",
                        shortcut: Some("Ctrl+Alt+R"),
                        handler: Some(0x01C75800),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Temperature Analysis...",
                        name: "TemperatureAnalysis1",
                        shortcut: None,
                        handler: Some(0x01C758F0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "AC Analysis",
                name: "ACAnalysis",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Calculate nodal voltages",
                        name: "CalculateNodalVoltages",
                        shortcut: None,
                        handler: Some(0x01C759B0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Table of AC results",
                        name: "mnTableofACresults",
                        shortcut: None,
                        handler: Some(0x01C985A0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "AC Transfer Characteristic...",
                        name: "ACTransferCharateristic",
                        shortcut: Some("Ctrl+Alt+A"),
                        handler: Some(0x01C75A80),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "AC Multisine Analysis...",
                        name: "ACMultiSine",
                        shortcut: None,
                        handler: Some(0x01C96F90),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Phasor Diagram",
                        name: "ACVectorDiagram",
                        shortcut: None,
                        handler: Some(0x01C97CF0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Time Function...",
                        name: "ACTimeFunctionMnu",
                        shortcut: None,
                        handler: Some(0x01C8EF70),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Network Analysis...",
                        name: "NetworkAnalysisMnu",
                        shortcut: None,
                        handler: Some(0x01C92DD0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Transient...",
                name: "Transient",
                shortcut: Some("Ctrl+Alt+T"),
                handler: Some(0x01C75D80),
                children: &[],
            },
            MenuEntry {
                caption: "Fast Analytic Solution",
                name: "mnFastAnalyticSimulation",
                shortcut: None,
                handler: Some(0x01CA4BE0),
                children: &[],
            },
            MenuEntry {
                caption: "Steady State Solver...",
                name: "SteadyStateSolver",
                shortcut: None,
                handler: Some(0x01C997B0),
                children: &[],
            },
            MenuEntry {
                caption: "Fourier Analysis",
                name: "FourierAnalysis",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Fourier Series...",
                        name: "FourierSeries",
                        shortcut: Some("Ctrl+Alt+F"),
                        handler: Some(0x01C927E0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Fourier Spectrum...",
                        name: "FourierSpectrum",
                        shortcut: None,
                        handler: Some(0x01C92850),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Harmonic Balance Analysis...",
                name: "mnHBAnalysis",
                shortcut: None,
                handler: Some(0x01CA4DF0),
                children: &[],
            },
            MenuEntry {
                caption: "Detailed DC",
                name: "mnDetailedDC",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Single",
                        name: "mnDetailedDCSingle",
                        shortcut: None,
                        handler: Some(0x01CA4F30),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "All",
                        name: "mnDetailedDCAll",
                        shortcut: None,
                        handler: Some(0x01CA50F0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Autotest",
                        name: "mnACDCAutotest",
                        shortcut: None,
                        handler: Some(0x01CA51D0),
                        children: &[],
                    },
                ],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Digital Step-by-Step",
                name: "mnDigitalStepbyStep",
                shortcut: None,
                handler: Some(0x01C80750),
                children: &[],
            },
            MenuEntry {
                caption: "Digital Timing Analysis...",
                name: "DigitalTransient",
                shortcut: Some("Ctrl+Alt+I"),
                handler: Some(0x01C768C0),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Symbolic Analysis",
                name: "Symbolic1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "DC Result",
                        name: "SymbolicDCResult1",
                        shortcut: None,
                        handler: Some(0x01C75FE0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Semi-symbolic DC Result",
                        name: "SemisymbolicDCResult1",
                        shortcut: None,
                        handler: Some(0x01C76050),
                        children: &[],
                    },
                    MenuEntry::separator(),
                    MenuEntry {
                        caption: "AC Result",
                        name: "SACResMnu",
                        shortcut: None,
                        handler: Some(0x01C75F20),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Semi-symbolic AC Result",
                        name: "SSACResMnu",
                        shortcut: None,
                        handler: Some(0x01C75F80),
                        children: &[],
                    },
                    MenuEntry::separator(),
                    MenuEntry {
                        caption: "AC transfer",
                        name: "SymbolicACtrf1",
                        shortcut: None,
                        handler: Some(0x01C75E40),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Semi-symbolic AC transfer",
                        name: "SemisymbolicACtrf1",
                        shortcut: None,
                        handler: Some(0x01C75EB0),
                        children: &[],
                    },
                    MenuEntry::separator(),
                    MenuEntry {
                        caption: "Poles and Zeros",
                        name: "PolesAndZerosMnu",
                        shortcut: None,
                        handler: Some(0x01C87B30),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Semi-symbolic Transient",
                        name: "SymbolicTransient1",
                        shortcut: None,
                        handler: Some(0x01C76110),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Noise Analysis...",
                name: "Noise",
                shortcut: Some("Ctrl+Alt+N"),
                handler: Some(0x01C75D90),
                children: &[],
            },
            MenuEntry {
                caption: "Optimization",
                name: "Optimization",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "DC Optimization...",
                        name: "DCOptimization",
                        shortcut: None,
                        handler: Some(0x01C96F20),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "DC Optimization (Transfer)...",
                        name: "DCOptimizationTransfer",
                        shortcut: None,
                        handler: Some(0x01C98F90),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Temperature...",
                        name: "TemperatureOptimization",
                        shortcut: None,
                        handler: Some(0x01C99010),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "AC Optimization...",
                        name: "ACOptimizationSingle",
                        shortcut: None,
                        handler: Some(0x01C97110),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "AC Optimization (Transfer)...",
                        name: "ACOptimizationTransfer",
                        shortcut: None,
                        handler: Some(0x01C97190),
                        children: &[],
                    },
                ],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Options...",
                name: "AnalOptions",
                shortcut: Some("Ctrl+Alt+O"),
                handler: Some(0x01C77280),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "Interactive",
        name: "mnInteractive",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Start",
                name: "mnStartInteractive",
                shortcut: None,
                handler: Some(0x01C99750),
                children: &[],
            },
            MenuEntry {
                caption: "Stop",
                name: "mnStopInteractive",
                shortcut: None,
                handler: Some(0x01C99780),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "DC",
                name: "mnIntDC",
                shortcut: None,
                handler: Some(0x01C89820),
                children: &[],
            },
            MenuEntry {
                caption: "AC",
                name: "mnIntAC",
                shortcut: None,
                handler: Some(0x01C89820),
                children: &[],
            },
            MenuEntry {
                caption: "Transient",
                name: "mnIntTransient",
                shortcut: None,
                handler: Some(0x01C89820),
                children: &[],
            },
            MenuEntry {
                caption: "Transient Single Shot",
                name: "mnIntTransientSingleShot",
                shortcut: None,
                handler: Some(0x01C89820),
                children: &[],
            },
            MenuEntry {
                caption: "Digital",
                name: "mnIntDigital",
                shortcut: None,
                handler: Some(0x01C89820),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Options...",
                name: "mnIntOptions",
                shortcut: None,
                handler: Some(0x01C89910),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "T&M",
        name: "mnTM",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Open Testcard",
                name: "mnOpenTestcard",
                shortcut: None,
                handler: Some(0x01C77340),
                children: &[],
            },
            MenuEntry {
                caption: "Close Testcard",
                name: "mnCloseTestcard",
                shortcut: None,
                handler: Some(0x01C98900),
                children: &[],
            },
            MenuEntry {
                caption: "Download to FPGA Card...",
                name: "mnConfigFPGA",
                shortcut: None,
                handler: Some(0x01C999E0),
                children: &[],
            },
            MenuEntry {
                caption: "Download to LabExplorer...",
                name: "DownloadtoLabExplorer1",
                shortcut: None,
                handler: Some(0x01CA3AC0),
                children: &[],
            },
            MenuEntry {
                caption: "Export to FPGA Software",
                name: "DownloadtoFPGACard1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Xilinx Vivado...",
                        name: "mnExportToVivado",
                        shortcut: None,
                        handler: Some(0x01C9B0F0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Xilinx ISE...",
                        name: "mnExportToISE",
                        shortcut: None,
                        handler: Some(0x01C9B0C0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Intel Quartus...",
                        name: "mnExportToQuartus",
                        shortcut: None,
                        handler: Some(0x01C9B0D0),
                        children: &[],
                    },
                ],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Function Generator",
                name: "FunctionGenerator1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnFGVirtual",
                        shortcut: None,
                        handler: Some(0x01C90410),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnFGReal",
                        shortcut: None,
                        handler: Some(0x01C90430),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Function Generator",
                name: "FunctionGenerator",
                shortcut: None,
                handler: Some(0x01C90410),
                children: &[],
            },
            MenuEntry {
                caption: "Multimeter",
                name: "Voltmeter1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnDMMVirtual",
                        shortcut: None,
                        handler: Some(0x01C903D0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnDMMReal",
                        shortcut: None,
                        handler: Some(0x01C903F0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Multimeter",
                name: "Voltmeter",
                shortcut: None,
                handler: Some(0x01C903D0),
                children: &[],
            },
            MenuEntry {
                caption: "XY Recorder",
                name: "XYRecorder1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnXYRecVirtual",
                        shortcut: None,
                        handler: Some(0x01C90450),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnXYRecReal",
                        shortcut: None,
                        handler: Some(0x01C90470),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "XY Recorder",
                name: "XYRecorder",
                shortcut: None,
                handler: Some(0x01C90450),
                children: &[],
            },
            MenuEntry {
                caption: "Oscilloscope",
                name: "Oscilloscope1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnSCPVirtual",
                        shortcut: None,
                        handler: Some(0x01C904B0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnSCPReal",
                        shortcut: None,
                        handler: Some(0x01C904D0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Oscilloscope",
                name: "Oscilloscope",
                shortcut: None,
                handler: Some(0x01C904B0),
                children: &[],
            },
            MenuEntry {
                caption: "Signal Analyzer",
                name: "SignalAnalyzer1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnSAVirtual",
                        shortcut: None,
                        handler: Some(0x01C90610),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnSAReal",
                        shortcut: None,
                        handler: Some(0x01C90630),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Signal Analyzer",
                name: "SignalAnalyzer",
                shortcut: None,
                handler: Some(0x01C90610),
                children: &[],
            },
            MenuEntry {
                caption: "Spectrum Analyzer",
                name: "SpectrumAnalyzer1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnSPAVirtual",
                        shortcut: None,
                        handler: Some(0x01C904F0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnSPAReal",
                        shortcut: None,
                        handler: Some(0x01C905F0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Spectrum Analyzer",
                name: "SpectrumAnalyzer",
                shortcut: None,
                handler: Some(0x01C904F0),
                children: &[],
            },
            MenuEntry {
                caption: "Network Analyzer",
                name: "NetworkAnalyzer1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "Virtual1",
                        shortcut: None,
                        handler: Some(0x01C90650),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "Real1",
                        shortcut: None,
                        handler: Some(0x01C90670),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Network Analyzer",
                name: "NetworkAnalyzer",
                shortcut: None,
                handler: Some(0x01C90650),
                children: &[],
            },
            MenuEntry {
                caption: "Logic Analyzer",
                name: "LogicAnalyzer1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnLAVirtual",
                        shortcut: None,
                        handler: Some(0x01C90690),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnLAReal",
                        shortcut: None,
                        handler: Some(0x01C906B0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Logic Analyzer",
                name: "LogicAnalyzer",
                shortcut: None,
                handler: Some(0x01C90690),
                children: &[],
            },
            MenuEntry {
                caption: "Digital Signal Generator",
                name: "DigitalSignalGenerator1",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "Simulated",
                        name: "mnDSGVirtual",
                        shortcut: None,
                        handler: Some(0x01C906D0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Real-time",
                        name: "mnDSGReal",
                        shortcut: None,
                        handler: Some(0x01C906F0),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Digital Signal Generator",
                name: "DigitalSignalGenerator",
                shortcut: None,
                handler: Some(0x01C906D0),
                children: &[],
            },
            MenuEntry {
                caption: "DC Power Supply",
                name: "DCPowerSupply",
                shortcut: None,
                handler: Some(0x01C9C390),
                children: &[],
            },
            MenuEntry {
                caption: "Parameter Analyzer",
                name: "ParameterAnalyzer",
                shortcut: None,
                handler: Some(0x01C90490),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Options...",
                name: "MeasOptions",
                shortcut: None,
                handler: Some(0x01C77350),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "Tools",
        name: "mnTools",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Diagram Window",
                name: "mnAnalysisResults",
                shortcut: Some("Ctrl+Shift+D"),
                handler: Some(0x01C805C0),
                children: &[],
            },
            MenuEntry {
                caption: "Equation Editor",
                name: "mnSymbolicResults",
                shortcut: None,
                handler: Some(0x01C80600),
                children: &[],
            },
            MenuEntry {
                caption: "Interpreter",
                name: "mnInterpreter",
                shortcut: Some("Ctrl+Shift+I"),
                handler: Some(0x01C80630),
                children: &[],
            },
            MenuEntry {
                caption: "Python Shell",
                name: "mnPythonShell",
                shortcut: None,
                handler: Some(0x01C98090),
                children: &[],
            },
            MenuEntry {
                caption: "AI Assistant",
                name: "mnAIAssistant",
                shortcut: Some("Ctrl+Shift+A"),
                handler: Some(0x01CA4DA0),
                children: &[],
            },
            MenuEntry {
                caption: "Netlist Editor",
                name: "mnSPiceEditor",
                shortcut: Some("Ctrl+Shift+N"),
                handler: Some(0x01C806A0),
                children: &[],
            },
            MenuEntry {
                caption: "Logic Design...",
                name: "LogicConverter1",
                shortcut: Some("Ctrl+Shift+L"),
                handler: Some(0x01C98A00),
                children: &[],
            },
            MenuEntry {
                caption: "Filter Design New...",
                name: "mnFilterDesignNew",
                shortcut: None,
                handler: Some(0x01C98BF0),
                children: &[],
            },
            MenuEntry {
                caption: "Filter Design...",
                name: "FilterDesign1",
                shortcut: Some("Ctrl+Shift+F"),
                handler: Some(0x01C98E30),
                children: &[],
            },
            MenuEntry {
                caption: "Flowchart Editor",
                name: "mnFlowchartEditor",
                shortcut: None,
                handler: Some(0x01CA1840),
                children: &[],
            },
            MenuEntry {
                caption: "Serial monitor",
                name: "mnUARTTerminalWindow",
                shortcut: None,
                handler: Some(0x01CA4190),
                children: &[],
            },
            MenuEntry {
                caption: "Component Explorer...",
                name: "mnComponentExplorer",
                shortcut: None,
                handler: Some(0x01C9BF30),
                children: &[],
            },
            MenuEntry {
                caption: "Component Bar Editor...",
                name: "mnComponentRackEditor",
                shortcut: None,
                handler: Some(0x01C8F170),
                children: &[],
            },
            MenuEntry {
                caption: "Find Component...",
                name: "FindComponent",
                shortcut: Some("Ctrl+Shift+C"),
                handler: Some(0x01C979B0),
                children: &[],
            },
            MenuEntry {
                caption: "Re-read symbol database",
                name: "mnReReadSymbolDatabase",
                shortcut: None,
                handler: Some(0x01C8F290),
                children: &[],
            },
            MenuEntry {
                caption: "Re-compile Library",
                name: "mnReCompileLibrary",
                shortcut: None,
                handler: Some(0x01C9C310),
                children: &[],
            },
            MenuEntry {
                caption: "Re-build Library",
                name: "mnReBuildLibrary",
                shortcut: None,
                handler: Some(0x01C9C2C0),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "New Macro Wizard...",
                name: "mnMacroManager",
                shortcut: Some("Ctrl+Shift+M"),
                handler: Some(0x01C89C60),
                children: &[],
            },
            MenuEntry {
                caption: "Edit Macro Properties...",
                name: "mnEditMacroProperties",
                shortcut: None,
                handler: Some(0x01C89D40),
                children: &[],
            },
            MenuEntry {
                caption: "Export Macro...",
                name: "mnExportMacro",
                shortcut: None,
                handler: Some(0x01C89DF0),
                children: &[],
            },
            MenuEntry {
                caption: "Create Macro Box...",
                name: "mnCreateMacroBox",
                shortcut: None,
                handler: None,
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Design Tool",
                name: "mnDesignTool",
                shortcut: None,
                handler: Some(0x01CA2A40),
                children: &[],
            },
            MenuEntry {
                caption: "PCB Tools",
                name: "mnPCBTools",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "PCB Design...",
                        name: "mnPCBWizard",
                        shortcut: Some("Ctrl+Shift+P"),
                        handler: Some(0x01C99740),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "PCB Component Wizard...",
                        name: "mnPCBOnlyCompWizard",
                        shortcut: None,
                        handler: Some(0x01C9AEC0),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Footprint Name Editor...",
                        name: "mnCompReport",
                        shortcut: None,
                        handler: Some(0x01C99940),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Renumber Components",
                        name: "mnRenumberComps",
                        shortcut: None,
                        handler: Some(0x01C9BF10),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "Backannotate...",
                        name: "mnImportBan",
                        shortcut: None,
                        handler: Some(0x01C99820),
                        children: &[],
                    },
                ],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Lock Schematic Editor",
                name: "FixSchematicEditor",
                shortcut: None,
                handler: Some(0x01C805F0),
                children: &[],
            },
            MenuEntry {
                caption: "Dock Netlist Editor",
                name: "mnDockNetlistEditor",
                shortcut: None,
                handler: Some(0x01C94810),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Protect Circuit...",
                name: "mnProtect",
                shortcut: None,
                handler: Some(0x01C97D70),
                children: &[],
            },
            MenuEntry {
                caption: "Unprotect Circuit...",
                name: "mnUnProtect",
                shortcut: None,
                handler: Some(0x01C98160),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "TI Utilities",
        name: "mnTIUtilities",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Tina-TI FAQ",
                name: "mnTinaTIFAQ",
                shortcut: None,
                handler: Some(0x01C9D110),
                children: &[],
            },
            MenuEntry {
                caption: "TI Analog eLab Design Center",
                name: "mnTIAnalogeLabDesignTools",
                shortcut: None,
                handler: Some(0x01C9D240),
                children: &[],
            },
            MenuEntry {
                caption: "Request TI sample parts",
                name: "mnRequestTISampleParts",
                shortcut: None,
                handler: Some(0x01C9D3D0),
                children: &[],
            },
        ],
    },
    MenuEntry {
        caption: "Help",
        name: "Help",
        shortcut: None,
        handler: None,
        children: &[
            MenuEntry {
                caption: "Contents",
                name: "Contents",
                shortcut: None,
                handler: Some(0x01C761B0),
                children: &[],
            },
            MenuEntry {
                caption: "Schematic Editor",
                name: "HelponSchematicEditor1",
                shortcut: None,
                handler: Some(0x01C81350),
                children: &[],
            },
            MenuEntry {
                caption: "Component Help",
                name: "HelpOnComponents",
                shortcut: None,
                handler: Some(0x01C90710),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Check for Updates...",
                name: "CheckforUpdates",
                shortcut: None,
                handler: Some(0x01C9C210),
                children: &[],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "Getting Started",
                name: "mnGettingStarted",
                shortcut: None,
                handler: Some(0x01C8E7D0),
                children: &[],
            },
            MenuEntry {
                caption: "DesignSoft on the Web",
                name: "mnDesignSoftontheWeb",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "www.designsoftware.com",
                        name: "wwwdesignsoftwarecom",
                        shortcut: None,
                        handler: Some(0x01C8F060),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "www.tina.com",
                        name: "wwwtinacom",
                        shortcut: None,
                        handler: Some(0x01C8F060),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "www.tinacloud.com",
                        name: "wwwtinacloudcom",
                        shortcut: None,
                        handler: Some(0x01C8F060),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "www.edisonlab.com",
                        name: "wwwedisonlabcom",
                        shortcut: None,
                        handler: Some(0x01C8F060),
                        children: &[],
                    },
                ],
            },
            MenuEntry {
                caption: "Interlink on the Web",
                name: "mnInterlinkontheWeb",
                shortcut: None,
                handler: None,
                children: &[
                    MenuEntry {
                        caption: "www.ilink.co.jp",
                        name: "wwwilinkcojp",
                        shortcut: None,
                        handler: Some(0x01C8F060),
                        children: &[],
                    },
                    MenuEntry {
                        caption: "www.ilink.co.jp/tina",
                        name: "wwwilinkcojptina",
                        shortcut: None,
                        handler: Some(0x01C8F060),
                        children: &[],
                    },
                ],
            },
            MenuEntry::separator(),
            MenuEntry {
                caption: "About",
                name: "About",
                shortcut: None,
                handler: Some(0x01C806B0),
                children: &[],
            },
        ],
    },
];

/// The entry with one name, wherever it sits in the menu.
///
/// Names are unique across the whole menu, so one name identifies one command
/// however deeply it is nested.
#[must_use]
pub fn find(name: &str) -> Option<&'static MenuEntry> {
    fn search(entries: &'static [MenuEntry], name: &str) -> Option<&'static MenuEntry> {
        for entry in entries {
            if entry.name == name && !entry.name.is_empty() {
                return Some(entry);
            }
            if let Some(found) = search(entry.children, name) {
                return Some(found);
            }
        }
        None
    }

    search(MAIN_MENU, name)
}

#[cfg(test)]
mod tests {
    use super::{MAIN_MENU, MenuEntry};

    fn walk<'a>(entries: &'a [MenuEntry], found: &mut Vec<&'a MenuEntry>) {
        for entry in entries {
            found.push(entry);
            walk(entry.children, found);
        }
    }

    fn every_entry() -> Vec<&'static MenuEntry> {
        let mut found = Vec::new();
        walk(MAIN_MENU, &mut found);
        found
    }

    #[test]
    fn the_menu_bar_lists_the_menus_the_resource_names() {
        let titles: Vec<&str> = MAIN_MENU.iter().map(|entry| entry.caption).collect();

        assert_eq!(
            titles,
            vec![
                "File",
                "Edit",
                "Insert",
                "View",
                "Analysis",
                "Interactive",
                "T&M",
                "Tools",
                "TI Utilities",
                "Help",
            ]
        );
    }

    #[test]
    fn every_menu_on_the_bar_opens_something() {
        for entry in MAIN_MENU {
            assert!(entry.opens_a_submenu(), "{} opens nothing", entry.caption);
        }
    }

    #[test]
    fn the_entries_that_open_a_submenu_really_have_one() {
        // The shell this replaces marked them with a literal "  >" in the
        // caption and gave them no children at all, so they could never open.
        let nested = every_entry()
            .into_iter()
            .filter(|entry| entry.opens_a_submenu())
            .count();

        assert!(nested > 10, "{nested}");
        for entry in every_entry() {
            assert!(
                !entry.caption.contains('>'),
                "{} still carries a drawn arrow",
                entry.caption
            );
        }
    }

    #[test]
    fn a_command_carries_the_address_of_the_handler_it_runs() {
        let addressed = every_entry()
            .into_iter()
            .filter(|entry| entry.handler.is_some())
            .count();

        assert!(addressed > 200, "{addressed}");
    }

    #[test]
    fn a_separator_is_not_a_command() {
        for entry in every_entry() {
            if entry.is_separator() {
                assert!(entry.handler.is_none());
                assert!(!entry.opens_a_submenu());
                assert!(entry.name.is_empty());
            }
        }
    }

    #[test]
    fn a_submenu_parent_is_named_even_where_it_has_no_handler() {
        for entry in every_entry() {
            if entry.opens_a_submenu() {
                assert!(!entry.name.is_empty(), "{}", entry.caption);
            }
        }
    }

    #[test]
    fn every_command_is_identified_by_its_own_name() {
        let mut names: Vec<&str> = every_entry()
            .into_iter()
            .filter(|entry| !entry.is_separator())
            .map(|entry| entry.name)
            .collect();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before, "two entries share a name");
    }

    #[test]
    fn the_file_menu_opens_the_submenus_the_original_shows() {
        let file = MAIN_MENU
            .iter()
            .find(|entry| entry.caption == "File")
            .expect("a File menu");
        let nested: Vec<&str> = file
            .children
            .iter()
            .filter(|entry| entry.opens_a_submenu())
            .map(|entry| entry.caption)
            .collect();

        assert_eq!(nested, vec!["TinaCloud", "PCB library", "Export", "Import"]);
    }

    #[test]
    fn a_command_can_be_found_by_its_name() {
        let entry = super::find("mnNew").expect("the New command");

        assert_eq!(entry.caption, "New");
        assert!(!entry.opens_a_submenu());
        assert!(entry.handler.is_some());
    }

    #[test]
    fn a_nested_command_can_be_found_too() {
        let entry = super::find("ExportXML").expect("the XML export command");

        assert_eq!(entry.caption, "XML...");
    }

    #[test]
    fn a_name_nothing_uses_finds_nothing() {
        assert!(super::find("mnThereIsNoSuchCommand").is_none());
        assert!(super::find("").is_none());
    }

    #[test]
    fn every_entry_that_is_not_a_separator_can_be_found() {
        for entry in every_entry() {
            if entry.is_separator() {
                continue;
            }
            assert!(super::find(entry.name).is_some(), "{}", entry.name);
        }
    }

    #[test]
    fn a_shortcut_is_shown_where_the_resource_gives_one() {
        let shortcuts = every_entry()
            .into_iter()
            .filter(|entry| entry.shortcut.is_some())
            .count();

        assert!(shortcuts > 5, "{shortcuts}");
    }
}
