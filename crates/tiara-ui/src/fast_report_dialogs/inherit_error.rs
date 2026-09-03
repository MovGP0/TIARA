use iced::widget::{button, column, radio, row, text};
use iced::{Element, Length, Task};

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DuplicateResolution {
    #[default]
    Delete,
    Rename,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    ResolutionChanged(DuplicateResolution),
    Submit,
    Cancel,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct InheritErrorDialog {
    pub resolution: DuplicateResolution,
    pub children_mirrored: bool,
    pub submitted: bool,
    pub cancelled: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct WarningImagePresentation {
    pub fill_background: bool,
    pub icon_index: usize,
    pub icon_enabled: bool,
    pub icon_position: [i32; 2],
}

impl InheritErrorDialog {
    /// Initializes the inherited-report error dialog layout.
    ///
    /// Reimplements Ghidra function `FUN_018fbcc0` at `0x018FBCC0`.
    /// All child controls are mirrored only when the inherited right-to-left
    /// layout predicate is active.
    pub const fn form_create(&mut self, right_to_left: bool) {
        self.children_mirrored = right_to_left;
    }

    /// Describes the centered warning image for Iced rendering.
    ///
    /// Reimplements Ghidra function `FUN_018fbd00` at `0x018FBD00`.
    /// The complete paint area uses its background color before external image
    /// list item zero is drawn enabled and centered.
    #[must_use]
    pub const fn warning_image(
        paint_size: [i32; 2],
        icon_size: [i32; 2],
    ) -> WarningImagePresentation {
        WarningImagePresentation {
            fill_background: true,
            icon_index: 0,
            icon_enabled: true,
            icon_position: [
                (paint_size[0] - icon_size[0]) / 2,
                (paint_size[1] - icon_size[1]) / 2,
            ],
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ResolutionChanged(resolution) => self.resolution = resolution,
            Message::Submit => self.submitted = true,
            Message::Cancel => self.cancelled = true,
        }
        Task::none()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text("Base and inherited reports have duplicate objects. What should we do?"),
            radio(
                "Delete duplicates",
                DuplicateResolution::Delete,
                Some(self.resolution),
                Message::ResolutionChanged,
            ),
            radio(
                "Rename duplicates",
                DuplicateResolution::Rename,
                Some(self.resolution),
                Message::ResolutionChanged,
            ),
            row![
                button("OK").on_press(Message::Submit),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn form_create_mirrors_children_for_right_to_left_layout() {
        let mut dialog = InheritErrorDialog::default();

        dialog.form_create(true);

        assert!(dialog.children_mirrored);
        assert_eq!(dialog.resolution, DuplicateResolution::Delete);
    }

    #[test]
    fn form_create_keeps_default_layout_for_left_to_right() {
        let mut dialog = InheritErrorDialog {
            children_mirrored: true,
            ..InheritErrorDialog::default()
        };

        dialog.form_create(false);

        assert!(!dialog.children_mirrored);
    }

    #[test]
    fn warning_image_fills_background_and_centers_external_icon() {
        assert_eq!(
            InheritErrorDialog::warning_image([44, 36], [32, 32]),
            WarningImagePresentation {
                fill_background: true,
                icon_index: 0,
                icon_enabled: true,
                icon_position: [6, 2],
            }
        );
    }
}
