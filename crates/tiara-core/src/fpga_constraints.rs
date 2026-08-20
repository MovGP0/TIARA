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
