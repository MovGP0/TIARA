use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Schematic Reconciliation";
pub const SCREENSHOT: &str = "screenshots/Schematic_Reconciliation_Window.png";
pub const FORM_RESOURCE: &str = "frmSchematicReconciliation";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b9f0f0");
const STATUS: &str = "Compare schematic blocks";
pub const HELP_CONTEXT: u32 = 0x412;

pub trait ReconciliationBlock {
    fn name_text(&self) -> &str;

    fn key_suffix(&self) -> &str;

    fn secondary_metadata(&self) -> &str;

    fn timestamp(&self) -> f64;

    fn reconcile_into(&self, current: &mut Self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ReconciliationKey<'a> {
    pub name_text: &'a str,
    pub key_suffix: &'a str,
}

/// Builds the equality key recovered at Ghidra `0x01B9F160`, symbol
/// `FUN_01b9f160`.
///
/// The Delphi implementation joins the two values with private literals. Its
/// only recovered consumer tests equality, so a typed pair preserves the
/// observable matching behavior without inventing a display format.
#[must_use]
pub fn reconciliation_key(block: &impl ReconciliationBlock) -> ReconciliationKey<'_> {
    ReconciliationKey {
        name_text: block.name_text(),
        key_suffix: block.key_suffix(),
    }
}

/// Finds the first current row with the same recovered key as a selected row.
/// This is the Rust mapping for Ghidra `0x01B9F220`, symbol `FUN_01b9f220`.
#[must_use]
pub fn find_current_row<B: ReconciliationBlock>(
    current_rows: &[B],
    selected_row: &B,
) -> Option<usize> {
    let selected_key = reconciliation_key(selected_row);
    current_rows
        .iter()
        .position(|current| reconciliation_key(current) == selected_key)
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Circuit<B> {
    pub blocks: Vec<B>,
    pub modified: bool,
}

impl<B> Default for Circuit<B> {
    fn default() -> Self {
        Self {
            blocks: Vec::new(),
            modified: false,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SelectableBlock<B> {
    pub block: B,
    pub selected: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CircuitSelection<B> {
    Cancelled,
    Accepted(Option<Circuit<B>>),
}

pub trait CircuitSelectionSource<B> {
    type Error;

    /// Opens the circuit picker and loads an accepted selection.
    ///
    /// # Errors
    ///
    /// Returns the picker or circuit-loader error without local recovery.
    fn select_and_load(&mut self) -> Result<CircuitSelection<B>, Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PickEffect {
    pub accepted: bool,
    pub loaded: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CopyEffect {
    pub reconciled_rows: usize,
    pub refresh_current_list: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CommitEffect {
    pub committed: bool,
    pub reconciled_rows: usize,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ReconciliationSession<B> {
    current: Circuit<B>,
    selected: Vec<SelectableBlock<B>>,
    selected_circuit_loaded: bool,
    hidden: bool,
    modal_result: Option<u8>,
}

impl<B: ReconciliationBlock> ReconciliationSession<B> {
    #[must_use]
    pub const fn new(current: Circuit<B>) -> Self {
        Self {
            current,
            selected: Vec::new(),
            selected_circuit_loaded: false,
            hidden: false,
            modal_result: None,
        }
    }

    #[must_use]
    pub const fn current(&self) -> &Circuit<B> {
        &self.current
    }

    #[must_use]
    pub fn selected(&self) -> &[SelectableBlock<B>] {
        &self.selected
    }

    #[must_use]
    pub const fn selected_circuit_loaded(&self) -> bool {
        self.selected_circuit_loaded
    }

    #[must_use]
    pub const fn is_hidden(&self) -> bool {
        self.hidden
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<u8> {
        self.modal_result
    }

    /// Loads an accepted comparison circuit and selects its newer matching
    /// rows. This is the Rust mapping for Ghidra `0x01B9F380`, symbol
    /// `FUN_01b9f380`.
    ///
    /// # Errors
    ///
    /// Errors from the shared picker or loader propagate to the caller because
    /// the recovered handler has no local catch or rollback.
    pub fn pick_circuit<S>(&mut self, source: &mut S) -> Result<PickEffect, S::Error>
    where
        S: CircuitSelectionSource<B>,
    {
        let selection = source.select_and_load()?;
        Ok(self.apply_circuit_selection(selection))
    }

    fn apply_circuit_selection(&mut self, selection: CircuitSelection<B>) -> PickEffect {
        let circuit = match selection {
            CircuitSelection::Cancelled => {
                return PickEffect {
                    accepted: false,
                    loaded: self.selected_circuit_loaded,
                };
            }
            CircuitSelection::Accepted(circuit) => circuit,
        };

        self.selected_circuit_loaded = circuit.is_some();
        if let Some(circuit) = circuit {
            self.selected = circuit
                .blocks
                .into_iter()
                .map(|block| SelectableBlock {
                    block,
                    selected: false,
                })
                .collect();
        }

        for row in &mut self.selected {
            row.selected =
                find_current_row(&self.current.blocks, &row.block).is_some_and(|current_index| {
                    let current = &self.current.blocks[current_index];
                    row.block.secondary_metadata() == current.secondary_metadata()
                        && row.block.timestamp() > current.timestamp()
                });
        }

        PickEffect {
            accepted: true,
            loaded: self.selected_circuit_loaded,
        }
    }

    /// Reconciles selected rows into the working current-circuit copy. This is
    /// the Rust mapping for Ghidra `0x01B9F630`, symbol `FUN_01b9f630`.
    pub fn copy_selected(&mut self, refresh_current_list: bool) -> CopyEffect {
        let mut reconciled_rows = 0;

        for selected in &self.selected {
            if !selected.selected {
                continue;
            }

            let Some(current_index) = find_current_row(&self.current.blocks, &selected.block)
            else {
                continue;
            };

            let current = &mut self.current.blocks[current_index];
            if selected.block.secondary_metadata() != current.secondary_metadata() {
                continue;
            }

            selected.block.reconcile_into(current);
            self.current.modified = true;
            reconciled_rows += 1;
        }

        CopyEffect {
            reconciled_rows,
            refresh_current_list,
        }
    }

    /// Commits a modified working copy to the live circuit and accepts the
    /// dialog. This is the Rust mapping for Ghidra `0x01B9F800`, symbol
    /// `FUN_01b9f800`.
    pub fn accept(&mut self, live_current: &mut Circuit<B>) -> CommitEffect {
        if !self.current.modified {
            self.modal_result = Some(1);
            return CommitEffect {
                committed: false,
                reconciled_rows: 0,
            };
        }

        self.hidden = true;

        let working_copy = std::mem::take(&mut self.current);
        self.selected = working_copy
            .blocks
            .into_iter()
            .map(|block| SelectableBlock {
                block,
                selected: true,
            })
            .collect();
        self.selected_circuit_loaded = true;
        self.current = std::mem::take(live_current);

        let effect = self.copy_selected(false);
        *live_current = std::mem::take(&mut self.current);
        self.modal_result = Some(1);

        CommitEffect {
            committed: true,
            reconciled_rows: effect.reconciled_rows,
        }
    }
}

pub trait LocalizedHelpResolver {
    fn resolve(&self, base_path: &Path) -> PathBuf;
}

pub trait HelpDispatcher {
    fn show_context(&mut self, context: u32, help_file: &Path);
}

/// Resolves and opens the Schematic Reconciliation help topic. This is the
/// Rust mapping for Ghidra `0x01B9F920`, symbol `FUN_01b9f920`.
pub fn open_help(
    help_directory: &Path,
    resolver: &impl LocalizedHelpResolver,
    dispatcher: &mut impl HelpDispatcher,
) {
    let base_path = help_directory.join("TINA.CHM");
    let resolved_path = resolver.resolve(&base_path);
    dispatcher.show_context(HELP_CONTEXT, &resolved_path);
}

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    pending_action: Option<Action>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 2],
            pending_action: None,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    PickCircuit,
    CopySelected,
    Accept,
    Cancel,
    OpenHelp,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    TextChanged(usize, String),
    ActionRequested(Action),
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::ActionRequested(action) => self.pending_action = Some(action),
        }
    }

    #[must_use]
    pub const fn pending_action(&self) -> Option<Action> {
        self.pending_action
    }

    pub const fn take_pending_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = container(
            row![
                button("Pick...").on_press(Message::ActionRequested(Action::PickCircuit)),
                button("Copy <--").on_press(Message::ActionRequested(Action::CopySelected)),
                button("OK").on_press(Message::ActionRequested(Action::Accept)),
                button("Cancel").on_press(Message::ActionRequested(Action::Cancel)),
                button("Help").on_press(Message::ActionRequested(Action::OpenHelp)),
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into();
        let body: Element<'_, Message> = container(scrollable(
            column![
                row![
                    text("Blocks in current circuit").width(Length::FillPortion(2)),
                    text_input("", &self.values[0])
                        .on_input(move |value| Message::TextChanged(0, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Blocks in selected circuit").width(Length::FillPortion(2)),
                    text_input("", &self.values[1])
                        .on_input(move |value| Message::TextChanged(1, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
            ]
            .spacing(8),
        ))
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;

    use super::*;

    #[derive(Debug, Clone, PartialEq)]
    struct TestBlock {
        name: &'static str,
        suffix: &'static str,
        metadata: &'static str,
        timestamp: f64,
        payload: &'static str,
    }

    impl ReconciliationBlock for TestBlock {
        fn name_text(&self) -> &str {
            self.name
        }

        fn key_suffix(&self) -> &str {
            self.suffix
        }

        fn secondary_metadata(&self) -> &str {
            self.metadata
        }

        fn timestamp(&self) -> f64 {
            self.timestamp
        }

        fn reconcile_into(&self, current: &mut Self) {
            current.payload = self.payload;
        }
    }

    const fn block(
        name: &'static str,
        suffix: &'static str,
        metadata: &'static str,
        timestamp: f64,
        payload: &'static str,
    ) -> TestBlock {
        TestBlock {
            name,
            suffix,
            metadata,
            timestamp,
            payload,
        }
    }

    struct Picker {
        selection: CircuitSelection<TestBlock>,
    }

    impl CircuitSelectionSource<TestBlock> for Picker {
        type Error = &'static str;

        fn select_and_load(&mut self) -> Result<CircuitSelection<TestBlock>, Self::Error> {
            Ok(std::mem::replace(
                &mut self.selection,
                CircuitSelection::Cancelled,
            ))
        }
    }

    struct FailingPicker;

    impl CircuitSelectionSource<TestBlock> for FailingPicker {
        type Error = &'static str;

        fn select_and_load(&mut self) -> Result<CircuitSelection<TestBlock>, Self::Error> {
            Err("load failed")
        }
    }

    #[test]
    fn key_and_match_use_both_recovered_identity_fields() {
        let first = block("U1", "A", "m1", 1.0, "first");
        let second = block("U1", "B", "m1", 1.0, "second");
        let duplicate = block("U1", "A", "m2", 1.0, "duplicate");

        assert_eq!(
            reconciliation_key(&first),
            ReconciliationKey {
                name_text: "U1",
                key_suffix: "A",
            }
        );
        assert_eq!(find_current_row(&[first, second], &duplicate), Some(0));
    }

    #[test]
    fn picker_selects_only_newer_rows_with_equal_key_and_metadata() {
        let current = Circuit {
            blocks: vec![block("U1", "A", "same", 10.0, "current")],
            modified: false,
        };
        let selected = Circuit {
            blocks: vec![
                block("U1", "A", "same", 11.0, "newer"),
                block("U1", "A", "same", 10.0, "equal"),
                block("U1", "A", "other", 12.0, "other metadata"),
                block("U2", "A", "same", 12.0, "missing"),
            ],
            modified: false,
        };
        let mut picker = Picker {
            selection: CircuitSelection::Accepted(Some(selected)),
        };
        let mut session = ReconciliationSession::new(current);

        let effect = session.pick_circuit(&mut picker);

        assert_eq!(
            effect,
            Ok(PickEffect {
                accepted: true,
                loaded: true,
            })
        );
        assert_eq!(
            session
                .selected()
                .iter()
                .map(|row| row.selected)
                .collect::<Vec<_>>(),
            vec![true, false, false, false]
        );
    }

    #[test]
    fn picker_cancel_preserves_state_and_loader_errors_propagate() {
        let current = Circuit {
            blocks: vec![block("U1", "A", "same", 10.0, "current")],
            modified: false,
        };
        let mut session = ReconciliationSession::new(current);
        let mut initial_picker = Picker {
            selection: CircuitSelection::Accepted(Some(Circuit {
                blocks: vec![block("U1", "A", "same", 11.0, "selected")],
                modified: false,
            })),
        };
        assert!(session.pick_circuit(&mut initial_picker).is_ok());
        let before = session.selected().to_vec();
        let mut cancel_picker = Picker {
            selection: CircuitSelection::Cancelled,
        };

        let cancel_effect = session.pick_circuit(&mut cancel_picker);
        let load_error = session.pick_circuit(&mut FailingPicker);

        assert_eq!(
            cancel_effect,
            Ok(PickEffect {
                accepted: false,
                loaded: true,
            })
        );
        assert_eq!(session.selected(), before);
        assert_eq!(load_error, Err("load failed"));
    }

    #[test]
    fn null_loader_result_keeps_rows_but_clears_loaded_object_state() {
        let current = Circuit {
            blocks: vec![block("U1", "A", "same", 10.0, "current")],
            modified: false,
        };
        let mut session = ReconciliationSession::new(current);
        let mut initial_picker = Picker {
            selection: CircuitSelection::Accepted(Some(Circuit {
                blocks: vec![block("U1", "A", "same", 11.0, "selected")],
                modified: false,
            })),
        };
        assert!(session.pick_circuit(&mut initial_picker).is_ok());
        let mut null_picker = Picker {
            selection: CircuitSelection::Accepted(None),
        };

        let effect = session.pick_circuit(&mut null_picker);

        assert_eq!(
            effect,
            Ok(PickEffect {
                accepted: true,
                loaded: false,
            })
        );
        assert!(!session.selected_circuit_loaded());
        assert_eq!(session.selected().len(), 1);
        assert!(session.selected()[0].selected);
    }

    #[test]
    fn copy_reconciles_only_selected_rows_with_matching_metadata() {
        let current = Circuit {
            blocks: vec![
                block("U1", "A", "same", 10.0, "old one"),
                block("U2", "A", "same", 10.0, "old two"),
            ],
            modified: false,
        };
        let mut session = ReconciliationSession::new(current);
        session.selected = vec![
            SelectableBlock {
                block: block("U1", "A", "same", 11.0, "new one"),
                selected: true,
            },
            SelectableBlock {
                block: block("U2", "A", "other", 11.0, "new two"),
                selected: true,
            },
            SelectableBlock {
                block: block("U2", "A", "same", 11.0, "not selected"),
                selected: false,
            },
        ];

        let effect = session.copy_selected(true);

        assert_eq!(
            effect,
            CopyEffect {
                reconciled_rows: 1,
                refresh_current_list: true,
            }
        );
        assert!(session.current().modified);
        assert_eq!(session.current().blocks[0].payload, "new one");
        assert_eq!(session.current().blocks[1].payload, "old two");
    }

    #[test]
    fn accept_without_changes_only_sets_the_modal_result() {
        let current = Circuit {
            blocks: vec![block("U1", "A", "same", 10.0, "working")],
            modified: false,
        };
        let mut live = Circuit {
            blocks: vec![block("U1", "A", "same", 9.0, "live")],
            modified: false,
        };
        let original_live = live.clone();
        let mut session = ReconciliationSession::new(current);

        let effect = session.accept(&mut live);

        assert_eq!(
            effect,
            CommitEffect {
                committed: false,
                reconciled_rows: 0,
            }
        );
        assert_eq!(live, original_live);
        assert!(!session.is_hidden());
        assert_eq!(session.modal_result(), Some(1));
    }

    #[test]
    fn accept_transfers_the_modified_working_copy_into_the_live_circuit() {
        let current = Circuit {
            blocks: vec![
                block("U1", "A", "same", 10.0, "working one"),
                block("U2", "A", "same", 10.0, "working two"),
            ],
            modified: true,
        };
        let mut live = Circuit {
            blocks: vec![
                block("U1", "A", "same", 9.0, "live one"),
                block("U2", "A", "other", 9.0, "live two"),
            ],
            modified: false,
        };
        let mut session = ReconciliationSession::new(current);

        let effect = session.accept(&mut live);

        assert_eq!(
            effect,
            CommitEffect {
                committed: true,
                reconciled_rows: 1,
            }
        );
        assert!(live.modified);
        assert_eq!(live.blocks[0].payload, "working one");
        assert_eq!(live.blocks[1].payload, "live two");
        assert!(session.current().blocks.is_empty());
        assert!(session.is_hidden());
        assert_eq!(session.modal_result(), Some(1));
    }

    struct HelpResolver {
        requested_paths: RefCell<Vec<PathBuf>>,
    }

    impl LocalizedHelpResolver for HelpResolver {
        fn resolve(&self, base_path: &Path) -> PathBuf {
            self.requested_paths
                .borrow_mut()
                .push(base_path.to_path_buf());
            base_path.with_file_name("TINA_de.CHM")
        }
    }

    #[derive(Default)]
    struct HelpRecorder {
        requests: Vec<(u32, PathBuf)>,
    }

    impl HelpDispatcher for HelpRecorder {
        fn show_context(&mut self, context: u32, help_file: &Path) {
            self.requests.push((context, help_file.to_path_buf()));
        }
    }

    #[test]
    fn help_resolves_tina_chm_and_opens_context_1042() {
        let resolver = HelpResolver {
            requested_paths: RefCell::new(Vec::new()),
        };
        let mut dispatcher = HelpRecorder::default();

        open_help(Path::new("help"), &resolver, &mut dispatcher);

        assert_eq!(
            resolver.requested_paths.into_inner(),
            vec![PathBuf::from("help").join("TINA.CHM")]
        );
        assert_eq!(
            dispatcher.requests,
            vec![(HELP_CONTEXT, PathBuf::from("help").join("TINA_de.CHM"))]
        );
    }

    #[test]
    fn iced_update_exposes_each_reconciliation_action() {
        let mut window = Window::default();

        for action in [
            Action::PickCircuit,
            Action::CopySelected,
            Action::Accept,
            Action::Cancel,
            Action::OpenHelp,
        ] {
            window.update(Message::ActionRequested(action));
            assert_eq!(window.pending_action(), Some(action));
            assert_eq!(window.take_pending_action(), Some(action));
            assert_eq!(window.pending_action(), None);
        }
    }
}
