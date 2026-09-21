//! The Spectrum Analyzer, as `T&M > Spectrum Analyzer` opens it.
//!
//! It is the signal analyser's window in its spectrum mode, not a window of
//! its own. Choosing any of the three analyser commands on the running
//! original opens a `TSignalAnalyzerWin`; only the caption differs, and the
//! mode the form is created with settles which instrument it is. So this
//! module says which mode, and the window itself is
//! [`crate::signal_analyzer`], which models all three.

pub use crate::signal_analyzer::Message;

pub const TITLE: &str = "Spectrum Analyzer - Virtual";
pub const SCREENSHOT: &str = "screenshots/Spectrum_Analyzer_Window.png";
pub const FORM_RESOURCE: &str = "SignalAnalyzerWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0138a340");

/// The mode `FUN_0138a340` is called with for this instrument.
pub const ANALYZER_MODE: u8 = 15;

/// The window, which is the signal analyser's in this instrument's mode.
///
/// A type of its own rather than an alias, so that building one by default -
/// which is how the shell builds every window it holds - creates it in the
/// right mode instead of the signal analyser's.
#[derive(Debug)]
pub struct Window(crate::signal_analyzer::Window);

impl Default for Window {
    fn default() -> Self {
        Self(crate::signal_analyzer::Window::create_form(ANALYZER_MODE))
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        self.0.update(message);
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> iced::Element<'_, Message> {
        self.0.view()
    }
}

#[cfg(test)]
mod tests {
    use super::{ANALYZER_MODE, FORM_RESOURCE, TITLE, Window};
    use crate::signal_analyzer::AnalyzerKind;

    #[test]
    fn the_window_opens_as_the_spectrum_analyser() {
        assert_eq!(
            AnalyzerKind::from_mode(ANALYZER_MODE),
            AnalyzerKind::Spectrum
        );
        assert_eq!(Window::default().0.analyzer_kind(), AnalyzerKind::Spectrum);
    }

    #[test]
    fn it_is_the_signal_analyser_form_under_another_caption() {
        assert_eq!(FORM_RESOURCE, crate::signal_analyzer::FORM_RESOURCE);
        assert_ne!(TITLE, crate::signal_analyzer::TITLE);
    }
}
