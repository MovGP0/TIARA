use iced::Task;

pub const TITLE: &str = "Device Properties";
pub const FORM_RESOURCE: &str = "DevicePropertiesDlg";
pub const LIBRARY_EVALUATION: &str = "iced supplies the dialog update flow and overlay state. A small owned Rust value replaces the form-owned native hint window, so no additional popup or ownership crate is needed.";
const NAME_HINT_GAP: i32 = 10;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct Point {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct NameHintLayout {
    pub editor_left: i32,
    pub editor_top: i32,
    pub editor_width: i32,
    pub editor_height: i32,
    pub popup_width: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Created,
    Destroyed,
    NameKeyDown,
    NameKeyPressed {
        character: char,
        hint_text: String,
        layout: NameHintLayout,
    },
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct NameHintPopup {
    text: String,
    visible: bool,
    position: Point,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct State {
    name_hint_popup: Option<NameHintPopup>,
    last_key_consumed: bool,
}

impl State {
    #[must_use]
    pub const fn new() -> Self {
        Self {
            name_hint_popup: None,
            last_key_consumed: false,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created => self.on_create(),
            Message::Destroyed => self.on_destroy(),
            Message::NameKeyDown => self.on_name_key_down(),
            Message::NameKeyPressed {
                character,
                hint_text,
                layout,
            } => {
                self.last_key_consumed = self.on_name_key_press(character, &hint_text, layout);
            }
        }
        Task::none()
    }

    /// Creates the helper state for name-editor hints.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0177E910`, symbol `FUN_0177e910`
    /// (`TDevicePropertiesDlg.FormCreate`). Owned iced overlay state replaces
    /// the native hint-window object and its raw form-owner pointer. The new
    /// helper starts hidden with no text.
    pub fn on_create(&mut self) {
        self.name_hint_popup = Some(NameHintPopup::default());
    }

    /// Hides and releases the name-editor hint helper.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0177E940`, symbol `FUN_0177e940`
    /// (`TDevicePropertiesDlg.FormDestroy`). Taking the optional iced overlay
    /// removes it from view before Rust drops its owned state. Destruction
    /// before creation and repeated destruction are safe no-ops.
    pub fn on_destroy(&mut self) {
        drop(self.name_hint_popup.take());
    }

    /// Hides the name hint when the editor receives a key-down event.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0177E970`, symbol `FUN_0177e970`
    /// (`TDevicePropertiesDlg.ENameKeyDown`). The recovered handler does not
    /// inspect or consume the key. Missing and already hidden helper state are
    /// no-ops, and existing hint text remains available for a later display.
    pub const fn on_name_key_down(&mut self) {
        if let Some(popup) = &mut self.name_hint_popup {
            popup.visible = false;
        }
    }

    /// Shows the localized name hint for the two trigger characters.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0177E990`, symbol `FUN_0177e990`
    /// (`TDevicePropertiesDlg.ENameKeyPress`). `*` and `:` are consumed. The
    /// hint uses text supplied by the application resource adapter and is
    /// centered below the name editor with the recovered ten-pixel gap. Every
    /// other character leaves the popup unchanged and remains unconsumed.
    pub fn on_name_key_press(
        &mut self,
        character: char,
        hint_text: &str,
        layout: NameHintLayout,
    ) -> bool {
        if !matches!(character, '*' | ':') {
            return false;
        }

        if let Some(popup) = &mut self.name_hint_popup {
            hint_text.clone_into(&mut popup.text);
            popup.position = Point {
                x: layout
                    .editor_left
                    .saturating_add(layout.editor_width.saturating_sub(layout.popup_width) / 2),
                y: layout
                    .editor_top
                    .saturating_add(layout.editor_height)
                    .saturating_add(NAME_HINT_GAP),
            };
            popup.visible = true;
        }
        true
    }

    #[must_use]
    pub const fn name_hint_popup(&self) -> Option<&NameHintPopup> {
        self.name_hint_popup.as_ref()
    }

    #[must_use]
    pub const fn last_key_consumed(&self) -> bool {
        self.last_key_consumed
    }
}

impl NameHintPopup {
    #[must_use]
    pub fn text(&self) -> &str {
        &self.text
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.visible
    }

    #[must_use]
    pub const fn position(&self) -> Point {
        self.position
    }
}

#[cfg(test)]
mod tests {
    use iced::Task;

    use super::{Message, NameHintLayout, NameHintPopup, Point, State};

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn create_message_constructs_hidden_empty_name_hint_state() {
        let mut state = State::new();
        assert!(state.name_hint_popup().is_none());

        discard(state.update(Message::Created));

        let popup = state.name_hint_popup().expect("created hint popup");
        assert!(!popup.is_visible());
        assert!(popup.text().is_empty());
    }

    #[test]
    fn repeated_create_replaces_the_owned_helper_with_default_state() {
        let mut state = State::new();

        state.on_create();
        state.on_create();

        let popup = state.name_hint_popup().expect("recreated hint popup");
        assert!(!popup.is_visible());
        assert!(popup.text().is_empty());
    }

    #[test]
    fn destroy_message_removes_the_owned_hint_and_is_repeatable() {
        let mut state = State::new();
        state.on_create();

        discard(state.update(Message::Destroyed));
        assert!(state.name_hint_popup().is_none());

        state.on_destroy();
        assert!(state.name_hint_popup().is_none());
    }

    #[test]
    fn every_name_key_down_hides_hint_without_changing_text() {
        let mut state = State::new();
        state.on_create();
        let popup = state.name_hint_popup.as_mut().expect("created hint popup");
        popup.text = "Expected name syntax".to_owned();
        popup.visible = true;

        discard(state.update(Message::NameKeyDown));

        let popup = state.name_hint_popup().expect("retained hint popup");
        assert!(!popup.is_visible());
        assert_eq!(popup.text(), "Expected name syntax");
    }

    #[test]
    fn name_key_down_without_created_helper_is_a_no_op() {
        let mut state = State::new();

        state.on_name_key_down();

        assert!(state.name_hint_popup().is_none());
    }

    #[test]
    fn star_key_is_consumed_and_shows_centered_hint_below_editor() {
        let mut state = State::new();
        state.on_create();

        discard(state.update(Message::NameKeyPressed {
            character: '*',
            hint_text: "Localized name syntax".to_owned(),
            layout: NameHintLayout {
                editor_left: 100,
                editor_top: 40,
                editor_width: 80,
                editor_height: 20,
                popup_width: 30,
            },
        }));

        let popup = state.name_hint_popup().expect("visible hint popup");
        assert!(state.last_key_consumed());
        assert!(popup.is_visible());
        assert_eq!(popup.text(), "Localized name syntax");
        assert_eq!(popup.position(), Point { x: 125, y: 70 });
    }

    #[test]
    fn colon_also_triggers_but_other_characters_are_unchanged() {
        let mut state = State::new();
        state.on_create();
        let layout = NameHintLayout {
            editor_left: 100,
            editor_top: 40,
            editor_width: 80,
            editor_height: 20,
            popup_width: 100,
        };

        assert!(state.on_name_key_press(':', "Syntax", layout));
        assert_eq!(
            state.name_hint_popup().map(NameHintPopup::position),
            Some(Point { x: 90, y: 70 })
        );
        assert!(!state.on_name_key_press(';', "Replacement", layout));

        let popup = state.name_hint_popup().expect("retained hint popup");
        assert!(popup.is_visible());
        assert_eq!(popup.text(), "Syntax");
        assert_eq!(popup.position(), Point { x: 90, y: 70 });
    }
}
