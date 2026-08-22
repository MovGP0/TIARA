//! Persistent `TDdeServer` state and recovered event adapters.
//!
//! # Trace evidence
//!
//! - `FUN_0139fd50` handles `DdeServer.Editor.OnExecuteMacro`. It reads item
//!   zero from the DDE conversation payload, passes the exact text to
//!   `FUN_0139fdc0`, and releases the temporary Delphi string.
//! - `FUN_013a3120` handles `DdeServer.OnCreate`. It adds one recovered static
//!   value to `ListBox1`, sets form byte `+0x6F1`, conditionally removes files
//!   that match `T4W*.*`, and sets form byte `+0x700` to `2`.
//! - `FUN_013a4f60` handles `DdeServer.OnActivate`. It only clears the 32-bit
//!   form field at `+0x6EC`.
//!
//! The names of fields `+0x6EC` and `+0x700`, the value at `DAT_013a3178`, and
//! the cleanup base directory are not recovered. Callers must supply the
//! static list value and the cleanup implementation. The command interpreter
//! remains behind an adapter because it is a separate, large function.

use iced::widget::{column, container, scrollable, text};
use iced::{Element, Length};

pub const TITLE: &str = "DdeServer";
pub const LEGACY_WORK_FILE_PATTERN: &str = "T4W*.*";
const CREATED_STARTUP_MODE: u8 = 2;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AdapterError {
    pub message: String,
}

impl AdapterError {
    #[must_use]
    pub fn new(message: impl Into<String>) -> Self {
        Self {
            message: message.into(),
        }
    }
}

/// Reads indexed text supplied by the `TDdeServerConv` execute-macro event.
pub trait MacroTextSource {
    /// Reads one text item from the event payload.
    ///
    /// # Errors
    ///
    /// Returns an adapter error when the host cannot read the requested item.
    fn text_at(&mut self, index: usize) -> Result<String, AdapterError>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MacroExecution {
    pub command_succeeded: bool,
}

/// Runs the recovered DDE macro command interpreter.
pub trait MacroCommandExecutor {
    /// Executes one exact DDE macro string.
    ///
    /// # Errors
    ///
    /// Returns an adapter error when the host interpreter cannot run.
    fn execute(&mut self, command: &str) -> Result<MacroExecution, AdapterError>;
}

/// Removes the legacy temporary work files used by the DDE server.
pub trait LegacyWorkFileCleaner {
    /// Removes files that match [`LEGACY_WORK_FILE_PATTERN`] from the host's
    /// configured TINA work directory.
    ///
    /// # Errors
    ///
    /// Returns an adapter error when enumeration or deletion fails.
    fn remove_legacy_work_files(&mut self) -> Result<(), AdapterError>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StartupData {
    /// Exact text represented by the unrecovered value at `DAT_013a3178`.
    pub initial_list_entry: String,
    /// Recovered global condition that enables `FUN_01b1e1c0`.
    pub remove_legacy_work_files: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Activated,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct DdeServer {
    pub list_entries: Vec<String>,
    pub command_succeeded: bool,
    /// Semantic name not recovered; this is the 32-bit field at `+0x6EC`.
    pub activation_marker: u32,
    /// Semantic name not recovered; this is the byte field at `+0x700`.
    pub startup_mode: u8,
}

impl DdeServer {
    /// Ports Ghidra function `FUN_0139fd50` at `0x0139FD50`.
    ///
    /// The handler reads item zero and sends the exact returned text to the
    /// recovered command interpreter. An empty string is not filtered out.
    /// The executor returns the interpreter's value for form byte `+0x6F1`.
    ///
    /// # Errors
    ///
    /// Returns the source or executor adapter error. The executor is not called
    /// when the source read fails. Existing server state stays unchanged when
    /// either adapter returns an error.
    pub fn editor_execute_macro(
        &mut self,
        source: &mut impl MacroTextSource,
        executor: &mut impl MacroCommandExecutor,
    ) -> Result<MacroExecution, AdapterError> {
        let command = source.text_at(0)?;
        let execution = executor.execute(&command)?;
        self.command_succeeded = execution.command_succeeded;
        Ok(execution)
    }

    /// Ports Ghidra function `FUN_013a3120` at `0x013A3120`.
    ///
    /// The recovered order is significant: append the static list entry, set
    /// command success, run optional cleanup, then write startup mode `2`.
    ///
    /// # Errors
    ///
    /// Returns a cleanup error. The appended entry and success flag remain, but
    /// the startup mode is not changed when cleanup fails.
    pub fn form_create(
        &mut self,
        startup: StartupData,
        cleaner: &mut impl LegacyWorkFileCleaner,
    ) -> Result<(), AdapterError> {
        self.list_entries.push(startup.initial_list_entry);
        self.command_succeeded = true;
        if startup.remove_legacy_work_files {
            cleaner.remove_legacy_work_files()?;
        }
        self.startup_mode = CREATED_STARTUP_MODE;
        Ok(())
    }

    /// Ports Ghidra function `FUN_013a4f60` at `0x013A4F60`.
    ///
    /// The activation handler only clears the recovered field at `+0x6EC`.
    pub const fn form_activate(&mut self) {
        self.activation_marker = 0;
    }

    pub const fn update(&mut self, message: Message) {
        match message {
            Message::Activated => self.form_activate(),
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let entries = if self.list_entries.is_empty() {
            text("")
        } else {
            text(self.list_entries.join("\n"))
        };
        let status = if self.command_succeeded {
            "Last command succeeded"
        } else {
            "No successful command"
        };

        container(
            column![
                text(TITLE).size(24),
                scrollable(entries).height(Length::Fill),
                text(status),
            ]
            .spacing(8),
        )
        .padding(8)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct Source {
        result: Result<String, AdapterError>,
        indexes: Vec<usize>,
    }

    impl MacroTextSource for Source {
        fn text_at(&mut self, index: usize) -> Result<String, AdapterError> {
            self.indexes.push(index);
            self.result.clone()
        }
    }

    struct Executor {
        result: Result<MacroExecution, AdapterError>,
        commands: Vec<String>,
    }

    impl MacroCommandExecutor for Executor {
        fn execute(&mut self, command: &str) -> Result<MacroExecution, AdapterError> {
            self.commands.push(command.to_owned());
            self.result.clone()
        }
    }

    #[derive(Default)]
    struct Cleaner {
        calls: usize,
        error: Option<AdapterError>,
    }

    impl LegacyWorkFileCleaner for Cleaner {
        fn remove_legacy_work_files(&mut self) -> Result<(), AdapterError> {
            self.calls += 1;
            self.error.clone().map_or(Ok(()), Err)
        }
    }

    #[test]
    fn fun_0139fd50_reads_item_zero_and_delegates_exact_text() {
        let mut server = DdeServer::default();
        let mut source = Source {
            result: Ok("  NewCircuit()  ".to_owned()),
            indexes: Vec::new(),
        };
        let execution = MacroExecution {
            command_succeeded: true,
        };
        let mut executor = Executor {
            result: Ok(execution),
            commands: Vec::new(),
        };

        let result = server.editor_execute_macro(&mut source, &mut executor);

        assert_eq!(result, Ok(execution));
        assert_eq!(source.indexes, [0]);
        assert_eq!(executor.commands, ["  NewCircuit()  "]);
        assert!(server.command_succeeded);
    }

    #[test]
    fn fun_0139fd50_passes_an_empty_macro_to_the_interpreter() {
        let mut server = DdeServer {
            command_succeeded: true,
            ..DdeServer::default()
        };
        let mut source = Source {
            result: Ok(String::new()),
            indexes: Vec::new(),
        };
        let mut executor = Executor {
            result: Ok(MacroExecution {
                command_succeeded: false,
            }),
            commands: Vec::new(),
        };

        let result = server.editor_execute_macro(&mut source, &mut executor);

        assert_eq!(result.map(|value| value.command_succeeded), Ok(false));
        assert_eq!(executor.commands, [""]);
        assert!(!server.command_succeeded);
    }

    #[test]
    fn fun_0139fd50_source_error_does_not_call_executor_or_change_state() {
        let error = AdapterError::new("payload unavailable");
        let mut server = DdeServer {
            command_succeeded: true,
            ..DdeServer::default()
        };
        let mut source = Source {
            result: Err(error.clone()),
            indexes: Vec::new(),
        };
        let mut executor = Executor {
            result: Ok(MacroExecution {
                command_succeeded: false,
            }),
            commands: Vec::new(),
        };

        assert_eq!(
            server.editor_execute_macro(&mut source, &mut executor),
            Err(error)
        );
        assert!(executor.commands.is_empty());
        assert!(server.command_succeeded);
    }

    #[test]
    fn fun_0139fd50_executor_error_preserves_command_success_state() {
        let error = AdapterError::new("interpreter unavailable");
        let mut server = DdeServer {
            command_succeeded: true,
            ..DdeServer::default()
        };
        let mut source = Source {
            result: Ok("RefreshWire()".to_owned()),
            indexes: Vec::new(),
        };
        let mut executor = Executor {
            result: Err(error.clone()),
            commands: Vec::new(),
        };

        assert_eq!(
            server.editor_execute_macro(&mut source, &mut executor),
            Err(error)
        );
        assert!(server.command_succeeded);
    }

    #[test]
    fn fun_013a3120_appends_initial_entry_runs_cleanup_and_sets_mode() {
        let mut server = DdeServer::default();
        let mut cleaner = Cleaner::default();

        let result = server.form_create(
            StartupData {
                initial_list_entry: "Recovered static value".to_owned(),
                remove_legacy_work_files: true,
            },
            &mut cleaner,
        );

        assert_eq!(result, Ok(()));
        assert_eq!(server.list_entries, ["Recovered static value"]);
        assert!(server.command_succeeded);
        assert_eq!(cleaner.calls, 1);
        assert_eq!(server.startup_mode, 2);
    }

    #[test]
    fn fun_013a3120_skips_cleanup_when_the_recovered_flag_is_clear() {
        let mut server = DdeServer::default();
        let mut cleaner = Cleaner::default();

        let result = server.form_create(
            StartupData {
                initial_list_entry: "entry".to_owned(),
                remove_legacy_work_files: false,
            },
            &mut cleaner,
        );

        assert_eq!(result, Ok(()));
        assert_eq!(cleaner.calls, 0);
        assert_eq!(server.startup_mode, 2);
    }

    #[test]
    fn fun_013a3120_cleanup_error_preserves_the_recovered_write_order() {
        let mut server = DdeServer {
            startup_mode: 9,
            ..DdeServer::default()
        };
        let error = AdapterError::new("delete failed");
        let mut cleaner = Cleaner {
            calls: 0,
            error: Some(error.clone()),
        };

        let result = server.form_create(
            StartupData {
                initial_list_entry: "entry".to_owned(),
                remove_legacy_work_files: true,
            },
            &mut cleaner,
        );

        assert_eq!(result, Err(error));
        assert_eq!(server.list_entries, ["entry"]);
        assert!(server.command_succeeded);
        assert_eq!(server.startup_mode, 9);
    }

    #[test]
    fn fun_013a4f60_clears_only_the_activation_marker() {
        let mut server = DdeServer {
            list_entries: vec!["keep".to_owned()],
            command_succeeded: true,
            activation_marker: 27,
            startup_mode: 2,
        };

        server.update(Message::Activated);

        assert_eq!(server.activation_marker, 0);
        assert_eq!(server.list_entries, ["keep"]);
        assert!(server.command_succeeded);
        assert_eq!(server.startup_mode, 2);
    }
}
