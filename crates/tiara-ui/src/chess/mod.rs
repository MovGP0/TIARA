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

pub const FORM_RESOURCE: &str = "ChessForm";

/// An opaque handle to the chess terminal the show handler creates.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct TerminalHandle(pub u64);

/// The recovered close action the form reports to the VCL.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    /// The recovered value 2, which frees the form after the close.
    Free,
}

/// The two port values the show handler resolves before it starts the session.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ResolvedPortSettings {
    pub first: i32,
    pub second: i32,
}

/// The per-session state the show handler creates and the close handler
/// releases.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ChessSession {
    pub terminal: Option<TerminalHandle>,
    /// The recovered transcript list the timer appends accepted lines to.
    pub transcript: Vec<String>,
    /// The second recovered list. The lifecycle handlers create and release it
    /// but do not use it, so its contents stay empty here.
    pub secondary: Vec<String>,
    /// The partial line the timer accumulates until it sees a line break.
    pub pending_line: String,
    pub counter: i32,
    pub flag: bool,
    pub started: bool,
}

pub trait ChessSessionHost {
    /// Creates the chess terminal from the three stored form inputs.
    fn create_terminal(&mut self) -> TerminalHandle;

    /// Resolves the terminal's port settings. `None` is the recovered failure
    /// branch.
    fn resolve_port_settings(&mut self, terminal: TerminalHandle) -> Option<ResolvedPortSettings>;

    /// Greys out the recovered terminal control after a failed resolve.
    fn disable_terminal_control(&mut self, terminal: TerminalHandle);

    fn apply_port_settings(&mut self, settings: ResolvedPortSettings);

    /// Assigns the filter and default extension to both save dialogs.
    fn configure_save_dialogs(&mut self, filter: &str, default_extension: &str);

    fn refresh_board(&mut self);

    fn start_terminal(&mut self, terminal: TerminalHandle);

    fn stop_terminal(&mut self, terminal: TerminalHandle);
}

/// Implements Ghidra function `FUN_01ba3f70` at `0x01BA3F70`.
///
/// The recovered create handler is a single return. It allocates nothing,
/// reads no setting, and touches no control, so the whole session setup belongs
/// to the show handler. This port keeps the no-op explicit rather than leaving
/// the recovered event unaccounted for.
pub const fn create_chess_form() {}

/// Implements Ghidra function `FUN_01ba3f80` at `0x01BA3F80`.
///
/// Creates the chess terminal and resolves its port settings. A failed resolve
/// greys out the recovered terminal control and stops there, leaving the
/// session without lists, without dialog filters, and without a started
/// terminal.
///
/// A successful resolve creates both recovered lists, clears the partial-line
/// buffer and the two scalar fields, assigns the text-file filter and default
/// extension to both save dialogs, applies the two resolved values back to the
/// port, refreshes the board, and starts the terminal.
///
/// The handler validates nothing else, reports no message on failure beyond the
/// greyed control, and persists nothing.
pub fn show_chess_form(host: &mut impl ChessSessionHost) -> ChessSession {
    let terminal = host.create_terminal();
    let Some(settings) = host.resolve_port_settings(terminal) else {
        host.disable_terminal_control(terminal);
        return ChessSession {
            terminal: Some(terminal),
            ..ChessSession::default()
        };
    };

    host.configure_save_dialogs(TEXT_FILE_FILTER, TEXT_FILE_EXTENSION);
    host.apply_port_settings(settings);
    host.refresh_board();
    host.start_terminal(terminal);

    ChessSession {
        terminal: Some(terminal),
        transcript: Vec::new(),
        secondary: Vec::new(),
        pending_line: String::new(),
        counter: 0,
        flag: false,
        started: true,
    }
}

/// Implements Ghidra function `FUN_01ba3f20` at `0x01BA3F20`.
///
/// Stops the chess terminal, releases both recovered lists, reports the
/// free-after-close action, and clears the process-wide form instance so a
/// later open creates a new form.
///
/// The recovered handler stops the terminal and releases the lists without a
/// null check, and it saves no transcript, so an unsaved game is discarded.
pub fn close_chess_form(
    session: &mut ChessSession,
    host: &mut impl ChessSessionHost,
) -> CloseAction {
    if let Some(terminal) = session.terminal {
        host.stop_terminal(terminal);
    }
    session.transcript.clear();
    session.secondary.clear();
    session.pending_line.clear();
    session.terminal = None;
    session.started = false;
    CloseAction::Free
}

pub trait ChessBoardHost {
    /// Forwards one board click. `primary_button` is true for the recovered
    /// left button.
    fn board_clicked(&mut self, terminal: TerminalHandle, primary_button: bool, x: i32, y: i32);
}

/// Implements Ghidra function `FUN_01ba4210` at `0x01BA4210`.
///
/// Forwards a board mouse-down to the chess terminal with the click position
/// and whether the primary button was used. The recovered handler performs no
/// hit test, no selection bookkeeping, and no redraw of its own; the terminal
/// owns all of that.
pub fn board_mouse_down(
    session: &ChessSession,
    primary_button: bool,
    x: i32,
    y: i32,
    host: &mut impl ChessBoardHost,
) {
    if let Some(terminal) = session.terminal {
        host.board_clicked(terminal, primary_button, x, y);
    }
}

pub trait ChessPollHost {
    /// Reports whether the terminal is currently accepting polls.
    fn is_polling(&mut self, terminal: TerminalHandle) -> bool;

    /// Reads whatever the terminal has buffered. An empty result is the normal
    /// idle case.
    fn poll_terminal(&mut self, terminal: TerminalHandle) -> String;

    /// Appends the received text to the visible monitor edit.
    fn append_to_monitor(&mut self, text: &str);

    /// Reports whether a completed line should be recorded and dispatched.
    fn is_dispatchable_line(&mut self, line: &str) -> bool;

    fn dispatch_line(&mut self, line: &str);

    /// Lets the application process its pending messages.
    fn process_application_messages(&mut self);
}

/// Splits one completed transcript chunk the way the recovered list assignment
/// does.
#[must_use]
fn split_transcript_lines(chunk: &str) -> Vec<String> {
    let mut lines: Vec<String> = chunk
        .split('\n')
        .map(|line| line.strip_suffix('\r').unwrap_or(line).to_owned())
        .collect();
    if lines.last().is_some_and(String::is_empty) {
        lines.pop();
    }
    lines
}

/// Implements Ghidra function `FUN_01ba49e0` at `0x01BA49E0`.
///
/// Polls the terminal on every tick while it accepts polls, appends whatever it
/// read to both the partial-line buffer and the visible monitor, and acts only
/// once the buffer ends with a line break.
///
/// A completed line is recorded in the transcript and dispatched line by line
/// only when the recovered acceptance check passes; a rejected line is dropped.
/// Either way the buffer is cleared, so a rejected line does not block the next
/// one. The handler then lets the application process pending messages.
///
/// An idle poll returns nothing and leaves every field untouched, and a
/// terminal that is not accepting polls skips the message pump as well.
pub fn poll_chess_terminal(session: &mut ChessSession, host: &mut impl ChessPollHost) -> usize {
    let Some(terminal) = session.terminal else {
        return 0;
    };
    if !host.is_polling(terminal) {
        return 0;
    }

    let mut dispatched = 0;
    let received = host.poll_terminal(terminal);
    if !received.is_empty() {
        session.pending_line.push_str(&received);
        host.append_to_monitor(&received);

        if session.pending_line.ends_with('\n') {
            if host.is_dispatchable_line(&session.pending_line) {
                let chunk = session.pending_line.clone();
                session.transcript.push(chunk.clone());
                for line in split_transcript_lines(&chunk) {
                    host.dispatch_line(&line);
                    dispatched += 1;
                }
            }
            session.pending_line.clear();
        }
    }

    host.process_application_messages();
    dispatched
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum SessionCall {
        Create,
        Resolve,
        Disable,
        Apply(ResolvedPortSettings),
        Dialogs(String, String),
        Refresh,
        Start,
        Stop,
    }

    #[derive(Debug, Default)]
    struct SessionHost {
        calls: Vec<SessionCall>,
        settings: Option<ResolvedPortSettings>,
    }

    impl ChessSessionHost for SessionHost {
        fn create_terminal(&mut self) -> TerminalHandle {
            self.calls.push(SessionCall::Create);
            TerminalHandle(42)
        }

        fn resolve_port_settings(
            &mut self,
            _terminal: TerminalHandle,
        ) -> Option<ResolvedPortSettings> {
            self.calls.push(SessionCall::Resolve);
            self.settings
        }

        fn disable_terminal_control(&mut self, _terminal: TerminalHandle) {
            self.calls.push(SessionCall::Disable);
        }

        fn apply_port_settings(&mut self, settings: ResolvedPortSettings) {
            self.calls.push(SessionCall::Apply(settings));
        }

        fn configure_save_dialogs(&mut self, filter: &str, default_extension: &str) {
            self.calls.push(SessionCall::Dialogs(
                filter.to_owned(),
                default_extension.to_owned(),
            ));
        }

        fn refresh_board(&mut self) {
            self.calls.push(SessionCall::Refresh);
        }

        fn start_terminal(&mut self, _terminal: TerminalHandle) {
            self.calls.push(SessionCall::Start);
        }

        fn stop_terminal(&mut self, _terminal: TerminalHandle) {
            self.calls.push(SessionCall::Stop);
        }
    }

    #[derive(Debug, Default)]
    struct BoardHost {
        clicks: Vec<(TerminalHandle, bool, i32, i32)>,
    }

    impl ChessBoardHost for BoardHost {
        fn board_clicked(
            &mut self,
            terminal: TerminalHandle,
            primary_button: bool,
            x: i32,
            y: i32,
        ) {
            self.clicks.push((terminal, primary_button, x, y));
        }
    }

    #[derive(Debug, Default)]
    struct PollHost {
        polling: bool,
        reads: Vec<String>,
        accept: bool,
        monitor: String,
        dispatched: Vec<String>,
        pumps: usize,
    }

    impl ChessPollHost for PollHost {
        fn is_polling(&mut self, _terminal: TerminalHandle) -> bool {
            self.polling
        }

        fn poll_terminal(&mut self, _terminal: TerminalHandle) -> String {
            if self.reads.is_empty() {
                String::new()
            } else {
                self.reads.remove(0)
            }
        }

        fn append_to_monitor(&mut self, text: &str) {
            self.monitor.push_str(text);
        }

        fn is_dispatchable_line(&mut self, _line: &str) -> bool {
            self.accept
        }

        fn dispatch_line(&mut self, line: &str) {
            self.dispatched.push(line.to_owned());
        }

        fn process_application_messages(&mut self) {
            self.pumps += 1;
        }
    }

    fn polling_session() -> ChessSession {
        ChessSession {
            terminal: Some(TerminalHandle(1)),
            started: true,
            ..ChessSession::default()
        }
    }

    #[test]
    fn the_create_handler_is_a_proven_no_op() {
        create_chess_form();
    }

    #[test]
    fn show_starts_the_session_only_after_the_port_settings_resolve() {
        let mut host = SessionHost {
            settings: Some(ResolvedPortSettings {
                first: 3,
                second: 7,
            }),
            ..SessionHost::default()
        };

        let session = show_chess_form(&mut host);

        assert_eq!(session.terminal, Some(TerminalHandle(42)));
        assert!(session.started);
        assert!(session.transcript.is_empty());
        assert!(session.pending_line.is_empty());
        assert_eq!(session.counter, 0);
        assert!(!session.flag);
        assert_eq!(
            host.calls,
            [
                SessionCall::Create,
                SessionCall::Resolve,
                SessionCall::Dialogs(TEXT_FILE_FILTER.to_owned(), TEXT_FILE_EXTENSION.to_owned()),
                SessionCall::Apply(ResolvedPortSettings {
                    first: 3,
                    second: 7
                }),
                SessionCall::Refresh,
                SessionCall::Start,
            ]
        );
    }

    #[test]
    fn a_failed_resolve_greys_the_control_and_leaves_the_session_unstarted() {
        let mut host = SessionHost::default();

        let session = show_chess_form(&mut host);

        assert!(!session.started);
        assert_eq!(
            host.calls,
            [
                SessionCall::Create,
                SessionCall::Resolve,
                SessionCall::Disable
            ]
        );
    }

    #[test]
    fn close_stops_the_terminal_releases_the_lists_and_frees_the_form() {
        let mut host = SessionHost {
            settings: Some(ResolvedPortSettings {
                first: 1,
                second: 2,
            }),
            ..SessionHost::default()
        };
        let mut session = show_chess_form(&mut host);
        session.transcript.push("e2e4".to_owned());
        host.calls.clear();

        assert_eq!(close_chess_form(&mut session, &mut host), CloseAction::Free);

        assert_eq!(host.calls, [SessionCall::Stop]);
        assert!(session.transcript.is_empty());
        assert!(session.terminal.is_none());
        assert!(!session.started);
    }

    #[test]
    fn a_board_click_forwards_the_button_and_position_to_the_terminal() {
        let mut host = BoardHost::default();
        let session = ChessSession {
            terminal: Some(TerminalHandle(5)),
            ..ChessSession::default()
        };

        board_mouse_down(&session, true, 120, 240, &mut host);
        board_mouse_down(&session, false, 8, 9, &mut host);
        board_mouse_down(&ChessSession::default(), true, 1, 1, &mut host);

        assert_eq!(
            host.clicks,
            [
                (TerminalHandle(5), true, 120, 240),
                (TerminalHandle(5), false, 8, 9),
            ]
        );
    }

    #[test]
    fn a_partial_read_only_accumulates_until_the_line_break_arrives() {
        let mut host = PollHost {
            polling: true,
            accept: true,
            reads: vec!["e2".to_owned(), "e4".to_owned()],
            ..PollHost::default()
        };
        let mut session = polling_session();

        assert_eq!(poll_chess_terminal(&mut session, &mut host), 0);
        assert_eq!(poll_chess_terminal(&mut session, &mut host), 0);

        assert_eq!(session.pending_line, "e2e4");
        assert!(session.transcript.is_empty());
        assert_eq!(host.monitor, "e2e4");
        assert_eq!(host.pumps, 2);
    }

    #[test]
    fn a_completed_accepted_line_is_recorded_and_dispatched_line_by_line() {
        let mut host = PollHost {
            polling: true,
            accept: true,
            reads: vec!["e2e4\nd7d5\n".to_owned()],
            ..PollHost::default()
        };
        let mut session = polling_session();

        assert_eq!(poll_chess_terminal(&mut session, &mut host), 2);

        assert_eq!(session.transcript, ["e2e4\nd7d5\n".to_owned()]);
        assert_eq!(host.dispatched, ["e2e4".to_owned(), "d7d5".to_owned()]);
        assert!(session.pending_line.is_empty());
    }

    #[test]
    fn a_rejected_line_is_dropped_without_blocking_the_next_one() {
        let mut host = PollHost {
            polling: true,
            accept: false,
            reads: vec!["noise\n".to_owned()],
            ..PollHost::default()
        };
        let mut session = polling_session();

        assert_eq!(poll_chess_terminal(&mut session, &mut host), 0);

        assert!(session.transcript.is_empty());
        assert!(host.dispatched.is_empty());
        assert!(session.pending_line.is_empty());
        assert_eq!(host.monitor, "noise\n");
    }

    #[test]
    fn a_terminal_that_is_not_polling_skips_the_read_and_the_message_pump() {
        let mut host = PollHost {
            polling: false,
            reads: vec!["e2e4\n".to_owned()],
            ..PollHost::default()
        };
        let mut session = polling_session();

        assert_eq!(poll_chess_terminal(&mut session, &mut host), 0);

        assert_eq!(host.pumps, 0);
        assert_eq!(host.reads.len(), 1);
    }

    #[test]
    fn an_idle_poll_pumps_messages_and_changes_nothing_else() {
        let mut host = PollHost {
            polling: true,
            accept: true,
            ..PollHost::default()
        };
        let mut session = polling_session();

        assert_eq!(poll_chess_terminal(&mut session, &mut host), 0);

        assert_eq!(host.pumps, 1);
        assert!(session.pending_line.is_empty());
        assert!(host.monitor.is_empty());
    }

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
