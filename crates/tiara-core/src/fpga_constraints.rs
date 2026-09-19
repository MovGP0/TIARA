use std::fmt;

const HEADER_BORDER: &str =
    "#***********************************************************************************";
const HEADER_FILL: &str = "#*";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ConstraintTarget {
    XilinxUcf,
    XilinxXdc,
    IntelQsf,
}

impl ConstraintTarget {
    #[must_use]
    pub const fn extension(self) -> &'static str {
        match self {
            Self::XilinxUcf => ".ucf",
            Self::XilinxXdc => ".xdc",
            Self::IntelQsf => ".qsf",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FpgaVendor {
    Xilinx,
    Intel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum PinGroupKind {
    #[default]
    General,
    Clock,
    UsbHidPs2,
    IntelSchmittTrigger,
    Arduino,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FpgaPin {
    pub name: String,
    pub location: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FpgaPinGroup {
    pub name: String,
    pub kind: PinGroupKind,
    pub ucf_pullup: bool,
    pub pins: Vec<FpgaPin>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FpgaDevice {
    pub id: u32,
    pub name: String,
    pub vendor: FpgaVendor,
    pub pin_groups: Vec<FpgaPinGroup>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinMapping {
    pub device_id: u32,
    pub group_index: usize,
    pub pin_index: usize,
    pub port_name: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ConstraintGenerationError {
    MissingDevice(u32),
    WrongVendor {
        device: String,
        expected: FpgaVendor,
    },
    MixedDevices {
        first: u32,
        other: u32,
    },
    InvalidPinIndex {
        group: String,
        index: usize,
    },
}

impl fmt::Display for ConstraintGenerationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::MissingDevice(id) => write!(formatter, "FPGA device {id} was not found."),
            Self::WrongVendor { device, expected } => {
                let vendor = match expected {
                    FpgaVendor::Xilinx => "Xilinx",
                    FpgaVendor::Intel => "Intel Quartus",
                };
                write!(
                    formatter,
                    "Device {device} cannot be exported for {vendor}."
                )
            }
            Self::MixedDevices { first, other } => write!(
                formatter,
                "Constraint pins belong to different devices: {first} and {other}."
            ),
            Self::InvalidPinIndex { group, index } => {
                write!(formatter, "Pin index {index} is invalid for group {group}.")
            }
        }
    }
}

impl std::error::Error for ConstraintGenerationError {}

/// Ports Ghidra function `FUN_01561f80` at `0x01561F80`.
///
/// Selector zero maps to Xilinx UCF, selector one to Xilinx XDC, and selector
/// two to Intel QSF. The formatter emits the recovered TINA banner, then visits
/// device pin groups in device order. Within a group, it preserves mapping
/// order. Mappings for a group index that the device does not define are
/// skipped. UCF quotes port and pin names. XDC and QSF receive the already
/// normalized VHDL port names without another escaping layer, matching the
/// recovered direct substitutions. Each group is followed by two blank lines,
/// including groups without mappings.
///
/// Rust's `format!` and `Vec<String>` were selected for these fixed line forms.
/// Askama 0.16 and Upon 0.11 were evaluated and rejected: a template engine
/// would add parsing or derive infrastructure, and its general-purpose escaping
/// would not match the three target-specific direct-substitution rules.
///
/// # Errors
///
/// Returns an error for missing device data, a target/vendor mismatch, mappings
/// from different devices, or an in-range group with an invalid pin index. An
/// empty mapping list returns only the banner and does not require device data.
pub fn generate_fpga_constraints(
    target: ConstraintTarget,
    device: Option<&FpgaDevice>,
    mappings: &[PinMapping],
) -> Result<Vec<String>, ConstraintGenerationError> {
    let mut lines = banner();
    let Some(first_mapping) = mappings.first() else {
        return Ok(lines);
    };
    let device = device.ok_or(ConstraintGenerationError::MissingDevice(
        first_mapping.device_id,
    ))?;
    validate_device(target, device, mappings)?;

    for (group_index, group) in device.pin_groups.iter().enumerate() {
        lines.push(format!("#* {}", group.name));
        for mapping in mappings
            .iter()
            .filter(|mapping| mapping.group_index == group_index)
        {
            let pin = group.pins.get(mapping.pin_index).ok_or_else(|| {
                ConstraintGenerationError::InvalidPinIndex {
                    group: group.name.clone(),
                    index: mapping.pin_index,
                }
            })?;
            append_mapping(&mut lines, target, group, pin, &mapping.port_name);
        }
        lines.push(String::new());
        lines.push(String::new());
    }
    Ok(lines)
}

fn banner() -> Vec<String> {
    vec![
        HEADER_BORDER.to_owned(),
        HEADER_FILL.to_owned(),
        "#* Generated by TINA".to_owned(),
        HEADER_FILL.to_owned(),
        HEADER_BORDER.to_owned(),
        String::new(),
        String::new(),
    ]
}

fn validate_device(
    target: ConstraintTarget,
    device: &FpgaDevice,
    mappings: &[PinMapping],
) -> Result<(), ConstraintGenerationError> {
    let expected = match target {
        ConstraintTarget::XilinxUcf | ConstraintTarget::XilinxXdc => FpgaVendor::Xilinx,
        ConstraintTarget::IntelQsf => FpgaVendor::Intel,
    };
    if device.vendor != expected {
        return Err(ConstraintGenerationError::WrongVendor {
            device: device.name.clone(),
            expected,
        });
    }
    if device.id != mappings[0].device_id {
        return Err(ConstraintGenerationError::MissingDevice(
            mappings[0].device_id,
        ));
    }
    if let Some(mapping) = mappings
        .iter()
        .find(|mapping| mapping.device_id != device.id)
    {
        return Err(ConstraintGenerationError::MixedDevices {
            first: device.id,
            other: mapping.device_id,
        });
    }
    Ok(())
}

fn append_mapping(
    lines: &mut Vec<String>,
    target: ConstraintTarget,
    group: &FpgaPinGroup,
    pin: &FpgaPin,
    port_name: &str,
) {
    match target {
        ConstraintTarget::XilinxUcf => {
            lines.push(format!("NET \"{port_name}\" LOC = \"{}\";", pin.location));
            if group.ucf_pullup {
                lines.push(format!("NET \"{port_name}\" PULLUP;"));
            }
        }
        ConstraintTarget::XilinxXdc => {
            lines.push(format!(
                "set_property PACKAGE_PIN {} [get_ports {port_name}]",
                pin.location
            ));
            lines.push(format!(
                "set_property IOSTANDARD LVCMOS33 [get_ports {port_name}]"
            ));
            if group.kind == PinGroupKind::Clock {
                lines.push(format!(
                    "create_clock -add -name sys_clk_pin -period 10.00 -waveform {{0 5}} [get_ports {port_name}]"
                ));
            }
            if group.kind == PinGroupKind::UsbHidPs2 {
                lines.push(format!("set_property PULLUP true [get_ports {port_name}]"));
            }
        }
        ConstraintTarget::IntelQsf => {
            lines.push(format!(
                "set_location_assignment {} -to {port_name}",
                pin.location
            ));
            let standard = if group.kind == PinGroupKind::IntelSchmittTrigger
                || (group.kind == PinGroupKind::Arduino && pin.name == "ARDUINO_RESET_N")
            {
                "3.3 V SCHMITT TRIGGER"
            } else {
                "3.3-V LVTTL"
            };
            lines.push(format!(
                "set_instance_assignment -name IO_STANDARD \"{standard}\" -to {port_name}"
            ));
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn ucf_golden_text_preserves_group_and_mapping_order() {
        let device = xilinx_device();
        let mappings = vec![
            mapping(7, 1, 0, "button"),
            mapping(7, 0, 1, "clock_b"),
            mapping(7, 0, 0, "clock_a"),
            mapping(7, 99, 0, "skipped"),
        ];

        let lines =
            generate_fpga_constraints(ConstraintTarget::XilinxUcf, Some(&device), &mappings)
                .unwrap_or_else(|error| panic!("generation failed: {error}"));

        assert_eq!(
            lines.join("\n"),
            "#***********************************************************************************\n\
#*\n\
#* Generated by TINA\n\
#*\n\
#***********************************************************************************\n\
\n\
\n\
#* Clock\n\
NET \"clock_b\" LOC = \"P2\";\n\
NET \"clock_a\" LOC = \"P1\";\n\
\n\
\n\
#* Buttons\n\
NET \"button\" LOC = \"P3\";\n\
NET \"button\" PULLUP;\n\n"
        );
    }

    #[test]
    fn xdc_golden_text_adds_clock_and_usb_properties_in_recovered_order() {
        let device = xilinx_device();
        let mappings = vec![mapping(7, 0, 0, "clk"), mapping(7, 1, 0, "ps2_data")];

        let lines =
            generate_fpga_constraints(ConstraintTarget::XilinxXdc, Some(&device), &mappings)
                .unwrap_or_else(|error| panic!("generation failed: {error}"));
        let body = lines[7..].join("\n");

        assert_eq!(
            body,
            "#* Clock\n\
set_property PACKAGE_PIN P1 [get_ports clk]\n\
set_property IOSTANDARD LVCMOS33 [get_ports clk]\n\
create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports clk]\n\
\n\
\n\
#* Buttons\n\
set_property PACKAGE_PIN P3 [get_ports ps2_data]\n\
set_property IOSTANDARD LVCMOS33 [get_ports ps2_data]\n\
set_property PULLUP true [get_ports ps2_data]\n\n"
        );
    }

    #[test]
    fn qsf_golden_text_selects_schmitt_and_lvttl_standards() {
        let device = intel_device();
        let mappings = vec![
            mapping(9, 0, 0, "reset_n"),
            mapping(9, 0, 1, "analog"),
            mapping(9, 1, 0, "key"),
        ];

        let lines = generate_fpga_constraints(ConstraintTarget::IntelQsf, Some(&device), &mappings)
            .unwrap_or_else(|error| panic!("generation failed: {error}"));
        let body = lines[7..].join("\n");

        assert_eq!(
            body,
            "#* Arduino\n\
set_location_assignment PIN_A1 -to reset_n\n\
set_instance_assignment -name IO_STANDARD \"3.3 V SCHMITT TRIGGER\" -to reset_n\n\
set_location_assignment PIN_A2 -to analog\n\
set_instance_assignment -name IO_STANDARD \"3.3-V LVTTL\" -to analog\n\
\n\
\n\
#* Keys\n\
set_location_assignment PIN_B1 -to key\n\
set_instance_assignment -name IO_STANDARD \"3.3 V SCHMITT TRIGGER\" -to key\n\n"
        );
    }

    #[test]
    fn no_mappings_returns_only_the_banner_without_device_data() {
        let lines = generate_fpga_constraints(ConstraintTarget::IntelQsf, None, &[])
            .unwrap_or_else(|error| panic!("generation failed: {error}"));

        assert_eq!(lines, banner());
    }

    #[test]
    fn reports_vendor_mixed_device_missing_device_and_pin_errors() {
        let xilinx = xilinx_device();
        assert!(matches!(
            generate_fpga_constraints(
                ConstraintTarget::IntelQsf,
                Some(&xilinx),
                &[mapping(7, 0, 0, "clk")]
            ),
            Err(ConstraintGenerationError::WrongVendor { .. })
        ));
        assert!(matches!(
            generate_fpga_constraints(
                ConstraintTarget::XilinxUcf,
                Some(&xilinx),
                &[mapping(7, 0, 0, "clk"), mapping(8, 0, 0, "other")]
            ),
            Err(ConstraintGenerationError::MixedDevices { .. })
        ));
        assert_eq!(
            generate_fpga_constraints(
                ConstraintTarget::XilinxUcf,
                None,
                &[mapping(7, 0, 0, "clk")]
            ),
            Err(ConstraintGenerationError::MissingDevice(7))
        );
        assert!(matches!(
            generate_fpga_constraints(
                ConstraintTarget::XilinxUcf,
                Some(&xilinx),
                &[mapping(7, 0, 99, "clk")]
            ),
            Err(ConstraintGenerationError::InvalidPinIndex { .. })
        ));
    }

    #[test]
    fn target_extensions_match_the_recovered_selectors() {
        assert_eq!(ConstraintTarget::XilinxUcf.extension(), ".ucf");
        assert_eq!(ConstraintTarget::XilinxXdc.extension(), ".xdc");
        assert_eq!(ConstraintTarget::IntelQsf.extension(), ".qsf");
    }

    fn mapping(
        device_id: u32,
        group_index: usize,
        pin_index: usize,
        port_name: &str,
    ) -> PinMapping {
        PinMapping {
            device_id,
            group_index,
            pin_index,
            port_name: port_name.to_owned(),
        }
    }

    fn pin(name: &str, location: &str) -> FpgaPin {
        FpgaPin {
            name: name.to_owned(),
            location: location.to_owned(),
        }
    }

    fn xilinx_device() -> FpgaDevice {
        FpgaDevice {
            id: 7,
            name: "Xilinx test".to_owned(),
            vendor: FpgaVendor::Xilinx,
            pin_groups: vec![
                FpgaPinGroup {
                    name: "Clock".to_owned(),
                    kind: PinGroupKind::Clock,
                    ucf_pullup: false,
                    pins: vec![pin("CLK_A", "P1"), pin("CLK_B", "P2")],
                },
                FpgaPinGroup {
                    name: "Buttons".to_owned(),
                    kind: PinGroupKind::UsbHidPs2,
                    ucf_pullup: true,
                    pins: vec![pin("BUTTON", "P3")],
                },
            ],
        }
    }

    fn intel_device() -> FpgaDevice {
        FpgaDevice {
            id: 9,
            name: "DE10-Lite test".to_owned(),
            vendor: FpgaVendor::Intel,
            pin_groups: vec![
                FpgaPinGroup {
                    name: "Arduino".to_owned(),
                    kind: PinGroupKind::Arduino,
                    ucf_pullup: false,
                    pins: vec![
                        pin("ARDUINO_RESET_N", "PIN_A1"),
                        pin("ARDUINO_A0", "PIN_A2"),
                    ],
                },
                FpgaPinGroup {
                    name: "Keys".to_owned(),
                    kind: PinGroupKind::IntelSchmittTrigger,
                    ucf_pullup: false,
                    pins: vec![pin("KEY0", "PIN_B1")],
                },
            ],
        }
    }
}

impl ConstraintTarget {
    /// Recovers a target from the code the caller passes.
    ///
    /// Part of Ghidra function `FUN_01c9b4f0` at `0x01C9B4F0`.
    ///
    /// Only two codes are named; everything else falls to the oldest of the
    /// three formats, so an unrecognised target still produces a constraints
    /// file rather than none.
    #[must_use]
    pub const fn from_code(code: i32) -> Self {
        match code {
            1 => Self::XilinxXdc,
            2 => Self::IntelQsf,
            _ => Self::XilinxUcf,
        }
    }

    /// The save dialog's filter for this target.
    ///
    /// Part of Ghidra function `FUN_01c9b4f0` at `0x01C9B4F0`.
    #[must_use]
    pub const fn dialog_filter(self) -> &'static str {
        match self {
            Self::XilinxUcf => "UCF File|*.ucf",
            Self::XilinxXdc => "XDC File|*.xdc",
            Self::IntelQsf => "QSF File|*.qsf",
        }
    }
}

/// The directory, under the installation, holding the shipped VHDL packages.
pub const VHDL_PACKAGE_DIRECTORY: &str = r"VHDL\Packages";

/// The package the export adds when the design needs it.
pub const FPGA_LIBRARY_PACKAGE: &str = r"\tina_lib2_fpga.vhd";

/// Reported when the circuit cannot be turned into VHDL at all.
pub const CANNOT_CONVERT_MESSAGE: &str = "Can't convert to VHDL!";

/// The capability the export asks about before it starts.
pub const FPGA_CAPABILITY: u8 = 13;

/// Why an export did not happen.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExportRefusal {
    /// The installation does not allow this export.
    NotPermitted,
    /// The circuit cannot be expressed as VHDL.
    NotConvertible,
    /// The user closed the save dialog.
    Cancelled,
}

/// What driving one FPGA export needs from the application.
pub trait FpgaExportHost {
    /// Whether the installation allows the export, asked once and cached by
    /// the recovered code.
    fn export_permitted(&mut self, capability: u8) -> bool;

    /// Whether the open circuit can be turned into VHDL.
    fn circuit_convertible(&mut self) -> bool;

    /// Reports a refusal to the user.
    fn report(&mut self, message: &str);

    /// Makes the working directory the export builds in.
    fn begin_working_directory(&mut self) -> String;

    /// Builds the VHDL for the circuit and hands back the package files it
    /// referred to, in the order it found them.
    fn generate_vhdl(&mut self, target: ConstraintTarget) -> Vec<String>;

    /// Whether the design needs the shipped FPGA library package.
    fn needs_library_package(&mut self) -> bool;

    /// Adds one package file to the export.
    fn add_package(&mut self, path: &str, index: Option<usize>);

    /// The installation's own directory.
    fn installation_directory(&mut self) -> String;

    /// The name the exporter proposes.
    fn proposed_name(&mut self) -> String;

    /// Seeds the save dialog's file name.
    fn seed_dialog_name(&mut self, name: &str);

    /// Shows the save dialog under one description and filter, returning what
    /// the user chose.
    fn ask_for_path(&mut self, filter: &str) -> Option<String>;

    /// Writes the constraints file.
    fn write_constraints(&mut self, path: &str);

    /// Takes the working directory away again.
    fn end_working_directory(&mut self);
}

/// Implements Ghidra function `FUN_01c9b4f0` at `0x01C9B4F0`.
///
/// Exports the open circuit as VHDL with a constraints file for one FPGA
/// toolchain.
///
/// Two checks come before anything is built, and they refuse for quite
/// different reasons: the installation may not offer the export at all, or
/// the circuit may contain something that has no VHDL equivalent. Separating
/// them is what lets the second one name the circuit as the problem rather
/// than the licence.
///
/// The working directory is made before the export and taken away after it
/// *whatever happens*, so an export that the user cancels leaves nothing
/// behind. Everything is built there and only the file the user names is
/// written out.
///
/// The constraints file is the only part that differs between toolchains —
/// the VHDL itself is the same — so the target chooses a filter and a
/// description and nothing else.
///
/// # Errors
///
/// Returns [`ExportRefusal`] when either check refuses or the user cancels.
pub fn export_to_fpga(
    host: &mut impl FpgaExportHost,
    target: ConstraintTarget,
) -> Result<String, ExportRefusal> {
    if !host.export_permitted(FPGA_CAPABILITY) {
        return Err(ExportRefusal::NotPermitted);
    }

    if !host.circuit_convertible() {
        host.report(CANNOT_CONVERT_MESSAGE);
        return Err(ExportRefusal::NotConvertible);
    }

    host.begin_working_directory();
    let outcome = run_export(host, target);
    host.end_working_directory();
    outcome
}

fn run_export(
    host: &mut impl FpgaExportHost,
    target: ConstraintTarget,
) -> Result<String, ExportRefusal> {
    for (index, package) in host.generate_vhdl(target).into_iter().enumerate() {
        host.add_package(&package, Some(index));
    }

    if host.needs_library_package() {
        let path = format!(
            r"{}\{VHDL_PACKAGE_DIRECTORY}{FPGA_LIBRARY_PACKAGE}",
            host.installation_directory()
        );
        // Added without an index of its own, because it belongs to no entry
        // of the design.
        host.add_package(&path, None);
    }

    let proposed = host.proposed_name();
    let seeded = std::path::Path::new(&proposed).file_name().map_or_else(
        || proposed.clone(),
        |name| name.to_string_lossy().into_owned(),
    );
    host.seed_dialog_name(&seeded);

    let Some(chosen) = host.ask_for_path(target.dialog_filter()) else {
        return Err(ExportRefusal::Cancelled);
    };

    host.write_constraints(&chosen);
    Ok(chosen)
}

#[cfg(test)]
mod fpga_export_tests {
    use super::*;

    #[test]
    fn the_target_codes_are_the_two_recovered_ones_and_a_fall_back() {
        assert_eq!(ConstraintTarget::from_code(1), ConstraintTarget::XilinxXdc);
        assert_eq!(ConstraintTarget::from_code(2), ConstraintTarget::IntelQsf);

        for code in [0, 3, -1, 99] {
            assert_eq!(
                ConstraintTarget::from_code(code),
                ConstraintTarget::XilinxUcf
            );
        }
    }

    #[test]
    fn each_filter_names_the_extension_that_target_writes() {
        for target in [
            ConstraintTarget::XilinxUcf,
            ConstraintTarget::XilinxXdc,
            ConstraintTarget::IntelQsf,
        ] {
            assert!(
                target
                    .dialog_filter()
                    .to_lowercase()
                    .contains(target.extension()),
                "{target:?}"
            );
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        BeginDirectory,
        Generate(ConstraintTarget),
        Package(String, Option<usize>),
        Seed(String),
        Ask(String),
        Write(String),
        EndDirectory,
        Report(String),
    }

    #[derive(Debug, Default)]
    struct Application {
        permitted: bool,
        convertible: bool,
        packages: Vec<String>,
        needs_library: bool,
        chosen: Option<String>,
        steps: Vec<Step>,
    }

    impl Application {
        fn ready() -> Self {
            Self {
                permitted: true,
                convertible: true,
                packages: vec!["a.vhd".to_owned(), "b.vhd".to_owned()],
                chosen: Some(r"C:\out\design.xdc".to_owned()),
                ..Self::default()
            }
        }
    }

    impl FpgaExportHost for Application {
        fn export_permitted(&mut self, _capability: u8) -> bool {
            self.permitted
        }

        fn circuit_convertible(&mut self) -> bool {
            self.convertible
        }

        fn report(&mut self, message: &str) {
            self.steps.push(Step::Report(message.to_owned()));
        }

        fn begin_working_directory(&mut self) -> String {
            self.steps.push(Step::BeginDirectory);
            r"C:\Temp\fpga".to_owned()
        }

        fn generate_vhdl(&mut self, target: ConstraintTarget) -> Vec<String> {
            self.steps.push(Step::Generate(target));
            self.packages.clone()
        }

        fn needs_library_package(&mut self) -> bool {
            self.needs_library
        }

        fn add_package(&mut self, path: &str, index: Option<usize>) {
            self.steps.push(Step::Package(path.to_owned(), index));
        }

        fn installation_directory(&mut self) -> String {
            r"C:\Tina".to_owned()
        }

        fn proposed_name(&mut self) -> String {
            r"C:\somewhere\else\design.xdc".to_owned()
        }

        fn seed_dialog_name(&mut self, name: &str) {
            self.steps.push(Step::Seed(name.to_owned()));
        }

        fn ask_for_path(&mut self, filter: &str) -> Option<String> {
            self.steps.push(Step::Ask(filter.to_owned()));
            self.chosen.clone()
        }

        fn write_constraints(&mut self, path: &str) {
            self.steps.push(Step::Write(path.to_owned()));
        }

        fn end_working_directory(&mut self) {
            self.steps.push(Step::EndDirectory);
        }
    }

    #[test]
    fn an_export_generates_then_asks_then_writes() {
        let mut host = Application::ready();

        assert_eq!(
            export_to_fpga(&mut host, ConstraintTarget::XilinxXdc),
            Ok(r"C:\out\design.xdc".to_owned())
        );
        assert!(
            host.steps
                .contains(&Step::Write(r"C:\out\design.xdc".to_owned()))
        );
        assert!(host.steps.contains(&Step::Ask("XDC File|*.xdc".to_owned())));
    }

    #[test]
    fn a_disallowed_export_never_builds_a_working_directory() {
        let mut host = Application {
            permitted: false,
            ..Application::ready()
        };

        assert_eq!(
            export_to_fpga(&mut host, ConstraintTarget::XilinxUcf),
            Err(ExportRefusal::NotPermitted)
        );
        assert!(host.steps.is_empty());
    }

    #[test]
    fn an_unconvertible_circuit_is_named_as_the_problem_rather_than_the_licence() {
        let mut host = Application {
            convertible: false,
            ..Application::ready()
        };

        assert_eq!(
            export_to_fpga(&mut host, ConstraintTarget::XilinxUcf),
            Err(ExportRefusal::NotConvertible)
        );
        assert_eq!(
            host.steps,
            [Step::Report(CANNOT_CONVERT_MESSAGE.to_owned())]
        );
    }

    #[test]
    fn the_working_directory_is_taken_away_even_when_the_user_cancels() {
        let mut host = Application {
            chosen: None,
            ..Application::ready()
        };

        assert_eq!(
            export_to_fpga(&mut host, ConstraintTarget::IntelQsf),
            Err(ExportRefusal::Cancelled)
        );
        assert_eq!(host.steps.first(), Some(&Step::BeginDirectory));
        assert_eq!(host.steps.last(), Some(&Step::EndDirectory));
        assert!(!host.steps.iter().any(|s| matches!(s, Step::Write(_))));
    }

    #[test]
    fn every_package_the_design_referred_to_is_added_with_its_own_index() {
        let mut host = Application::ready();
        export_to_fpga(&mut host, ConstraintTarget::XilinxXdc).expect("it exports");

        assert!(
            host.steps
                .contains(&Step::Package("a.vhd".to_owned(), Some(0)))
        );
        assert!(
            host.steps
                .contains(&Step::Package("b.vhd".to_owned(), Some(1)))
        );
    }

    #[test]
    fn the_shipped_library_package_is_added_without_an_index_of_its_own() {
        let mut host = Application {
            needs_library: true,
            ..Application::ready()
        };
        export_to_fpga(&mut host, ConstraintTarget::XilinxXdc).expect("it exports");

        assert!(host.steps.contains(&Step::Package(
            r"C:\Tina\VHDL\Packages\tina_lib2_fpga.vhd".to_owned(),
            None
        )));
    }

    #[test]
    fn the_library_package_is_left_out_when_the_design_does_not_need_it() {
        let mut host = Application::ready();
        export_to_fpga(&mut host, ConstraintTarget::XilinxXdc).expect("it exports");

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::Package(_, None)))
        );
    }

    #[test]
    fn the_target_changes_only_the_constraints_filter() {
        let mut xdc = Application::ready();
        export_to_fpga(&mut xdc, ConstraintTarget::XilinxXdc).expect("it exports");

        let mut qsf = Application::ready();
        export_to_fpga(&mut qsf, ConstraintTarget::IntelQsf).expect("it exports");

        let packages = |host: &Application| {
            host.steps
                .iter()
                .filter(|step| matches!(step, Step::Package(..)))
                .cloned()
                .collect::<Vec<_>>()
        };
        assert_eq!(packages(&xdc), packages(&qsf));
        assert!(xdc.steps.contains(&Step::Ask("XDC File|*.xdc".to_owned())));
        assert!(qsf.steps.contains(&Step::Ask("QSF File|*.qsf".to_owned())));
    }

    #[test]
    fn the_dialog_is_seeded_with_the_proposed_name_stripped_of_its_directory() {
        let mut host = Application::ready();
        export_to_fpga(&mut host, ConstraintTarget::XilinxXdc).expect("it exports");

        assert!(host.steps.contains(&Step::Seed("design.xdc".to_owned())));
        assert!(
            !host
                .steps
                .contains(&Step::Seed(r"C:\somewhere\else\design.xdc".to_owned()))
        );
    }
}
