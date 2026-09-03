//! Configured source ranges used by analyzer sweep controls.

#[derive(Debug, Clone, Default, PartialEq)]
pub struct ConfiguredSourceRange {
    pub start: f64,
    pub stop: f64,
    pub numeric_format: u16,
    pub unit: Option<String>,
}

impl ConfiguredSourceRange {
    fn available(&self) -> Option<SourceRange> {
        Some(SourceRange {
            start: self.start,
            stop: self.stop,
            numeric_format: self.numeric_format,
            unit: self.unit.clone()?,
        })
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct SourceRangeConfiguration {
    pub primary: ConfiguredSourceRange,
    pub secondary: ConfiguredSourceRange,
    pub secondary_enabled: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct SourceRange {
    pub start: f64,
    pub stop: f64,
    pub numeric_format: u16,
    pub unit: String,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct SourceRanges {
    pub primary: Option<SourceRange>,
    pub secondary: Option<SourceRange>,
}

/// Reads the configured primary and optional secondary source ranges.
///
/// Reimplements Ghidra function `FUN_0153b700` at `0x0153B700`. Selector zero
/// reads the source-range configuration. A missing primary unit omits the
/// primary range. A missing or disabled secondary unit omits the secondary
/// range. Every other selector is a no-op and returns `None`.
///
/// Rust's standard [`Option`] type represents both recovered null-unit checks,
/// so no external configuration or nullable-value crate is required.
#[must_use]
pub fn read_configured_source_ranges(
    configuration: &SourceRangeConfiguration,
    selector: u32,
) -> Option<SourceRanges> {
    if selector != 0 {
        return None;
    }

    Some(SourceRanges {
        primary: configuration.primary.available(),
        secondary: configuration
            .secondary_enabled
            .then(|| configuration.secondary.available())
            .flatten(),
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn range(start: f64, stop: f64, numeric_format: u16, unit: &str) -> ConfiguredSourceRange {
        ConfiguredSourceRange {
            start,
            stop,
            numeric_format,
            unit: Some(unit.to_owned()),
        }
    }

    #[test]
    fn selector_zero_returns_primary_and_enabled_secondary_ranges() {
        let configuration = SourceRangeConfiguration {
            primary: range(-10.0, 10.0, 3, "Voltage"),
            secondary: range(0.0, 0.25, 7, "Current"),
            secondary_enabled: true,
        };

        let ranges = read_configured_source_ranges(&configuration, 0).unwrap();

        assert_eq!(
            ranges.primary,
            Some(SourceRange {
                start: -10.0,
                stop: 10.0,
                numeric_format: 3,
                unit: "Voltage".to_owned(),
            })
        );
        assert_eq!(
            ranges.secondary,
            Some(SourceRange {
                start: 0.0,
                stop: 0.25,
                numeric_format: 7,
                unit: "Current".to_owned(),
            })
        );
    }

    #[test]
    fn disabled_secondary_range_is_omitted_without_hiding_primary() {
        let configuration = SourceRangeConfiguration {
            primary: range(1.0, 2.0, 4, "primary"),
            secondary: range(3.0, 4.0, 5, "secondary"),
            secondary_enabled: false,
        };

        let ranges = read_configured_source_ranges(&configuration, 0).unwrap();

        assert!(ranges.primary.is_some());
        assert_eq!(ranges.secondary, None);
    }

    #[test]
    fn missing_units_omit_only_their_ranges() {
        let configuration = SourceRangeConfiguration {
            primary: ConfiguredSourceRange {
                start: 1.0,
                stop: 2.0,
                numeric_format: 4,
                unit: None,
            },
            secondary: range(3.0, 4.0, 5, "secondary"),
            secondary_enabled: true,
        };

        let ranges = read_configured_source_ranges(&configuration, 0).unwrap();

        assert_eq!(ranges.primary, None);
        assert!(ranges.secondary.is_some());
    }

    #[test]
    fn nonzero_selector_does_not_read_or_synthesize_ranges() {
        let configuration = SourceRangeConfiguration {
            primary: range(1.0, 2.0, 4, "primary"),
            secondary: range(3.0, 4.0, 5, "secondary"),
            secondary_enabled: true,
        };

        assert_eq!(read_configured_source_ranges(&configuration, 1), None);
        assert_eq!(
            read_configured_source_ranges(&configuration, u32::MAX),
            None
        );
    }
}
