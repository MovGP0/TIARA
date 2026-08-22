use iced::widget::{button, container};
use iced::{Background, Border, Color, Shadow, Theme, Vector};

use crate::shared::theme::{CanvasColors, ThemeTokens};

pub const MENU_BAR_HEIGHT: f32 = 36.0;
pub const MENU_LABEL_SIZE: f32 = 12.0;

pub fn application_style(tokens: ThemeTokens, _theme: &Theme) -> container::Style {
    container::Style {
        background: Some(Background::Color(tokens.bg.iced())),
        text_color: Some(tokens.text.iced()),
        ..container::Style::default()
    }
}

pub fn toolbar_style(tokens: ThemeTokens, _theme: &Theme) -> container::Style {
    container::Style {
        background: Some(Background::Color(tokens.toolbar_bg.iced())),
        text_color: Some(tokens.text.iced()),
        ..container::Style::default()
    }
}

pub fn palette_style(tokens: ThemeTokens, _theme: &Theme) -> container::Style {
    container::Style {
        background: Some(Background::Color(tokens.panel_bg.iced())),
        text_color: Some(tokens.text.iced()),
        ..container::Style::default()
    }
}

pub fn separator_style(tokens: ThemeTokens, _theme: &Theme) -> container::Style {
    container::Style {
        background: Some(Background::Color(tokens.border.iced())),
        ..container::Style::default()
    }
}

pub fn status_style(tokens: ThemeTokens, _theme: &Theme) -> container::Style {
    container::Style {
        background: Some(Background::Color(tokens.statusbar_bg.iced())),
        text_color: Some(Color::WHITE),
        ..container::Style::default()
    }
}

pub fn canvas_style(tokens: ThemeTokens, canvas: CanvasColors, _theme: &Theme) -> container::Style {
    container::Style {
        background: Some(Background::Color(canvas.paper.iced())),
        border: Border {
            color: tokens.border.iced(),
            width: 1.0,
            radius: 0.0.into(),
        },
        ..container::Style::default()
    }
}

pub fn toolbar_button_style(
    tokens: ThemeTokens,
    _theme: &Theme,
    status: button::Status,
) -> button::Style {
    let background = match status {
        button::Status::Hovered => Some(Background::Color(tokens.hover.iced())),
        button::Status::Pressed => Some(Background::Color(tokens.selection.iced())),
        button::Status::Active | button::Status::Disabled => None,
    };

    button::Style {
        background,
        text_color: if status == button::Status::Disabled {
            tokens.text_secondary.iced()
        } else {
            tokens.text.iced()
        },
        border: Border {
            color: tokens.border.iced(),
            width: if matches!(status, button::Status::Hovered | button::Status::Pressed) {
                1.0
            } else {
                0.0
            },
            radius: 2.0.into(),
        },
        ..button::Style::default()
    }
}

pub fn category_button_style(
    tokens: ThemeTokens,
    is_selected: bool,
    _theme: &Theme,
    status: button::Status,
) -> button::Style {
    let background = match status {
        button::Status::Hovered => Some(Background::Color(tokens.hover.iced())),
        button::Status::Pressed => Some(Background::Color(tokens.selection.iced())),
        button::Status::Active | button::Status::Disabled if is_selected => {
            Some(Background::Color(tokens.selection.iced()))
        }
        button::Status::Active | button::Status::Disabled => None,
    };

    button::Style {
        background,
        text_color: if is_selected {
            Color::WHITE
        } else {
            tokens.text.iced()
        },
        border: Border {
            color: if is_selected {
                tokens.accent.iced()
            } else {
                Color::TRANSPARENT
            },
            width: if is_selected { 1.0 } else { 0.0 },
            radius: 2.0.into(),
        },
        ..button::Style::default()
    }
}

pub fn menu_root_button_style(
    tokens: ThemeTokens,
    _theme: &Theme,
    status: button::Status,
) -> button::Style {
    let is_highlighted = matches!(status, button::Status::Hovered | button::Status::Pressed);

    button::Style {
        background: is_highlighted.then_some(Background::Color(tokens.hover.iced())),
        text_color: tokens.text.iced(),
        border: Border {
            color: tokens.border.iced(),
            width: if is_highlighted { 1.0 } else { 0.0 },
            radius: 2.0.into(),
        },
        ..button::Style::default()
    }
}

pub fn menu_item_button_style(
    tokens: ThemeTokens,
    _theme: &Theme,
    status: button::Status,
) -> button::Style {
    let background = match status {
        button::Status::Hovered | button::Status::Pressed => {
            Some(Background::Color(tokens.hover.iced()))
        }
        button::Status::Active | button::Status::Disabled => None,
    };

    button::Style {
        background,
        text_color: tokens.text.iced(),
        border: Border {
            radius: 2.0.into(),
            ..Border::default()
        },
        ..button::Style::default()
    }
}

pub fn menu_bar_style(tokens: ThemeTokens) -> iced_aw::style::menu_bar::Style {
    iced_aw::style::menu_bar::Style {
        bar_background: Background::Color(tokens.toolbar_bg.iced()),
        bar_border: Border::default(),
        bar_shadow: Shadow::default(),
        bar_background_expand: 0.0.into(),
        menu_background: Background::Color(tokens.paper.iced()),
        menu_border: Border {
            color: tokens.border.iced(),
            width: 1.0,
            radius: 4.0.into(),
        },
        menu_shadow: Shadow {
            color: Color::from_rgba(0.0, 0.0, 0.0, 0.5),
            offset: Vector::new(2.0, 4.0),
            blur_radius: 8.0,
        },
        menu_background_expand: 5.0.into(),
        path: Background::Color(tokens.hover.iced()),
        path_border: Border {
            color: tokens.border.iced(),
            width: 1.0,
            radius: 2.0.into(),
        },
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn menu_geometry_matches_the_signex_chrome_scale() {
        assert!((MENU_BAR_HEIGHT - 36.0).abs() < f32::EPSILON);
        assert!((MENU_LABEL_SIZE - 12.0).abs() < f32::EPSILON);
    }
}
