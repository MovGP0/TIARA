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
    use super::COMPONENT_CATEGORIES;

    #[test]
    fn component_category_inventory_matches_the_original_tab_control() {
        assert_eq!(COMPONENT_CATEGORIES.len(), 15);
        assert_eq!(COMPONENT_CATEGORIES.first(), Some(&"Basic"));
        assert_eq!(COMPONENT_CATEGORIES.last(), Some(&"Special"));
    }
}
