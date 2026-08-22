use iced::widget::{button, text};
use iced::{Element, Length, Theme};
use iced_aw::menu::{DrawPath, Item, Menu, MenuBar};

use super::Message;
use super::chrome;
use super::inventory::MAIN_MENUS;
use crate::shared::theme::ThemeTokens;

/// Builds the menu that originates at `SchematicEditor.MainMenu`.
///
/// The original form setup is recovered at Ghidra address `01c69770`.
/// This Rust method only creates controls. It does not port any menu handler.
pub fn view(tokens: ThemeTokens) -> Element<'static, Message> {
    let roots = MAIN_MENUS
        .iter()
        .map(|definition| {
            let entries = definition
                .items
                .iter()
                .map(|label| {
                    Item::new(
                        button(
                            text(*label)
                                .size(chrome::MENU_LABEL_SIZE)
                                .color(tokens.text.iced()),
                        )
                        .width(Length::Fill)
                        .padding([4, 12])
                        .on_press(Message::NoOp)
                        .style(move |theme, status| {
                            chrome::menu_item_button_style(tokens, theme, status)
                        }),
                    )
                })
                .collect::<Vec<_>>();

            let root = button(
                text(definition.title)
                    .size(chrome::MENU_LABEL_SIZE)
                    .color(tokens.text.iced()),
            )
            .padding([7, 6])
            .on_press(Message::NoOp)
            .style(move |theme, status| chrome::menu_root_button_style(tokens, theme, status));
            let menu = Menu::new(entries)
                .width(Length::Fixed(300.0))
                .max_width(340.0)
                .offset(2.0)
                .spacing(2.0);

            Item::with_menu(root, menu)
        })
        .collect::<Vec<_>>();

    MenuBar::new(roots)
        .spacing(1.0)
        .padding([1, 4])
        .draw_path(DrawPath::Backdrop)
        .style(move |_: &Theme, _| chrome::menu_bar_style(tokens))
        .into()
}
