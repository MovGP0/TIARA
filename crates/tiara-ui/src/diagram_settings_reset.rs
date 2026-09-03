//! Stored and live diagram-setting reset.

use std::collections::BTreeMap;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct PropertyStoreHandle(pub u64);

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct DiagramOptions {
    pub sections: BTreeMap<String, BTreeMap<String, String>>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagramSettingsSections {
    pub analysis_type: String,
    pub normalized_diagram: String,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct PlotPropertyStores {
    pub x_axes: Vec<PropertyStoreHandle>,
    pub y_axes: Vec<PropertyStoreHandle>,
    pub figures: Vec<PropertyStoreHandle>,
}

pub trait DiagramSettingsResetHost {
    fn write_diagram_options(&mut self, options: &DiagramOptions);
    fn reset_property_store(&mut self, store: PropertyStoreHandle);
}

/// Implements Ghidra function `FUN_01adc240` at `0x01ADC240`.
///
/// With reset flags zero, erases the analysis-type, normalized-diagram,
/// analysis `_IPR`, and analysis `_XYPlot` sections. Bit zero in a nonzero flag
/// removes only stored axis `min`, `max`, and `divs` entries from the first two
/// sections. Bit one erases the two suffixed sections. A missing matched result
/// skips option write-back. Every call still resets all live X-axis, Y-axis,
/// and figure property stores. It does not recalculate, redraw, or save.
pub fn reset_diagram_settings(
    options: Option<&mut DiagramOptions>,
    flags: u8,
    sections: &DiagramSettingsSections,
    plots: &[PlotPropertyStores],
    host: &mut impl DiagramSettingsResetHost,
) {
    if let Some(options) = options {
        if flags == 0 {
            options.sections.remove(&sections.analysis_type);
            options.sections.remove(&sections.normalized_diagram);
        } else if flags & 1 != 0 {
            remove_axis_range_entries(options, &sections.analysis_type);
            remove_axis_range_entries(options, &sections.normalized_diagram);
        }
        if flags == 0 || flags & 2 != 0 {
            options
                .sections
                .remove(&format!("{}_IPR", sections.analysis_type));
            options
                .sections
                .remove(&format!("{}_XYPlot", sections.analysis_type));
        }
        host.write_diagram_options(options);
    }

    for plot in plots {
        for store in plot.x_axes.iter().chain(&plot.y_axes).chain(&plot.figures) {
            host.reset_property_store(*store);
        }
    }
}

fn remove_axis_range_entries(options: &mut DiagramOptions, section: &str) {
    let Some(entries) = options.sections.get_mut(section) else {
        return;
    };
    entries.retain(|key, _| !is_axis_range_key(key));
}

fn is_axis_range_key(key: &str) -> bool {
    let is_axis = key.starts_with("CS.") && (key.contains(".XAxis") || key.contains(".YAxis"));
    let is_range = key.ends_with("min") || key.ends_with("max") || key.ends_with("divs");
    is_axis && is_range
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use super::{
        DiagramOptions, DiagramSettingsResetHost, DiagramSettingsSections, PlotPropertyStores,
        PropertyStoreHandle, reset_diagram_settings,
    };

    #[derive(Default)]
    struct Host {
        writes: Vec<DiagramOptions>,
        resets: Vec<PropertyStoreHandle>,
    }

    impl DiagramSettingsResetHost for Host {
        fn write_diagram_options(&mut self, options: &DiagramOptions) {
            self.writes.push(options.clone());
        }

        fn reset_property_store(&mut self, store: PropertyStoreHandle) {
            self.resets.push(store);
        }
    }

    fn sections() -> DiagramSettingsSections {
        DiagramSettingsSections {
            analysis_type: "AC".to_owned(),
            normalized_diagram: "AC.Main".to_owned(),
        }
    }

    fn options() -> DiagramOptions {
        DiagramOptions {
            sections: BTreeMap::from([
                (
                    "AC".to_owned(),
                    BTreeMap::from([("Keep".to_owned(), "1".to_owned())]),
                ),
                ("AC.Main".to_owned(), BTreeMap::new()),
                ("AC_IPR".to_owned(), BTreeMap::new()),
                ("AC_XYPlot".to_owned(), BTreeMap::new()),
                ("Other".to_owned(), BTreeMap::new()),
            ]),
        }
    }

    #[test]
    fn zero_flags_erase_all_four_sections_and_reset_every_live_store() {
        let mut options = options();
        let plots = [PlotPropertyStores {
            x_axes: vec![PropertyStoreHandle(1)],
            y_axes: vec![PropertyStoreHandle(2)],
            figures: vec![PropertyStoreHandle(3), PropertyStoreHandle(4)],
        }];
        let mut host = Host::default();

        reset_diagram_settings(Some(&mut options), 0, &sections(), &plots, &mut host);

        assert_eq!(
            options
                .sections
                .keys()
                .map(String::as_str)
                .collect::<Vec<_>>(),
            ["Other"]
        );
        assert_eq!(host.writes, [options]);
        assert_eq!(
            host.resets,
            [
                PropertyStoreHandle(1),
                PropertyStoreHandle(2),
                PropertyStoreHandle(3),
                PropertyStoreHandle(4),
            ]
        );
    }

    #[test]
    fn missing_result_skips_write_back_but_resets_live_stores() {
        let plots = [PlotPropertyStores {
            x_axes: vec![PropertyStoreHandle(5)],
            y_axes: Vec::new(),
            figures: vec![PropertyStoreHandle(6)],
        }];
        let mut host = Host::default();

        reset_diagram_settings(None, 0, &sections(), &plots, &mut host);

        assert!(host.writes.is_empty());
        assert_eq!(
            host.resets,
            [PropertyStoreHandle(5), PropertyStoreHandle(6)]
        );
    }

    #[test]
    fn partial_flags_remove_only_axis_ranges_and_suffix_sections() {
        let mut options = options();
        options.sections.get_mut("AC").unwrap().extend([
            ("CS.0.XAxis0.min".to_owned(), "0".to_owned()),
            ("CS.0.YAxis0.divs".to_owned(), "4".to_owned()),
            ("Title".to_owned(), "Plot".to_owned()),
        ]);
        let mut host = Host::default();

        reset_diagram_settings(Some(&mut options), 3, &sections(), &[], &mut host);

        let ac = &options.sections["AC"];
        assert!(!ac.contains_key("CS.0.XAxis0.min"));
        assert!(!ac.contains_key("CS.0.YAxis0.divs"));
        assert_eq!(ac["Title"], "Plot");
        assert!(!options.sections.contains_key("AC_IPR"));
        assert!(!options.sections.contains_key("AC_XYPlot"));
        assert!(options.sections.contains_key("AC.Main"));
    }
}
