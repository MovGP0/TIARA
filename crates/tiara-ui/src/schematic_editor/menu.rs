use iced::widget::{button, text};
use iced::{Element, Length};
use iced_aw::menu::{Item, Menu, MenuBar};

use super::Message;
use super::inventory::MAIN_MENUS;

/// Builds the menu that originates at `SchematicEditor.MainMenu`.
///
/// The original form setup is recovered at Ghidra address `01c69770`.
/// This Rust method only creates controls. It does not port any menu handler.
pub fn view() -> Element<'static, Message> {
    let roots = MAIN_MENUS
        .iter()
        .map(|definition| {
            let entries = definition
                .items
                .iter()
                .map(|label| {
                    Item::new(
                        button(text(*label))
                            .width(Length::Fill)
                            .padding([4, 8])
                            .on_press(Message::NoOp),
                    )
                })
                .collect::<Vec<_>>();

            let root = button(text(definition.title))
                .padding([4, 9])
                .on_press(Message::NoOp);
            let menu = Menu::new(entries)
                .width(Length::Fixed(300.0))
                .max_width(340.0)
                .spacing(1.0);

            Item::with_menu(root, menu)
        })
        .collect::<Vec<_>>();

    MenuBar::new(roots).into()
}
