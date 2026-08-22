//! Test and measurement option state and host-effect adapters.

use iced::widget::{button, checkbox, column, container, row, text};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "T&M Options";
pub const SCREENSHOT: &str = "screenshots/TM_Options_Window.png";
pub const FORM_RESOURCE: &str = "MeasOptionDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b70fa0");
pub const HARDWARE_SHUTDOWN_MESSAGE: u32 = 0x053E;
pub const PROFILE_SECTION: &str = "Schematic Editor";
pub const PROFILE_KEY: &str = "Measurement";
pub const PROFILE_FILE: &str = "TINA.INI";

const STATUS: &str = "Test and measurement settings";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementProfileValue {
    Enabled,
    Disabled,
}

impl MeasurementProfileValue {
    #[must_use]
    pub const fn as_str(self) -> &'static str {
        match self {
            Self::Enabled => "Enabled",
            Self::Disabled => "Disabled",
        }
    }
}

/// Supplies runtime and profile effects owned by the application host.
pub trait MeasurementOptionsHost {
    fn store_generator_matching(&mut self, enabled: bool);
    fn store_hardware_disabled(&mut self, disabled: bool);
    fn initialize_hardware(&mut self);
    fn refresh_hardware_controls(&mut self);
    fn notify_hardware_shutdown(&mut self, message: u32);
    fn shutdown_hardware(&mut self);
    fn write_profile(
        &mut self,
        file: &str,
        section: &str,
        key: &str,
        value: MeasurementProfileValue,
    );
}

/// Requests the setup UI owned by the optional hardware-interface module.
///
/// The platform adapter owns module and export lookup. It must treat a missing
/// module or missing `CallHWSetupDialog` export as a silent no-op.
pub trait HardwareSetupAdapter {
    fn request_hardware_setup(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct MeasurementOptions {
    pub generator_matching: bool,
    pub hardware_disabled: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    Apply,
    Cancel,
    Help,
    OpenHardwareSetup,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    GeneratorMatchingChanged(bool),
    HardwareDisabledChanged(bool),
    Apply,
    Cancel,
    Help,
    OpenHardwareSetup,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    working: MeasurementOptions,
    applied: MeasurementOptions,
    pending_action: Option<Action>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(MeasurementOptions::default())
    }
}

impl Window {
    #[must_use]
    pub const fn new(options: MeasurementOptions) -> Self {
        Self {
            working: options,
            applied: options,
            pending_action: None,
        }
    }

    pub const fn update(&mut self, message: Message) {
        match message {
            Message::GeneratorMatchingChanged(value) => {
                self.working.generator_matching = value;
            }
            Message::HardwareDisabledChanged(value) => {
                self.working.hardware_disabled = value;
            }
            Message::Apply => self.pending_action = Some(Action::Apply),
            Message::Cancel => self.pending_action = Some(Action::Cancel),
            Message::Help => self.pending_action = Some(Action::Help),
            Message::OpenHardwareSetup => {
                self.pending_action = Some(Action::OpenHardwareSetup);
            }
        }
    }

    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    #[must_use]
    pub const fn working(&self) -> MeasurementOptions {
        self.working
    }

    #[must_use]
    pub const fn applied(&self) -> MeasurementOptions {
        self.applied
    }

    /// Ports Ghidra function `FUN_01b71000` at `0x01B71000`.
    ///
    /// Generator matching is stored on every call. A changed hardware choice
    /// starts and refreshes hardware after the enabled state is stored, or
    /// sends message `0x053E` and shuts hardware down before the disabled state
    /// is stored. The final measurement state is always written to `TINA.INI`.
    pub fn apply(&mut self, host: &mut impl MeasurementOptionsHost) {
        host.store_generator_matching(self.working.generator_matching);

        if self.working.hardware_disabled != self.applied.hardware_disabled {
            if self.working.hardware_disabled {
                host.notify_hardware_shutdown(HARDWARE_SHUTDOWN_MESSAGE);
                host.shutdown_hardware();
                host.store_hardware_disabled(true);
            } else {
                host.store_hardware_disabled(false);
                host.initialize_hardware();
                host.refresh_hardware_controls();
            }
        }

        self.applied = self.working;
        let value = if self.applied.hardware_disabled {
            MeasurementProfileValue::Disabled
        } else {
            MeasurementProfileValue::Enabled
        };
        host.write_profile(PROFILE_FILE, PROFILE_SECTION, PROFILE_KEY, value);
    }

    /// Ports Ghidra function `FUN_01b712d0` at `0x01B712D0`.
    ///
    /// Delegates the request to the guarded hardware setup adapter. The method
    /// does not inspect a result or change either dialog option.
    pub fn open_hardware_setup(&self, adapter: &mut impl HardwareSetupAdapter) {
        adapter.request_hardware_setup();
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered form-create connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar: Element<'_, Message> = container(
            row![
                button("OK").on_press(Message::Apply),
                button("Cancel").on_press(Message::Cancel),
                button("Help").on_press(Message::Help),
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into();
        let body: Element<'_, Message> = container(
            column![
                checkbox("Generator matching", self.working.generator_matching)
                    .on_toggle(Message::GeneratorMatchingChanged),
                checkbox("Disable Hardware", self.working.hardware_disabled)
                    .on_toggle(Message::HardwareDisabledChanged),
                button(text("HW Setup..."))
                    .width(Length::Fill)
                    .on_press(Message::OpenHardwareSetup),
            ]
            .spacing(8),
        )
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Event {
        StoreGenerator(bool),
        StoreHardwareDisabled(bool),
        InitializeHardware,
        RefreshHardwareControls,
        NotifyShutdown(u32),
        ShutdownHardware,
        WriteProfile {
            file: String,
            section: String,
            key: String,
            value: MeasurementProfileValue,
        },
    }

    #[derive(Default)]
    struct Host {
        events: Vec<Event>,
    }

    impl MeasurementOptionsHost for Host {
        fn store_generator_matching(&mut self, enabled: bool) {
            self.events.push(Event::StoreGenerator(enabled));
        }

        fn store_hardware_disabled(&mut self, disabled: bool) {
            self.events.push(Event::StoreHardwareDisabled(disabled));
        }

        fn initialize_hardware(&mut self) {
            self.events.push(Event::InitializeHardware);
        }

        fn refresh_hardware_controls(&mut self) {
            self.events.push(Event::RefreshHardwareControls);
        }

        fn notify_hardware_shutdown(&mut self, message: u32) {
            self.events.push(Event::NotifyShutdown(message));
        }

        fn shutdown_hardware(&mut self) {
            self.events.push(Event::ShutdownHardware);
        }

        fn write_profile(
            &mut self,
            file: &str,
            section: &str,
            key: &str,
            value: MeasurementProfileValue,
        ) {
            self.events.push(Event::WriteProfile {
                file: file.to_owned(),
                section: section.to_owned(),
                key: key.to_owned(),
                value,
            });
        }
    }

    #[derive(Default)]
    struct Setup {
        requests: usize,
    }

    impl HardwareSetupAdapter for Setup {
        fn request_hardware_setup(&mut self) {
            self.requests += 1;
        }
    }

    fn profile(value: MeasurementProfileValue) -> Event {
        Event::WriteProfile {
            file: PROFILE_FILE.to_owned(),
            section: PROFILE_SECTION.to_owned(),
            key: PROFILE_KEY.to_owned(),
            value,
        }
    }

    #[test]
    fn update_changes_working_check_boxes_without_applying_them() {
        let mut window = Window::default();

        window.update(Message::GeneratorMatchingChanged(true));
        window.update(Message::HardwareDisabledChanged(true));

        assert_eq!(
            window.working(),
            MeasurementOptions {
                generator_matching: true,
                hardware_disabled: true,
            }
        );
        assert_eq!(window.applied(), MeasurementOptions::default());
    }

    #[test]
    fn fun_01b71000_enabling_stores_state_before_initialization_and_refresh() {
        let mut window = Window::new(MeasurementOptions {
            generator_matching: false,
            hardware_disabled: true,
        });
        window.update(Message::GeneratorMatchingChanged(true));
        window.update(Message::HardwareDisabledChanged(false));
        let mut host = Host::default();

        window.apply(&mut host);

        assert_eq!(
            host.events,
            [
                Event::StoreGenerator(true),
                Event::StoreHardwareDisabled(false),
                Event::InitializeHardware,
                Event::RefreshHardwareControls,
                profile(MeasurementProfileValue::Enabled),
            ]
        );
    }

    #[test]
    fn fun_01b71000_disabling_notifies_and_stops_before_storing_state() {
        let mut window = Window::default();
        window.update(Message::HardwareDisabledChanged(true));
        let mut host = Host::default();

        window.apply(&mut host);

        assert_eq!(
            host.events,
            [
                Event::StoreGenerator(false),
                Event::NotifyShutdown(HARDWARE_SHUTDOWN_MESSAGE),
                Event::ShutdownHardware,
                Event::StoreHardwareDisabled(true),
                profile(MeasurementProfileValue::Disabled),
            ]
        );
    }

    #[test]
    fn fun_01b71000_unchanged_hardware_skips_runtime_but_persists() {
        let mut window = Window::default();
        window.update(Message::GeneratorMatchingChanged(true));
        let mut host = Host::default();

        window.apply(&mut host);

        assert_eq!(
            host.events,
            [
                Event::StoreGenerator(true),
                profile(MeasurementProfileValue::Enabled),
            ]
        );
        assert_eq!(window.applied(), window.working());
    }

    #[test]
    fn fun_01b712d0_setup_delegates_without_changing_options() {
        let options = MeasurementOptions {
            generator_matching: true,
            hardware_disabled: true,
        };
        let window = Window::new(options);
        let mut setup = Setup::default();

        window.open_hardware_setup(&mut setup);

        assert_eq!(setup.requests, 1);
        assert_eq!(window.working(), options);
        assert_eq!(window.applied(), options);
    }
}
