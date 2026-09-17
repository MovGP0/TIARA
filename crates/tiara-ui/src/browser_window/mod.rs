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
    /// The recovered first flag, cleared when the form is created.
    pub first: bool,
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
        assert!(!flags.first);
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
