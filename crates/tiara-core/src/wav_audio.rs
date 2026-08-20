//! Portable 16-bit PCM `WAV` construction and typed playback boundaries.
//!
//! The standard library supplies byte encoding, buffered sample ownership,
//! file creation, temporary-directory lookup, and `Write`. `num-traits`
//! supplies checked conversions from recovered floating-point calculations.
//! A platform audio crate is not used: the recovered live-audio and Windows
//! `MCI` work stays behind narrow traits so this core module has no device or
//! operating-system coupling.

use std::fs::File;
use std::io::{self, Write};
use std::path::{Path, PathBuf};
use std::time::Duration;

use num_traits::ToPrimitive;

pub const PCM_BITS_PER_SAMPLE: u16 = 16;
pub const MINIMUM_BUFFER_FRAMES: u32 = 0x3000;
pub const MINIMUM_RING_BUFFER_FRAMES: u32 = 0x8000;
pub const POSITION_TIMER_PERIOD: Duration = Duration::from_millis(200);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u16)]
pub enum ChannelCount {
    Mono = 1,
    Stereo = 2,
}

impl ChannelCount {
    #[must_use]
    pub const fn from_requested(requested: u16) -> Self {
        if requested <= 1 {
            Self::Mono
        } else {
            Self::Stereo
        }
    }

    #[must_use]
    pub const fn get(self) -> u16 {
        match self {
            Self::Mono => 1,
            Self::Stereo => 2,
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum AccumulatorMode {
    #[default]
    Offline,
    Live,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PcmFormat {
    pub channels: ChannelCount,
    pub sample_rate: u32,
    pub bits_per_sample: u16,
}

/// Constructs a 44-byte uncompressed PCM `RIFF`/`WAVE` header.
///
/// Reimplements Ghidra function `FUN_016d2470` at `0x016D2470`. The sample
/// count is the count of stored channel values, not the count of frames.
#[must_use]
pub fn pcm_wave_header(
    sample_value_count: u32,
    sample_rate: u32,
    channels: ChannelCount,
) -> [u8; 44] {
    let channel_count = channels.get();
    let block_alignment = channel_count.wrapping_mul(2);
    let byte_rate = sample_rate.wrapping_mul(u32::from(block_alignment));
    let data_size = sample_value_count.wrapping_mul(2);

    let mut header = [0_u8; 44];
    header[0..4].copy_from_slice(b"RIFF");
    write_u32(&mut header, 4, data_size.wrapping_add(36));
    header[8..12].copy_from_slice(b"WAVE");
    header[12..16].copy_from_slice(b"fmt ");
    write_u32(&mut header, 16, 16);
    write_u16(&mut header, 20, 1);
    write_u16(&mut header, 22, channel_count);
    write_u32(&mut header, 24, sample_rate);
    write_u32(&mut header, 28, byte_rate);
    write_u16(&mut header, 32, block_alignment);
    write_u16(&mut header, 34, PCM_BITS_PER_SAMPLE);
    header[36..40].copy_from_slice(b"data");
    write_u32(&mut header, 40, data_size);
    header
}

pub trait LivePcmSink {
    type Error;

    /// Configures the live sink for the recovered PCM format and buffer size.
    ///
    /// # Errors
    ///
    /// Returns the sink-specific configuration error.
    fn configure(
        &mut self,
        format: PcmFormat,
        buffer_sample_capacity: u32,
    ) -> Result<(), Self::Error>;

    /// Stops live output.
    ///
    /// # Errors
    ///
    /// Returns the sink-specific stop error.
    fn stop(&mut self) -> Result<(), Self::Error>;

    /// Waits until the live buffer has drained.
    ///
    /// # Errors
    ///
    /// Returns the sink-specific drain error.
    fn wait_until_drained(&mut self) -> Result<(), Self::Error>;

    fn release(&mut self);
}

#[derive(Debug, Clone, PartialEq)]
pub struct PcmAccumulator {
    format: PcmFormat,
    mode: AccumulatorMode,
    buffer_threshold_frames: u32,
    ring_buffer_sample_capacity: u32,
    last_sample_index: i64,
    previous_time_seconds: f64,
    previous_values: [f64; 2],
    samples: Vec<i16>,
}

impl PcmAccumulator {
    /// Initializes a mono or stereo PCM sample accumulator.
    ///
    /// Reimplements Ghidra function `FUN_016d6770` at `0x016D6770`. Requested
    /// channels are clamped to one or two. Sample rate is stored unchanged.
    /// The buffer threshold is `round(sample_rate * sizing_factor)`, with a
    /// 12,288-frame minimum. Live-device construction is delegated through
    /// [`LivePcmSink`] instead of adding a platform backend to core.
    #[must_use]
    pub fn new(
        requested_channels: u16,
        sample_rate: u32,
        sizing_factor: f64,
        mode: AccumulatorMode,
    ) -> Self {
        let channels = ChannelCount::from_requested(requested_channels);
        let requested_threshold = rounded_u32(f64::from(sample_rate) * sizing_factor);
        let buffer_threshold_frames = requested_threshold.max(MINIMUM_BUFFER_FRAMES);
        let ring_buffer_frames = buffer_threshold_frames.max(MINIMUM_RING_BUFFER_FRAMES);
        let ring_buffer_sample_capacity = ring_buffer_frames
            .wrapping_mul(u32::from(channels.get()))
            .wrapping_add(2);
        Self {
            format: PcmFormat {
                channels,
                sample_rate,
                bits_per_sample: PCM_BITS_PER_SAMPLE,
            },
            mode,
            buffer_threshold_frames,
            ring_buffer_sample_capacity,
            last_sample_index: 0,
            previous_time_seconds: 0.0,
            previous_values: [0.0; 2],
            samples: Vec::new(),
        }
    }

    /// Configures the typed live-output boundary for this accumulator.
    ///
    /// This is the platform-neutral adapter portion of `FUN_016d6770` at
    /// `0x016D6770`. Offline accumulators do not configure a live sink.
    ///
    /// # Errors
    ///
    /// Returns the sink error when live output cannot be configured.
    pub fn configure_live<S: LivePcmSink>(&self, sink: &mut S) -> Result<(), S::Error> {
        if self.mode == AccumulatorMode::Live {
            sink.configure(self.format, self.ring_buffer_sample_capacity)?;
        }
        Ok(())
    }

    /// Appends clipped signed 16-bit PCM channel values.
    ///
    /// Reimplements Ghidra function `FUN_016d6ae0` at `0x016D6AE0`. Each
    /// value is multiplied by 32,768, rounded, and saturated to the signed
    /// 16-bit range. Mono stores only the first value; stereo interleaves both.
    pub fn append_frame(&mut self, first: f64, second: f64) {
        self.samples.push(clip_pcm_sample(first));
        if self.format.channels == ChannelCount::Stereo {
            self.samples.push(clip_pcm_sample(second));
        }
    }

    /// Resamples one time-stamped curve row onto the uniform sample grid.
    ///
    /// Reimplements Ghidra function `FUN_016d6ca0` at `0x016D6CA0`. New
    /// integer sample positions are emitted after the prior rounded index and
    /// through the current rounded index. The second-channel expression keeps
    /// the recovered use of the previous second-channel value in its time-like
    /// ratio; it is not replaced with assumed symmetric interpolation.
    pub fn resample_point(&mut self, time_seconds: f64, first: f64, second: f64) {
        let sample_index = rounded_i64(time_seconds * f64::from(self.format.sample_rate));
        let start_index = self.last_sample_index.saturating_add(1);
        if start_index <= sample_index {
            for index in start_index..=sample_index {
                let sample_time =
                    index.to_f64().unwrap_or(0.0) / f64::from(self.format.sample_rate);
                let elapsed = time_seconds - self.previous_time_seconds;
                let values = if elapsed >= 1.0e-50 {
                    [
                        self.previous_values[0]
                            + (first - self.previous_values[0])
                                * (sample_time - self.previous_time_seconds)
                                / elapsed,
                        self.previous_values[1]
                            + (second - self.previous_values[1])
                                * (sample_time - self.previous_values[1])
                                / (time_seconds - self.previous_values[1]),
                    ]
                } else {
                    [first, second]
                };
                self.append_frame(values[0], values[1]);
            }
        }
        self.last_sample_index = sample_index;
        self.previous_time_seconds = time_seconds;
        self.previous_values = [first, second];
    }

    /// Writes the offline `WAV` output and releases its buffered samples.
    ///
    /// Reimplements the stream-output branch of Ghidra function
    /// `FUN_016d6890` at `0x016D6890`. The header and complete little-endian
    /// PCM block are written before the sample buffer is cleared.
    ///
    /// # Errors
    ///
    /// Returns an I/O error for live mode, an oversized sample buffer, or a
    /// failed header or sample write. A failure does not clear the buffer.
    pub fn finish_to_writer(&mut self, writer: &mut impl Write) -> io::Result<()> {
        if self.mode != AccumulatorMode::Offline {
            return Err(io::Error::new(
                io::ErrorKind::InvalidInput,
                "a live accumulator cannot be finalized as a WAV stream",
            ));
        }
        let sample_value_count = u32::try_from(self.samples.len()).map_err(|_| {
            io::Error::new(
                io::ErrorKind::InvalidData,
                "the PCM sample buffer exceeds the WAV size field",
            )
        })?;
        let header = pcm_wave_header(
            sample_value_count,
            self.format.sample_rate,
            self.format.channels,
        );
        let mut sample_bytes = Vec::with_capacity(self.samples.len().saturating_mul(2));
        for sample in &self.samples {
            sample_bytes.extend_from_slice(&sample.to_le_bytes());
        }
        writer.write_all(&header)?;
        writer.write_all(&sample_bytes)?;
        self.samples.clear();
        Ok(())
    }

    /// Creates or replaces a `WAV` file and releases its buffered samples.
    ///
    /// This is the file-output branch of `FUN_016d6890` at `0x016D6890`.
    /// `None` selects `temp.wav` in [`std::env::temp_dir`].
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the file cannot be created, written, or
    /// flushed, or when the accumulator cannot produce offline output.
    pub fn finish_to_path(&mut self, path: Option<&Path>) -> io::Result<PathBuf> {
        let path = path.map_or_else(|| std::env::temp_dir().join("temp.wav"), Path::to_path_buf);
        let mut file = File::create(&path)?;
        self.finish_to_writer(&mut file)?;
        file.flush()?;
        Ok(path)
    }

    /// Stops, drains, and releases the typed live-output boundary.
    ///
    /// This is the live-output branch of `FUN_016d6890` at `0x016D6890`.
    /// Rust owns the sample memory and clears it after normal sink cleanup.
    ///
    /// # Errors
    ///
    /// Returns the first stop or drain error. The sink is released only after
    /// both operations succeed.
    pub fn finish_live<S: LivePcmSink>(&mut self, sink: &mut S) -> Result<(), S::Error> {
        sink.stop()?;
        sink.wait_until_drained()?;
        sink.release();
        self.samples.clear();
        Ok(())
    }

    #[must_use]
    pub const fn format(&self) -> PcmFormat {
        self.format
    }

    #[must_use]
    pub const fn mode(&self) -> AccumulatorMode {
        self.mode
    }

    #[must_use]
    pub const fn buffer_threshold_frames(&self) -> u32 {
        self.buffer_threshold_frames
    }

    #[must_use]
    pub const fn ring_buffer_sample_capacity(&self) -> u32 {
        self.ring_buffer_sample_capacity
    }

    #[must_use]
    pub fn samples(&self) -> &[i16] {
        &self.samples
    }
}

#[must_use]
pub fn clip_pcm_sample(value: f64) -> i16 {
    let scaled = value * 32_768.0;
    if scaled > f64::from(i16::MAX) {
        return i16::MAX;
    }
    if scaled < f64::from(i16::MIN) {
        return i16::MIN;
    }
    scaled.round().to_i16().unwrap_or_default()
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PlaybackDeviceId(pub u32);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PlaybackNotification(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PlaybackInterval {
    pub from_milliseconds: i32,
    pub to_milliseconds: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PlaybackRequest {
    pub device: PlaybackDeviceId,
    pub interval: PlaybackInterval,
    pub notification: PlaybackNotification,
}

pub trait WavePlaybackBackend {
    fn open_wave_audio(&mut self, path: &Path) -> Option<PlaybackDeviceId>;
    fn play(&mut self, request: PlaybackRequest) -> bool;
    fn position_milliseconds(&mut self, device: PlaybackDeviceId) -> i32;
    fn stop(&mut self, device: PlaybackDeviceId);
    fn close(&mut self, device: PlaybackDeviceId);
}

pub trait PlaybackTimer {
    fn register_position_timer(&mut self, period: Duration);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PlaybackStartOutcome {
    OpenFailed,
    PlayFailed,
    Playing,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct WavePlaybackState {
    last_device: Option<PlaybackDeviceId>,
    last_interval: Option<PlaybackInterval>,
    device_open: bool,
    position_timer_registered: bool,
}

impl WavePlaybackState {
    /// Opens and starts bounded playback of the application `temp.wav` file.
    ///
    /// Reimplements Ghidra function `FUN_016d6df0` at `0x016D6DF0`. It opens
    /// the file as `waveaudio`, rounds seconds to integer milliseconds,
    /// registers a 200 ms position callback, and requests FROM/TO/NOTIFY play.
    /// Open failure is silent. Play failure closes the device but deliberately
    /// retains the registered-timer state, matching the recovered helper.
    pub fn start(
        &mut self,
        temporary_directory: &Path,
        start_seconds: f64,
        stop_seconds: f64,
        notification: PlaybackNotification,
        backend: &mut impl WavePlaybackBackend,
        timer: &mut impl PlaybackTimer,
    ) -> PlaybackStartOutcome {
        let path = temporary_directory.join("temp.wav");
        let Some(device) = backend.open_wave_audio(&path) else {
            return PlaybackStartOutcome::OpenFailed;
        };
        let interval = PlaybackInterval {
            from_milliseconds: rounded_i32(start_seconds * 1_000.0),
            to_milliseconds: rounded_i32(stop_seconds * 1_000.0),
        };
        self.last_device = Some(device);
        self.last_interval = Some(interval);
        self.device_open = true;
        timer.register_position_timer(POSITION_TIMER_PERIOD);
        self.position_timer_registered = true;
        if !backend.play(PlaybackRequest {
            device,
            interval,
            notification,
        }) {
            self.close(backend);
            return PlaybackStartOutcome::PlayFailed;
        }
        PlaybackStartOutcome::Playing
    }

    /// Queries the stored playback device position in milliseconds.
    ///
    /// Reimplements Ghidra function `FUN_016d6f90` at `0x016D6F90`.
    /// `None` means no device has ever been opened through this adapter.
    pub fn position_milliseconds(&self, backend: &mut impl WavePlaybackBackend) -> Option<i32> {
        self.last_device
            .map(|device| backend.position_milliseconds(device))
    }

    /// Stops and then closes the stored playback device.
    ///
    /// Reimplements Ghidra function `FUN_016d6fd0` at `0x016D6FD0`. The last
    /// device ID remains stored, so a repeated eligible release can issue the
    /// recovered repeated stop and close commands.
    pub fn stop_and_close(&mut self, backend: &mut impl WavePlaybackBackend) -> bool {
        let Some(device) = self.last_device else {
            return false;
        };
        backend.stop(device);
        self.close(backend);
        true
    }

    /// Closes the stored playback device.
    ///
    /// Reimplements Ghidra function `FUN_016d7000` at `0x016D7000`. The ID is
    /// retained because the recovered global device identifier is not cleared.
    pub fn close(&mut self, backend: &mut impl WavePlaybackBackend) -> bool {
        let Some(device) = self.last_device else {
            return false;
        };
        backend.close(device);
        self.device_open = false;
        true
    }

    #[must_use]
    pub const fn last_device(&self) -> Option<PlaybackDeviceId> {
        self.last_device
    }

    #[must_use]
    pub const fn last_interval(&self) -> Option<PlaybackInterval> {
        self.last_interval
    }

    #[must_use]
    pub const fn device_open(&self) -> bool {
        self.device_open
    }

    #[must_use]
    pub const fn position_timer_registered(&self) -> bool {
        self.position_timer_registered
    }
}

fn rounded_u32(value: f64) -> u32 {
    value.round().to_u32().unwrap_or_default()
}

fn rounded_i64(value: f64) -> i64 {
    value.round().to_i64().unwrap_or_else(|| {
        if value.is_sign_negative() {
            i64::MIN
        } else {
            i64::MAX
        }
    })
}

fn rounded_i32(value: f64) -> i32 {
    value.round().to_i32().unwrap_or_else(|| {
        if value.is_sign_negative() {
            i32::MIN
        } else {
            i32::MAX
        }
    })
}

fn write_u16(header: &mut [u8; 44], offset: usize, value: u16) {
    header[offset..offset + 2].copy_from_slice(&value.to_le_bytes());
}

fn write_u32(header: &mut [u8; 44], offset: usize, value: u32) {
    header[offset..offset + 4].copy_from_slice(&value.to_le_bytes());
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum BackendCall {
        Open(PathBuf),
        Play(PlaybackRequest),
        Position(PlaybackDeviceId),
        Stop(PlaybackDeviceId),
        Close(PlaybackDeviceId),
    }

    struct FakeBackend {
        open_result: Option<PlaybackDeviceId>,
        play_succeeds: bool,
        position: i32,
        calls: Vec<BackendCall>,
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum LiveCall {
        Configure(PcmFormat, u32),
        Stop,
        Drain,
        Release,
    }

    #[derive(Default)]
    struct FakeLiveSink(Vec<LiveCall>);

    impl LivePcmSink for FakeLiveSink {
        type Error = std::convert::Infallible;

        fn configure(
            &mut self,
            format: PcmFormat,
            buffer_sample_capacity: u32,
        ) -> Result<(), Self::Error> {
            self.0
                .push(LiveCall::Configure(format, buffer_sample_capacity));
            Ok(())
        }

        fn stop(&mut self) -> Result<(), Self::Error> {
            self.0.push(LiveCall::Stop);
            Ok(())
        }

        fn wait_until_drained(&mut self) -> Result<(), Self::Error> {
            self.0.push(LiveCall::Drain);
            Ok(())
        }

        fn release(&mut self) {
            self.0.push(LiveCall::Release);
        }
    }

    impl WavePlaybackBackend for FakeBackend {
        fn open_wave_audio(&mut self, path: &Path) -> Option<PlaybackDeviceId> {
            self.calls.push(BackendCall::Open(path.to_path_buf()));
            self.open_result
        }

        fn play(&mut self, request: PlaybackRequest) -> bool {
            self.calls.push(BackendCall::Play(request));
            self.play_succeeds
        }

        fn position_milliseconds(&mut self, device: PlaybackDeviceId) -> i32 {
            self.calls.push(BackendCall::Position(device));
            self.position
        }

        fn stop(&mut self, device: PlaybackDeviceId) {
            self.calls.push(BackendCall::Stop(device));
        }

        fn close(&mut self, device: PlaybackDeviceId) {
            self.calls.push(BackendCall::Close(device));
        }
    }

    #[derive(Default)]
    struct FakeTimer(Vec<Duration>);

    impl PlaybackTimer for FakeTimer {
        fn register_position_timer(&mut self, period: Duration) {
            self.0.push(period);
        }
    }

    fn backend(open_result: Option<PlaybackDeviceId>, play_succeeds: bool) -> FakeBackend {
        FakeBackend {
            open_result,
            play_succeeds,
            position: 375,
            calls: Vec::new(),
        }
    }

    #[test]
    fn header_contains_standard_pcm_fields_and_exact_sizes() {
        let header = pcm_wave_header(6, 48_000, ChannelCount::Stereo);
        assert_eq!(&header[0..4], b"RIFF");
        assert_eq!(
            u32::from_le_bytes(header[4..8].try_into().unwrap_or_default()),
            48
        );
        assert_eq!(&header[8..12], b"WAVE");
        assert_eq!(&header[12..16], b"fmt ");
        assert_eq!(
            u16::from_le_bytes(header[20..22].try_into().unwrap_or_default()),
            1
        );
        assert_eq!(
            u16::from_le_bytes(header[22..24].try_into().unwrap_or_default()),
            2
        );
        assert_eq!(
            u32::from_le_bytes(header[24..28].try_into().unwrap_or_default()),
            48_000
        );
        assert_eq!(
            u32::from_le_bytes(header[28..32].try_into().unwrap_or_default()),
            192_000
        );
        assert_eq!(
            u16::from_le_bytes(header[32..34].try_into().unwrap_or_default()),
            4
        );
        assert_eq!(
            u16::from_le_bytes(header[34..36].try_into().unwrap_or_default()),
            16
        );
        assert_eq!(&header[36..40], b"data");
        assert_eq!(
            u32::from_le_bytes(header[40..44].try_into().unwrap_or_default()),
            12
        );
    }

    #[test]
    fn initializer_clamps_channels_and_applies_recovered_buffer_minimums() {
        let mono = PcmAccumulator::new(0, 1_000, 0.5, AccumulatorMode::Offline);
        assert_eq!(mono.format().channels, ChannelCount::Mono);
        assert_eq!(mono.buffer_threshold_frames(), MINIMUM_BUFFER_FRAMES);
        assert_eq!(
            mono.ring_buffer_sample_capacity(),
            MINIMUM_RING_BUFFER_FRAMES + 2
        );

        let stereo = PcmAccumulator::new(3, 48_000, 0.5, AccumulatorMode::Live);
        assert_eq!(stereo.format().channels, ChannelCount::Stereo);
        assert_eq!(stereo.buffer_threshold_frames(), 24_000);
        assert_eq!(
            stereo.ring_buffer_sample_capacity(),
            MINIMUM_RING_BUFFER_FRAMES * 2 + 2
        );
    }

    #[test]
    fn live_adapter_receives_format_then_stops_drains_and_releases() {
        let mut accumulator = PcmAccumulator::new(2, 48_000, 0.5, AccumulatorMode::Live);
        accumulator.append_frame(0.25, -0.25);
        let mut sink = FakeLiveSink::default();
        assert!(accumulator.configure_live(&mut sink).is_ok());
        assert!(accumulator.finish_live(&mut sink).is_ok());
        assert_eq!(
            sink.0,
            vec![
                LiveCall::Configure(accumulator.format(), 65_538),
                LiveCall::Stop,
                LiveCall::Drain,
                LiveCall::Release
            ]
        );
        assert!(accumulator.samples().is_empty());
    }

    #[test]
    fn appender_rounds_clips_and_interleaves_pcm_values() {
        let mut accumulator = PcmAccumulator::new(2, 8_000, 1.0, AccumulatorMode::Offline);
        accumulator.append_frame(-2.0, -1.0);
        accumulator.append_frame(0.5, 1.0);
        accumulator.append_frame(2.0, -0.5);
        assert_eq!(
            accumulator.samples(),
            &[i16::MIN, i16::MIN, 16_384, i16::MAX, i16::MAX, -16_384]
        );
    }

    #[test]
    fn resampler_emits_uniform_grid_and_keeps_recovered_second_channel_ratio() {
        let mut accumulator = PcmAccumulator::new(2, 4, 1.0, AccumulatorMode::Offline);
        accumulator.resample_point(0.5, 0.5, 0.25);
        accumulator.resample_point(1.0, 1.0, 1.0);
        assert_eq!(
            accumulator.samples(),
            &[
                8_192,
                4_096,
                16_384,
                8_192,
                24_576,
                24_576,
                i16::MAX,
                i16::MAX
            ]
        );
    }

    #[test]
    fn writer_emits_header_and_little_endian_samples_then_releases_buffer() {
        let mut accumulator = PcmAccumulator::new(1, 8_000, 1.0, AccumulatorMode::Offline);
        accumulator.append_frame(-1.0, 0.0);
        accumulator.append_frame(0.5, 0.0);
        let mut output = Vec::new();
        let result = accumulator.finish_to_writer(&mut output);
        assert!(result.is_ok());
        assert_eq!(output.len(), 48);
        assert_eq!(&output[44..], &[0x00, 0x80, 0x00, 0x40]);
        assert!(accumulator.samples().is_empty());
    }

    #[test]
    fn open_failure_is_silent_and_does_not_register_the_timer() {
        let mut backend = backend(None, true);
        let mut timer = FakeTimer::default();
        let mut state = WavePlaybackState::default();
        let outcome = state.start(
            Path::new("temporary"),
            0.0,
            1.0,
            PlaybackNotification(9),
            &mut backend,
            &mut timer,
        );
        assert_eq!(outcome, PlaybackStartOutcome::OpenFailed);
        assert_eq!(
            backend.calls,
            vec![BackendCall::Open(PathBuf::from("temporary/temp.wav"))]
        );
        assert!(timer.0.is_empty());
    }

    #[test]
    fn play_failure_closes_device_but_keeps_recovered_timer_state() {
        let device = PlaybackDeviceId(7);
        let mut backend = backend(Some(device), false);
        let mut timer = FakeTimer::default();
        let mut state = WavePlaybackState::default();
        let outcome = state.start(
            Path::new("temporary"),
            0.125,
            1.875,
            PlaybackNotification(9),
            &mut backend,
            &mut timer,
        );
        assert_eq!(outcome, PlaybackStartOutcome::PlayFailed);
        assert!(!state.device_open());
        assert!(state.position_timer_registered());
        assert_eq!(timer.0, vec![POSITION_TIMER_PERIOD]);
        assert!(matches!(backend.calls.last(), Some(BackendCall::Close(id)) if *id == device));
    }

    #[test]
    fn playback_state_rounds_bounds_queries_position_and_repeats_stop_close() {
        let device = PlaybackDeviceId(11);
        let mut backend = backend(Some(device), true);
        let mut timer = FakeTimer::default();
        let mut state = WavePlaybackState::default();
        let outcome = state.start(
            Path::new("temporary"),
            0.125_5,
            1.875_5,
            PlaybackNotification(42),
            &mut backend,
            &mut timer,
        );
        assert_eq!(outcome, PlaybackStartOutcome::Playing);
        assert_eq!(
            state.last_interval(),
            Some(PlaybackInterval {
                from_milliseconds: 126,
                to_milliseconds: 1_876
            })
        );
        assert_eq!(state.position_milliseconds(&mut backend), Some(375));
        assert!(state.stop_and_close(&mut backend));
        assert!(state.stop_and_close(&mut backend));
        assert_eq!(
            backend
                .calls
                .iter()
                .filter(|call| matches!(call, BackendCall::Stop(id) if *id == device))
                .count(),
            2
        );
        assert_eq!(
            backend
                .calls
                .iter()
                .filter(|call| matches!(call, BackendCall::Close(id) if *id == device))
                .count(),
            2
        );
    }
}
