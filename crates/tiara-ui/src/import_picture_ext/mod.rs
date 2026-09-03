//! Iced state for the external picture and netlist selector.

use iced::Element;
use iced::widget::{column, text_input};
use std::path::PathBuf;
use tiara_core::import_from_picture::{ExternalImportSelection, SettingStore};

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct TextSelection {
    pub start: usize,
    pub length: usize,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    NetlistChanged(String),
    PictureChanged(String),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    selection: ExternalImportSelection,
    netlist_text: String,
    picture_text: String,
    netlist_selection: TextSelection,
    picture_selection: TextSelection,
}

impl Window {
    /// Restores saved picture and netlist paths and selects both edits.
    ///
    /// Implements Ghidra function `FUN_01a2d150` at `0x01A2D150`
    /// (`TImportPictureExt.FormCreate`). Existing `PicFileName` and
    /// `CIRFileName` values from `ImportPicExt` are copied to both the hidden
    /// full-path state and visible edits without file checks. Each edit then
    /// selects its complete UTF-16 text, including an empty value.
    pub fn on_create(&mut self, settings: &impl SettingStore) {
        self.restore_picture(settings.read_string("ImportPicExt", "PicFileName"));
        self.restore_netlist(settings.read_string("ImportPicExt", "CIRFileName"));
        self.picture_selection = select_all(&self.picture_text);
        self.netlist_selection = select_all(&self.netlist_text);
    }

    fn restore_picture(&mut self, value: Option<String>) {
        if let Some(value) = value {
            self.selection.picture_path = Some(PathBuf::from(&value));
            self.selection.picture_display_name.clone_from(&value);
            self.picture_text = value;
        }
    }

    fn restore_netlist(&mut self, value: Option<String>) {
        if let Some(value) = value {
            self.selection.netlist_path = Some(PathBuf::from(&value));
            self.selection.netlist_display_name.clone_from(&value);
            self.netlist_text = value;
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::NetlistChanged(value) => self.netlist_text = value,
            Message::PictureChanged(value) => self.picture_text = value,
        }
    }

    #[must_use]
    pub fn netlist_text(&self) -> &str {
        &self.netlist_text
    }

    #[must_use]
    pub fn picture_text(&self) -> &str {
        &self.picture_text
    }

    #[must_use]
    pub const fn netlist_selection(&self) -> TextSelection {
        self.netlist_selection
    }

    #[must_use]
    pub const fn picture_selection(&self) -> TextSelection {
        self.picture_selection
    }

    #[must_use]
    pub const fn selection(&self) -> &ExternalImportSelection {
        &self.selection
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text_input("Picture", &self.picture_text).on_input(Message::PictureChanged),
            text_input("Netlist", &self.netlist_text).on_input(Message::NetlistChanged),
        ]
        .spacing(8)
        .into()
    }
}

fn select_all(value: &str) -> TextSelection {
    TextSelection {
        start: 0,
        length: value.encode_utf16().count(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::collections::BTreeMap;

    #[derive(Debug, Default)]
    struct Settings {
        strings: BTreeMap<(String, String), String>,
    }

    impl SettingStore for Settings {
        fn read_string(&self, section: &str, name: &str) -> Option<String> {
            self.strings
                .get(&(section.to_owned(), name.to_owned()))
                .cloned()
        }

        fn read_integer(&self, _section: &str, _name: &str, default: i32) -> i32 {
            default
        }

        fn write_string(
            &mut self,
            _section: &str,
            _name: &str,
            _value: &str,
        ) -> Result<(), String> {
            Ok(())
        }

        fn write_integer(
            &mut self,
            _section: &str,
            _name: &str,
            _value: i32,
        ) -> Result<(), String> {
            Ok(())
        }
    }

    #[test]
    fn form_create_restores_full_paths_and_selects_complete_edits() {
        let mut settings = Settings::default();
        settings.strings.insert(
            ("ImportPicExt".to_owned(), "PicFileName".to_owned()),
            "C:\\images\\é😀.png".to_owned(),
        );
        settings.strings.insert(
            ("ImportPicExt".to_owned(), "CIRFileName".to_owned()),
            "C:\\circuits\\source.cir".to_owned(),
        );
        let mut window = Window::default();

        window.on_create(&settings);

        assert_eq!(window.picture_text(), "C:\\images\\é😀.png");
        assert_eq!(window.netlist_text(), "C:\\circuits\\source.cir");
        assert_eq!(
            window.selection().picture_path.as_deref(),
            Some(PathBuf::from("C:\\images\\é😀.png").as_path())
        );
        assert_eq!(
            window.picture_selection(),
            TextSelection {
                start: 0,
                length: "C:\\images\\é😀.png".encode_utf16().count(),
            }
        );
        assert_eq!(
            window.netlist_selection(),
            TextSelection {
                start: 0,
                length: "C:\\circuits\\source.cir".encode_utf16().count(),
            }
        );
    }

    #[test]
    fn form_create_keeps_missing_paths_empty_and_selects_zero_length() {
        let mut window = Window::default();

        window.on_create(&Settings::default());

        assert_eq!(window.picture_text(), "");
        assert_eq!(window.netlist_text(), "");
        assert!(window.selection().picture_path.is_none());
        assert!(window.selection().netlist_path.is_none());
        assert_eq!(window.picture_selection(), TextSelection::default());
        assert_eq!(window.netlist_selection(), TextSelection::default());
    }
}
