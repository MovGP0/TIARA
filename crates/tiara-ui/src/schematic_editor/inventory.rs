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

/// Component choices offered when no installation registry is available.
pub const COMPONENT_SYMBOLS: &[&str] = &[
    "R", "C", "L", "D", "Q", "OP", "SW", "V", "I", "GND", "LED", "IC", "ADC", "RF", "X",
];

/// Registry artwork for the built-in palette. Generic parts use the command
/// component outline when no precise registry symbol is known.
pub fn component_icon_id(symbol: &str) -> Option<&'static str> {
    match symbol {
        "R" => Some("id_component_resistor"),
        "C" => Some("id_component_capacitor"),
        "L" => Some("id_component_inductor"),
        "D" => Some("id_component_diode"),
        "Q" => Some("id_component_npn_bipolar_transistor"),
        "OP" => Some("id_component_operational_amplifier"),
        "SW" => Some("id_component_switch"),
        "V" => Some("id_component_voltage_source"),
        "I" => Some("id_component_current_source"),
        "GND" => Some("id_component_ground"),
        "LED" => Some("id_component_leds"),
        "ADC" => Some("id_component_ideal_adc"),
        _ => None,
    }
}

#[cfg(test)]
mod tests {
    use super::COMPONENT_CATEGORIES;

    #[test]
    fn component_category_inventory_matches_the_original_tab_control() {
        assert_eq!(COMPONENT_CATEGORIES.len(), 15);
        assert_eq!(COMPONENT_CATEGORIES.first(), Some(&"Basic"));
        assert_eq!(COMPONENT_CATEGORIES.last(), Some(&"Special"));
    }

    #[test]
    fn built_in_palette_has_packaged_vector_artwork() {
        for symbol in super::COMPONENT_SYMBOLS {
            if let Some(id) = super::component_icon_id(symbol) {
                assert!(
                    crate::shared::component_glyphs::ComponentGlyphs::shared()
                        .get(id)
                        .is_some(),
                    "{symbol}"
                );
            } else {
                assert!(
                    crate::shared::glyphs::Glyphs::shared()
                        .named("component")
                        .is_some()
                );
            }
        }
    }
}
