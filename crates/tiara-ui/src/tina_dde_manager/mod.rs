//! TINA DDE Manager state and typed target adapters.

use iced::widget::{button, column, container, radio, row, scrollable, text, text_input};
use iced::{Element, Length};

pub const TITLE: &str = "TINA DDE Manager";
pub const PCB_SEND_FAILURE: &str = "Tina SendDDEMessage failed to PCBViewer!";
pub const PCB_SEND_LOG_PREFIX: &str = "Tina DDE Log - DDE Message sent: ";

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
}

impl DdeManager {
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
        }
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
