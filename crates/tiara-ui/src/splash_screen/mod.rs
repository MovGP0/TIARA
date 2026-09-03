use iced::widget::{column, container, text};
use iced::{Element, Length, Subscription, Task};
use std::time::Duration;

pub const DEFAULT_TITLE: &str = "TINA";
pub const DEFAULT_SUBTITLE: &str = "The Complete Electronics Lab";
pub const LIBRARY_EVALUATION: &str = "iced supplies the splash-screen state, messages, and widgets. Rust String operations supply deterministic line-ending normalization without extra dependencies.";

const EDISON_TITLE: &str = "Edison";
const COPYRIGHT_TEMPLATE: &str = "Copyright 1993-%d DesignSoft, Inc.";
const TEXT_PADDING: i32 = 6;
const DISPLAY_DURATION: Duration = Duration::from_millis(3_000);

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ActivationSnapshot {
    pub is_edison_edition: bool,
    pub edison_subtitle: String,
    pub dedication: String,
    pub dedication_line_height: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SplashLayout {
    pub window_height: i32,
    pub frame_height: i32,
    pub dedication_panel_top: i32,
    pub separator_height: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Activated(ActivationSnapshot),
    Created { current_year: u16 },
    TimerElapsed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    title_text: String,
    subtitle_text: String,
    copyright_text: String,
    dedication_text: String,
    layout: SplashLayout,
    timer_interval: Option<Duration>,
    visible: bool,
}

impl Window {
    #[must_use]
    pub fn new(layout: SplashLayout) -> Self {
        Self {
            title_text: DEFAULT_TITLE.to_owned(),
            subtitle_text: DEFAULT_SUBTITLE.to_owned(),
            copyright_text: String::new(),
            dedication_text: String::new(),
            layout,
            timer_interval: None,
            visible: true,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Activated(snapshot) => self.on_activate(&snapshot),
            Message::Created { current_year } => self.on_create(current_year),
            Message::TimerElapsed => self.on_timer_elapsed(),
        }

        Task::none()
    }

    /// Initializes the copyright text and the one-shot display timer.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FD6B0`, symbol `FUN_016fd6b0` (`TSplashScreen.FormCreate`). It
    /// formats the current year, creates a form-owned timer with a 3,000 ms
    /// interval, attaches the timeout callback, and enables the timer.
    pub fn on_create(&mut self, current_year: u16) {
        self.copyright_text = COPYRIGHT_TEMPLATE.replace("%d", &current_year.to_string());
        self.timer_interval = Some(DISPLAY_DURATION);
    }

    /// Hides the splash screen and removes its elapsed timer.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FD7F0`, symbol `FUN_016fd7f0`. The recovered timer callback hides
    /// the form, disables the timer, and destroys the owned timer object.
    pub const fn on_timer_elapsed(&mut self) {
        self.visible = false;
        self.timer_interval = None;
    }

    /// Refreshes product text, dedication text, and splash-screen height.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FD4D0`, symbol `FUN_016fd4d0` (`TSplashScreen.FormActivate`).
    /// Edison editions replace both heading labels. Other editions retain the
    /// current resource text. The dedication uses CRLF line endings. The
    /// window always collapses to the separator and grows by the measured line
    /// height for each nonempty dedication line, plus six pixels of padding.
    pub fn on_activate(&mut self, snapshot: &ActivationSnapshot) {
        if snapshot.is_edison_edition {
            EDISON_TITLE.clone_into(&mut self.title_text);
            self.subtitle_text.clone_from(&snapshot.edison_subtitle);
        }

        self.dedication_text = normalize_line_endings(&snapshot.dedication);

        let border_height = self
            .layout
            .window_height
            .saturating_sub(self.layout.frame_height);
        let collapsed_height = border_height
            .saturating_add(self.layout.dedication_panel_top)
            .saturating_add(self.layout.separator_height);
        let dedication_height = if self.dedication_text.is_empty() {
            0
        } else {
            line_count(&self.dedication_text)
                .saturating_mul(snapshot.dedication_line_height.max(0))
                .saturating_add(TEXT_PADDING)
        };

        self.layout.window_height = collapsed_height.saturating_add(dedication_height);
        self.layout.frame_height = self.layout.window_height.saturating_sub(border_height);
    }

    #[must_use]
    pub fn title_text(&self) -> &str {
        &self.title_text
    }

    #[must_use]
    pub fn subtitle_text(&self) -> &str {
        &self.subtitle_text
    }

    #[must_use]
    pub fn dedication_text(&self) -> &str {
        &self.dedication_text
    }

    #[must_use]
    pub fn copyright_text(&self) -> &str {
        &self.copyright_text
    }

    #[must_use]
    pub const fn timer_interval(&self) -> Option<Duration> {
        self.timer_interval
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.visible
    }

    #[must_use]
    pub const fn layout(&self) -> SplashLayout {
        self.layout
    }

    pub fn subscription(&self) -> Subscription<Message> {
        self.timer_interval
            .map_or_else(Subscription::none, |interval| {
                iced::time::every(interval).map(|_| Message::TimerElapsed)
            })
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(&self.title_text).size(32),
                text(&self.subtitle_text),
                text(&self.copyright_text),
                text(&self.dedication_text),
            ]
            .spacing(8),
        )
        .width(Length::Fill)
        .height(Length::Shrink)
        .into()
    }
}

fn normalize_line_endings(value: &str) -> String {
    let mut normalized = String::with_capacity(value.len());
    let mut characters = value.chars().peekable();

    while let Some(character) = characters.next() {
        match character {
            '\r' => {
                normalized.push('\r');
                normalized.push('\n');
                if characters.peek() == Some(&'\n') {
                    characters.next();
                }
            }
            '\n' => {
                normalized.push('\r');
                normalized.push('\n');
            }
            _ => normalized.push(character),
        }
    }

    normalized
}

fn line_count(value: &str) -> i32 {
    value.split("\r\n").count().try_into().unwrap_or(i32::MAX)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn resource_layout() -> SplashLayout {
        SplashLayout {
            window_height: 180,
            frame_height: 153,
            dedication_panel_top: 74,
            separator_height: 8,
        }
    }

    fn snapshot(is_edison_edition: bool, dedication: &str) -> ActivationSnapshot {
        ActivationSnapshot {
            is_edison_edition,
            edison_subtitle: "Electricity and electronics learning environment".to_owned(),
            dedication: dedication.to_owned(),
            dedication_line_height: 17,
        }
    }

    #[test]
    fn empty_dedication_collapses_the_window_to_the_separator() {
        let mut window = Window::new(resource_layout());

        window.on_activate(&snapshot(false, ""));

        assert_eq!(window.layout().window_height, 109);
        assert_eq!(window.layout().frame_height, 82);
        assert!(window.dedication_text().is_empty());
    }

    #[test]
    fn dedication_normalizes_line_endings_and_adds_measured_height() {
        let mut window = Window::new(resource_layout());

        window.on_activate(&snapshot(false, "First\nSecond\rThird\r\nFourth"));

        assert_eq!(
            window.dedication_text(),
            "First\r\nSecond\r\nThird\r\nFourth"
        );
        assert_eq!(window.layout().window_height, 183);
        assert_eq!(window.layout().frame_height, 156);
    }

    #[test]
    fn edison_edition_replaces_both_heading_labels() {
        let mut window = Window::new(resource_layout());

        window.on_activate(&snapshot(true, ""));

        assert_eq!(window.title_text(), "Edison");
        assert_eq!(
            window.subtitle_text(),
            "Electricity and electronics learning environment"
        );
    }

    #[test]
    fn normal_edition_preserves_the_current_heading_labels() {
        let mut window = Window::new(resource_layout());
        window.on_activate(&snapshot(true, ""));

        window.on_activate(&snapshot(false, ""));

        assert_eq!(window.title_text(), "Edison");
        assert_eq!(
            window.subtitle_text(),
            "Electricity and electronics learning environment"
        );
    }

    #[test]
    fn update_routes_activation_without_creating_follow_up_work() {
        let mut window = Window::new(resource_layout());

        let _task = window.update(Message::Activated(snapshot(false, "One line")));

        assert_eq!(window.layout().window_height, 132);
    }

    #[test]
    fn create_formats_copyright_and_enables_three_second_timer() {
        let mut window = Window::new(resource_layout());

        window.on_create(2026);

        assert_eq!(
            window.copyright_text(),
            "Copyright 1993-2026 DesignSoft, Inc."
        );
        assert_eq!(window.timer_interval(), Some(Duration::from_secs(3)));
        assert!(window.is_visible());
    }

    #[test]
    fn create_message_restarts_the_timer() {
        let mut window = Window::new(resource_layout());
        window.on_create(2025);
        window.on_timer_elapsed();

        let _task = window.update(Message::Created { current_year: 2026 });

        assert_eq!(
            window.copyright_text(),
            "Copyright 1993-2026 DesignSoft, Inc."
        );
        assert_eq!(window.timer_interval(), Some(Duration::from_secs(3)));
    }

    #[test]
    fn elapsed_timer_hides_window_and_removes_subscription_state() {
        let mut window = Window::new(resource_layout());
        window.on_create(2026);

        let _task = window.update(Message::TimerElapsed);

        assert!(!window.is_visible());
        assert_eq!(window.timer_interval(), None);
    }
}
