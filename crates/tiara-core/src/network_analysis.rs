//! Network Analysis settings and page-specific diagram masks.

pub const MAX_FREQUENCY_HZ: f64 = 1.0e50;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DiagramPage {
    Szyh,
    Reflection,
    Transmission,
}

impl DiagramPage {
    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::Szyh => 0,
            Self::Reflection => 1,
            Self::Transmission => 2,
        }
    }

    #[must_use]
    pub const fn option_bits(self) -> &'static [u16] {
        match self {
            Self::Szyh => &[0x0004, 0x0001, 0x0002, 0x0020, 0x0040],
            Self::Reflection => &[0x0080, 0x0100, 0x0002, 0x0020, 0x0040],
            Self::Transmission => &[0x0080, 0x0010, 0x0001, 0x0002, 0x0020, 0x0040],
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DiagramMask(u16);

impl DiagramMask {
    #[must_use]
    pub const fn new(bits: u16) -> Self {
        Self(bits)
    }

    #[must_use]
    pub const fn bits(self) -> u16 {
        self.0
    }

    #[must_use]
    pub const fn contains(self, bit: u16) -> bool {
        self.0 & bit != 0
    }

    pub const fn set(&mut self, bit: u16, selected: bool) {
        if selected {
            self.0 |= bit;
        } else {
            self.0 &= !bit;
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct NetworkDiagramOptions {
    pub szyh: DiagramMask,
    pub reflection: DiagramMask,
    pub transmission: DiagramMask,
}

impl NetworkDiagramOptions {
    #[must_use]
    pub const fn page(&self, page: DiagramPage) -> DiagramMask {
        match page {
            DiagramPage::Szyh => self.szyh,
            DiagramPage::Reflection => self.reflection,
            DiagramPage::Transmission => self.transmission,
        }
    }

    const fn page_mut(&mut self, page: DiagramPage) -> &mut DiagramMask {
        match page {
            DiagramPage::Szyh => &mut self.szyh,
            DiagramPage::Reflection => &mut self.reflection,
            DiagramPage::Transmission => &mut self.transmission,
        }
    }

    /// Rewrites only the recovered option bits for one active notebook page.
    #[must_use]
    pub fn apply_page_selections(&mut self, page: DiagramPage, selected: &[bool]) -> bool {
        let bits = page.option_bits();
        if selected.len() != bits.len() {
            return false;
        }
        let mask = self.page_mut(page);
        for (&bit, &is_selected) in bits.iter().zip(selected) {
            mask.set(bit, is_selected);
        }
        true
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct NetworkAnalysisSettings {
    pub start_frequency_hz: f64,
    pub end_frequency_hz: f64,
    pub point_count: u16,
    pub sweep_type_index: u8,
    pub mode_index: u8,
    pub diagrams: NetworkDiagramOptions,
}

/// Maps the seven recovered Network Analysis modes to notebook pages.
///
/// This supplies the pure mapping used by Ghidra function `FUN_01535e00` at
/// `0x01535E00`. An index outside zero through six has no page.
#[must_use]
pub const fn page_for_mode(mode_index: u8) -> Option<DiagramPage> {
    match mode_index {
        0..=3 | 6 => Some(DiagramPage::Szyh),
        4 => Some(DiagramPage::Transmission),
        5 => Some(DiagramPage::Reflection),
        _ => None,
    }
}

#[must_use]
pub const fn frequency_range_is_valid(start_hz: f64, end_hz: f64) -> bool {
    start_hz > 0.0 && end_hz > start_hz && end_hz <= MAX_FREQUENCY_HZ
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn recovered_modes_map_to_three_pages() {
        for mode in [0, 1, 2, 3, 6] {
            assert_eq!(page_for_mode(mode), Some(DiagramPage::Szyh));
        }
        assert_eq!(page_for_mode(4), Some(DiagramPage::Transmission));
        assert_eq!(page_for_mode(5), Some(DiagramPage::Reflection));
        assert_eq!(page_for_mode(7), None);
    }

    #[test]
    fn active_page_update_preserves_other_masks_and_unknown_bits() {
        let mut options = NetworkDiagramOptions {
            szyh: DiagramMask::new(0x8000),
            reflection: DiagramMask::new(0x1234),
            transmission: DiagramMask::new(0x5678),
        };
        assert!(
            options.apply_page_selections(DiagramPage::Szyh, &[true, false, true, false, true])
        );
        assert_eq!(options.szyh.bits(), 0x8000 | 0x0004 | 0x0002 | 0x0040);
        assert_eq!(options.reflection.bits(), 0x1234);
        assert_eq!(options.transmission.bits(), 0x5678);
    }

    #[test]
    fn frequency_range_uses_recovered_limits() {
        assert!(frequency_range_is_valid(1.0, MAX_FREQUENCY_HZ));
        assert!(!frequency_range_is_valid(0.0, 1.0));
        assert!(!frequency_range_is_valid(1.0, 1.0));
        assert!(!frequency_range_is_valid(1.0, f64::INFINITY));
    }
}
