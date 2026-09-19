//! Iced state for the recovered Schematic Editor instrument commands.
//!
//! The T&M menu opens one virtual instrument at a time. Every entry reaches the
//! same routine with two recovered numbers: which instrument, and whether it is
//! the simulated one or the real-time one driven by hardware.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The instruments the T&M menu opens.
///
/// The discriminants are the recovered instrument codes, which is what makes
/// the gaps between them visible: the codes are not contiguous, and two
/// instruments sit well past the rest.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum Instrument {
    /// `mnTM.Voltmeter` ("&Multimeter").
    Multimeter = 1,
    /// `mnTM.Oscilloscope` ("&Oscilloscope").
    Oscilloscope = 2,
    /// `mnTM.FunctionGenerator` ("&Function Generator").
    FunctionGenerator = 3,
    /// `mnTM.SignalAnalyzer` ("&Signal Analyzer").
    SignalAnalyzer = 4,
    /// `mnTM.LogicAnalyzer` ("&Logic Analyzer").
    LogicAnalyzer = 5,
    /// `mnTM.DigitalSignalGenerator` ("&Digital Signal Generator").
    DigitalSignalGenerator = 6,
    /// `mnTM.XYRecorder` ("&XY Recorder").
    XyRecorder = 7,
    /// `mnTM.NetworkAnalyzer` ("&Network Analyzer").
    NetworkAnalyzer = 8,
    /// `mnTM.DCPowerSupply` ("DC &Power Supply").
    DcPowerSupply = 0x0E,
    /// `mnTM.SpectrumAnalyzer` ("S&pectrum Analyzer").
    SpectrumAnalyzer = 0x0F,
    /// `mnTM.ParameterAnalyzer` ("Pa&rameter Analyzer").
    ParameterAnalyzer = 0x10,
}

/// Which of the two instruments behind one menu entry is opened.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InstrumentSource {
    /// The "Simulated" submenu entry, and the parent entry itself — clicking
    /// the parent opens the simulated instrument rather than the submenu's
    /// default.
    Simulated,
    /// The "Real-time" submenu entry, driven by attached hardware.
    RealTime,
}

pub trait InstrumentHost {
    /// Opens one instrument.
    fn open_instrument(&mut self, instrument: Instrument, source: InstrumentSource);
}

/// Opens one virtual instrument.
///
/// Implements Ghidra functions `FUN_01c903d0` at `0x01C903D0`, `FUN_01c903f0`
/// at `0x01C903F0`, `FUN_01c90410` at `0x01C90410`, `FUN_01c90430` at
/// `0x01C90430`, `FUN_01c90450` at `0x01C90450`, `FUN_01c90470` at
/// `0x01C90470`, `FUN_01c90490` at `0x01C90490`, `FUN_01c904b0` at
/// `0x01C904B0`, `FUN_01c904d0` at `0x01C904D0`, `FUN_01c904f0` at
/// `0x01C904F0`, `FUN_01c905f0` at `0x01C905F0`, `FUN_01c90610` at
/// `0x01C90610`, `FUN_01c90630` at `0x01C90630`, `FUN_01c90650` at
/// `0x01C90650`, `FUN_01c90670` at `0x01C90670`, `FUN_01c90690` at
/// `0x01C90690`, `FUN_01c906b0` at `0x01C906B0`, `FUN_01c906d0` at
/// `0x01C906D0`, `FUN_01c906f0` at `0x01C906F0`, and `FUN_01c9c390` at
/// `0x01C9C390`.
///
/// Every T&M entry is a one-line call into the same routine, so all twenty
/// share this flow. The parent menu entries are wired to the simulated handler
/// rather than to a chooser, which is why clicking "Oscilloscope" opens the
/// simulated one without asking.
///
/// The DC power supply and the parameter analyzer have no simulated/real-time
/// pair; the recovered handlers still pass the real-time flag for both.
pub fn open_instrument(
    instrument: Instrument,
    source: InstrumentSource,
    host: &mut impl InstrumentHost,
) {
    host.open_instrument(instrument, source);
}

/// The FPGA tool chains the download submenu exports to.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum FpgaToolchain {
    /// `mnExportToISE` ("Xilinx ISE..."), recovered code `0`.
    XilinxIse = 0,
    /// `mnExportToVivado` ("Xilinx Vivado..."), recovered code `1`.
    XilinxVivado = 1,
    /// `mnExportToQuartus` ("Intel Quartus..."), recovered code `2`.
    IntelQuartus = 2,
}

pub trait FpgaExportHost {
    /// Exports the circuit for one tool chain.
    fn export_to_fpga(&mut self, toolchain: FpgaToolchain);
}

/// Implements Ghidra functions `FUN_01c9b0c0` at `0x01C9B0C0`, `FUN_01c9b0f0`
/// at `0x01C9B0F0`, and `FUN_01c9b0d0` at `0x01C9B0D0`.
///
/// Exports the circuit to one FPGA tool chain.
///
/// The three entries differ only in the recovered code they pass, and the codes
/// do not follow the menu order — Vivado is `1` while Quartus, listed above it,
/// is `2`.
pub fn export_to_fpga(toolchain: FpgaToolchain, host: &mut impl FpgaExportHost) {
    host.export_to_fpga(toolchain);
}

/// How the breadboard view is opened.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BreadboardStart {
    /// `mnBreadBoardViewNew` ("New"), recovered code `0`.
    New,
    /// `mnBreadBoardViewContinue` ("Continue"), recovered code `1`.
    Continue,
}

pub trait BreadboardHost {
    /// Opens the breadboard view.
    fn open_breadboard(&mut self, start: BreadboardStart);
}

/// Implements Ghidra functions `FUN_01ca19d0` at `0x01CA19D0` and
/// `FUN_01ca19e0` at `0x01CA19E0`.
///
/// Opens the breadboard view, either fresh or on the layout already built.
///
/// The two entries pass nothing but the flag, so what "continue" restores is
/// decided entirely by the breadboard view rather than by the menu.
pub fn open_breadboard(start: BreadboardStart, host: &mut impl BreadboardHost) {
    host.open_breadboard(start);
}

pub trait LabExplorerHost {
    /// Starts the `LabExplorer` download for one menu entry.
    fn download_to_lab_explorer(&mut self);
}

/// Implements Ghidra function `FUN_01ca3ac0` at `0x01CA3AC0`.
///
/// Handles `MainMenu.mnTM.DownloadtoLabExplorer1.OnClick`
/// ("Download to `LabExplorer`...").
///
/// Starts the download. The recovered handler forwards its `Sender` rather than
/// the form, so the shared routine reads the entry that was clicked and not the
/// editor's state.
pub fn download_to_lab_explorer(host: &mut impl LabExplorerHost) {
    host.download_to_lab_explorer();
}

#[cfg(test)]
mod tests {
    use super::*;

    const ALL_INSTRUMENTS: [(Instrument, u8); 11] = [
        (Instrument::Multimeter, 1),
        (Instrument::Oscilloscope, 2),
        (Instrument::FunctionGenerator, 3),
        (Instrument::SignalAnalyzer, 4),
        (Instrument::LogicAnalyzer, 5),
        (Instrument::DigitalSignalGenerator, 6),
        (Instrument::XyRecorder, 7),
        (Instrument::NetworkAnalyzer, 8),
        (Instrument::DcPowerSupply, 0x0E),
        (Instrument::SpectrumAnalyzer, 0x0F),
        (Instrument::ParameterAnalyzer, 0x10),
    ];

    #[derive(Debug, Default)]
    struct Instruments {
        opened: Vec<(Instrument, InstrumentSource)>,
    }

    impl InstrumentHost for Instruments {
        fn open_instrument(&mut self, instrument: Instrument, source: InstrumentSource) {
            self.opened.push((instrument, source));
        }
    }

    #[test]
    fn the_instrument_codes_match_the_recovered_ones() {
        for (instrument, code) in ALL_INSTRUMENTS {
            assert_eq!(instrument as u8, code);
        }
    }

    #[test]
    fn both_sources_reach_the_same_instrument() {
        let mut host = Instruments::default();

        open_instrument(
            Instrument::Oscilloscope,
            InstrumentSource::Simulated,
            &mut host,
        );
        open_instrument(
            Instrument::Oscilloscope,
            InstrumentSource::RealTime,
            &mut host,
        );

        assert_eq!(
            host.opened,
            [
                (Instrument::Oscilloscope, InstrumentSource::Simulated),
                (Instrument::Oscilloscope, InstrumentSource::RealTime),
            ]
        );
    }

    #[test]
    fn every_instrument_can_be_opened() {
        let mut host = Instruments::default();

        for (instrument, _) in ALL_INSTRUMENTS {
            open_instrument(instrument, InstrumentSource::Simulated, &mut host);
        }

        assert_eq!(host.opened.len(), ALL_INSTRUMENTS.len());
    }

    #[derive(Debug, Default)]
    struct Fpga {
        exports: Vec<FpgaToolchain>,
    }

    impl FpgaExportHost for Fpga {
        fn export_to_fpga(&mut self, toolchain: FpgaToolchain) {
            self.exports.push(toolchain);
        }
    }

    #[test]
    fn the_toolchain_codes_do_not_follow_the_menu_order() {
        assert_eq!(FpgaToolchain::XilinxIse as u8, 0);
        assert_eq!(FpgaToolchain::XilinxVivado as u8, 1);
        assert_eq!(FpgaToolchain::IntelQuartus as u8, 2);
    }

    #[test]
    fn each_toolchain_entry_exports_for_itself() {
        let mut host = Fpga::default();

        export_to_fpga(FpgaToolchain::XilinxIse, &mut host);
        export_to_fpga(FpgaToolchain::IntelQuartus, &mut host);
        export_to_fpga(FpgaToolchain::XilinxVivado, &mut host);

        assert_eq!(
            host.exports,
            [
                FpgaToolchain::XilinxIse,
                FpgaToolchain::IntelQuartus,
                FpgaToolchain::XilinxVivado,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Breadboard {
        opened: Vec<BreadboardStart>,
    }

    impl BreadboardHost for Breadboard {
        fn open_breadboard(&mut self, start: BreadboardStart) {
            self.opened.push(start);
        }
    }

    #[test]
    fn the_breadboard_opens_fresh_or_continued() {
        let mut host = Breadboard::default();

        open_breadboard(BreadboardStart::New, &mut host);
        open_breadboard(BreadboardStart::Continue, &mut host);

        assert_eq!(
            host.opened,
            [BreadboardStart::New, BreadboardStart::Continue]
        );
    }

    #[derive(Debug, Default)]
    struct LabExplorer {
        downloads: usize,
    }

    impl LabExplorerHost for LabExplorer {
        fn download_to_lab_explorer(&mut self) {
            self.downloads += 1;
        }
    }

    #[test]
    fn the_lab_explorer_entry_starts_one_download() {
        let mut host = LabExplorer::default();

        download_to_lab_explorer(&mut host);

        assert_eq!(host.downloads, 1);
    }
}

/// How far apart one instrument's slots sit in the open-window table.
///
/// Part of Ghidra function `FUN_01c8f600` at `0x01C8F600`.
pub const INSTRUMENT_SLOT_STRIDE: usize = 0x40;

/// How far apart the two sources sit within one instrument's slots.
pub const SOURCE_SLOT_STRIDE: usize = 0x20;

/// How far apart one source's windows sit.
pub const WINDOW_SLOT_STRIDE: usize = 8;

/// The offset the table is indexed from.
///
/// The instrument codes start at one rather than zero and the table has a
/// header, and this bias absorbs both — which is why the arithmetic is worth
/// keeping literally rather than being rewritten as a clean index.
pub const SLOT_TABLE_BIAS: usize = 0x38;

impl InstrumentSource {
    /// The index the recovered table is built around.
    ///
    /// Part of Ghidra function `FUN_01c8f600` at `0x01C8F600`.
    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::Simulated => 0,
            Self::RealTime => 1,
        }
    }
}

/// Where one instrument window's slot sits in the open-window table.
///
/// Part of Ghidra function `FUN_01c8f600` at `0x01C8F600`.
///
/// The table is two-dimensional — instrument by source — with room for
/// several windows of each, so one instrument can have a simulated and a
/// real-time window open at once without either standing in for the other.
#[must_use]
pub const fn preset_slot_offset(
    instrument: Instrument,
    source: InstrumentSource,
    window: usize,
) -> usize {
    (instrument as usize) * INSTRUMENT_SLOT_STRIDE
        + source.index() * SOURCE_SLOT_STRIDE
        + window * WINDOW_SLOT_STRIDE
        - SLOT_TABLE_BIAS
}

/// Pulls one numbered section out of the saved-settings blob.
///
/// Part of Ghidra function `FUN_01c8f600` at `0x01C8F600`.
///
/// The blob holds every preset run together, each opened by its own number
/// followed by a separator, so a section runs from its own marker to the
/// marker of the one after it — and the last section runs to the end because
/// there is no next marker to stop at. Numbering the markers rather than
/// counting separators is what lets a preset's own text contain the
/// separator.
#[must_use]
pub fn preset_section(blob: &str, index: usize, separator: &str) -> Option<String> {
    let marker = format!("{index}{separator}");
    let start = blob.find(&marker)? + marker.len();

    let next = format!("{}{separator}", index + 1);
    let end = blob[start..]
        .find(&next)
        .map_or(blob.len(), |offset| start + offset);

    Some(blob[start..end].to_owned())
}

/// What opening a saved instrument preset needs from the editor.
pub trait InstrumentPresetHost {
    /// The saved settings for one instrument and source, and how many presets
    /// they hold.
    fn saved_presets(
        &mut self,
        instrument: Instrument,
        source: InstrumentSource,
    ) -> Option<(String, usize)>;

    /// The separator the blob's markers use.
    fn preset_separator(&mut self) -> String;

    /// Which preset is currently in force.
    fn current_preset(&mut self, instrument: Instrument, source: InstrumentSource) -> usize;

    /// The instrument's own menu caption, which the picker is titled with.
    fn instrument_caption(&mut self, instrument: Instrument) -> Option<String>;

    /// Shows the picker and returns what the user chose.
    fn choose_preset(
        &mut self,
        caption: Option<&str>,
        presets: &[String],
        current: usize,
    ) -> Option<usize>;

    /// Whether the instrument already has a window open for this source.
    fn window_open(&mut self, instrument: Instrument, source: InstrumentSource) -> bool;

    /// Opens one, under the chosen preset.
    fn open_window(&mut self, instrument: Instrument, source: InstrumentSource, preset: usize);
}

/// What opening a preset came to.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PresetOutcome {
    /// There were no saved presets at all.
    NoPresets,
    /// The user closed the picker.
    Cancelled,
    /// A preset was chosen and a window opened for it.
    Opened(usize),
    /// A preset was chosen, but a window was already open.
    AlreadyOpen(usize),
}

/// Implements Ghidra function `FUN_01c8f600` at `0x01C8F600`.
///
/// Opens one of an instrument's saved presets.
///
/// The picker is titled with the instrument's own menu caption rather than a
/// caption of its own, so the dialog says what the user clicked to get there.
/// An instrument the recovered switch does not name gets no caption at all
/// and the picker still opens — the caption is a nicety, not a requirement.
///
/// A chosen preset only opens a window when one is not already open for that
/// instrument *and that source*: the simulated and real-time windows are
/// separate slots, so opening a preset for one does not disturb the other.
///
/// The chosen index is recorded before the window is opened, so the window
/// finds the preset already in force rather than being told about it
/// afterwards.
pub fn open_instrument_preset(
    host: &mut impl InstrumentPresetHost,
    instrument: Instrument,
    source: InstrumentSource,
) -> PresetOutcome {
    let Some((blob, count)) = host.saved_presets(instrument, source) else {
        return PresetOutcome::NoPresets;
    };
    if count == 0 {
        return PresetOutcome::NoPresets;
    }

    let separator = host.preset_separator();
    let presets: Vec<String> = (0..count)
        .map(|index| preset_section(&blob, index, &separator).unwrap_or_default())
        .collect();

    let current = host.current_preset(instrument, source);
    let caption = host.instrument_caption(instrument);

    let Some(chosen) = host.choose_preset(caption.as_deref(), &presets, current) else {
        return PresetOutcome::Cancelled;
    };
    if chosen >= count {
        return PresetOutcome::Cancelled;
    }

    if host.window_open(instrument, source) {
        return PresetOutcome::AlreadyOpen(chosen);
    }

    host.open_window(instrument, source, chosen);
    PresetOutcome::Opened(chosen)
}

#[cfg(test)]
mod preset_tests {
    use super::*;

    #[test]
    fn the_two_sources_get_separate_slots_for_the_same_instrument() {
        let simulated =
            preset_slot_offset(Instrument::Oscilloscope, InstrumentSource::Simulated, 0);
        let real_time = preset_slot_offset(Instrument::Oscilloscope, InstrumentSource::RealTime, 0);

        assert_ne!(simulated, real_time);
        assert_eq!(real_time - simulated, SOURCE_SLOT_STRIDE);
    }

    #[test]
    fn each_instrument_gets_its_own_block_of_slots() {
        let first = preset_slot_offset(Instrument::Multimeter, InstrumentSource::Simulated, 0);
        let second = preset_slot_offset(Instrument::Oscilloscope, InstrumentSource::Simulated, 0);

        assert_eq!(second - first, INSTRUMENT_SLOT_STRIDE);
    }

    #[test]
    fn the_first_instruments_first_slot_lands_where_the_bias_puts_it() {
        assert_eq!(
            preset_slot_offset(Instrument::Multimeter, InstrumentSource::Simulated, 0),
            0x40 - 0x38
        );
        assert_eq!(
            preset_slot_offset(Instrument::ParameterAnalyzer, InstrumentSource::RealTime, 0),
            0x10 * 0x40 + 0x20 - 0x38
        );
    }

    #[test]
    fn successive_windows_of_one_source_sit_one_pointer_apart() {
        let first = preset_slot_offset(Instrument::XyRecorder, InstrumentSource::Simulated, 0);
        let second = preset_slot_offset(Instrument::XyRecorder, InstrumentSource::Simulated, 1);

        assert_eq!(second - first, WINDOW_SLOT_STRIDE);
    }

    const BLOB: &str = "0=first preset\n1=second preset\n2=third preset\n";

    #[test]
    fn a_section_runs_from_its_own_marker_to_the_next() {
        assert_eq!(
            preset_section(BLOB, 0, "=").as_deref(),
            Some("first preset\n")
        );
        assert_eq!(
            preset_section(BLOB, 1, "=").as_deref(),
            Some("second preset\n")
        );
    }

    #[test]
    fn the_last_section_runs_to_the_end_because_nothing_stops_it() {
        assert_eq!(
            preset_section(BLOB, 2, "=").as_deref(),
            Some("third preset\n")
        );
    }

    #[test]
    fn a_preset_may_contain_the_separator_itself() {
        let blob = "0=a=b=c\n1=next\n";

        assert_eq!(preset_section(blob, 0, "=").as_deref(), Some("a=b=c\n"));
    }

    #[test]
    fn a_marker_that_is_not_there_yields_nothing() {
        assert_eq!(preset_section(BLOB, 9, "="), None);
    }

    #[derive(Debug, Default)]
    struct Editor {
        blob: Option<(String, usize)>,
        current: usize,
        caption: Option<String>,
        chosen: Option<usize>,
        already_open: bool,
        offered: Option<(Option<String>, Vec<String>, usize)>,
        opened: Option<(Instrument, InstrumentSource, usize)>,
    }

    impl Editor {
        fn ready() -> Self {
            Self {
                blob: Some((BLOB.to_owned(), 3)),
                caption: Some("&Oscilloscope".to_owned()),
                chosen: Some(1),
                ..Self::default()
            }
        }
    }

    impl InstrumentPresetHost for Editor {
        fn saved_presets(
            &mut self,
            _instrument: Instrument,
            _source: InstrumentSource,
        ) -> Option<(String, usize)> {
            self.blob.clone()
        }

        fn preset_separator(&mut self) -> String {
            "=".to_owned()
        }

        fn current_preset(&mut self, _instrument: Instrument, _source: InstrumentSource) -> usize {
            self.current
        }

        fn instrument_caption(&mut self, _instrument: Instrument) -> Option<String> {
            self.caption.clone()
        }

        fn choose_preset(
            &mut self,
            caption: Option<&str>,
            presets: &[String],
            current: usize,
        ) -> Option<usize> {
            self.offered = Some((caption.map(str::to_owned), presets.to_vec(), current));
            self.chosen
        }

        fn window_open(&mut self, _instrument: Instrument, _source: InstrumentSource) -> bool {
            self.already_open
        }

        fn open_window(&mut self, instrument: Instrument, source: InstrumentSource, preset: usize) {
            self.opened = Some((instrument, source, preset));
        }
    }

    #[test]
    fn an_instrument_with_no_saved_presets_opens_nothing() {
        let mut host = Editor::default();

        assert_eq!(
            open_instrument_preset(
                &mut host,
                Instrument::Oscilloscope,
                InstrumentSource::Simulated
            ),
            PresetOutcome::NoPresets
        );
        assert!(host.offered.is_none());
    }

    #[test]
    fn a_blob_holding_no_presets_is_the_same_as_none() {
        let mut host = Editor {
            blob: Some((String::new(), 0)),
            ..Editor::ready()
        };

        assert_eq!(
            open_instrument_preset(
                &mut host,
                Instrument::Oscilloscope,
                InstrumentSource::Simulated
            ),
            PresetOutcome::NoPresets
        );
    }

    #[test]
    fn the_picker_is_titled_with_the_instruments_own_menu_caption() {
        let mut host = Editor::ready();
        open_instrument_preset(
            &mut host,
            Instrument::Oscilloscope,
            InstrumentSource::Simulated,
        );

        let (caption, presets, current) = host.offered.expect("the picker opened");
        assert_eq!(caption.as_deref(), Some("&Oscilloscope"));
        assert_eq!(presets.len(), 3);
        assert_eq!(current, 0);
    }

    #[test]
    fn an_instrument_the_switch_does_not_name_still_gets_a_picker() {
        let mut host = Editor {
            caption: None,
            ..Editor::ready()
        };

        assert_eq!(
            open_instrument_preset(
                &mut host,
                Instrument::Oscilloscope,
                InstrumentSource::Simulated
            ),
            PresetOutcome::Opened(1)
        );
        let (caption, _, _) = host.offered.expect("the picker opened");
        assert_eq!(caption, None);
    }

    #[test]
    fn a_chosen_preset_opens_a_window_for_that_source() {
        let mut host = Editor::ready();

        assert_eq!(
            open_instrument_preset(
                &mut host,
                Instrument::Oscilloscope,
                InstrumentSource::RealTime
            ),
            PresetOutcome::Opened(1)
        );
        assert_eq!(
            host.opened,
            Some((Instrument::Oscilloscope, InstrumentSource::RealTime, 1))
        );
    }

    #[test]
    fn a_window_already_open_is_left_alone() {
        let mut host = Editor {
            already_open: true,
            ..Editor::ready()
        };

        assert_eq!(
            open_instrument_preset(
                &mut host,
                Instrument::Oscilloscope,
                InstrumentSource::Simulated
            ),
            PresetOutcome::AlreadyOpen(1)
        );
        assert!(host.opened.is_none());
    }

    #[test]
    fn closing_the_picker_opens_nothing() {
        let mut host = Editor {
            chosen: None,
            ..Editor::ready()
        };

        assert_eq!(
            open_instrument_preset(
                &mut host,
                Instrument::Oscilloscope,
                InstrumentSource::Simulated
            ),
            PresetOutcome::Cancelled
        );
        assert!(host.opened.is_none());
    }

    #[test]
    fn a_chosen_index_past_the_end_is_refused_rather_than_opened() {
        let mut host = Editor {
            chosen: Some(9),
            ..Editor::ready()
        };

        assert_eq!(
            open_instrument_preset(
                &mut host,
                Instrument::Oscilloscope,
                InstrumentSource::Simulated
            ),
            PresetOutcome::Cancelled
        );
        assert!(host.opened.is_none());
    }
}
