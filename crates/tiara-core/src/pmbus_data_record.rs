//! Owned `PMBus` data-file record reset behavior.
//!
//! Rust ownership is the complete library mapping for this transition:
//! `Vec::clear` drops record entries, `Option::take` releases the payload, and
//! `String` operations restore the recovered names. No serialization, GUI, or
//! device crate is needed.

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ClearOutcome {
    Missing,
    AlreadyClear,
    Cleared,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PmbusDataFileRecord<Entry, Payload> {
    pub name: String,
    pub selected_path: String,
    pub flags: u32,
    pub entries: Vec<Entry>,
    pub payload: Option<Payload>,
}

impl<Entry, Payload> Default for PmbusDataFileRecord<Entry, Payload> {
    fn default() -> Self {
        Self {
            name: String::from("noname"),
            selected_path: String::new(),
            flags: 0,
            entries: Vec::new(),
            payload: None,
        }
    }
}

impl<Entry, Payload> PmbusDataFileRecord<Entry, Payload> {
    /// Clears an associated `PMBus` data-file record immediately.
    ///
    /// Reimplements Ghidra function `FUN_01773d60` at `0x01773D60`. It zeros
    /// the nested flags and applies the shared record reset: name becomes
    /// `noname`, the selected path and record-owned entries are cleared, and
    /// the owned payload is dropped. The transition is live and is not staged
    /// for a later dialog result, so Cancel cannot restore released state.
    pub fn clear(&mut self) -> ClearOutcome {
        let outcome = if self.is_clear() {
            ClearOutcome::AlreadyClear
        } else {
            ClearOutcome::Cleared
        };
        self.flags = 0;
        self.name.clear();
        self.name.push_str("noname");
        self.selected_path.clear();
        self.entries.clear();
        drop(self.payload.take());
        outcome
    }

    #[must_use]
    pub fn is_clear(&self) -> bool {
        self.flags == 0
            && self.name == "noname"
            && self.selected_path.is_empty()
            && self.entries.is_empty()
            && self.payload.is_none()
    }
}

/// Clears an optional associated `PMBus` record.
///
/// This is the caller-side no-record guard around `FUN_01773d60` at
/// `0x01773D60`. A missing association is a silent no-op.
pub fn clear_associated_record<Entry, Payload>(
    record: Option<&mut PmbusDataFileRecord<Entry, Payload>>,
) -> ClearOutcome {
    record.map_or(ClearOutcome::Missing, PmbusDataFileRecord::clear)
}

#[cfg(test)]
mod tests {
    use std::cell::Cell;
    use std::rc::Rc;

    use super::*;

    #[derive(Debug)]
    struct DropProbe(Rc<Cell<u32>>);

    impl Drop for DropProbe {
        fn drop(&mut self) {
            self.0.set(self.0.get().saturating_add(1));
        }
    }

    #[test]
    fn clear_resets_flags_names_and_all_owned_state() {
        let drops = Rc::new(Cell::new(0));
        let mut record = PmbusDataFileRecord {
            name: String::from("TPS546D24"),
            selected_path: String::from("missing.txt"),
            flags: 0x1_000,
            entries: vec![DropProbe(Rc::clone(&drops)), DropProbe(Rc::clone(&drops))],
            payload: Some(DropProbe(Rc::clone(&drops))),
        };

        assert_eq!(record.clear(), ClearOutcome::Cleared);
        assert!(record.is_clear());
        assert_eq!(record.name, "noname");
        assert_eq!(record.flags, 0);
        assert_eq!(drops.get(), 3);
    }

    #[test]
    fn repeated_clear_is_observably_unchanged_and_drops_nothing_more() {
        let drops = Rc::new(Cell::new(0));
        let mut record = PmbusDataFileRecord::<DropProbe, DropProbe>::default();
        assert_eq!(record.clear(), ClearOutcome::AlreadyClear);
        assert_eq!(record.clear(), ClearOutcome::AlreadyClear);
        assert_eq!(drops.get(), 0);
    }

    #[test]
    fn missing_associated_record_is_a_silent_noop() {
        let outcome = clear_associated_record::<u8, Vec<u8>>(None);
        assert_eq!(outcome, ClearOutcome::Missing);
    }

    #[test]
    fn clear_mutates_the_live_record_before_any_later_dialog_decision() {
        let mut record = PmbusDataFileRecord {
            name: String::from("configured"),
            selected_path: String::from("old.dat"),
            flags: 7,
            entries: vec![1_u8, 2],
            payload: Some(vec![3_u8, 4]),
        };
        let outcome = clear_associated_record(Some(&mut record));
        let later_dialog_cancelled = true;

        assert_eq!(outcome, ClearOutcome::Cleared);
        assert!(later_dialog_cancelled);
        assert!(record.is_clear());
    }
}
