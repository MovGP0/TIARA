use iced::widget::{button, column, container, text};
use iced::{Color, Element, Length, Task};

pub const TITLE: &str = "About TINA";
pub const SCREENSHOT: &str = "screenshots/About_TINA.png";
pub const FORM_RESOURCE: &str = "AboutBox";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("016fcbd0");
pub const VERSION_TEMPLATE: &str = "Version %s";
pub const BUILD_DATE_TEMPLATE: &str = "Build date: %s";
pub const LIBRARY_EVALUATION: &str = "iced supplies the About window state, messages, and widgets. Rust String and iterator operations supply deterministic formatting, line-ending normalization, and link detection without extra dependencies.";

const ARCHITECTURE_LABEL: &str = "(x64)";
const COPYRIGHT_TEMPLATE: &str = "Copyright 1993-%d DesignSoft, Inc. All rights reserved.";
const MAX_DEDICATION_CHARACTERS: usize = 255;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ActivationSnapshot {
    pub product_version: String,
    pub version_option: String,
    pub build_date: String,
    pub current_year: u16,
    pub dedication: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PanelAlignment {
    Bottom,
    Client,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Visibility {
    Hidden,
    Visible,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextWrapping {
    NoWrap,
    Wrap,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AboutLayout {
    pub window_height: i32,
    pub main_panel_height: i32,
    pub copyright_panel_height: i32,
    pub ok_button_top: i32,
    pub dedication_top: i32,
    pub license_panel_height: i32,
    pub license_panel_visibility: Visibility,
    pub divider_visibility: Visibility,
    pub dedication_visibility: Visibility,
    pub copyright_panel_alignment: PanelAlignment,
    pub copyright_text_wrapping: TextWrapping,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DedicationLink {
    pub target: String,
    pub start: usize,
    pub length: usize,
    pub color: Color,
    pub underlined: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LinkHitBox {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

impl LinkHitBox {
    const fn contains(self, x: i32, y: i32) -> bool {
        self.left <= x && x <= self.right && self.top <= y && y <= self.bottom
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DedicationCursor {
    #[default]
    Default,
    Link,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum FocusTarget {
    #[default]
    None,
    OkButton,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    OkPressed,
    DedicationEntered,
    DedicationMouseDown,
    DedicationMouseMoved {
        x: i32,
        y: i32,
        link_hit_box: Option<LinkHitBox>,
    },
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    version_template: String,
    build_date_template: String,
    version_text: String,
    build_date_text: String,
    copyright_text: String,
    dedication_text: String,
    dedication_link: Option<DedicationLink>,
    dedication_cursor: DedicationCursor,
    dedication_link_hovered: bool,
    focus_target: FocusTarget,
    external_link_requests: Vec<String>,
    layout: AboutLayout,
    close_requested: bool,
}

/// The layout the resource declares, which is what the window opens with.
pub const RESOURCE_LAYOUT: AboutLayout = AboutLayout {
    window_height: 355,
    main_panel_height: 305,
    copyright_panel_height: 105,
    ok_button_top: 320,
    dedication_top: 43,
    license_panel_height: 97,
    license_panel_visibility: Visibility::Visible,
    divider_visibility: Visibility::Visible,
    dedication_visibility: Visibility::Visible,
    copyright_panel_alignment: PanelAlignment::Bottom,
    copyright_text_wrapping: TextWrapping::NoWrap,
};

impl Default for Window {
    fn default() -> Self {
        Self::new(RESOURCE_LAYOUT)
    }
}

impl Window {
    #[must_use]
    pub fn new(layout: AboutLayout) -> Self {
        Self {
            version_template: VERSION_TEMPLATE.to_owned(),
            build_date_template: BUILD_DATE_TEMPLATE.to_owned(),
            version_text: VERSION_TEMPLATE.to_owned(),
            build_date_text: BUILD_DATE_TEMPLATE.to_owned(),
            copyright_text: String::new(),
            dedication_text: String::new(),
            dedication_link: None,
            dedication_cursor: DedicationCursor::Default,
            dedication_link_hovered: false,
            focus_target: FocusTarget::None,
            external_link_requests: Vec::new(),
            layout,
            close_requested: false,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::OkPressed => self.close_requested = true,
            Message::DedicationEntered => self.dedication_entered(),
            Message::DedicationMouseDown => self.dedication_mouse_down(),
            Message::DedicationMouseMoved { x, y, link_hit_box } => {
                self.dedication_mouse_moved(x, y, link_hit_box);
            }
        }

        Task::none()
    }

    /// Queues the dedication web address while the parsed link is hovered.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FCD70`, symbol `FUN_016fcd70`
    /// (`TAboutBox.DedicateLnMouseDown`). The recovered event ignores the
    /// mouse-button arguments. It launches only when link parsing succeeded
    /// and the mouse-move handler marked the pointer as inside the link. The
    /// host adapter receives `http://` plus the stored `www.` target; launch
    /// results do not change window state.
    pub fn dedication_mouse_down(&mut self) {
        if self.dedication_link_hovered
            && let Some(link) = self.dedication_link.as_ref()
        {
            self.external_link_requests
                .push(format!("http://{}", link.target));
        }
    }

    /// Redirects focus from the read-only dedication editor to the OK button.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FCD50`, symbol `FUN_016fcd50`
    /// (`TAboutBox.DedicateLnEnter`). Repeated entry leaves the same active
    /// control selected and changes no text, link, or layout state.
    pub const fn dedication_entered(&mut self) {
        self.focus_target = FocusTarget::OkButton;
    }

    /// Updates link hover state from the resolved dedication editor geometry.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FCC60`, symbol `FUN_016fcc60`
    /// (`TAboutBox.DedicateLnMouseMove`). The native editor adapter supplies
    /// the rectangle from the stored link character range and font height.
    /// All rectangle edges are inclusive. Missing or outside bounds restore
    /// the default cursor and clear the hover flag.
    pub const fn dedication_mouse_moved(
        &mut self,
        x: i32,
        y: i32,
        link_hit_box: Option<LinkHitBox>,
    ) {
        self.dedication_link_hovered = match link_hit_box {
            Some(bounds) => bounds.contains(x, y),
            None => false,
        };
        self.dedication_cursor = if self.dedication_link_hovered {
            DedicationCursor::Link
        } else {
            DedicationCursor::Default
        };
    }

    /// Applies the Demo-build layout used when the About window is created.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FCBD0`, symbol `FUN_016fcbd0` (`TAboutBox.FormCreate`). It hides
    /// the licensed-user panel, removes that panel's current height from the
    /// main panel, OK-button position, and form, makes the copyright panel
    /// fill the remaining area, and enables copyright text wrapping.
    pub const fn on_create(&mut self) {
        let removed_height = self.layout.license_panel_height;

        self.layout.license_panel_visibility = Visibility::Hidden;
        self.layout.main_panel_height =
            self.layout.main_panel_height.saturating_sub(removed_height);
        self.layout.copyright_panel_alignment = PanelAlignment::Client;
        self.layout.ok_button_top = self.layout.ok_button_top.saturating_sub(removed_height);
        self.layout.window_height = self.layout.window_height.saturating_sub(removed_height);
        self.layout.copyright_text_wrapping = TextWrapping::Wrap;
    }

    /// Refreshes the About window text and optional dedication area.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x016FC690`, symbol `FUN_016fc690` (`TAboutBox.FormActivate`). It
    /// formats the version, current copyright year, and build date. An empty
    /// dedication hides its text and divider, then removes that section from
    /// the form geometry. A nonempty dedication keeps the geometry and marks
    /// the first case-sensitive `www.` address through the next space or
    /// carriage return as a blue underlined link.
    pub fn on_activate(&mut self, snapshot: &ActivationSnapshot) {
        let version = format!(
            "{} {} {}",
            snapshot.product_version, snapshot.version_option, ARCHITECTURE_LABEL
        );
        self.version_text = apply_string_template(&self.version_template, &version);
        self.copyright_text = COPYRIGHT_TEMPLATE.replace("%d", &snapshot.current_year.to_string());
        self.build_date_text =
            apply_string_template(&self.build_date_template, &snapshot.build_date);

        self.dedication_text = normalize_and_bound_dedication(&snapshot.dedication);
        self.dedication_link = find_dedication_link(&self.dedication_text);

        if self.dedication_text.is_empty() {
            self.collapse_dedication_area();
        }
    }

    const fn collapse_dedication_area(&mut self) {
        let removed_height = self
            .layout
            .copyright_panel_height
            .saturating_sub(self.layout.dedication_top)
            .saturating_add(1);

        self.layout.divider_visibility = Visibility::Hidden;
        self.layout.dedication_visibility = Visibility::Hidden;
        self.layout.copyright_panel_height = self.layout.dedication_top.saturating_sub(1);
        self.layout.main_panel_height =
            self.layout.main_panel_height.saturating_sub(removed_height);
        self.layout.ok_button_top = self.layout.ok_button_top.saturating_sub(removed_height);
        self.layout.window_height = self.layout.window_height.saturating_sub(removed_height);
    }

    #[must_use]
    pub fn version_text(&self) -> &str {
        &self.version_text
    }

    #[must_use]
    pub fn build_date_text(&self) -> &str {
        &self.build_date_text
    }

    #[must_use]
    pub fn copyright_text(&self) -> &str {
        &self.copyright_text
    }

    #[must_use]
    pub fn dedication_text(&self) -> &str {
        &self.dedication_text
    }

    #[must_use]
    pub const fn dedication_link(&self) -> Option<&DedicationLink> {
        self.dedication_link.as_ref()
    }

    #[must_use]
    pub const fn layout(&self) -> AboutLayout {
        self.layout
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close_requested
    }

    /// Takes and clears the request that the application close this surface.
    pub const fn take_close_requested(&mut self) -> bool {
        let requested = self.close_requested;
        self.close_requested = false;
        requested
    }

    #[must_use]
    pub const fn dedication_cursor(&self) -> DedicationCursor {
        self.dedication_cursor
    }

    #[must_use]
    pub const fn dedication_link_hovered(&self) -> bool {
        self.dedication_link_hovered
    }

    #[must_use]
    pub const fn focus_target(&self) -> FocusTarget {
        self.focus_target
    }

    #[must_use]
    pub fn external_link_requests(&self) -> &[String] {
        &self.external_link_requests
    }

    pub fn take_external_link_requests(&mut self) -> Vec<String> {
        std::mem::take(&mut self.external_link_requests)
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let dedication = container(text(&self.dedication_text))
            .width(Length::Fill)
            .height(Length::Shrink);

        column![
            text(TITLE).size(24),
            text(&self.version_text),
            text(&self.build_date_text),
            text(&self.copyright_text),
            dedication,
            button("OK").on_press(Message::OkPressed),
        ]
        .spacing(8)
        .into()
    }
}

fn apply_string_template(template: &str, value: &str) -> String {
    template.replacen("%s", value, 1)
}

fn normalize_and_bound_dedication(dedication: &str) -> String {
    let mut normalized = String::new();
    let mut characters = dedication.chars().peekable();

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

    normalized.chars().take(MAX_DEDICATION_CHARACTERS).collect()
}

fn find_dedication_link(dedication: &str) -> Option<DedicationLink> {
    let start_byte = dedication.find("www.")?;
    let suffix = &dedication[start_byte..];
    let end_byte = suffix.find([' ', '\r']).unwrap_or(suffix.len());
    let target = &suffix[..end_byte];

    Some(DedicationLink {
        target: target.to_owned(),
        start: dedication[..start_byte].chars().count(),
        length: target.chars().count(),
        color: Color::from_rgb8(0, 0, 255),
        underlined: true,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    const fn resource_layout() -> AboutLayout {
        RESOURCE_LAYOUT
    }

    fn snapshot(dedication: &str) -> ActivationSnapshot {
        ActivationSnapshot {
            product_version: "16.0".to_owned(),
            version_option: "Demo".to_owned(),
            build_date: "Friday, 4 September 2026".to_owned(),
            current_year: 2026,
            dedication: dedication.to_owned(),
        }
    }

    #[test]
    fn empty_dedication_formats_text_and_collapses_the_recovered_geometry() {
        let mut window = Window::new(resource_layout());

        window.on_activate(&snapshot(""));

        assert_eq!(window.version_text(), "Version 16.0 Demo (x64)");
        assert_eq!(
            window.build_date_text(),
            "Build date: Friday, 4 September 2026"
        );
        assert_eq!(
            window.copyright_text(),
            "Copyright 1993-2026 DesignSoft, Inc. All rights reserved."
        );
        assert_eq!(
            window.layout(),
            AboutLayout {
                window_height: 292,
                main_panel_height: 242,
                copyright_panel_height: 42,
                ok_button_top: 257,
                dedication_top: 43,
                license_panel_height: 97,
                license_panel_visibility: Visibility::Visible,
                divider_visibility: Visibility::Hidden,
                dedication_visibility: Visibility::Hidden,
                copyright_panel_alignment: PanelAlignment::Bottom,
                copyright_text_wrapping: TextWrapping::NoWrap,
            }
        );
        assert_eq!(window.dedication_link(), None);
    }

    #[test]
    fn dedication_normalizes_lines_and_styles_the_first_exact_web_address() {
        let mut window = Window::new(resource_layout());

        window.on_activate(&snapshot("Visit www.example.test now\nThank you"));

        assert_eq!(
            window.dedication_text(),
            "Visit www.example.test now\r\nThank you"
        );
        assert_eq!(window.layout(), resource_layout());
        assert_eq!(
            window.dedication_link(),
            Some(&DedicationLink {
                target: "www.example.test".to_owned(),
                start: 6,
                length: 16,
                color: Color::from_rgb8(0, 0, 255),
                underlined: true,
            })
        );
    }

    #[test]
    fn link_detection_is_case_sensitive_and_stops_at_a_carriage_return() {
        let mut window = Window::new(resource_layout());

        window.on_activate(&snapshot("WWW.first\rwww.second\rthird"));

        assert_eq!(
            window.dedication_link().map(|link| link.target.as_str()),
            Some("www.second")
        );
    }

    #[test]
    fn ok_message_requests_close_without_changing_activation_text() {
        let mut window = Window::new(resource_layout());
        window.on_activate(&snapshot("Dedicated"));
        let version = window.version_text().to_owned();

        drop(window.update(Message::OkPressed));

        assert!(window.close_requested());
        assert_eq!(window.version_text(), version);
    }

    #[test]
    fn form_create_hides_the_license_panel_and_removes_its_height() {
        let mut window = Window::new(resource_layout());

        window.on_create();

        assert_eq!(
            window.layout(),
            AboutLayout {
                window_height: 258,
                main_panel_height: 208,
                copyright_panel_height: 105,
                ok_button_top: 223,
                dedication_top: 43,
                license_panel_height: 97,
                license_panel_visibility: Visibility::Hidden,
                divider_visibility: Visibility::Visible,
                dedication_visibility: Visibility::Visible,
                copyright_panel_alignment: PanelAlignment::Client,
                copyright_text_wrapping: TextWrapping::Wrap,
            }
        );
    }

    #[test]
    fn dedication_mouse_move_uses_inclusive_link_bounds() {
        let mut window = Window::new(resource_layout());
        let link_hit_box = LinkHitBox {
            left: 10,
            top: 20,
            right: 30,
            bottom: 40,
        };

        drop(window.update(Message::DedicationMouseMoved {
            x: 30,
            y: 40,
            link_hit_box: Some(link_hit_box),
        }));

        assert!(window.dedication_link_hovered());
        assert_eq!(window.dedication_cursor(), DedicationCursor::Link);

        drop(window.update(Message::DedicationMouseMoved {
            x: 31,
            y: 40,
            link_hit_box: Some(link_hit_box),
        }));

        assert!(!window.dedication_link_hovered());
        assert_eq!(window.dedication_cursor(), DedicationCursor::Default);
    }

    #[test]
    fn missing_link_bounds_clear_an_existing_hover_state() {
        let mut window = Window::new(resource_layout());
        window.dedication_mouse_moved(
            1,
            1,
            Some(LinkHitBox {
                left: 0,
                top: 0,
                right: 2,
                bottom: 2,
            }),
        );

        window.dedication_mouse_moved(1, 1, None);

        assert!(!window.dedication_link_hovered());
        assert_eq!(window.dedication_cursor(), DedicationCursor::Default);
    }

    #[test]
    fn dedication_enter_redirects_focus_to_ok_without_changing_content() {
        let mut window = Window::new(resource_layout());
        window.on_activate(&snapshot("Dedicated"));
        let dedication = window.dedication_text().to_owned();
        let layout = window.layout();

        drop(window.update(Message::DedicationEntered));
        window.dedication_entered();

        assert_eq!(window.focus_target(), FocusTarget::OkButton);
        assert_eq!(window.dedication_text(), dedication);
        assert_eq!(window.layout(), layout);
        assert!(!window.close_requested());
    }

    #[test]
    fn dedication_mouse_down_requires_both_link_and_hover_flags() {
        let mut window = Window::new(resource_layout());

        drop(window.update(Message::DedicationMouseDown));
        assert!(window.external_link_requests().is_empty());

        window.on_activate(&snapshot("Visit www.example.test now"));
        drop(window.update(Message::DedicationMouseDown));
        assert!(window.external_link_requests().is_empty());

        window.dedication_mouse_moved(
            1,
            1,
            Some(LinkHitBox {
                left: 0,
                top: 0,
                right: 2,
                bottom: 2,
            }),
        );
        drop(window.update(Message::DedicationMouseDown));

        assert_eq!(
            window.external_link_requests(),
            &["http://www.example.test".to_owned()]
        );
    }

    #[test]
    fn every_qualified_mouse_down_queues_a_host_launch_request() {
        let mut window = Window::new(resource_layout());
        window.on_activate(&snapshot("www.example.test"));
        window.dedication_mouse_moved(
            0,
            0,
            Some(LinkHitBox {
                left: 0,
                top: 0,
                right: 0,
                bottom: 0,
            }),
        );

        window.dedication_mouse_down();
        window.dedication_mouse_down();

        assert_eq!(window.take_external_link_requests().len(), 2);
        assert!(window.external_link_requests().is_empty());
    }
}
