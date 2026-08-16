use iced::widget::{button, column, container, scrollable, text};
use iced::{Element, Length};

pub const TITLE: &str = "Transient convergence error";
const PANEL_MARGIN: i32 = 5;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DetailState {
    #[default]
    Collapsed,
    Expanded,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SystemDialogIcon {
    #[default]
    Unset,
    Error,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    ShowMore,
    ShowLess,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    pub error_message: String,
    pub details: String,
    pub detail_state: DetailState,
    pub detail_panel_top: i32,
    pub detail_panel_height: i32,
    pub client_height: i32,
    pub icon: SystemDialogIcon,
}

impl Default for Window {
    fn default() -> Self {
        let mut window = Self {
            error_message: String::new(),
            details: String::new(),
            detail_state: DetailState::Collapsed,
            detail_panel_top: 93,
            detail_panel_height: 158,
            client_height: 88,
            icon: SystemDialogIcon::Unset,
        };
        window.initialize_error_icon();
        window
    }
}

impl Window {
    pub const fn update(&mut self, message: Message) {
        match message {
            Message::ShowMore => self.expand_details(),
            Message::ShowLess => self.collapse_details(),
        }
    }

    /// Ports Ghidra function `FUN_0133a460` at `0x0133A460`.
    ///
    /// The database maps the original function to
    /// `TfrmTranConvError.FormCreate`. It loads the system error icon with
    /// resource identifier `0x7f01` and assigns it to `imgIcon`. The Iced port
    /// keeps the semantic system-icon role and renders an accessible label.
    pub const fn initialize_error_icon(&mut self) {
        self.icon = SystemDialogIcon::Error;
    }

    /// Ports Ghidra function `FUN_0133a4a0` at `0x0133A4A0`.
    pub const fn expand_details(&mut self) {
        self.client_height = self.detail_panel_top + self.detail_panel_height + PANEL_MARGIN;
        self.detail_state = DetailState::Expanded;
    }

    /// Ports Ghidra function `FUN_0133a530` at `0x0133A530`.
    pub const fn collapse_details(&mut self) {
        self.detail_state = DetailState::Collapsed;
        self.client_height = self.detail_panel_top - PANEL_MARGIN;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let icon_label = match self.icon {
            SystemDialogIcon::Unset => "",
            SystemDialogIcon::Error => "Error",
        };
        let mut content = column![
            text(TITLE).size(24),
            text(icon_label),
            text(&self.error_message)
        ]
        .spacing(10);
        match self.detail_state {
            DetailState::Collapsed => {
                content = content.push(button("More >>").on_press(Message::ShowMore));
            }
            DetailState::Expanded => {
                content = content
                    .push(
                        container(scrollable(text(&self.details)))
                            .height(Length::Fill)
                            .width(Length::Fill),
                    )
                    .push(button("Less <<").on_press(Message::ShowLess));
            }
        }

        container(content)
            .padding(12)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::{DetailState, Message, SystemDialogIcon, Window};

    #[test]
    fn create_assigns_the_system_error_icon_role() {
        let window = Window::default();

        assert_eq!(window.icon, SystemDialogIcon::Error);
    }

    #[test]
    fn expand_uses_current_panel_geometry_and_keeps_error_text() {
        let mut window = Window {
            error_message: "Error".to_owned(),
            details: "Details".to_owned(),
            detail_panel_top: 100,
            detail_panel_height: 200,
            ..Window::default()
        };

        window.update(Message::ShowMore);

        assert_eq!(window.detail_state, DetailState::Expanded);
        assert_eq!(window.client_height, 305);
        assert_eq!(window.error_message, "Error");
        assert_eq!(window.details, "Details");
    }

    #[test]
    fn collapse_uses_current_panel_top_and_keeps_error_text() {
        let mut window = Window {
            error_message: "Error".to_owned(),
            details: "Details".to_owned(),
            detail_state: DetailState::Expanded,
            detail_panel_top: 100,
            client_height: 305,
            ..Window::default()
        };

        window.update(Message::ShowLess);

        assert_eq!(window.detail_state, DetailState::Collapsed);
        assert_eq!(window.client_height, 95);
        assert_eq!(window.error_message, "Error");
        assert_eq!(window.details, "Details");
    }

    #[test]
    fn recovered_design_geometry_matches_both_documented_heights() {
        let mut window = Window::default();

        window.expand_details();
        assert_eq!(window.client_height, 256);
        window.collapse_details();
        assert_eq!(window.client_height, 88);
    }
}
