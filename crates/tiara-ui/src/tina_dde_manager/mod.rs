//! TINA DDE Manager state and typed target adapters.

use iced::widget::{button, column, container, radio, row, scrollable, text, text_input};
use iced::{Element, Length};

pub const TITLE: &str = "TINA DDE Manager";
pub const PCB_SEND_FAILURE: &str = "Tina SendDDEMessage failed to PCBViewer!";
pub const PCB_SEND_LOG_PREFIX: &str = "Tina DDE Log - DDE Message sent: ";
pub const EDISON_CONNECT_FAILURE: &str = "Tina could not connect to Edison!";
pub const PCB_CONNECT_FAILURE: &str = "Tina could not connect to PCBViewer!";
pub const DDE_LOG_SEPARATOR: &str = "--------------------";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AnsiMessage(Vec<u8>);

impl AnsiMessage {
    #[must_use]
    pub fn from_bytes(bytes: impl Into<Vec<u8>>) -> Self {
        Self(bytes.into())
    }

    #[must_use]
    pub fn as_bytes(&self) -> &[u8] {
        &self.0
    }

    #[must_use]
    // `Vec::is_empty` is not const until after the workspace MSRV of 1.85.
    #[allow(clippy::missing_const_for_fn)]
    pub fn is_empty(&self) -> bool {
        self.0.is_empty()
    }
}

/// Converts user text with the host process default ANSI code page.
pub trait DefaultAnsiEncoder {
    fn encode_default_ansi(&mut self, text: &str) -> AnsiMessage;
}

/// Provides the recoverable Edison recipient operations.
pub trait EdisonTargetAdapter {
    fn recipient_is_active(&self) -> bool;
    fn deliver_to_recipient(&mut self, message: &AnsiMessage);
}

/// Provides the recoverable PCB Viewer recipient and DDE operations.
pub trait PcbViewerTargetAdapter {
    fn recipient_is_active(&self) -> bool;
    fn recipient_count(&self) -> usize;
    fn deliver_to_recipient(&mut self, message: &AnsiMessage);
    fn send_dde(&mut self, message: &AnsiMessage) -> bool;
    fn report_send_failure(&mut self, message: &str);
    fn log_send_success(&mut self, prefix: &str, message: &AnsiMessage);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DdeConnectionTarget {
    Edison,
    PcbViewer,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DdeConnectionOutcome {
    pub connected: bool,
    pub state_changed: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DdeMacroBatchReport {
    pub processed: usize,
    pub edison_state_changed: bool,
    pub pcb_viewer_state_changed: bool,
}

pub trait DdeMacroExecutionHost {
    fn set_server_status(&mut self, status: &str);
    fn macro_logging_enabled(&self) -> bool;
    fn log_macro(&mut self, macro_text: &str);
    fn connect(&mut self, target: DdeConnectionTarget) -> DdeConnectionOutcome;
    fn report_connection_failure(&mut self, message: &str);
    fn initialize_edison_connection(&mut self);
    fn reset_edison_required(&self) -> bool;
    fn reset_edison_connection(&mut self);
    fn show_edison(&mut self);
    fn show_dde_window(&mut self);
    fn dispatch_macro(&mut self, macro_text: &str);
    fn publish_connection_state(&mut self, edison_changed: bool, pcb_viewer_changed: bool);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TargetSelection {
    Both,
    Edison,
    Viewer,
}

impl TargetSelection {
    /// Preserves the recovered dispatcher rule: only indexes 1 and 2 select a
    /// single target. Every other value selects both targets.
    #[must_use]
    pub const fn from_item_index(index: i32) -> Self {
        match index {
            1 => Self::Edison,
            2 => Self::Viewer,
            _ => Self::Both,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct TargetState {
    pub enabled: bool,
    pub status: String,
}

impl TargetState {
    fn is_busy(&self) -> bool {
        self.enabled && self.status.contains("Busy")
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct DdeManager {
    pub edison: TargetState,
    pub pcb_viewer: TargetState,
    pub pcb_failure_latched: bool,
    pub show_edison_on_connect: bool,
}

impl DdeManager {
    /// Initializes the TINA DDE manager form connection state.
    ///
    /// Ports Ghidra function `0x017FE730`, symbol `FUN_017fe730`, recovered as
    /// `TinaDDEMgr.OnCreate`. Both target-enabled flags and the automatic Edison
    /// show flag start clear. Status text and the independent PCB send-failure
    /// latch are not changed by this handler.
    pub const fn form_create(&mut self) {
        self.edison.enabled = false;
        self.pcb_viewer.enabled = false;
        self.show_edison_on_connect = false;
    }

    /// Handles TINA DDE manager form destruction without additional work.
    ///
    /// Ports Ghidra function `0x017FEA90`, symbol `FUN_017fea90`, recovered as
    /// `TinaDDEMgr.OnDestroy`. The recovered handler returns immediately, so
    /// Rust ownership performs normal cleanup and all manager state is unchanged.
    pub const fn form_destroy(&self) {}

    /// Executes a received batch of TINA DDE macros.
    ///
    /// Ports Ghidra function `0x017FC9E0`, symbol `FUN_017fc9e0`, recovered as
    /// `TinaDDEMgr.TinaServer.OnExecuteMacro`. The coordinator marks the server
    /// Busy, consumes every command in order, handles the two exact Connect and
    /// `ShowDDEWindow` commands, delegates other macros, publishes accumulated
    /// connection changes, and restores Ready. Optional logging records each
    /// command and one final separator.
    pub fn execute_macro_batch(
        &mut self,
        macros: &mut Vec<String>,
        host: &mut impl DdeMacroExecutionHost,
    ) -> DdeMacroBatchReport {
        host.set_server_status("Busy");
        let mut report = DdeMacroBatchReport::default();

        for macro_text in std::mem::take(macros) {
            if host.macro_logging_enabled() {
                host.log_macro(&macro_text);
            }

            match macro_text.as_str() {
                "Connect(Edison)" => {
                    let outcome = host.connect(DdeConnectionTarget::Edison);
                    report.edison_state_changed |= outcome.state_changed;
                    if outcome.connected {
                        self.edison.enabled = true;
                        host.initialize_edison_connection();
                        if host.reset_edison_required() {
                            host.reset_edison_connection();
                            self.edison.enabled = false;
                        } else if self.show_edison_on_connect {
                            host.show_edison();
                        }
                    } else {
                        host.report_connection_failure(EDISON_CONNECT_FAILURE);
                    }
                }
                "Connect(PCBViewer)" => {
                    let outcome = host.connect(DdeConnectionTarget::PcbViewer);
                    report.pcb_viewer_state_changed |= outcome.state_changed;
                    if outcome.connected {
                        self.pcb_viewer.enabled = true;
                        self.pcb_failure_latched = false;
                    } else {
                        host.report_connection_failure(PCB_CONNECT_FAILURE);
                    }
                }
                "ShowDDEWindow(PCBViewer)" | "ShowDDEWindow(Edison)" => {
                    host.show_dde_window();
                }
                _ => host.dispatch_macro(&macro_text),
            }
            report.processed = report.processed.saturating_add(1);
        }

        if host.macro_logging_enabled() {
            host.log_macro(DDE_LOG_SEPARATOR);
        }
        if report.edison_state_changed || report.pcb_viewer_state_changed {
            host.publish_connection_state(
                report.edison_state_changed,
                report.pcb_viewer_state_changed,
            );
        }
        host.set_server_status("Ready");
        report
    }

    fn recipient_route_is_active(
        &self,
        edison: &impl EdisonTargetAdapter,
        pcb_viewer: &impl PcbViewerTargetAdapter,
    ) -> bool {
        (self.edison.enabled && edison.recipient_is_active())
            || (self.pcb_viewer.enabled && pcb_viewer.recipient_is_active())
            || self.edison.is_busy()
            || self.pcb_viewer.is_busy()
    }

    /// Ports Ghidra function `FUN_017fdb10` at `0x017FDB10`.
    ///
    /// An active recipient or a status containing `Busy` selects the callback
    /// route for every enabled target. Otherwise, PCB Viewer can use its DDE
    /// fallback while its failure latch is clear. The legacy Boolean result is
    /// true only when that fallback reports success.
    pub fn deliver_both(
        &mut self,
        message: &AnsiMessage,
        forward_to_recipient: bool,
        edison: &mut impl EdisonTargetAdapter,
        pcb_viewer: &mut impl PcbViewerTargetAdapter,
    ) -> bool {
        if self.recipient_route_is_active(edison, pcb_viewer) {
            if forward_to_recipient {
                if self.edison.enabled {
                    edison.deliver_to_recipient(message);
                }
                if self.pcb_viewer.enabled {
                    pcb_viewer.deliver_to_recipient(message);
                }
            }
            return false;
        }

        self.deliver_pcb_fallback(message, forward_to_recipient, pcb_viewer)
    }

    /// Ports Ghidra function `FUN_017fdf90` at `0x017FDF90`.
    ///
    /// Edison receives a callback only when it is enabled and either its
    /// recipient is active or its nonempty status contains `Busy`.
    pub fn deliver_edison(
        &self,
        message: &AnsiMessage,
        forward_to_recipient: bool,
        edison: &mut impl EdisonTargetAdapter,
    ) -> bool {
        let callback_is_eligible =
            self.edison.enabled && (edison.recipient_is_active() || self.edison.is_busy());
        if callback_is_eligible && forward_to_recipient {
            edison.deliver_to_recipient(message);
        }
        false
    }

    /// Ports Ghidra function `FUN_017fe120` at `0x017FE120`.
    ///
    /// An active or busy PCB Viewer uses its recipient callback. Otherwise,
    /// the target uses an existing recipient when forwarding is enabled, then
    /// falls back to DDE while its failure latch is clear.
    pub fn deliver_pcb_viewer(
        &mut self,
        message: &AnsiMessage,
        forward_to_recipient: bool,
        pcb_viewer: &mut impl PcbViewerTargetAdapter,
    ) -> bool {
        let callback_is_eligible = self.pcb_viewer.enabled
            && (pcb_viewer.recipient_is_active() || self.pcb_viewer.is_busy());
        if callback_is_eligible {
            if forward_to_recipient {
                pcb_viewer.deliver_to_recipient(message);
            }
            return false;
        }

        self.deliver_pcb_fallback(message, forward_to_recipient, pcb_viewer)
    }

    fn deliver_pcb_fallback(
        &mut self,
        message: &AnsiMessage,
        forward_to_recipient: bool,
        pcb_viewer: &mut impl PcbViewerTargetAdapter,
    ) -> bool {
        if !self.pcb_viewer.enabled || self.pcb_failure_latched {
            return false;
        }
        if forward_to_recipient && pcb_viewer.recipient_count() > 0 {
            pcb_viewer.deliver_to_recipient(message);
            return false;
        }

        let sent = pcb_viewer.send_dde(message);
        if sent {
            pcb_viewer.log_send_success(PCB_SEND_LOG_PREFIX, message);
        } else {
            pcb_viewer.report_send_failure(PCB_SEND_FAILURE);
            self.pcb_failure_latched = true;
        }
        sent
    }

    /// Ports Ghidra function `FUN_017fe450` at `0x017FE450`.
    ///
    /// Empty messages and a manager with no enabled targets are no-ops. Target
    /// index 1 selects Edison, index 2 selects PCB Viewer, and all other values
    /// select both targets.
    pub fn dispatch(
        &mut self,
        message: &AnsiMessage,
        item_index: i32,
        forward_to_recipient: bool,
        edison: &mut impl EdisonTargetAdapter,
        pcb_viewer: &mut impl PcbViewerTargetAdapter,
    ) -> bool {
        if message.is_empty() || (!self.edison.enabled && !self.pcb_viewer.enabled) {
            return false;
        }

        match TargetSelection::from_item_index(item_index) {
            TargetSelection::Both => {
                self.deliver_both(message, forward_to_recipient, edison, pcb_viewer)
            }
            TargetSelection::Edison => self.deliver_edison(message, forward_to_recipient, edison),
            TargetSelection::Viewer => {
                self.deliver_pcb_viewer(message, forward_to_recipient, pcb_viewer)
            }
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    SendRequested,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    MessageChanged(String),
    TargetSelected(TargetSelection),
    Send,
    ClearHistory,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct Window {
    pub manager: DdeManager,
    pub message_text: String,
    pub history: Vec<String>,
    selected_target: Option<TargetSelection>,
}

impl Window {
    pub fn update(&mut self, message: Message) -> Option<Action> {
        match message {
            Message::MessageChanged(value) => {
                self.message_text = value;
                None
            }
            Message::TargetSelected(target) => {
                self.selected_target = Some(target);
                None
            }
            Message::Send => Some(Action::SendRequested),
            Message::ClearHistory => {
                self.clear_history();
                None
            }
        }
    }

    #[must_use]
    pub const fn selected_target(&self) -> Option<TargetSelection> {
        self.selected_target
    }

    /// Ports Ghidra function `FUN_017fe650` at `0x017FE650`.
    ///
    /// Reads the input, converts it through the default-ANSI adapter, and
    /// dispatches with recipient forwarding enabled. The input and selection
    /// remain unchanged, and the legacy dispatch result is ignored.
    pub fn send(
        &mut self,
        encoder: &mut impl DefaultAnsiEncoder,
        edison: &mut impl EdisonTargetAdapter,
        pcb_viewer: &mut impl PcbViewerTargetAdapter,
    ) {
        let message = encoder.encode_default_ansi(&self.message_text);
        let item_index = self.selected_target.map_or(-1, |target| match target {
            TargetSelection::Both => 0,
            TargetSelection::Edison => 1,
            TargetSelection::Viewer => 2,
        });
        let _ = self
            .manager
            .dispatch(&message, item_index, true, edison, pcb_viewer);
    }

    /// Ports Ghidra function `FUN_017fe700` at `0x017FE700`.
    ///
    /// Clears every current history line without changing the input, target,
    /// or connection state.
    pub fn clear_history(&mut self) {
        self.history.clear();
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let targets = column![
            radio(
                "Both",
                TargetSelection::Both,
                self.selected_target,
                Message::TargetSelected,
            ),
            radio(
                "Edison",
                TargetSelection::Edison,
                self.selected_target,
                Message::TargetSelected,
            ),
            radio(
                "Viewer",
                TargetSelection::Viewer,
                self.selected_target,
                Message::TargetSelected,
            ),
        ]
        .spacing(4);
        let controls = column![targets, button("Clear").on_press(Message::ClearHistory)].spacing(8);
        let history = self.history.join("\n");

        container(column![
            row![
                text_input("Message", &self.message_text)
                    .on_input(Message::MessageChanged)
                    .width(Length::Fill),
                button("Send").on_press(Message::Send),
            ]
            .spacing(8),
            row![
                scrollable(text(history)).width(Length::Fill),
                controls.width(Length::Fixed(80.0)),
            ]
            .spacing(8)
            .height(Length::Fill),
        ])
        .padding(8)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Encoder {
        inputs: Vec<String>,
    }

    impl DefaultAnsiEncoder for Encoder {
        fn encode_default_ansi(&mut self, text: &str) -> AnsiMessage {
            self.inputs.push(text.to_owned());
            AnsiMessage::from_bytes(text.as_bytes())
        }
    }

    #[derive(Default)]
    struct Edison {
        active: bool,
        deliveries: Vec<Vec<u8>>,
    }

    impl EdisonTargetAdapter for Edison {
        fn recipient_is_active(&self) -> bool {
            self.active
        }

        fn deliver_to_recipient(&mut self, message: &AnsiMessage) {
            self.deliveries.push(message.as_bytes().to_vec());
        }
    }

    #[derive(Default)]
    struct PcbViewer {
        active: bool,
        recipient_count: usize,
        dde_result: bool,
        recipient_deliveries: Vec<Vec<u8>>,
        dde_deliveries: Vec<Vec<u8>>,
        failures: Vec<String>,
        logs: Vec<(String, Vec<u8>)>,
    }

    struct MacroHost {
        statuses: Vec<String>,
        logging: bool,
        logs: Vec<String>,
        connections: Vec<DdeConnectionTarget>,
        edison_outcome: DdeConnectionOutcome,
        pcb_outcome: DdeConnectionOutcome,
        failures: Vec<String>,
        edison_initializations: usize,
        reset_required: bool,
        edison_resets: usize,
        edison_shows: usize,
        dde_window_shows: usize,
        dispatched: Vec<String>,
        publications: Vec<(bool, bool)>,
    }

    impl PcbViewerTargetAdapter for PcbViewer {
        fn recipient_is_active(&self) -> bool {
            self.active
        }

        fn recipient_count(&self) -> usize {
            self.recipient_count
        }

        fn deliver_to_recipient(&mut self, message: &AnsiMessage) {
            self.recipient_deliveries.push(message.as_bytes().to_vec());
        }

        fn send_dde(&mut self, message: &AnsiMessage) -> bool {
            self.dde_deliveries.push(message.as_bytes().to_vec());
            self.dde_result
        }

        fn report_send_failure(&mut self, message: &str) {
            self.failures.push(message.to_owned());
        }

        fn log_send_success(&mut self, prefix: &str, message: &AnsiMessage) {
            self.logs
                .push((prefix.to_owned(), message.as_bytes().to_vec()));
        }
    }

    impl DdeMacroExecutionHost for MacroHost {
        fn set_server_status(&mut self, status: &str) {
            self.statuses.push(status.to_owned());
        }

        fn macro_logging_enabled(&self) -> bool {
            self.logging
        }

        fn log_macro(&mut self, macro_text: &str) {
            self.logs.push(macro_text.to_owned());
        }

        fn connect(&mut self, target: DdeConnectionTarget) -> DdeConnectionOutcome {
            self.connections.push(target);
            match target {
                DdeConnectionTarget::Edison => self.edison_outcome,
                DdeConnectionTarget::PcbViewer => self.pcb_outcome,
            }
        }

        fn report_connection_failure(&mut self, message: &str) {
            self.failures.push(message.to_owned());
        }

        fn initialize_edison_connection(&mut self) {
            self.edison_initializations = self.edison_initializations.saturating_add(1);
        }

        fn reset_edison_required(&self) -> bool {
            self.reset_required
        }

        fn reset_edison_connection(&mut self) {
            self.edison_resets = self.edison_resets.saturating_add(1);
        }

        fn show_edison(&mut self) {
            self.edison_shows = self.edison_shows.saturating_add(1);
        }

        fn show_dde_window(&mut self) {
            self.dde_window_shows = self.dde_window_shows.saturating_add(1);
        }

        fn dispatch_macro(&mut self, macro_text: &str) {
            self.dispatched.push(macro_text.to_owned());
        }

        fn publish_connection_state(&mut self, edison_changed: bool, pcb_viewer_changed: bool) {
            self.publications.push((edison_changed, pcb_viewer_changed));
        }
    }

    fn macro_host() -> MacroHost {
        MacroHost {
            statuses: Vec::new(),
            logging: false,
            logs: Vec::new(),
            connections: Vec::new(),
            edison_outcome: DdeConnectionOutcome::default(),
            pcb_outcome: DdeConnectionOutcome::default(),
            failures: Vec::new(),
            edison_initializations: 0,
            reset_required: false,
            edison_resets: 0,
            edison_shows: 0,
            dde_window_shows: 0,
            dispatched: Vec::new(),
            publications: Vec::new(),
        }
    }

    fn enabled_manager() -> DdeManager {
        DdeManager {
            edison: TargetState {
                enabled: true,
                status: String::new(),
            },
            pcb_viewer: TargetState {
                enabled: true,
                status: String::new(),
            },
            pcb_failure_latched: false,
            show_edison_on_connect: false,
        }
    }

    #[test]
    fn fun_017fe730_form_create_clears_only_connection_and_show_flags() {
        let mut manager = DdeManager {
            edison: TargetState {
                enabled: true,
                status: "Edison Busy".to_owned(),
            },
            pcb_viewer: TargetState {
                enabled: true,
                status: "PCB Ready".to_owned(),
            },
            pcb_failure_latched: true,
            show_edison_on_connect: true,
        };

        manager.form_create();

        assert!(!manager.edison.enabled);
        assert!(!manager.pcb_viewer.enabled);
        assert!(!manager.show_edison_on_connect);
        assert_eq!(manager.edison.status, "Edison Busy");
        assert_eq!(manager.pcb_viewer.status, "PCB Ready");
        assert!(manager.pcb_failure_latched);
    }

    #[test]
    fn fun_017fea90_form_destroy_is_an_explicit_no_op() {
        let manager = DdeManager {
            edison: TargetState {
                enabled: true,
                status: "Edison Busy".to_owned(),
            },
            pcb_viewer: TargetState {
                enabled: true,
                status: "PCB Busy".to_owned(),
            },
            pcb_failure_latched: true,
            show_edison_on_connect: true,
        };
        let expected = manager.clone();

        manager.form_destroy();

        assert_eq!(manager, expected);
    }

    #[test]
    fn fun_017fc9e0_consumes_logged_batch_and_routes_exact_commands() {
        let mut manager = DdeManager {
            pcb_failure_latched: true,
            ..DdeManager::default()
        };
        let mut macros = vec![
            "Connect(Edison)".to_owned(),
            "Connect(PCBViewer)".to_owned(),
            "ShowDDEWindow(PCBViewer)".to_owned(),
            "ShowDDEWindow(Edison)".to_owned(),
            "SetParameters(Edison,x)".to_owned(),
        ];
        let expected_logs = macros
            .iter()
            .cloned()
            .chain([DDE_LOG_SEPARATOR.to_owned()])
            .collect::<Vec<_>>();
        let mut host = macro_host();
        host.logging = true;
        manager.show_edison_on_connect = true;
        host.edison_outcome = DdeConnectionOutcome {
            connected: true,
            state_changed: true,
        };
        host.pcb_outcome = DdeConnectionOutcome {
            connected: true,
            state_changed: false,
        };

        let report = manager.execute_macro_batch(&mut macros, &mut host);

        assert_eq!(report.processed, 5);
        assert!(report.edison_state_changed);
        assert!(!report.pcb_viewer_state_changed);
        assert!(macros.is_empty());
        assert_eq!(host.statuses, ["Busy", "Ready"]);
        assert_eq!(host.logs, expected_logs);
        assert_eq!(
            host.connections,
            [DdeConnectionTarget::Edison, DdeConnectionTarget::PcbViewer]
        );
        assert_eq!(host.edison_initializations, 1);
        assert_eq!(host.edison_shows, 1);
        assert_eq!(host.dde_window_shows, 2);
        assert_eq!(host.dispatched, ["SetParameters(Edison,x)"]);
        assert_eq!(host.publications, [(true, false)]);
        assert!(manager.edison.enabled);
        assert!(manager.pcb_viewer.enabled);
        assert!(!manager.pcb_failure_latched);
    }

    #[test]
    fn fun_017fc9e0_required_reset_disconnects_new_edison_target() {
        let mut manager = DdeManager::default();
        let mut macros = vec!["Connect(Edison)".to_owned()];
        let mut host = macro_host();
        host.reset_required = true;
        manager.show_edison_on_connect = true;
        host.edison_outcome = DdeConnectionOutcome {
            connected: true,
            state_changed: false,
        };

        let report = manager.execute_macro_batch(&mut macros, &mut host);

        assert_eq!(report.processed, 1);
        assert_eq!(host.edison_initializations, 1);
        assert_eq!(host.edison_resets, 1);
        assert_eq!(host.edison_shows, 0);
        assert!(!manager.edison.enabled);
        assert!(host.publications.is_empty());
    }

    #[test]
    fn fun_017fc9e0_reports_connection_failures_and_publishes_changes() {
        let mut manager = DdeManager::default();
        let mut macros = vec![
            "Connect(Edison)".to_owned(),
            "Connect(PCBViewer)".to_owned(),
        ];
        let mut host = macro_host();
        host.edison_outcome.state_changed = false;
        host.pcb_outcome.state_changed = true;

        let report = manager.execute_macro_batch(&mut macros, &mut host);

        assert_eq!(report.processed, 2);
        assert_eq!(host.failures, [EDISON_CONNECT_FAILURE, PCB_CONNECT_FAILURE]);
        assert_eq!(host.statuses, ["Busy", "Ready"]);
        assert!(host.logs.is_empty());
        assert_eq!(host.publications, [(false, true)]);
        assert!(!manager.edison.enabled);
        assert!(!manager.pcb_viewer.enabled);
    }

    #[test]
    fn fun_017fe450_empty_or_disabled_dispatch_is_a_no_op() {
        let mut manager = DdeManager::default();
        let mut edison = Edison::default();
        let mut pcb = PcbViewer {
            dde_result: true,
            ..PcbViewer::default()
        };

        assert!(!manager.dispatch(
            &AnsiMessage::from_bytes(b"message"),
            2,
            true,
            &mut edison,
            &mut pcb,
        ));
        manager.pcb_viewer.enabled = true;
        assert!(!manager.dispatch(&AnsiMessage::from_bytes([]), 2, true, &mut edison, &mut pcb,));
        assert!(pcb.dde_deliveries.is_empty());
    }

    #[test]
    fn fun_017fdf90_edison_uses_active_or_busy_recipient() {
        let message = AnsiMessage::from_bytes(b"Run()");
        let mut manager = enabled_manager();
        let mut edison = Edison {
            active: true,
            ..Edison::default()
        };

        assert!(!manager.deliver_edison(&message, true, &mut edison));
        edison.active = false;
        manager.edison.status = "Still Busy".to_owned();
        assert!(!manager.deliver_edison(&message, true, &mut edison));
        assert_eq!(edison.deliveries, [b"Run()".to_vec(), b"Run()".to_vec()]);
    }

    #[test]
    fn fun_017fe120_prefers_existing_recipient_over_dde() {
        let message = AnsiMessage::from_bytes(b"Board()");
        let mut manager = enabled_manager();
        let mut pcb = PcbViewer {
            recipient_count: 1,
            dde_result: true,
            ..PcbViewer::default()
        };

        assert!(!manager.deliver_pcb_viewer(&message, true, &mut pcb));
        assert_eq!(pcb.recipient_deliveries, [b"Board()".to_vec()]);
        assert!(pcb.dde_deliveries.is_empty());
        assert!(pcb.logs.is_empty());
    }

    #[test]
    fn fun_017fe120_dde_success_is_logged_and_returned() {
        let message = AnsiMessage::from_bytes(b"Board()");
        let mut manager = enabled_manager();
        let mut pcb = PcbViewer {
            dde_result: true,
            ..PcbViewer::default()
        };

        assert!(manager.deliver_pcb_viewer(&message, true, &mut pcb));
        assert_eq!(pcb.dde_deliveries, [b"Board()".to_vec()]);
        assert_eq!(
            pcb.logs,
            [(PCB_SEND_LOG_PREFIX.to_owned(), b"Board()".to_vec())]
        );
        assert!(!manager.pcb_failure_latched);
    }

    #[test]
    fn fun_017fe120_failure_is_reported_and_latched() {
        let message = AnsiMessage::from_bytes(b"Board()");
        let mut manager = enabled_manager();
        let mut pcb = PcbViewer::default();

        assert!(!manager.deliver_pcb_viewer(&message, true, &mut pcb));
        assert!(manager.pcb_failure_latched);
        assert_eq!(pcb.failures, [PCB_SEND_FAILURE]);
        assert!(!manager.deliver_pcb_viewer(&message, true, &mut pcb));
        assert_eq!(pcb.dde_deliveries.len(), 1);
    }

    #[test]
    fn fun_017fdb10_one_active_recipient_forwards_to_both_enabled_targets() {
        let message = AnsiMessage::from_bytes(b"Sync()");
        let mut manager = enabled_manager();
        let mut edison = Edison {
            active: true,
            ..Edison::default()
        };
        let mut pcb = PcbViewer::default();

        assert!(!manager.deliver_both(&message, true, &mut edison, &mut pcb));
        assert_eq!(edison.deliveries, [b"Sync()".to_vec()]);
        assert_eq!(pcb.recipient_deliveries, [b"Sync()".to_vec()]);
        assert!(pcb.dde_deliveries.is_empty());
    }

    #[test]
    fn fun_017fe450_invalid_target_index_uses_both_path() {
        let message = AnsiMessage::from_bytes(b"Sync()");
        let mut manager = enabled_manager();
        let mut edison = Edison {
            active: true,
            ..Edison::default()
        };
        let mut pcb = PcbViewer::default();

        assert!(!manager.dispatch(&message, -1, true, &mut edison, &mut pcb));
        assert_eq!(edison.deliveries.len(), 1);
        assert_eq!(pcb.recipient_deliveries.len(), 1);
    }

    #[test]
    fn fun_017fe650_send_encodes_and_preserves_the_form_controls() {
        let mut window = Window {
            manager: enabled_manager(),
            message_text: "Connect()".to_owned(),
            history: vec!["old".to_owned()],
            selected_target: Some(TargetSelection::Edison),
        };
        let mut encoder = Encoder::default();
        let mut edison = Edison {
            active: true,
            ..Edison::default()
        };
        let mut pcb = PcbViewer::default();

        window.send(&mut encoder, &mut edison, &mut pcb);

        assert_eq!(encoder.inputs, ["Connect()"]);
        assert_eq!(edison.deliveries, [b"Connect()".to_vec()]);
        assert_eq!(window.message_text, "Connect()");
        assert_eq!(window.history, ["old"]);
        assert_eq!(window.selected_target(), Some(TargetSelection::Edison));
    }

    #[test]
    fn fun_017fe700_clear_removes_only_history_lines() {
        let mut window = Window {
            manager: enabled_manager(),
            message_text: "keep".to_owned(),
            history: vec!["one".to_owned(), "two".to_owned()],
            selected_target: Some(TargetSelection::Viewer),
        };

        assert_eq!(window.update(Message::ClearHistory), None);

        assert!(window.history.is_empty());
        assert_eq!(window.message_text, "keep");
        assert_eq!(window.selected_target(), Some(TargetSelection::Viewer));
        assert!(window.manager.edison.enabled);
        assert!(window.manager.pcb_viewer.enabled);
    }
}
