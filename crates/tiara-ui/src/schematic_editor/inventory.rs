/// A menu shown by the original `TSchematicEditor.MainMenu` resource.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MenuDefinition {
    pub title: &'static str,
    pub items: &'static [&'static str],
}

pub const FILE_MENU: &[&str] = &[
    "New",
    "Open...",
    "Open Examples...",
    "Open from the Web...",
    "Open SMPS Converter...",
    "Save",
    "Save As...",
    "Save All",
    "Close",
    "Close All",
    "TinaCloud  >",
    "PCB library  >",
    "Export  >",
    "Import  >",
    "Bill of Materials...",
    "Enter Macro",
    "Page Setup...",
    "Print Preview",
    "Print...",
    "Exit",
];

pub const EDIT_MENU: &[&str] = &[
    "Undo",
    "Redo",
    "Cut",
    "Copy",
    "Paste",
    "Delete",
    "Select All",
    "Rotate Left",
    "Rotate Right",
    "Mirror",
    "Properties...",
    "Symbol...",
    "Sharing  >",
    "Arrange  >",
    "Hide/Reconnect",
];

pub const INSERT_MENU: &[&str] = &[
    "Last Component",
    "Wire",
    "Bus",
    "Input",
    "Output",
    "Text",
    "Graphics...",
    "Title Block...",
    "Shape  >",
    "Macro...",
    "Block...",
    "Auto Repeat  [x]",
    "Auto Wire  [x]",
];

pub const VIEW_MENU: &[&str] = &[
    "Normal View  [x]",
    "Page Layout View",
    "Zoom  >",
    "Language  >",
    "Grid  [x]",
    "Pin Markers  [x]",
    "Values  [x]",
    "Units",
    "Tolerance",
    "Labels  [x]",
    "Wire IDs",
    "Package Numbers  [x]",
    "Redraw",
    "Live 3D Breadboard  >",
    "3D View",
    "Tool Bar  [x]",
    "Component Bar  [x]",
    "Exam Manager",
    "Show Digital Node States  [x]",
    "Options...",
];

pub const ANALYSIS_MENU: &[&str] = &[
    "ERC...",
    "Mode...",
    "Faults enabled",
    "Stress Analysis Enabled",
    "Power Dissipation Analysis Enabled",
    "Enable MCU Code debugger",
    "Enable HDL Debugger",
    "Select Optimization Target",
    "Select Control Object",
    "Set Analysis Parameters...",
    "Define global parameters...",
    "Batch Simulation...",
    "Add spice commands...",
    "Run last simulation",
    "DC Analysis  >",
    "AC Analysis  >",
    "Transient...",
    "Fast Analytic Solution",
    "Steady State Solver...",
    "Fourier Analysis  >",
    "Digital Step-by-Step",
    "Digital Timing Analysis...",
    "Symbolic Analysis  >",
    "Noise Analysis...",
    "Optimization  >",
    "Options...",
];

pub const INTERACTIVE_MENU: &[&str] = &[
    "Start",
    "DC  [x]",
    "AC",
    "Transient",
    "Transient Single Shot",
    "Digital",
    "Options...",
];

pub const TEST_AND_MEASUREMENT_MENU: &[&str] = &[
    "Open Testcard",
    "Close Testcard",
    "Download to FPGA Card...",
    "Download to LabExplorer...",
    "Export to FPGA Software  >",
    "Function Generator",
    "Multimeter",
    "XY Recorder",
    "Oscilloscope",
    "Signal Analyzer",
    "Spectrum Analyzer",
    "Network Analyzer",
    "Logic Analyzer",
    "Digital Signal Generator",
    "Options...",
];

pub const TOOLS_MENU: &[&str] = &[
    "Diagram Window",
    "Equation Editor",
    "Interpreter",
    "Python Shell",
    "AI Assistant",
    "Netlist Editor",
    "Logic Design...",
    "Filter Design...",
    "Flowchart Editor",
    "Serial monitor",
    "Component Explorer...",
    "Component Bar Editor...",
    "Find Component...",
    "Re-read symbol database",
    "Re-compile Library",
    "Re-build Library",
    "New Macro Wizard...",
    "Edit Macro Properties...",
    "Export Macro...",
    "Design Tool",
    "PCB Tools  >",
    "Lock Schematic Editor  [x]",
    "Dock Netlist Editor  [x]",
    "Protect Circuit...",
    "Unprotect Circuit...",
];

pub const HELP_MENU: &[&str] = &[
    "Contents",
    "Component Help",
    "DesignSoft on the Web  >",
    "About",
];

/// These titles match `screenshots/MainForm.png` and the top-level DFM menu.
pub const MAIN_MENUS: &[MenuDefinition] = &[
    MenuDefinition {
        title: "File",
        items: FILE_MENU,
    },
    MenuDefinition {
        title: "Edit",
        items: EDIT_MENU,
    },
    MenuDefinition {
        title: "Insert",
        items: INSERT_MENU,
    },
    MenuDefinition {
        title: "View",
        items: VIEW_MENU,
    },
    MenuDefinition {
        title: "Analysis",
        items: ANALYSIS_MENU,
    },
    MenuDefinition {
        title: "Interactive",
        items: INTERACTIVE_MENU,
    },
    MenuDefinition {
        title: "T&M",
        items: TEST_AND_MEASUREMENT_MENU,
    },
    MenuDefinition {
        title: "Tools",
        items: TOOLS_MENU,
    },
    MenuDefinition {
        title: "Help",
        items: HELP_MENU,
    },
];

/// These tabs match `SchematicEditor.ComponentPanel.ComponentSet`.
pub const COMPONENT_CATEGORIES: &[&str] = &[
    "Basic",
    "Switches",
    "Meters",
    "Sensors",
    "Sources",
    "Semiconductors",
    "Optoelectronic",
    "Spice Macros",
    "Gates",
    "Flip-flops",
    "Logic ICs-MCUs",
    "AD/DA-555",
    "RF",
    "Analog Control",
    "Special",
];

/// Original geometric substitutes for component glyphs in the screenshot.
pub const COMPONENT_SYMBOLS: &[&str] = &[
    "R", "C", "L", "D", "Q", "OP", "SW", "V", "I", "GND", "LED", "IC", "ADC", "RF", "X",
];

#[cfg(test)]
mod tests {
    use super::{COMPONENT_CATEGORIES, MAIN_MENUS};

    #[test]
    fn main_menu_inventory_matches_the_screenshot() {
        let titles = MAIN_MENUS.iter().map(|menu| menu.title).collect::<Vec<_>>();

        assert_eq!(
            titles,
            [
                "File",
                "Edit",
                "Insert",
                "View",
                "Analysis",
                "Interactive",
                "T&M",
                "Tools",
                "Help"
            ]
        );
        assert!(MAIN_MENUS.iter().all(|menu| !menu.items.is_empty()));
    }

    #[test]
    fn component_category_inventory_matches_the_original_tab_control() {
        assert_eq!(COMPONENT_CATEGORIES.len(), 15);
        assert_eq!(COMPONENT_CATEGORIES.first(), Some(&"Basic"));
        assert_eq!(COMPONENT_CATEGORIES.last(), Some(&"Special"));
    }
}
