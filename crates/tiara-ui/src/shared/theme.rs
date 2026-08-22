use iced::Theme;
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct ThemeColor {
    pub r: u8,
    pub g: u8,
    pub b: u8,
    pub a: u8,
}

impl ThemeColor {
    pub const fn rgb(r: u8, g: u8, b: u8) -> Self {
        Self {
            r,
            g,
            b,
            a: u8::MAX,
        }
    }

    pub fn iced(self) -> iced::Color {
        iced::Color::from_rgba8(self.r, self.g, self.b, f32::from(self.a) / 255.0)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct ThemeTokens {
    pub bg: ThemeColor,
    pub paper: ThemeColor,
    pub text: ThemeColor,
    pub text_secondary: ThemeColor,
    pub accent: ThemeColor,
    pub border: ThemeColor,
    pub panel_bg: ThemeColor,
    pub toolbar_bg: ThemeColor,
    pub statusbar_bg: ThemeColor,
    pub selection: ThemeColor,
    pub hover: ThemeColor,
    pub error: ThemeColor,
    pub warning: ThemeColor,
    pub success: ThemeColor,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct CanvasColors {
    pub background: ThemeColor,
    pub paper: ThemeColor,
    pub wire: ThemeColor,
    pub junction: ThemeColor,
    pub body: ThemeColor,
    pub body_fill: ThemeColor,
    pub pin: ThemeColor,
    pub reference: ThemeColor,
    pub value: ThemeColor,
    pub net_label: ThemeColor,
    pub global_label: ThemeColor,
    pub hier_label: ThemeColor,
    pub no_connect: ThemeColor,
    pub power: ThemeColor,
    pub selection: ThemeColor,
    pub bus: ThemeColor,
    pub grid: ThemeColor,
    pub cursor: ThemeColor,
}

#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct CustomThemeFile {
    pub name: String,
    pub tokens: ThemeTokens,
    pub canvas: CanvasColors,
}

impl CustomThemeFile {
    pub fn from_json(source: &str) -> Result<Self, serde_json::Error> {
        serde_json::from_str(source)
    }

    pub fn iced_theme(&self) -> Theme {
        let background = self.tokens.bg;
        let luminance = 0.0722_f32.mul_add(
            f32::from(background.b),
            0.7152_f32.mul_add(f32::from(background.g), 0.2126 * f32::from(background.r)),
        );

        if luminance < 127.5 {
            Theme::Dark
        } else {
            Theme::Light
        }
    }

    fn vs_code_dark() -> Self {
        Self {
            name: "VS Code Dark".to_owned(),
            tokens: ThemeTokens {
                bg: ThemeColor::rgb(0x1E, 0x1E, 0x1E),
                paper: ThemeColor::rgb(0x25, 0x25, 0x26),
                text: ThemeColor::rgb(0xD4, 0xD4, 0xD4),
                text_secondary: ThemeColor::rgb(0x80, 0x80, 0x80),
                accent: ThemeColor::rgb(0x00, 0x7A, 0xCC),
                border: ThemeColor::rgb(0x3C, 0x3C, 0x3C),
                panel_bg: ThemeColor::rgb(0x18, 0x18, 0x18),
                toolbar_bg: ThemeColor::rgb(0x33, 0x33, 0x33),
                statusbar_bg: ThemeColor::rgb(0x00, 0x7A, 0xCC),
                selection: ThemeColor::rgb(0x26, 0x4F, 0x78),
                hover: ThemeColor::rgb(0x2A, 0x2D, 0x2E),
                error: ThemeColor::rgb(0xF4, 0x44, 0x47),
                warning: ThemeColor::rgb(0xFF, 0x8C, 0x00),
                success: ThemeColor::rgb(0x6A, 0x99, 0x55),
            },
            canvas: CanvasColors {
                background: ThemeColor::rgb(0x1E, 0x1E, 0x1E),
                paper: ThemeColor::rgb(0x25, 0x25, 0x26),
                wire: ThemeColor::rgb(0x6A, 0x99, 0x55),
                junction: ThemeColor::rgb(0x6A, 0x99, 0x55),
                body: ThemeColor::rgb(0x56, 0x9C, 0xD6),
                body_fill: ThemeColor::rgb(0x25, 0x25, 0x26),
                pin: ThemeColor::rgb(0xD4, 0xD4, 0xD4),
                reference: ThemeColor::rgb(0x56, 0x9C, 0xD6),
                value: ThemeColor::rgb(0xCE, 0x91, 0x78),
                net_label: ThemeColor::rgb(0x4E, 0xC9, 0xB0),
                global_label: ThemeColor::rgb(0xDC, 0xDC, 0xAA),
                hier_label: ThemeColor::rgb(0xFF, 0x8C, 0x00),
                no_connect: ThemeColor::rgb(0xF4, 0x44, 0x47),
                power: ThemeColor::rgb(0xF4, 0x44, 0x47),
                selection: ThemeColor::rgb(0xFF, 0xFF, 0xFF),
                bus: ThemeColor::rgb(0x9C, 0xDC, 0xFE),
                grid: ThemeColor::rgb(0x3C, 0x3C, 0x3C),
                cursor: ThemeColor::rgb(0xFF, 0xFF, 0xFF),
            },
        }
    }
}

impl Default for CustomThemeFile {
    fn default() -> Self {
        Self::vs_code_dark()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn default_theme_matches_the_signex_visual_studio_code_identity() {
        let theme = CustomThemeFile::default();

        assert_eq!(theme.name, "VS Code Dark");
        assert_eq!(theme.tokens.accent, ThemeColor::rgb(0x00, 0x7A, 0xCC));
        assert_eq!(theme.iced_theme(), Theme::Dark);
    }

    #[test]
    fn custom_theme_round_trips_through_the_signex_json_shape() {
        let expected = CustomThemeFile::default();
        let json = serde_json::to_string(&expected).expect("theme JSON");
        let actual = CustomThemeFile::from_json(&json).expect("parsed theme JSON");

        assert_eq!(actual, expected);
    }
}
