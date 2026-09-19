//! Writing out what is known about the device being worked on.
//!
//! Five things are recorded — what it is called, what it is, where its data
//! sheet is, and who modelled and documented it — and all five come from the
//! one device the application currently holds. The document is built whether
//! or not there is anywhere to put it, and only then is the folder looked at.

/// What the document's one element is called.
///
/// Part of Ghidra function `FUN_01302300` at `0x01302300`.
///
/// Spelled as it is here, with the `c` missing. The file it is written to
/// spells the same word correctly, so the tag and the name it is saved under
/// disagree — kept, because a reader written against the original looks for
/// the misspelling.
pub const ROOT_ELEMENT: &str = "desription";

/// What the file name begins with, after the folder.
///
/// Part of Ghidra function `FUN_01302300` at `0x01302300`.
pub const REPORT_PREFIX: &str = r"\report_";

/// And what it ends with, before the extension.
///
/// Part of Ghidra function `FUN_01302300` at `0x01302300`.
pub const REPORT_SUFFIX: &str = "description";

/// The extension it is saved under.
///
/// Part of Ghidra function `FUN_01302300` at `0x01302300`.
pub const REPORT_EXTENSION: &str = ".xml";

/// One of the five things recorded about a device.
///
/// Part of Ghidra function `FUN_01302300` at `0x01302300`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DeviceField {
    /// What the device is called.
    Name,
    /// What it is.
    Description,
    /// Where its data sheet is.
    DatasheetReference,
    /// Who made the model.
    ModelledBy,
    /// Who wrote it up.
    DocumentedBy,
}

impl DeviceField {
    /// All five, in the order they are written.
    pub const ALL: [Self; 5] = [
        Self::Name,
        Self::Description,
        Self::DatasheetReference,
        Self::ModelledBy,
        Self::DocumentedBy,
    ];

    /// What the attribute is called in the document.
    #[must_use]
    pub const fn attribute(self) -> &'static str {
        match self {
            Self::Name => "devName",
            Self::Description => "devDescription",
            Self::DatasheetReference => "datasheetReference",
            Self::ModelledBy => "modelledBy",
            Self::DocumentedBy => "documentedBy",
        }
    }
}

/// The document as it stands before it is saved.
///
/// Part of Ghidra function `FUN_01302300` at `0x01302300`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DeviceReport {
    /// What the one element is called.
    pub element: &'static str,
    /// Its attributes, in the order they were set.
    pub attributes: Vec<(&'static str, String)>,
}

/// Implements part of Ghidra function `FUN_01302300` at `0x01302300`.
///
/// Where the report for one device goes.
///
/// The middle of the name is a constant that did not survive, so it comes from
/// the caller; everything around it is recovered. The folder is joined with a
/// separator that is part of the prefix rather than added, so a folder already
/// ending in one produces two.
#[must_use]
pub fn report_path(folder: &str, middle: &str) -> String {
    format!("{folder}{REPORT_PREFIX}{middle}{REPORT_SUFFIX}{REPORT_EXTENSION}")
}

/// What writing the report needs of the application.
///
/// Part of Ghidra function `FUN_01302300` at `0x01302300`.
pub trait DeviceReportHost {
    /// What the current device says for one of the five.
    fn device_field(&mut self, field: DeviceField) -> String;

    /// Where reports are kept.
    fn report_folder(&mut self) -> String;

    /// Whether that folder is there.
    fn folder_exists(&self, folder: &str) -> bool;

    /// Puts the document at one path.
    fn save(&mut self, path: &str, report: &DeviceReport);
}

/// Implements Ghidra function `FUN_01302300` at `0x01302300`.
///
/// Writes what is known about the current device, if there is anywhere to put
/// it.
///
/// The document is built first and the folder looked at second, so the five
/// fields are read from the device every time whether or not anything is
/// saved. When the folder is not there nothing is written and nothing is
/// said — the work is simply thrown away.
///
/// The folder is read twice: once to test and once to build the path. Both
/// reads go to the same control, so the two agree unless something changes it
/// in between.
///
/// Returns whether the report was saved.
pub fn write_device_report<Host: DeviceReportHost>(host: &mut Host, middle: &str) -> bool {
    let attributes = DeviceField::ALL
        .into_iter()
        .map(|field| (field.attribute(), host.device_field(field)))
        .collect();
    let report = DeviceReport {
        element: ROOT_ELEMENT,
        attributes,
    };

    let folder = host.report_folder();
    if !host.folder_exists(&folder) {
        return false;
    }

    let path = report_path(&host.report_folder(), middle);
    host.save(&path, &report);
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Device {
        folder: String,
        present: Vec<String>,
        asked: Vec<DeviceField>,
        saved: Vec<(String, DeviceReport)>,
    }

    impl DeviceReportHost for Device {
        fn device_field(&mut self, field: DeviceField) -> String {
            self.asked.push(field);
            format!("{field:?} value")
        }

        fn report_folder(&mut self) -> String {
            self.folder.clone()
        }

        fn folder_exists(&self, folder: &str) -> bool {
            self.present.iter().any(|held| held == folder)
        }

        fn save(&mut self, path: &str, report: &DeviceReport) {
            self.saved.push((path.to_owned(), report.clone()));
        }
    }

    fn device() -> Device {
        Device {
            folder: r"D:\reports".to_owned(),
            present: vec![r"D:\reports".to_owned()],
            ..Device::default()
        }
    }

    #[test]
    fn the_element_is_spelled_the_way_the_original_spells_it() {
        assert_eq!(ROOT_ELEMENT, "desription");
        assert!(!ROOT_ELEMENT.contains("desc"));
    }

    #[test]
    fn the_file_name_spells_the_same_word_correctly() {
        assert_eq!(REPORT_SUFFIX, "description");
        assert_ne!(ROOT_ELEMENT, REPORT_SUFFIX);
    }

    #[test]
    fn five_things_are_recorded_and_each_has_its_own_name() {
        let names: Vec<&str> = DeviceField::ALL.iter().map(|f| f.attribute()).collect();
        let mut distinct = names.clone();
        distinct.sort_unstable();
        distinct.dedup();

        assert_eq!(names.len(), 5);
        assert_eq!(distinct.len(), 5);
    }

    #[test]
    fn the_two_device_fields_are_prefixed_and_the_other_three_are_not() {
        assert!(DeviceField::Name.attribute().starts_with("dev"));
        assert!(DeviceField::Description.attribute().starts_with("dev"));
        assert!(!DeviceField::ModelledBy.attribute().starts_with("dev"));
    }

    #[test]
    fn a_report_goes_beside_the_folder_it_was_asked_for() {
        assert_eq!(
            report_path(r"D:\reports", "TR1"),
            r"D:\reports\report_TR1description.xml"
        );
    }

    #[test]
    fn a_folder_already_ending_in_a_separator_gets_two() {
        // The separator is part of the prefix rather than added.
        assert!(report_path(r"D:\reports\", "x").contains(r"\\report_"));
    }

    #[test]
    fn every_field_is_written_in_order() {
        let mut host = device();

        assert!(write_device_report(&mut host, "TR1"));
        let (_, report) = &host.saved[0];
        let names: Vec<&str> = report.attributes.iter().map(|(name, _)| *name).collect();

        assert_eq!(
            names,
            [
                "devName",
                "devDescription",
                "datasheetReference",
                "modelledBy",
                "documentedBy"
            ]
        );
    }

    #[test]
    fn the_document_carries_the_misspelled_element() {
        let mut host = device();
        write_device_report(&mut host, "TR1");

        assert_eq!(host.saved[0].1.element, "desription");
    }

    #[test]
    fn the_report_is_saved_where_the_path_says() {
        let mut host = device();
        write_device_report(&mut host, "TR1");

        assert_eq!(host.saved[0].0, r"D:\reports\report_TR1description.xml");
    }

    #[test]
    fn a_folder_that_is_not_there_throws_the_work_away_without_a_word() {
        let mut host = Device {
            folder: r"D:\gone".to_owned(),
            ..Device::default()
        };

        assert!(!write_device_report(&mut host, "TR1"));
        assert!(host.saved.is_empty());
    }

    #[test]
    fn the_device_is_asked_every_time_whether_or_not_anything_is_saved() {
        // The document is built before the folder is looked at.
        let mut host = Device {
            folder: r"D:\gone".to_owned(),
            ..Device::default()
        };
        write_device_report(&mut host, "TR1");

        assert_eq!(host.asked, DeviceField::ALL);
    }
}
