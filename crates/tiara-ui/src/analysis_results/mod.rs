use iced::Element;
use tiara_core::analysis_result_publishing::AnalysisResultManager;

use crate::shared::window_shell;

pub const TITLE: &str = "Analysis results";
pub const SCREENSHOT: &str = "screenshots/Analysis_results_window.png";
pub const FORM_RESOURCE: &str = "DFWindow";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01a72620");
const READY_STATUS: &str = "Ready";
const PUBLISHED_STATUS: &str = "Result published";
const MENUS: &[(&str, &[&str])] = &[
    (
        "File",
        &[
            "Open...",
            "Save",
            "Save As...",
            "Export...",
            "Print...",
            "Close",
        ],
    ),
    ("Edit", &["Copy", "Copy all", "Select all"]),
    (
        "View",
        &[
            "Zoom in",
            "Zoom out",
            "Default curve width...",
            "Vector label style...",
            "Redraw",
        ],
    ),
    ("Process", &["Add curves...", "Evaluate...", "Fourier..."]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "Open", "Copy", "Select", "Zoom in", "Zoom out", "100%", "Grid", "Text", "Curve", "Cursor",
];

#[derive(Debug, Default)]
pub struct Window {
    command_selected: bool,
    result_manager: AnalysisResultManager,
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    CommandSelected,
}

impl Window {
    pub const fn update(&mut self, _message: Message) {
        self.command_selected = true;
    }

    #[must_use]
    pub const fn result_manager(&self) -> &AnalysisResultManager {
        &self.result_manager
    }

    pub const fn result_manager_mut(&mut self) -> &mut AnalysisResultManager {
        &mut self.result_manager
    }

    #[must_use]
    pub fn active_result_title(&self) -> Option<&str> {
        self.result_manager
            .active_result()
            .map(|result| result.title.as_str())
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let surface = self.active_result_title().unwrap_or({
            if self.command_selected {
                "Analysis diagram - command selected"
            } else {
                "Analysis diagram"
            }
        });
        let status = if self.result_manager.refresh_generation() == 0 {
            READY_STATUS
        } else {
            PUBLISHED_STATUS
        };

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            window_shell::surface(surface),
            status,
        )
    }
}

#[cfg(test)]
mod tests {
    use tiara_core::analysis_result_publishing::{AnalysisPoint, AnalysisSeries, AxisLabels};

    use super::{Message, Window};

    fn series() -> AnalysisSeries {
        AnalysisSeries::new(
            "histogram",
            AxisLabels::new("old x", "old y"),
            [AnalysisPoint::new(1.0, 2.0)],
        )
    }

    #[test]
    fn update_logic_exposes_the_active_published_result_without_a_live_window() {
        let mut window = Window::default();
        assert_eq!(window.active_result_title(), None);

        window
            .result_manager_mut()
            .publish_statistic(Some(series()));

        assert_eq!(window.active_result_title(), Some("STATISTIC 1"));
        assert_eq!(window.result_manager().refresh_generation(), 1);
    }

    #[test]
    fn command_selection_remains_local_ui_state() {
        let mut window = Window::default();
        window.update(Message::CommandSelected);

        assert_eq!(window.active_result_title(), None);
        assert_eq!(window.result_manager().refresh_generation(), 0);
    }
}
