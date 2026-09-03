use iced::widget::{button, column, radio, row, text};
use iced::{Element, Task};

pub const TITLE: &str = "Save project to zip file";
pub const ZIP_FILE_FILTER: &str = "Zip file (zip)|*.zip";
pub const ZIP_FILE_FILTER_NAME: &str = "Zip file (zip)";
pub const ZIP_FILE_EXTENSION: &str = "zip";
pub const LIBRARY_EVALUATION: &str = "iced supplies the window state, messages, and widgets. rfd supplies the maintained native save dialog and maps the recovered Delphi filter to a label and extension pair.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DevelopmentTool {
    ModusToolbox,
    #[default]
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    DevelopmentToolSelected(DevelopmentTool),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    selected_development_tool: DevelopmentTool,
    save_dialog_filter: String,
    save_dialog_default_extension: String,
}

impl Window {
    #[must_use]
    pub fn new() -> Self {
        let mut window = Self::default();
        window.on_create();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::DevelopmentToolSelected(tool) => {
                self.selected_development_tool = tool;
            }
        }

        Task::none()
    }

    /// Initializes the development-tool choice and the owned save dialog.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x015E7A80`, symbol `FUN_015e7a80` (`TElfZipSave.FormCreate`). The
    /// recovered radio-group index selects `Other`. The Delphi filter and
    /// default-extension strings are kept separately so a native Rust dialog
    /// can represent the same ZIP-only file choice.
    pub fn on_create(&mut self) {
        self.selected_development_tool = DevelopmentTool::Other;
        ZIP_FILE_FILTER.clone_into(&mut self.save_dialog_filter);
        ZIP_FILE_EXTENSION.clone_into(&mut self.save_dialog_default_extension);
    }

    #[must_use]
    pub const fn selected_development_tool(&self) -> DevelopmentTool {
        self.selected_development_tool
    }

    #[must_use]
    pub fn save_dialog_filter(&self) -> &str {
        &self.save_dialog_filter
    }

    #[must_use]
    pub fn save_dialog_default_extension(&self) -> &str {
        &self.save_dialog_default_extension
    }

    #[must_use]
    pub fn native_save_dialog(&self) -> rfd::AsyncFileDialog {
        rfd::AsyncFileDialog::new().add_filter(
            ZIP_FILE_FILTER_NAME,
            &[self.save_dialog_default_extension()],
        )
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text(TITLE).size(24),
            text("Development Tool"),
            radio(
                "ModusToolbox",
                DevelopmentTool::ModusToolbox,
                Some(self.selected_development_tool),
                Message::DevelopmentToolSelected,
            ),
            radio(
                "Other",
                DevelopmentTool::Other,
                Some(self.selected_development_tool),
                Message::DevelopmentToolSelected,
            ),
            row![button("OK"), button("Cancel"), button("Help")].spacing(12),
        ]
        .spacing(12)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn form_create_selects_other_and_configures_the_zip_save_dialog() {
        let window = Window::new();

        assert_eq!(window.selected_development_tool(), DevelopmentTool::Other);
        assert_eq!(window.save_dialog_filter(), ZIP_FILE_FILTER);
        assert_eq!(window.save_dialog_default_extension(), ZIP_FILE_EXTENSION);
    }

    #[test]
    fn form_create_restores_all_recovered_initial_values() {
        let mut window = Window::new();
        drop(window.update(Message::DevelopmentToolSelected(
            DevelopmentTool::ModusToolbox,
        )));
        window.save_dialog_filter.clear();
        window.save_dialog_default_extension.clear();

        window.on_create();

        assert_eq!(window.selected_development_tool(), DevelopmentTool::Other);
        assert_eq!(window.save_dialog_filter(), ZIP_FILE_FILTER);
        assert_eq!(window.save_dialog_default_extension(), ZIP_FILE_EXTENSION);
    }
}
