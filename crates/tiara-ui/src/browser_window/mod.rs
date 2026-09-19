//! Iced state for the recovered embedded browser window.
//!
//! The recovered form hosts a main browser, a hidden sub-browser that pop-ups
//! are redirected through, an address combo that doubles as the history list, a
//! status bar, and a progress bar re-parented into that status bar.

pub const TITLE: &str = "Browse";
pub const FORM_RESOURCE: &str = "BrowserFrm";

/// The settings section the address history is written to.
pub const HISTORY_SECTION: &str = "History";

/// The recovered escape the history key uses in place of an equals sign.
pub const HISTORY_KEY_ESCAPE_FROM: char = '=';
pub const HISTORY_KEY_ESCAPE_TO: char = '@';

/// The window style bit the create handler clears from the progress bar.
pub const PROGRESS_BAR_CLEARED_STYLE: u32 = 0x0002_0000;

/// The width the status-bar panel is reduced by before the progress bar is
/// moved into it.
pub const PROGRESS_BAR_PANEL_INSET: i32 = 0xf;

/// The status-bar panel the browser writes its status text to.
pub const STATUS_PANEL: usize = 0;

/// The recovered browser command identifiers the state change reports.
pub const COMMAND_BACK: i32 = 1;
pub const COMMAND_FORWARD: i32 = 2;

/// The recovered modal result the close handler stores.
pub const CLOSE_MODAL_RESULT: i32 = 2;

/// A rectangle the status bar hands to its panel painter.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PanelRect {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

/// The two recovered per-session flags the browser form keeps.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct BrowserFlags {
    /// Set before a transfer runs and cleared by the next navigation. It is
    /// the only thing keeping a transfer alive: its progress callback gives
    /// up the moment the mark is gone, so starting a navigation is how a
    /// transfer already running gets cancelled.
    pub transfer_wanted: bool,
    /// Set by Stop and consumed by the navigation and transfer callbacks.
    pub stop_requested: bool,
}

pub trait BrowserWindowCreateHost {
    /// Moves the progress bar into the status bar.
    fn reparent_progress_bar(&mut self);

    /// Clears one window style bit from the progress bar.
    fn clear_progress_bar_style(&mut self, style: u32);

    /// Creates the private history list.
    fn create_history_list(&mut self);

    /// Creates the content-transfer helper bound to this form.
    fn create_transfer_helper(&mut self);
}

/// Implements Ghidra function `FUN_01c1fcc0` at `0x01C1FCC0`.
///
/// Builds the browser session: the progress bar is re-parented into the status
/// bar and loses one window style bit so it sits flush inside a panel, the
/// private history list and the content-transfer helper are created, and both
/// per-session flags start clear.
///
/// The handler navigates nowhere, so the browser stays blank until something
/// asks it to load an address.
pub fn create_browser_window(host: &mut impl BrowserWindowCreateHost) -> BrowserFlags {
    host.reparent_progress_bar();
    host.clear_progress_bar_style(PROGRESS_BAR_CLEARED_STYLE);
    host.create_history_list();
    host.create_transfer_helper();
    BrowserFlags::default()
}

pub trait BrowserWindowTeardownHost {
    fn release_transfer_helper(&mut self);

    fn release_history_list(&mut self);
}

/// Implements Ghidra function `FUN_01c1fd70` at `0x01C1FD70`.
///
/// Releases the content-transfer helper and then the private history list. The
/// recovered handler writes no setting, so history entries that were already
/// committed survive and anything else is lost with the form.
pub fn destroy_browser_window(host: &mut impl BrowserWindowTeardownHost) {
    host.release_transfer_helper();
    host.release_history_list();
}

/// Implements Ghidra function `FUN_01c1fda0` at `0x01C1FDA0`.
///
/// Stores the recovered close modal result, but only while the form has none.
/// A result another path already set — the open command's accepted result, for
/// instance — survives the close untouched, which is how the caller can still
/// tell an accepted session from a dismissed one.
#[must_use]
pub const fn close_browser_window(modal_result: i32) -> i32 {
    if modal_result == 0 {
        CLOSE_MODAL_RESULT
    } else {
        modal_result
    }
}

pub trait BrowserNavigationHost {
    /// The text currently in the address combo.
    fn address_text(&mut self) -> String;

    /// Reports whether the combo list already holds one entry.
    fn history_contains(&mut self, address: &str) -> bool;

    fn add_history_entry(&mut self, address: &str);

    /// Writes one history key with an empty value and commits the settings.
    fn commit_history_key(&mut self, section: &str, key: &str);

    /// Navigates the main browser to one address.
    fn navigate_main_browser(&mut self, address: &str);

    /// Reports whether the hosted document object resolves.
    fn document_is_available(&mut self) -> bool;

    /// Activates the hosted browser so it takes the keyboard focus.
    fn activate_browser(&mut self);
}

/// Escapes one address for use as a history settings key.
///
/// The recovered writer replaces the equals sign, which a settings key cannot
/// contain, with the recovered substitute.
#[must_use]
pub fn history_key(address: &str) -> String {
    address.replace(HISTORY_KEY_ESCAPE_FROM, &HISTORY_KEY_ESCAPE_TO.to_string())
}

/// Implements Ghidra function `FUN_01c1fdf0` at `0x01C1FDF0`.
///
/// Navigates to the address in the combo and records it in history.
///
/// The history write happens only for an address the combo does not already
/// list, so revisiting an address neither duplicates the entry nor rewrites the
/// setting. The stored key is the escaped address and the value is empty, which
/// makes the settings section a key-only history list.
///
/// The browser is always navigated with the unescaped text, whether or not the
/// address was new, and the hosted browser is activated afterwards only when
/// its document object resolves.
pub fn navigate_to_address(host: &mut impl BrowserNavigationHost) -> String {
    let address = host.address_text();

    if !host.history_contains(&address) {
        host.add_history_entry(&address);
        host.commit_history_key(HISTORY_SECTION, &history_key(&address));
    }

    host.navigate_main_browser(&address);
    if host.document_is_available() {
        host.activate_browser();
    }
    address
}

/// Implements Ghidra function `FUN_01c1fdc0` at `0x01C1FDC0`.
///
/// Navigates only when Enter is pressed in the address combo. Every other key
/// is left alone, so typing an address never navigates part-way through it.
pub fn address_key_pressed(key: char, host: &mut impl BrowserNavigationHost) -> bool {
    if key != '\r' {
        return false;
    }
    drop(navigate_to_address(host));
    true
}

/// Implements Ghidra function `FUN_01c1fde0` at `0x01C1FDE0`.
///
/// Navigates as soon as an entry is picked from the address combo's drop-down,
/// with no further condition, so choosing a history entry loads it immediately.
pub fn address_selected(host: &mut impl BrowserNavigationHost) {
    drop(navigate_to_address(host));
}

pub trait BrowserHistoryHost {
    fn go_back(&mut self);

    fn go_forward(&mut self);
}

/// Implements Ghidra function `FUN_01c201c0` at `0x01C201C0`.
///
/// Asks the main browser to go back. The recovered handler checks no history
/// availability of its own and relies on the command-state updates to keep the
/// button disabled when there is nothing to go back to.
pub fn go_back(host: &mut impl BrowserHistoryHost) {
    host.go_back();
}

/// Implements Ghidra function `FUN_01c201e0` at `0x01C201E0`.
///
/// Asks the main browser to go forward, with the same absence of a local
/// history check as the back command.
pub fn go_forward(host: &mut impl BrowserHistoryHost) {
    host.go_forward();
}

/// Implements Ghidra function `FUN_01c20200` at `0x01C20200`.
///
/// Raises the pending stop flag. The recovered handler cancels nothing itself:
/// the navigation and content-transfer callbacks consume the flag the next time
/// they run, which is why Stop takes effect at the next callback rather than
/// immediately.
pub const fn request_stop(flags: &mut BrowserFlags) {
    flags.stop_requested = true;
}

pub trait BrowserPopupHost {
    /// Hands the sub-browser's automation object to a new-window request.
    fn supply_sub_browser(&mut self);
}

/// Implements Ghidra function `FUN_01c20210` at `0x01C20210`.
///
/// Answers a new-window request with the hidden sub-browser, so a pop-up loads
/// inside this form instead of opening a separate browser window. The handler
/// inspects neither the target address nor the request flags.
pub fn open_new_window(host: &mut impl BrowserPopupHost) {
    host.supply_sub_browser();
}

pub trait SubBrowserHost {
    /// Sends one address to the main browser.
    fn navigate_main_browser(&mut self, address: &str);
}

/// The answer the sub-browser gives its navigation request.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SubBrowserNavigation {
    /// The recovered handler always cancels the sub-browser's own navigation.
    pub cancelled: bool,
    pub address: String,
}

/// Implements Ghidra function `FUN_01c207e0` at `0x01C207E0`.
///
/// Cancels every sub-browser navigation and re-issues it on the main browser,
/// which is what turns a pop-up into an ordinary page load in this form. The
/// handler inspects no address, so it redirects unconditionally.
pub fn redirect_sub_browser_navigation(
    address: &str,
    host: &mut impl SubBrowserHost,
) -> SubBrowserNavigation {
    host.navigate_main_browser(address);
    SubBrowserNavigation {
        cancelled: true,
        address: address.to_owned(),
    }
}

pub trait BrowserStatusHost {
    /// Moves and resizes the progress bar.
    fn place_progress_bar(&mut self, left: i32, top: i32, width: i32, height: i32);

    fn set_progress_maximum(&mut self, maximum: i32);

    fn set_progress_position(&mut self, position: i32);

    fn set_status_text(&mut self, panel: usize, text: &str);

    fn set_form_caption(&mut self, caption: &str);
}

/// Implements Ghidra function `FUN_01c20860` at `0x01C20860`.
///
/// Places the progress bar over the status bar's last panel when that panel is
/// painted, and ignores every other panel.
///
/// The progress bar is made narrower than the panel by the recovered inset, so
/// the panel's own edge stays visible beside it.
pub fn draw_status_panel(
    panel_index: usize,
    last_panel_index: usize,
    rect: PanelRect,
    host: &mut impl BrowserStatusHost,
) -> bool {
    if panel_index != last_panel_index {
        return false;
    }

    host.place_progress_bar(
        rect.left,
        rect.top,
        rect.right - rect.left - PROGRESS_BAR_PANEL_INSET,
        rect.bottom - rect.top,
    );
    true
}

/// Implements Ghidra function `FUN_01c208e0` at `0x01C208E0`.
///
/// Updates the progress bar from a browser progress report, setting the maximum
/// before the position so a growing total can never clamp the new position. The
/// handler shows no text of its own.
pub fn update_progress(progress: i32, maximum: i32, host: &mut impl BrowserStatusHost) {
    host.set_progress_maximum(maximum);
    host.set_progress_position(progress);
}

/// Implements Ghidra function `FUN_01c20910` at `0x01C20910`.
///
/// Clears the status text when the browser finishes downloading. The recovered
/// handler leaves the progress bar where it is, so the last progress value
/// stays visible until the next navigation moves it.
pub fn download_complete(host: &mut impl BrowserStatusHost) {
    host.set_status_text(STATUS_PANEL, "");
}

/// Implements Ghidra function `FUN_01c20be0` at `0x01C20BE0`.
///
/// Shows the browser's own status text in the status bar's first panel,
/// unchanged. An empty report clears the panel, which is how the browser stops
/// showing a stale link target.
pub fn status_text_changed(text: &str, host: &mut impl BrowserStatusHost) {
    host.set_status_text(STATUS_PANEL, text);
}

/// Implements Ghidra function `FUN_01c20940` at `0x01C20940`.
///
/// Copies the document title into the form caption, unchanged and without a
/// product name, so the window is titled by whatever page it is showing.
pub fn title_changed(title: &str, host: &mut impl BrowserStatusHost) {
    host.set_form_caption(title);
}

pub trait BrowserAddressHost {
    /// The browser's current location.
    fn browser_location(&mut self) -> String;

    fn set_address_text(&mut self, address: &str);
}

/// Implements Ghidra function `FUN_01c209b0` at `0x01C209B0`.
///
/// Writes the browser's own location back into the address combo once a
/// document finishes loading, so a redirect or an in-page link leaves the combo
/// showing where the browser actually ended up. The handler adds no history
/// entry.
pub fn document_complete(host: &mut impl BrowserAddressHost) -> String {
    let location = host.browser_location();
    host.set_address_text(&location);
    location
}

pub trait BrowserCommandHost {
    fn set_back_enabled(&mut self, enabled: bool);

    fn set_forward_enabled(&mut self, enabled: bool);
}

/// Implements Ghidra function `FUN_01c20a60` at `0x01C20A60`.
///
/// Enables the back and forward buttons from the browser's own command-state
/// reports. Only the two recovered command identifiers are handled; every other
/// command leaves both buttons as they are.
pub fn command_state_changed(
    command: i32,
    enabled: bool,
    host: &mut impl BrowserCommandHost,
) -> bool {
    if command == COMMAND_BACK {
        host.set_back_enabled(enabled);
        true
    } else if command == COMMAND_FORWARD {
        host.set_forward_enabled(enabled);
        true
    } else {
        false
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum CreateStep {
        Reparent,
        Style(u32),
        History,
        Transfer,
    }

    #[derive(Debug, Default)]
    struct CreateHost {
        steps: Vec<CreateStep>,
    }

    impl BrowserWindowCreateHost for CreateHost {
        fn reparent_progress_bar(&mut self) {
            self.steps.push(CreateStep::Reparent);
        }

        fn clear_progress_bar_style(&mut self, style: u32) {
            self.steps.push(CreateStep::Style(style));
        }

        fn create_history_list(&mut self) {
            self.steps.push(CreateStep::History);
        }

        fn create_transfer_helper(&mut self) {
            self.steps.push(CreateStep::Transfer);
        }
    }

    #[test]
    fn create_prepares_the_progress_bar_and_starts_both_flags_clear() {
        let mut host = CreateHost::default();

        let flags = create_browser_window(&mut host);

        assert_eq!(flags, BrowserFlags::default());
        assert_eq!(
            host.steps,
            [
                CreateStep::Reparent,
                CreateStep::Style(PROGRESS_BAR_CLEARED_STYLE),
                CreateStep::History,
                CreateStep::Transfer,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct TeardownHost {
        steps: Vec<&'static str>,
    }

    impl BrowserWindowTeardownHost for TeardownHost {
        fn release_transfer_helper(&mut self) {
            self.steps.push("transfer");
        }

        fn release_history_list(&mut self) {
            self.steps.push("history");
        }
    }

    #[test]
    fn destroy_releases_the_transfer_helper_before_the_history_list() {
        let mut host = TeardownHost::default();

        destroy_browser_window(&mut host);

        assert_eq!(host.steps, ["transfer", "history"]);
    }

    #[test]
    fn close_only_fills_in_a_modal_result_the_form_does_not_have() {
        assert_eq!(close_browser_window(0), CLOSE_MODAL_RESULT);
        assert_eq!(close_browser_window(1), 1);
        assert_eq!(close_browser_window(CLOSE_MODAL_RESULT), CLOSE_MODAL_RESULT);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum NavStep {
        Add(String),
        Commit(String, String),
        Navigate(String),
        Activate,
    }

    #[derive(Debug, Default)]
    struct NavHost {
        address: String,
        known: Vec<String>,
        document: bool,
        steps: Vec<NavStep>,
    }

    impl BrowserNavigationHost for NavHost {
        fn address_text(&mut self) -> String {
            self.address.clone()
        }

        fn history_contains(&mut self, address: &str) -> bool {
            self.known.iter().any(|known| known == address)
        }

        fn add_history_entry(&mut self, address: &str) {
            self.known.push(address.to_owned());
            self.steps.push(NavStep::Add(address.to_owned()));
        }

        fn commit_history_key(&mut self, section: &str, key: &str) {
            self.steps
                .push(NavStep::Commit(section.to_owned(), key.to_owned()));
        }

        fn navigate_main_browser(&mut self, address: &str) {
            self.steps.push(NavStep::Navigate(address.to_owned()));
        }

        fn document_is_available(&mut self) -> bool {
            self.document
        }

        fn activate_browser(&mut self) {
            self.steps.push(NavStep::Activate);
        }
    }

    #[test]
    fn a_new_address_is_added_to_history_with_its_equals_signs_escaped() {
        let mut host = NavHost {
            address: "http://example.com/?a=1&b=2".to_owned(),
            document: true,
            ..NavHost::default()
        };

        assert_eq!(
            navigate_to_address(&mut host),
            "http://example.com/?a=1&b=2"
        );

        assert_eq!(
            host.steps,
            [
                NavStep::Add("http://example.com/?a=1&b=2".to_owned()),
                NavStep::Commit(
                    HISTORY_SECTION.to_owned(),
                    "http://example.com/?a@1&b@2".to_owned()
                ),
                NavStep::Navigate("http://example.com/?a=1&b=2".to_owned()),
                NavStep::Activate,
            ]
        );
    }

    #[test]
    fn a_known_address_navigates_without_touching_history() {
        let mut host = NavHost {
            address: "http://example.com/".to_owned(),
            known: vec!["http://example.com/".to_owned()],
            ..NavHost::default()
        };

        drop(navigate_to_address(&mut host));

        assert_eq!(
            host.steps,
            [NavStep::Navigate("http://example.com/".to_owned())]
        );
    }

    #[test]
    fn only_enter_navigates_from_the_address_combo() {
        let mut typing = NavHost {
            address: "a".to_owned(),
            ..NavHost::default()
        };
        assert!(!address_key_pressed('a', &mut typing));
        assert!(typing.steps.is_empty());

        let mut entered = NavHost {
            address: "a".to_owned(),
            ..NavHost::default()
        };
        assert!(address_key_pressed('\r', &mut entered));
        assert!(entered.steps.contains(&NavStep::Navigate("a".to_owned())));

        let mut picked = NavHost {
            address: "a".to_owned(),
            ..NavHost::default()
        };
        address_selected(&mut picked);
        assert!(picked.steps.contains(&NavStep::Navigate("a".to_owned())));
    }

    #[derive(Debug, Default)]
    struct HistoryHost {
        steps: Vec<&'static str>,
    }

    impl BrowserHistoryHost for HistoryHost {
        fn go_back(&mut self) {
            self.steps.push("back");
        }

        fn go_forward(&mut self) {
            self.steps.push("forward");
        }
    }

    #[test]
    fn the_history_buttons_forward_straight_to_the_browser() {
        let mut host = HistoryHost::default();

        go_back(&mut host);
        go_forward(&mut host);

        assert_eq!(host.steps, ["back", "forward"]);
    }

    #[test]
    fn stop_only_raises_the_pending_flag() {
        let mut flags = BrowserFlags::default();

        request_stop(&mut flags);

        assert!(flags.stop_requested);
        assert!(!flags.transfer_wanted);
    }

    #[derive(Debug, Default)]
    struct PopupHost {
        supplied: usize,
    }

    impl BrowserPopupHost for PopupHost {
        fn supply_sub_browser(&mut self) {
            self.supplied += 1;
        }
    }

    #[derive(Debug, Default)]
    struct SubHost {
        navigated: Vec<String>,
    }

    impl SubBrowserHost for SubHost {
        fn navigate_main_browser(&mut self, address: &str) {
            self.navigated.push(address.to_owned());
        }
    }

    #[test]
    fn a_popup_is_answered_with_the_sub_browser_then_redirected_to_the_main_one() {
        let mut popup = PopupHost::default();
        open_new_window(&mut popup);
        assert_eq!(popup.supplied, 1);

        let mut sub = SubHost::default();
        let outcome = redirect_sub_browser_navigation("http://popup/", &mut sub);

        assert!(outcome.cancelled);
        assert_eq!(outcome.address, "http://popup/");
        assert_eq!(sub.navigated, ["http://popup/".to_owned()]);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum StatusStep {
        Place(i32, i32, i32, i32),
        Maximum(i32),
        Position(i32),
        Status(usize, String),
        Caption(String),
    }

    #[derive(Debug, Default)]
    struct StatusHost {
        steps: Vec<StatusStep>,
    }

    impl BrowserStatusHost for StatusHost {
        fn place_progress_bar(&mut self, left: i32, top: i32, width: i32, height: i32) {
            self.steps.push(StatusStep::Place(left, top, width, height));
        }

        fn set_progress_maximum(&mut self, maximum: i32) {
            self.steps.push(StatusStep::Maximum(maximum));
        }

        fn set_progress_position(&mut self, position: i32) {
            self.steps.push(StatusStep::Position(position));
        }

        fn set_status_text(&mut self, panel: usize, text: &str) {
            self.steps.push(StatusStep::Status(panel, text.to_owned()));
        }

        fn set_form_caption(&mut self, caption: &str) {
            self.steps.push(StatusStep::Caption(caption.to_owned()));
        }
    }

    const PANEL: PanelRect = PanelRect {
        left: 100,
        top: 4,
        right: 300,
        bottom: 24,
    };

    #[test]
    fn only_the_last_status_panel_receives_the_progress_bar() {
        let mut host = StatusHost::default();

        assert!(draw_status_panel(2, 2, PANEL, &mut host));
        assert!(!draw_status_panel(0, 2, PANEL, &mut host));

        assert_eq!(
            host.steps,
            [StatusStep::Place(
                100,
                4,
                200 - PROGRESS_BAR_PANEL_INSET,
                20
            )]
        );
    }

    #[test]
    fn progress_sets_the_maximum_before_the_position() {
        let mut host = StatusHost::default();

        update_progress(30, 100, &mut host);

        assert_eq!(
            host.steps,
            [StatusStep::Maximum(100), StatusStep::Position(30)]
        );
    }

    #[test]
    fn status_text_and_the_download_end_share_the_first_panel() {
        let mut host = StatusHost::default();

        status_text_changed("Opening page...", &mut host);
        download_complete(&mut host);

        assert_eq!(
            host.steps,
            [
                StatusStep::Status(STATUS_PANEL, "Opening page...".to_owned()),
                StatusStep::Status(STATUS_PANEL, String::new()),
            ]
        );
    }

    #[test]
    fn the_document_title_becomes_the_window_caption_unchanged() {
        let mut host = StatusHost::default();

        title_changed("Example Domain", &mut host);

        assert_eq!(
            host.steps,
            [StatusStep::Caption("Example Domain".to_owned())]
        );
    }

    #[derive(Debug, Default)]
    struct AddressHost {
        location: String,
        written: Vec<String>,
    }

    impl BrowserAddressHost for AddressHost {
        fn browser_location(&mut self) -> String {
            self.location.clone()
        }

        fn set_address_text(&mut self, address: &str) {
            self.written.push(address.to_owned());
        }
    }

    #[test]
    fn a_finished_document_writes_the_browsers_own_location_back() {
        let mut host = AddressHost {
            location: "http://example.com/landing".to_owned(),
            written: Vec::new(),
        };

        assert_eq!(document_complete(&mut host), "http://example.com/landing");
        assert_eq!(host.written, ["http://example.com/landing".to_owned()]);
    }

    #[derive(Debug, Default)]
    struct CommandHost {
        back: Vec<bool>,
        forward: Vec<bool>,
    }

    impl BrowserCommandHost for CommandHost {
        fn set_back_enabled(&mut self, enabled: bool) {
            self.back.push(enabled);
        }

        fn set_forward_enabled(&mut self, enabled: bool) {
            self.forward.push(enabled);
        }
    }

    #[test]
    fn only_the_two_recovered_commands_change_a_button() {
        let mut host = CommandHost::default();

        assert!(command_state_changed(COMMAND_BACK, true, &mut host));
        assert!(command_state_changed(COMMAND_FORWARD, false, &mut host));
        assert!(!command_state_changed(7, true, &mut host));

        assert_eq!(host.back, [true]);
        assert_eq!(host.forward, [false]);
    }
}

/// What the status bar says while a transfer runs, before the file's name.
pub const DOWNLOADING_PREFIX: &str = "Downloading ";

/// The localized prompt shown before a content link is fetched.
pub const OPEN_CONTENT_PROMPT_KEY: &str = "BrowserWin.OpenContentTxt";

/// The answer that means the user agreed to fetch it.
pub const PROMPT_YES: i32 = 6;

/// The value written back to cancel a navigation.
///
/// The control takes a word rather than a boolean, and this is the value the
/// recovered handler writes for every one of its three reasons to cancel.
pub const CANCEL_NAVIGATION: u16 = 0xffff;

/// The result that means a fetched file was opened.
pub const OPEN_SUCCEEDED: i32 = 1;

/// Whether a navigation goes ahead.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NavigationDecision {
    /// Let the browser navigate.
    Proceed,
    /// Stop it, because Stop was pressed.
    CancelStopped,
    /// Stop it, because the address is one the application handles itself.
    CancelHandled,
    /// Stop it, because the address named content — whether or not the user
    /// agreed to fetch it.
    CancelContent {
        /// Whether the user agreed, and the file was therefore fetched.
        fetched: bool,
        /// Whether opening the fetched file succeeded.
        opened: bool,
    },
}

impl NavigationDecision {
    /// Whether the browser is allowed to navigate.
    #[must_use]
    pub const fn proceeds(self) -> bool {
        matches!(self, Self::Proceed)
    }
}

/// What intercepting a navigation needs from the browser.
pub trait NavigationHost {
    /// The form's two flags.
    fn flags(&mut self) -> BrowserFlags;

    /// Clears the flag that says a transfer is wanted.
    fn clear_transfer_wanted(&mut self);

    /// Consumes the stop request, so it cancels one navigation and not the
    /// next.
    fn consume_stop_request(&mut self);

    /// Puts a message in the status bar.
    fn set_status(&mut self, text: &str);

    /// Whether the application handles this address itself rather than
    /// browsing to it.
    fn handled_internally(&mut self, url: &str) -> bool;

    /// The content this address names, when it names any.
    fn content_for(&mut self, url: &str) -> Option<String>;

    /// Asks the user whether to fetch the content, returning the answer code.
    fn ask_to_fetch(&mut self, prompt_key: &str, content: &str) -> i32;

    /// Fetches the content, showing progress under this caption.
    fn fetch(&mut self, caption: &str, content: &str);

    /// Opens what was fetched, returning the recovered result code.
    fn open_fetched(&mut self, content: &str) -> i32;

    /// Records that a fetched file opened.
    fn note_opened(&mut self);
}

/// Implements Ghidra function `FUN_01c20280` at `0x01C20280`.
///
/// Handles `BrowserFrm.MainBrowser.OnBeforeNavigate2`.
///
/// Decides what to do with a link before the browser follows it.
///
/// The browser is not only a browser: some of the addresses it shows name
/// circuits and macros rather than pages, and following them would put a file
/// in the browser instead of in the application. So every navigation is
/// looked at first, and three quite different things can stop it — a pressed
/// Stop, an address the application handles itself, or an address naming
/// content, which is offered to the user as a download instead.
///
/// The content case cancels the navigation whether or not the user agrees, so
/// declining leaves the page where it was rather than following the link
/// anyway.
///
/// Stop is a latch that cancels exactly one navigation: it is consumed here,
/// so pressing Stop does not leave the browser unable to go anywhere.
pub fn before_navigate(host: &mut impl NavigationHost, url: &str) -> NavigationDecision {
    if host.flags().stop_requested {
        host.consume_stop_request();
        return NavigationDecision::CancelStopped;
    }

    host.clear_transfer_wanted();
    host.set_status(&format!("{DOWNLOADING_PREFIX}{url}"));

    if host.handled_internally(url) {
        return NavigationDecision::CancelHandled;
    }

    let Some(content) = host.content_for(url) else {
        return NavigationDecision::Proceed;
    };

    if host.ask_to_fetch(OPEN_CONTENT_PROMPT_KEY, &content) != PROMPT_YES {
        return NavigationDecision::CancelContent {
            fetched: false,
            opened: false,
        };
    }

    host.fetch(url, &content);
    let opened = host.open_fetched(&content) == OPEN_SUCCEEDED;
    if opened {
        host.note_opened();
    }

    NavigationDecision::CancelContent {
        fetched: true,
        opened,
    }
}

/// What a transfer's progress report leads to.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TransferProgress {
    /// Keep going, with the bar set to these bounds.
    Continue {
        /// How much there is in total.
        total: i64,
        /// How much has arrived.
        position: i64,
    },
    /// Everything has arrived; the bar goes back to empty.
    Finished,
    /// Give up, because Stop was pressed.
    CancelStopped,
    /// Give up, because nothing is waiting for this transfer any more.
    CancelUnwanted,
}

impl TransferProgress {
    /// Whether the transfer is told to stop.
    #[must_use]
    pub const fn cancels(self) -> bool {
        matches!(self, Self::CancelStopped | Self::CancelUnwanted)
    }
}

/// Implements Ghidra function `FUN_01c20ac0` at `0x01C20AC0`.
///
/// Decides what one transfer progress report means.
///
/// A transfer is cancelled by either flag going the wrong way, and the second
/// of those is what makes a new navigation cancel a transfer already running:
/// [`before_navigate`] clears the wanted flag, so the next progress report
/// from the old transfer finds nothing waiting for it and gives up. Nothing
/// has to find the transfer and stop it.
///
/// The two cancels differ in one way that matters. A stop request is
/// *consumed* — it cancels this transfer and not the next — while an unwanted
/// transfer stays unwanted, so every later report cancels too.
#[must_use]
pub const fn transfer_progress(flags: BrowserFlags, position: i64, total: i64) -> TransferProgress {
    if flags.stop_requested {
        return TransferProgress::CancelStopped;
    }
    if position == total {
        return TransferProgress::Finished;
    }
    if !flags.transfer_wanted {
        return TransferProgress::CancelUnwanted;
    }
    TransferProgress::Continue { total, position }
}

/// What fetching one file needs from the browser.
pub trait TransferHost {
    /// Names the transfer for the progress display.
    fn set_caption(&mut self, caption: &str);

    /// The address the relative path is resolved against.
    fn base_address(&mut self) -> String;

    /// Points the transfer at one address.
    fn set_address(&mut self, address: &str);

    /// Marks a transfer as wanted, which is what lets its progress reports
    /// keep it alive.
    fn mark_transfer_wanted(&mut self);

    /// Runs the transfer to completion.
    fn run(&mut self);
}

/// Implements Ghidra function `FUN_01c1f390` at `0x01C1F390`.
///
/// Fetches one file, showing its progress.
///
/// The transfer is marked as wanted before it starts, which is the only thing
/// keeping it alive — its progress callback gives up the moment that mark is
/// gone, and a new navigation is what takes it away. So a transfer is
/// cancelled by starting something else rather than by being found and
/// stopped.
///
/// Returns the address it fetched.
pub fn fetch_content(host: &mut impl TransferHost, caption: &str, relative: &str) -> String {
    host.set_caption(caption);

    let address = format!("{}{relative}", host.base_address());
    host.set_address(&address);

    host.mark_transfer_wanted();
    host.run();
    address
}

/// What opening a typed address needs from the browser.
pub trait OpenAddressHost {
    /// What the user typed.
    fn typed_address(&mut self) -> String;

    /// Reduces a typed address to the part that names the content.
    fn content_of(&mut self, typed: &str) -> String;

    /// Fetches it, showing progress.
    fn fetch(&mut self, caption: &str, content: &str);

    /// The address the content is resolved against.
    fn base_address(&mut self) -> String;

    /// Opens what was fetched, returning the recovered result code.
    fn open_fetched(&mut self, address: &str) -> i32;

    /// Records that a fetched file opened.
    fn note_opened(&mut self);
}

/// Implements Ghidra function `FUN_01c20c60` at `0x01C20C60`.
///
/// Handles `BrowserFrm.TopPL.OpenBtn.OnClick`.
///
/// Fetches and opens whatever the user typed in the address bar.
///
/// Open does not browse to the address: it takes the same path a content link
/// takes, so typing an address and following a link to it end up in the same
/// place. The typed text is kept as the transfer's caption while only the
/// content part of it is fetched, which is why the progress display shows
/// what the user typed rather than the resolved address.
///
/// Returns whether the fetched file opened.
pub fn open_typed_address(host: &mut impl OpenAddressHost) -> bool {
    let typed = host.typed_address();
    let content = host.content_of(&typed);

    host.fetch(&typed, &content);

    let address = format!("{}{content}", host.base_address());
    let opened = host.open_fetched(&address) == OPEN_SUCCEEDED;
    if opened {
        host.note_opened();
    }
    opened
}

#[cfg(test)]
mod browser_navigation_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        ClearWanted,
        ConsumeStop,
        Status(String),
        Ask(String),
        Fetch(String, String),
        Open(String),
        NoteOpened,
    }

    #[derive(Debug, Default)]
    struct Browser {
        flags: BrowserFlags,
        handled: bool,
        content: Option<String>,
        answer: i32,
        open_result: i32,
        steps: Vec<Step>,
    }

    impl NavigationHost for Browser {
        fn flags(&mut self) -> BrowserFlags {
            self.flags
        }

        fn clear_transfer_wanted(&mut self) {
            self.flags.transfer_wanted = false;
            self.steps.push(Step::ClearWanted);
        }

        fn consume_stop_request(&mut self) {
            self.flags.stop_requested = false;
            self.steps.push(Step::ConsumeStop);
        }

        fn set_status(&mut self, text: &str) {
            self.steps.push(Step::Status(text.to_owned()));
        }

        fn handled_internally(&mut self, _url: &str) -> bool {
            self.handled
        }

        fn content_for(&mut self, _url: &str) -> Option<String> {
            self.content.clone()
        }

        fn ask_to_fetch(&mut self, _prompt_key: &str, content: &str) -> i32 {
            self.steps.push(Step::Ask(content.to_owned()));
            self.answer
        }

        fn fetch(&mut self, caption: &str, content: &str) {
            self.steps
                .push(Step::Fetch(caption.to_owned(), content.to_owned()));
        }

        fn open_fetched(&mut self, content: &str) -> i32 {
            self.steps.push(Step::Open(content.to_owned()));
            self.open_result
        }

        fn note_opened(&mut self) {
            self.steps.push(Step::NoteOpened);
        }
    }

    #[test]
    fn an_ordinary_address_is_followed() {
        let mut host = Browser::default();

        assert_eq!(
            before_navigate(&mut host, "http://example.com/page"),
            NavigationDecision::Proceed
        );
        assert!(NavigationDecision::Proceed.proceeds());
    }

    #[test]
    fn a_pending_stop_cancels_one_navigation_and_is_then_gone() {
        let mut host = Browser {
            flags: BrowserFlags {
                stop_requested: true,
                ..BrowserFlags::default()
            },
            ..Browser::default()
        };

        assert_eq!(
            before_navigate(&mut host, "http://example.com/"),
            NavigationDecision::CancelStopped
        );
        assert!(!host.flags.stop_requested);

        assert_eq!(
            before_navigate(&mut host, "http://example.com/"),
            NavigationDecision::Proceed
        );
    }

    #[test]
    fn a_stopped_navigation_never_reaches_the_status_bar() {
        let mut host = Browser {
            flags: BrowserFlags {
                stop_requested: true,
                ..BrowserFlags::default()
            },
            ..Browser::default()
        };
        before_navigate(&mut host, "http://example.com/");

        assert_eq!(host.steps, [Step::ConsumeStop]);
    }

    #[test]
    fn an_address_the_application_handles_is_not_browsed_to() {
        let mut host = Browser {
            handled: true,
            ..Browser::default()
        };

        assert_eq!(
            before_navigate(&mut host, "tina://open"),
            NavigationDecision::CancelHandled
        );
        assert!(!host.steps.iter().any(|s| matches!(s, Step::Ask(_))));
    }

    #[test]
    fn content_is_offered_as_a_download_and_the_link_is_never_followed() {
        let mut host = Browser {
            content: Some("amp.tsc".to_owned()),
            answer: PROMPT_YES,
            open_result: OPEN_SUCCEEDED,
            ..Browser::default()
        };

        assert_eq!(
            before_navigate(&mut host, "http://example.com/amp.tsc"),
            NavigationDecision::CancelContent {
                fetched: true,
                opened: true,
            }
        );
        assert!(host.steps.contains(&Step::Fetch(
            "http://example.com/amp.tsc".to_owned(),
            "amp.tsc".to_owned()
        )));
        assert!(host.steps.contains(&Step::NoteOpened));
    }

    #[test]
    fn declining_the_download_still_leaves_the_page_where_it_was() {
        let mut host = Browser {
            content: Some("amp.tsc".to_owned()),
            answer: 7,
            ..Browser::default()
        };

        assert_eq!(
            before_navigate(&mut host, "http://example.com/amp.tsc"),
            NavigationDecision::CancelContent {
                fetched: false,
                opened: false,
            }
        );
        assert!(!host.steps.iter().any(|s| matches!(s, Step::Fetch(..))));
    }

    #[test]
    fn a_fetch_that_does_not_open_is_reported_as_such() {
        let mut host = Browser {
            content: Some("amp.tsc".to_owned()),
            answer: PROMPT_YES,
            open_result: 0,
            ..Browser::default()
        };

        assert_eq!(
            before_navigate(&mut host, "http://example.com/amp.tsc"),
            NavigationDecision::CancelContent {
                fetched: true,
                opened: false,
            }
        );
        assert!(!host.steps.contains(&Step::NoteOpened));
    }

    #[test]
    fn every_navigation_that_is_looked_at_clears_the_transfer_mark_first() {
        let mut host = Browser {
            flags: BrowserFlags {
                transfer_wanted: true,
                stop_requested: false,
            },
            ..Browser::default()
        };

        before_navigate(&mut host, "http://example.com/");

        assert!(!host.flags.transfer_wanted);
        assert_eq!(host.steps.first(), Some(&Step::ClearWanted));
    }

    #[test]
    fn the_status_bar_names_the_address_being_fetched() {
        let mut host = Browser::default();
        before_navigate(&mut host, "http://example.com/amp.tsc");

        assert!(host.steps.contains(&Step::Status(
            "Downloading http://example.com/amp.tsc".to_owned()
        )));
    }
}

#[cfg(test)]
mod browser_transfer_tests {
    use super::*;

    const fn running() -> BrowserFlags {
        BrowserFlags {
            transfer_wanted: true,
            stop_requested: false,
        }
    }

    #[test]
    fn a_running_transfer_reports_its_bounds() {
        assert_eq!(
            transfer_progress(running(), 512, 2048),
            TransferProgress::Continue {
                total: 2048,
                position: 512,
            }
        );
    }

    #[test]
    fn a_complete_transfer_empties_the_bar() {
        assert_eq!(
            transfer_progress(running(), 2048, 2048),
            TransferProgress::Finished
        );
        assert!(!TransferProgress::Finished.cancels());
    }

    #[test]
    fn a_transfer_nothing_is_waiting_for_gives_up() {
        let unwanted = BrowserFlags {
            transfer_wanted: false,
            stop_requested: false,
        };

        assert_eq!(
            transfer_progress(unwanted, 512, 2048),
            TransferProgress::CancelUnwanted
        );
        assert!(TransferProgress::CancelUnwanted.cancels());
    }

    #[test]
    fn stop_beats_everything_including_completion() {
        let stopped = BrowserFlags {
            transfer_wanted: true,
            stop_requested: true,
        };

        assert_eq!(
            transfer_progress(stopped, 2048, 2048),
            TransferProgress::CancelStopped
        );
    }

    #[test]
    fn a_completed_transfer_is_reported_complete_even_when_unwanted() {
        let unwanted = BrowserFlags {
            transfer_wanted: false,
            stop_requested: false,
        };

        // The completion test comes first, so the last report of a transfer
        // that has been abandoned still tidies the bar rather than cancelling.
        assert_eq!(
            transfer_progress(unwanted, 2048, 2048),
            TransferProgress::Finished
        );
    }

    #[test]
    fn an_empty_transfer_is_complete_from_its_first_report() {
        assert_eq!(
            transfer_progress(running(), 0, 0),
            TransferProgress::Finished
        );
    }

    #[derive(Debug, Default)]
    struct Transfer {
        caption: Option<String>,
        address: Option<String>,
        wanted_before_run: Option<bool>,
        wanted: bool,
        ran: bool,
    }

    impl TransferHost for Transfer {
        fn set_caption(&mut self, caption: &str) {
            self.caption = Some(caption.to_owned());
        }

        fn base_address(&mut self) -> String {
            "http://example.com/".to_owned()
        }

        fn set_address(&mut self, address: &str) {
            self.address = Some(address.to_owned());
        }

        fn mark_transfer_wanted(&mut self) {
            self.wanted = true;
        }

        fn run(&mut self) {
            self.wanted_before_run = Some(self.wanted);
            self.ran = true;
        }
    }

    #[test]
    fn a_fetch_resolves_its_address_against_the_base() {
        let mut host = Transfer::default();

        assert_eq!(
            fetch_content(&mut host, "Example circuit", "amp.tsc"),
            "http://example.com/amp.tsc"
        );
        assert_eq!(host.caption.as_deref(), Some("Example circuit"));
    }

    #[test]
    fn the_transfer_is_marked_wanted_before_it_runs() {
        let mut host = Transfer::default();
        fetch_content(&mut host, "c", "amp.tsc");

        assert_eq!(host.wanted_before_run, Some(true));
        assert!(host.ran);
    }
}

#[cfg(test)]
mod browser_open_tests {
    use super::*;

    #[derive(Debug, Default)]
    #[allow(clippy::struct_field_names)]
    struct Address {
        typed: String,
        open_result: i32,
        fetched: Option<(String, String)>,
        opened_address: Option<String>,
        noted: bool,
    }

    impl OpenAddressHost for Address {
        fn typed_address(&mut self) -> String {
            self.typed.clone()
        }

        fn content_of(&mut self, typed: &str) -> String {
            typed.rsplit('/').next().unwrap_or(typed).to_owned()
        }

        fn fetch(&mut self, caption: &str, content: &str) {
            self.fetched = Some((caption.to_owned(), content.to_owned()));
        }

        fn base_address(&mut self) -> String {
            "http://example.com/".to_owned()
        }

        fn open_fetched(&mut self, address: &str) -> i32 {
            self.opened_address = Some(address.to_owned());
            self.open_result
        }

        fn note_opened(&mut self) {
            self.noted = true;
        }
    }

    #[test]
    fn open_fetches_the_content_under_the_text_the_user_typed() {
        let mut host = Address {
            typed: "http://example.com/lib/amp.tsc".to_owned(),
            open_result: OPEN_SUCCEEDED,
            ..Address::default()
        };

        assert!(open_typed_address(&mut host));
        assert_eq!(
            host.fetched,
            Some((
                "http://example.com/lib/amp.tsc".to_owned(),
                "amp.tsc".to_owned()
            ))
        );
        assert!(host.noted);
    }

    #[test]
    fn open_resolves_the_content_against_the_base_rather_than_using_the_typed_text() {
        let mut host = Address {
            typed: "http://elsewhere.invalid/lib/amp.tsc".to_owned(),
            open_result: OPEN_SUCCEEDED,
            ..Address::default()
        };
        open_typed_address(&mut host);

        assert_eq!(
            host.opened_address.as_deref(),
            Some("http://example.com/amp.tsc")
        );
    }

    #[test]
    fn a_file_that_does_not_open_is_not_noted() {
        let mut host = Address {
            typed: "amp.tsc".to_owned(),
            open_result: 0,
            ..Address::default()
        };

        assert!(!open_typed_address(&mut host));
        assert!(!host.noted);
    }
}
