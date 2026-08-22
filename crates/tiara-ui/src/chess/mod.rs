//! Chess replay state and effect adapters for the recovered Chess form.

use std::path::{Path, PathBuf};

pub const TEXT_FILE_FILTER: &str = "Text file (txt)|*.txt";
pub const TEXT_FILE_EXTENSION: &str = "txt";
pub const LIBRARY_EVALUATION: &str = "Rust Vec and str::contains supply transcript storage and case-sensitive stop-marker searches. Iced-style messages identify UI commands. File dialogs, file encoding, storage, and chess-terminal effects stay behind adapters because their behavior belongs to the host application.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    LoadAndPlayDemo,
    SaveGame,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PlaybackState {
    Active,
    #[default]
    Inactive,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CommandOutcome {
    Applied,
    Cancelled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StopReason {
    EndOfTranscript,
    ResultMarker,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReplayStep {
    Sent,
    Stopped(StopReason),
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct StagedMove {
    pub source: [Option<char>; 2],
    pub destination: [Option<char>; 2],
}

impl StagedMove {
    #[must_use]
    pub fn from_line(line: &str) -> Self {
        let mut characters = line.chars();
        Self {
            source: [characters.next(), characters.next()],
            destination: [characters.next(), characters.next()],
        }
    }
}

pub trait TranscriptDialog {
    fn choose_demo_to_open(&mut self) -> Option<PathBuf>;
    fn choose_transcript_to_save(&mut self) -> Option<PathBuf>;
}

pub trait TranscriptStorage {
    /// Loads transcript lines into the supplied, already-replaced buffer.
    ///
    /// # Errors
    ///
    /// Returns the host file or decoding error. The buffer can contain partial data.
    fn load_lines(&mut self, path: &Path, destination: &mut Vec<String>) -> Result<(), String>;

    /// Creates or truncates the path and saves the current replay lines.
    ///
    /// # Errors
    ///
    /// Returns the host file or encoding error. The path can contain partial data.
    fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), String>;
}

pub trait ChessTerminal {
    /// Sends the complete transcript line to the chess terminal.
    ///
    /// # Errors
    ///
    /// Returns a terminal transport error.
    fn send_line(&mut self, line: &str) -> Result<(), String>;

    /// Stages the first four characters for later engine-response processing.
    ///
    /// # Errors
    ///
    /// Returns a chess-model update error.
    fn stage_move(&mut self, movement: StagedMove) -> Result<(), String>;
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    demo_lines: Vec<String>,
    game_log: Vec<String>,
    replay_index: usize,
    playback: PlaybackState,
}

impl Window {
    #[must_use]
    pub fn new(game_log: Vec<String>) -> Self {
        Self {
            game_log,
            ..Self::default()
        }
    }

    #[must_use]
    pub fn demo_lines(&self) -> &[String] {
        &self.demo_lines
    }

    #[must_use]
    pub fn game_log(&self) -> &[String] {
        &self.game_log
    }

    #[must_use]
    pub const fn replay_index(&self) -> usize {
        self.replay_index
    }

    #[must_use]
    pub const fn playback(&self) -> PlaybackState {
        self.playback
    }

    /// Applies an Iced-style Chess form command through isolated host adapters.
    ///
    /// # Errors
    ///
    /// Returns storage, encoding, or terminal errors without local recovery.
    pub fn update(
        &mut self,
        message: Message,
        dialog: &mut impl TranscriptDialog,
        storage: &mut impl TranscriptStorage,
        terminal: &mut impl ChessTerminal,
    ) -> Result<CommandOutcome, String> {
        match message {
            Message::LoadAndPlayDemo => self.load_and_play_demo(dialog, storage, terminal),
            Message::SaveGame => self.save_game(dialog, storage),
        }
    }

    /// Ports Ghidra `FUN_01ba3dc0` at `0x01BA3DC0`.
    ///
    /// # Errors
    ///
    /// Returns a file-load or first-move dispatch error. A read failure leaves the
    /// replacement buffer, including partial lines, installed in the window.
    pub fn load_and_play_demo(
        &mut self,
        dialog: &mut impl TranscriptDialog,
        storage: &mut impl TranscriptStorage,
        terminal: &mut impl ChessTerminal,
    ) -> Result<CommandOutcome, String> {
        let Some(path) = dialog.choose_demo_to_open() else {
            return Ok(CommandOutcome::Cancelled);
        };

        self.demo_lines = Vec::new();
        storage.load_lines(&path, &mut self.demo_lines)?;
        self.replay_index = 1;
        self.playback = PlaybackState::Active;
        self.dispatch_next_demo_move(terminal)?;
        Ok(CommandOutcome::Applied)
    }

    /// Ports Ghidra `FUN_01ba3e80` at `0x01BA3E80`.
    ///
    /// # Errors
    ///
    /// Returns the storage adapter's file or encoding error. The destination can
    /// already be truncated or partially written when this method returns an error.
    pub fn save_game(
        &self,
        dialog: &mut impl TranscriptDialog,
        storage: &mut impl TranscriptStorage,
    ) -> Result<CommandOutcome, String> {
        let Some(path) = dialog.choose_transcript_to_save() else {
            return Ok(CommandOutcome::Cancelled);
        };

        storage.save_lines(&path, &self.game_log)?;
        Ok(CommandOutcome::Applied)
    }

    /// Ports Ghidra `FUN_01ba42f0` at `0x01BA42F0`.
    ///
    /// # Errors
    ///
    /// Returns a terminal or move-staging error. The complete line is sent before
    /// its first four characters are staged, and the index advances only afterward.
    pub fn dispatch_next_demo_move(
        &mut self,
        terminal: &mut impl ChessTerminal,
    ) -> Result<ReplayStep, String> {
        let Some(line) = self.demo_lines.get(self.replay_index) else {
            self.playback = PlaybackState::Inactive;
            return Ok(ReplayStep::Stopped(StopReason::EndOfTranscript));
        };

        if line.contains("draw") || line.contains("mates") {
            self.playback = PlaybackState::Inactive;
            return Ok(ReplayStep::Stopped(StopReason::ResultMarker));
        }

        terminal.send_line(line)?;
        terminal.stage_move(StagedMove::from_line(line))?;
        self.replay_index += 1;
        Ok(ReplayStep::Sent)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct DialogRecorder {
        open: Option<PathBuf>,
        save: Option<PathBuf>,
        calls: Vec<&'static str>,
    }

    impl TranscriptDialog for DialogRecorder {
        fn choose_demo_to_open(&mut self) -> Option<PathBuf> {
            self.calls.push("open");
            self.open.clone()
        }

        fn choose_transcript_to_save(&mut self) -> Option<PathBuf> {
            self.calls.push("save");
            self.save.clone()
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum StorageEvent {
        Load(PathBuf),
        Save(PathBuf, Vec<String>),
    }

    #[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
    enum LoadResult {
        #[default]
        Complete,
        FailAfterPartial,
    }

    #[derive(Debug, Default)]
    struct StorageRecorder {
        loaded_lines: Vec<String>,
        load_result: LoadResult,
        events: Vec<StorageEvent>,
    }

    impl TranscriptStorage for StorageRecorder {
        fn load_lines(&mut self, path: &Path, destination: &mut Vec<String>) -> Result<(), String> {
            self.events.push(StorageEvent::Load(path.to_owned()));
            destination.clone_from(&self.loaded_lines);
            match self.load_result {
                LoadResult::Complete => Ok(()),
                LoadResult::FailAfterPartial => Err("read failed".to_owned()),
            }
        }

        fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), String> {
            self.events
                .push(StorageEvent::Save(path.to_owned(), lines.to_vec()));
            Ok(())
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum TerminalEvent {
        Send(String),
        Stage(StagedMove),
    }

    #[derive(Debug, Default)]
    struct TerminalRecorder {
        events: Vec<TerminalEvent>,
    }

    impl ChessTerminal for TerminalRecorder {
        fn send_line(&mut self, line: &str) -> Result<(), String> {
            self.events.push(TerminalEvent::Send(line.to_owned()));
            Ok(())
        }

        fn stage_move(&mut self, movement: StagedMove) -> Result<(), String> {
            self.events.push(TerminalEvent::Stage(movement));
            Ok(())
        }
    }

    fn active_window() -> Window {
        Window {
            demo_lines: vec![">> Ready".to_owned(), "e2e4".to_owned()],
            game_log: vec!["preserved".to_owned()],
            replay_index: 1,
            playback: PlaybackState::Active,
        }
    }

    #[test]
    fn load_cancel_preserves_all_chess_and_replay_state() {
        let mut window = active_window();
        let expected = window.clone();
        let mut dialog = DialogRecorder::default();
        let mut storage = StorageRecorder::default();
        let mut terminal = TerminalRecorder::default();

        let outcome = window.load_and_play_demo(&mut dialog, &mut storage, &mut terminal);

        assert_eq!(outcome, Ok(CommandOutcome::Cancelled));
        assert_eq!(window, expected);
        assert!(storage.events.is_empty());
        assert!(terminal.events.is_empty());
    }

    #[test]
    fn successful_load_starts_at_line_one_and_dispatches_the_player_move() {
        let mut window = active_window();
        let mut dialog = DialogRecorder {
            open: Some(PathBuf::from("demo.txt")),
            ..DialogRecorder::default()
        };
        let mut storage = StorageRecorder {
            loaded_lines: vec![
                ">> Ready".to_owned(),
                "e2e4 player".to_owned(),
                "e7e5 engine".to_owned(),
            ],
            ..StorageRecorder::default()
        };
        let mut terminal = TerminalRecorder::default();

        let outcome = window.load_and_play_demo(&mut dialog, &mut storage, &mut terminal);

        assert_eq!(outcome, Ok(CommandOutcome::Applied));
        assert_eq!(window.replay_index(), 2);
        assert_eq!(window.playback(), PlaybackState::Active);
        assert_eq!(window.game_log(), ["preserved"]);
        assert_eq!(
            terminal.events,
            vec![
                TerminalEvent::Send("e2e4 player".to_owned()),
                TerminalEvent::Stage(StagedMove {
                    source: [Some('e'), Some('2')],
                    destination: [Some('e'), Some('4')],
                }),
            ]
        );
    }

    #[test]
    fn failed_load_keeps_replacement_lines_but_old_index_and_active_state() {
        let mut window = active_window();
        window.replay_index = 9;
        window.playback = PlaybackState::Inactive;
        let mut dialog = DialogRecorder {
            open: Some(PathBuf::from("broken.txt")),
            ..DialogRecorder::default()
        };
        let mut storage = StorageRecorder {
            loaded_lines: vec!["partial".to_owned()],
            load_result: LoadResult::FailAfterPartial,
            events: Vec::new(),
        };
        let mut terminal = TerminalRecorder::default();

        let result = window.load_and_play_demo(&mut dialog, &mut storage, &mut terminal);

        assert_eq!(result, Err("read failed".to_owned()));
        assert_eq!(window.demo_lines(), ["partial"]);
        assert_eq!(window.replay_index(), 9);
        assert_eq!(window.playback(), PlaybackState::Inactive);
        assert!(terminal.events.is_empty());
    }

    #[test]
    fn end_and_lowercase_result_markers_stop_without_terminal_effects() {
        for lines in [
            vec![">> Ready".to_owned()],
            vec![">> Ready".to_owned(), "game is draw".to_owned()],
            vec![">> Ready".to_owned(), "black mates".to_owned()],
        ] {
            let mut window = Window {
                demo_lines: lines,
                replay_index: 1,
                playback: PlaybackState::Active,
                ..Window::default()
            };
            let mut terminal = TerminalRecorder::default();

            let step = window.dispatch_next_demo_move(&mut terminal);

            assert!(step.is_ok());
            assert_eq!(window.playback(), PlaybackState::Inactive);
            assert!(terminal.events.is_empty());
        }
    }

    #[test]
    fn stop_marker_search_is_case_sensitive() {
        let mut window = Window {
            demo_lines: vec![">> Ready".to_owned(), "Draw by agreement".to_owned()],
            replay_index: 1,
            playback: PlaybackState::Active,
            ..Window::default()
        };
        let mut terminal = TerminalRecorder::default();

        let step = window.dispatch_next_demo_move(&mut terminal);

        assert_eq!(step, Ok(ReplayStep::Sent));
        assert_eq!(window.replay_index(), 2);
        assert_eq!(terminal.events.len(), 2);
    }

    #[test]
    fn short_move_is_sent_before_its_available_prefix_is_staged() {
        let mut window = Window {
            demo_lines: vec![">> Ready".to_owned(), "e2".to_owned()],
            replay_index: 1,
            playback: PlaybackState::Active,
            ..Window::default()
        };
        let mut terminal = TerminalRecorder::default();

        let step = window.dispatch_next_demo_move(&mut terminal);

        assert_eq!(step, Ok(ReplayStep::Sent));
        assert_eq!(
            terminal.events,
            vec![
                TerminalEvent::Send("e2".to_owned()),
                TerminalEvent::Stage(StagedMove {
                    source: [Some('e'), Some('2')],
                    destination: [None, None],
                }),
            ]
        );
    }

    #[test]
    fn save_cancel_is_noop_and_acceptance_writes_only_the_game_log() {
        let window = active_window();
        let mut cancelled_dialog = DialogRecorder::default();
        let mut storage = StorageRecorder::default();

        let cancelled = window.save_game(&mut cancelled_dialog, &mut storage);

        assert_eq!(cancelled, Ok(CommandOutcome::Cancelled));
        assert!(storage.events.is_empty());

        let mut accepted_dialog = DialogRecorder {
            save: Some(PathBuf::from("game.txt")),
            ..DialogRecorder::default()
        };
        let saved = window.save_game(&mut accepted_dialog, &mut storage);

        assert_eq!(saved, Ok(CommandOutcome::Applied));
        assert_eq!(
            storage.events,
            vec![StorageEvent::Save(
                PathBuf::from("game.txt"),
                vec!["preserved".to_owned()]
            )]
        );
    }
}
