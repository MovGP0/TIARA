//! Reading and writing a diagram's contents.
//!
//! The two collections a diagram keeps are written as one run and read back
//! as one run, with a single count in front of both. Nothing records where
//! the first collection ends: each item names its own class as it is read,
//! and the class decides which collection it joins. That is what lets the
//! format survive a release that adds an item kind to one collection without
//! renumbering anything.

/// What writing a diagram needs from it.
pub trait DiagramWriteHost {
    /// Whether the stream is in a state that can be written to at all.
    fn stream_ready(&mut self) -> bool;

    /// Brings the diagram's derived state up to date before it is written.
    fn prepare(&mut self);

    /// How many items the first collection holds.
    fn primary_count(&mut self) -> usize;

    /// How many the second holds.
    fn secondary_count(&mut self) -> usize;

    /// Writes the total.
    fn write_count(&mut self, total: usize);

    /// Asks one item of the first collection to write itself.
    fn write_primary(&mut self, index: usize);

    /// Asks one of the second to write itself.
    fn write_secondary(&mut self, index: usize);
}

/// Implements Ghidra function `FUN_01cedda0` at `0x01CEDDA0`.
///
/// Writes the diagram's contents to a stream.
///
/// One count covers both collections and every item then writes itself, so
/// the reader never needs to be told where one collection ends — it works
/// that out from what each item says it is. A release that moves an item kind
/// from one collection to the other therefore costs nothing in the format.
///
/// The diagram is brought up to date first, so what is written is what the
/// user would see rather than whatever was last computed.
///
/// Returns the total written, or `None` when the stream refused.
pub fn write_diagram(host: &mut impl DiagramWriteHost) -> Option<usize> {
    if !host.stream_ready() {
        return None;
    }

    host.prepare();

    let primary = host.primary_count();
    let secondary = host.secondary_count();
    host.write_count(primary + secondary);

    for index in 0..primary {
        host.write_primary(index);
    }
    for index in 0..secondary {
        host.write_secondary(index);
    }

    Some(primary + secondary)
}

/// The file version below which two settings are read from the application
/// rather than from the file.
///
/// Part of Ghidra function `FUN_01ced260` at `0x01CED260`.
pub const AXIS_ADJUST_SETTINGS_VERSION: u16 = 0x21;

/// The application settings a file older than that version falls back to.
pub const ADJUST_X_AXES_SETTING: &str = "AdjustXAxes";
/// The second of the pair.
pub const ADJUST_Y_AXES_SETTING: &str = "AdjustYAxes";

/// What one item read back from a stream turned out to be.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReadItemKind {
    /// The class the reader constructs through a different entry point from
    /// all the others, and which joins the first collection directly.
    DirectlyListed,
    /// The class whose newly read item has one flag cleared afterwards.
    FlagCleared,
    /// The class that becomes the diagram's own principal item and may need
    /// the axis-adjust settings filled in.
    Principal,
    /// Anything else the registry recognises.
    Other,
}

/// Whether a file of one version carries the axis-adjust settings itself.
///
/// Part of Ghidra function `FUN_01ced260` at `0x01CED260`.
///
/// Older files do not, so the reader takes them from the application instead
/// — which means opening an old file adopts the settings in force now rather
/// than leaving them unset.
#[must_use]
pub const fn version_carries_axis_settings(version: u16) -> bool {
    version > AXIS_ADJUST_SETTINGS_VERSION
}

/// What reading a diagram needs from the stream around it.
pub trait DiagramReadHost {
    /// Whether the stream is in a state that can be read from at all.
    fn stream_ready(&mut self) -> bool;

    /// Empties the first collection before anything is read into it.
    fn clear_collections(&mut self);

    /// Reads how many items follow.
    fn read_count(&mut self) -> usize;

    /// Reads the next item's class marker and the file's version, and
    /// recognises the class.
    fn read_item_header(&mut self) -> Option<(ReadItemKind, u16)>;

    /// Constructs the item and adds it wherever its class belongs.
    fn construct_item(&mut self, kind: ReadItemKind);

    /// Clears the flag the one class wants cleared.
    fn clear_item_flag(&mut self);

    /// Attaches the principal item to the diagram.
    fn adopt_principal(&mut self);

    /// Fills the principal item's axis-adjust settings from the application.
    fn apply_application_axis_settings(&mut self, x_setting: &str, y_setting: &str);

    /// Brings every collection up to date once everything is read.
    fn refresh_collections(&mut self);

    /// Whether the diagram still has no current item.
    fn has_no_current_item(&mut self) -> bool;

    /// Gives it one from the application's defaults.
    fn adopt_default_item(&mut self);
}

/// Implements Ghidra function `FUN_01ced260` at `0x01CED260`.
///
/// Reads a diagram's contents back from a stream.
///
/// Each item names its own class and the registry decides what to build, so
/// the reader carries no table of its own — a class the registry does not
/// know is passed over rather than aborting the read, which is how a file
/// written by a newer release still opens.
///
/// Three classes get special handling once built, and the interesting one is
/// the principal item: a file written before the recovered version does not
/// carry the two axis-adjust settings, so they are taken from the application
/// instead. Opening an old file therefore adopts whatever those settings are
/// now rather than leaving them unset.
///
/// A diagram that ends up with no current item is given one from the
/// application's defaults, so a file that names none still opens onto
/// something.
///
/// Returns how many items were read, or `None` when the stream refused.
pub fn read_diagram(host: &mut impl DiagramReadHost) -> Option<usize> {
    let mut read = None;

    if host.stream_ready() {
        host.clear_collections();

        let count = host.read_count();
        read = Some(count);
        for _ in 0..count {
            let Some((kind, version)) = host.read_item_header() else {
                continue;
            };

            host.construct_item(kind);

            if kind == ReadItemKind::FlagCleared {
                host.clear_item_flag();
            }

            if kind == ReadItemKind::Principal {
                if !version_carries_axis_settings(version) {
                    host.apply_application_axis_settings(
                        ADJUST_X_AXES_SETTING,
                        ADJUST_Y_AXES_SETTING,
                    );
                }
                host.adopt_principal();
            }
        }
    }

    host.refresh_collections();

    if host.has_no_current_item() {
        host.adopt_default_item();
    }

    read
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum WriteStep {
        Prepare,
        Count(usize),
        Primary(usize),
        Secondary(usize),
    }

    #[derive(Debug, Default)]
    struct Writer {
        ready: bool,
        primary: usize,
        secondary: usize,
        steps: Vec<WriteStep>,
    }

    impl DiagramWriteHost for Writer {
        fn stream_ready(&mut self) -> bool {
            self.ready
        }

        fn prepare(&mut self) {
            self.steps.push(WriteStep::Prepare);
        }

        fn primary_count(&mut self) -> usize {
            self.primary
        }

        fn secondary_count(&mut self) -> usize {
            self.secondary
        }

        fn write_count(&mut self, total: usize) {
            self.steps.push(WriteStep::Count(total));
        }

        fn write_primary(&mut self, index: usize) {
            self.steps.push(WriteStep::Primary(index));
        }

        fn write_secondary(&mut self, index: usize) {
            self.steps.push(WriteStep::Secondary(index));
        }
    }

    #[test]
    fn one_count_covers_both_collections() {
        let mut host = Writer {
            ready: true,
            primary: 2,
            secondary: 3,
            ..Writer::default()
        };

        assert_eq!(write_diagram(&mut host), Some(5));
        assert_eq!(
            host.steps
                .iter()
                .filter(|step| matches!(step, WriteStep::Count(_)))
                .count(),
            1
        );
        assert!(host.steps.contains(&WriteStep::Count(5)));
    }

    #[test]
    fn the_diagram_is_brought_up_to_date_before_the_count_is_written() {
        let mut host = Writer {
            ready: true,
            primary: 1,
            ..Writer::default()
        };
        write_diagram(&mut host);

        assert_eq!(host.steps.first(), Some(&WriteStep::Prepare));
        assert_eq!(host.steps.get(1), Some(&WriteStep::Count(1)));
    }

    #[test]
    fn the_first_collection_is_written_before_the_second() {
        let mut host = Writer {
            ready: true,
            primary: 1,
            secondary: 1,
            ..Writer::default()
        };
        write_diagram(&mut host);

        assert_eq!(
            host.steps,
            [
                WriteStep::Prepare,
                WriteStep::Count(2),
                WriteStep::Primary(0),
                WriteStep::Secondary(0),
            ]
        );
    }

    #[test]
    fn a_stream_that_refuses_is_not_written_to_at_all() {
        let mut host = Writer::default();

        assert_eq!(write_diagram(&mut host), None);
        assert!(host.steps.is_empty());
    }

    #[test]
    fn an_empty_diagram_still_writes_its_count() {
        let mut host = Writer {
            ready: true,
            ..Writer::default()
        };

        assert_eq!(write_diagram(&mut host), Some(0));
        assert!(host.steps.contains(&WriteStep::Count(0)));
    }

    #[test]
    fn a_file_at_the_recovered_version_does_not_carry_the_settings() {
        assert!(!version_carries_axis_settings(AXIS_ADJUST_SETTINGS_VERSION));
        assert!(!version_carries_axis_settings(0));
        assert!(version_carries_axis_settings(
            AXIS_ADJUST_SETTINGS_VERSION + 1
        ));
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ReadStep {
        Clear,
        Construct(ReadItemKind),
        ClearFlag,
        Adopt,
        ApplySettings(String, String),
        Refresh,
        Default,
    }

    #[derive(Debug, Default)]
    struct Reader {
        ready: bool,
        items: Vec<Option<(ReadItemKind, u16)>>,
        cursor: usize,
        no_current: bool,
        steps: Vec<ReadStep>,
    }

    impl DiagramReadHost for Reader {
        fn stream_ready(&mut self) -> bool {
            self.ready
        }

        fn clear_collections(&mut self) {
            self.steps.push(ReadStep::Clear);
        }

        fn read_count(&mut self) -> usize {
            self.items.len()
        }

        fn read_item_header(&mut self) -> Option<(ReadItemKind, u16)> {
            let item = self.items.get(self.cursor).copied().flatten();
            self.cursor += 1;
            item
        }

        fn construct_item(&mut self, kind: ReadItemKind) {
            self.steps.push(ReadStep::Construct(kind));
        }

        fn clear_item_flag(&mut self) {
            self.steps.push(ReadStep::ClearFlag);
        }

        fn adopt_principal(&mut self) {
            self.steps.push(ReadStep::Adopt);
        }

        fn apply_application_axis_settings(&mut self, x_setting: &str, y_setting: &str) {
            self.steps.push(ReadStep::ApplySettings(
                x_setting.to_owned(),
                y_setting.to_owned(),
            ));
        }

        fn refresh_collections(&mut self) {
            self.steps.push(ReadStep::Refresh);
        }

        fn has_no_current_item(&mut self) -> bool {
            self.no_current
        }

        fn adopt_default_item(&mut self) {
            self.steps.push(ReadStep::Default);
        }
    }

    #[test]
    fn every_item_the_registry_knows_is_constructed() {
        let mut host = Reader {
            ready: true,
            items: vec![
                Some((ReadItemKind::Other, 0x30)),
                Some((ReadItemKind::DirectlyListed, 0x30)),
            ],
            ..Reader::default()
        };

        read_diagram(&mut host);

        assert!(
            host.steps
                .contains(&ReadStep::Construct(ReadItemKind::Other))
        );
        assert!(
            host.steps
                .contains(&ReadStep::Construct(ReadItemKind::DirectlyListed))
        );
    }

    #[test]
    fn a_class_the_registry_does_not_know_is_passed_over_rather_than_aborting() {
        let mut host = Reader {
            ready: true,
            items: vec![None, Some((ReadItemKind::Other, 0x30))],
            ..Reader::default()
        };

        read_diagram(&mut host);

        // The item after the unknown one is still read.
        assert!(
            host.steps
                .contains(&ReadStep::Construct(ReadItemKind::Other))
        );
    }

    #[test]
    fn an_old_file_takes_its_axis_settings_from_the_application() {
        let mut host = Reader {
            ready: true,
            items: vec![Some((ReadItemKind::Principal, 0x20))],
            ..Reader::default()
        };

        read_diagram(&mut host);

        assert!(host.steps.contains(&ReadStep::ApplySettings(
            "AdjustXAxes".to_owned(),
            "AdjustYAxes".to_owned()
        )));
    }

    #[test]
    fn a_new_enough_file_carries_them_itself() {
        let mut host = Reader {
            ready: true,
            items: vec![Some((ReadItemKind::Principal, 0x22))],
            ..Reader::default()
        };

        read_diagram(&mut host);

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, ReadStep::ApplySettings(..)))
        );
        assert!(host.steps.contains(&ReadStep::Adopt));
    }

    #[test]
    fn only_the_one_class_has_its_flag_cleared() {
        let mut host = Reader {
            ready: true,
            items: vec![
                Some((ReadItemKind::FlagCleared, 0x30)),
                Some((ReadItemKind::Other, 0x30)),
            ],
            ..Reader::default()
        };

        read_diagram(&mut host);

        assert_eq!(
            host.steps
                .iter()
                .filter(|step| **step == ReadStep::ClearFlag)
                .count(),
            1
        );
    }

    #[test]
    fn a_refused_stream_still_refreshes_and_still_gets_a_default_item() {
        let mut host = Reader {
            ready: false,
            no_current: true,
            ..Reader::default()
        };

        read_diagram(&mut host);

        assert_eq!(host.steps, [ReadStep::Refresh, ReadStep::Default]);
    }

    #[test]
    fn a_diagram_that_named_a_current_item_keeps_it() {
        let mut host = Reader {
            ready: true,
            no_current: false,
            ..Reader::default()
        };

        read_diagram(&mut host);

        assert!(!host.steps.contains(&ReadStep::Default));
    }

    #[test]
    fn a_read_reports_how_many_items_the_stream_named() {
        let mut host = Reader {
            ready: true,
            items: vec![Some((ReadItemKind::Other, 0x30)), None],
            ..Reader::default()
        };

        assert_eq!(read_diagram(&mut host), Some(2));
    }

    #[test]
    fn a_refused_stream_reports_nothing_read() {
        let mut host = Reader::default();

        assert_eq!(read_diagram(&mut host), None);
    }

    #[test]
    fn the_collections_are_cleared_before_anything_is_read_into_them() {
        let mut host = Reader {
            ready: true,
            items: vec![Some((ReadItemKind::Other, 0x30))],
            ..Reader::default()
        };

        read_diagram(&mut host);

        assert_eq!(host.steps.first(), Some(&ReadStep::Clear));
    }
}
