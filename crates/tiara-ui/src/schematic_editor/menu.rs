use iced::widget::{button, column, container, horizontal_space, row, text};
use iced::{Alignment, Element, Length, Theme};
use iced_aw::menu::{DrawPath, Item, Menu, MenuBar};

use super::Message;
use super::chrome;
use super::menu_tree::{MAIN_MENU, MenuEntry};
use crate::shared::theme::ThemeTokens;

/// How wide a dropdown is, and how wide one nested inside it is.
const MENU_WIDTH: f32 = 320.0;
const SUBMENU_WIDTH: f32 = 300.0;

/// The mark drawn beside an entry that opens a submenu.
///
/// Drawn here rather than written into the caption. The shell this replaces put
/// a literal `"  >"` in the caption text, which looked like a submenu and could
/// never open one.
const SUBMENU_MARK: &str = "\u{203A}";

/// Builds the menu that originates at `SchematicEditor.MainMenu`.
///
/// The original form setup is recovered at Ghidra address `01c69770`, and the
/// entries come from the recovered resource in [`super::menu_tree`]. Every
/// command sends its own name, so a click is answered by the item that was
/// clicked rather than by a shared placeholder.
pub fn view(tokens: ThemeTokens) -> Element<'static, Message> {
    let roots = MAIN_MENU
        .iter()
        .map(|entry| {
            let root = button(
                text(entry.caption)
                    .size(chrome::MENU_LABEL_SIZE)
                    .color(tokens.text.iced()),
            )
            .padding([7, 6])
            .on_press(Message::MenuCommand(entry.name))
            .style(move |theme, status| chrome::menu_root_button_style(tokens, theme, status));

            Item::with_menu(root, submenu(entry.children, tokens, MENU_WIDTH))
        })
        .collect::<Vec<_>>();

    MenuBar::new(roots)
        .spacing(1.0)
        .padding([1, 4])
        .draw_path(DrawPath::Backdrop)
        .style(move |_: &Theme, _| chrome::menu_bar_style(tokens))
        .into()
}

/// Builds one dropdown from the entries it holds.
fn submenu(
    entries: &'static [MenuEntry],
    tokens: ThemeTokens,
    width: f32,
) -> Menu<'static, Message, Theme, iced::Renderer> {
    let items = entries
        .iter()
        .map(|entry| item(entry, tokens))
        .collect::<Vec<_>>();

    Menu::new(items)
        .width(Length::Fixed(width))
        .max_width(width + 40.0)
        .offset(2.0)
        .spacing(1.0)
}

/// Builds one entry, which is a separator, a command, or a submenu.
fn item(entry: &'static MenuEntry, tokens: ThemeTokens) -> Item<'static, Message, Theme, iced::Renderer> {
    if entry.is_separator() {
        return Item::new(separator(tokens));
    }

    let trailing = if entry.opens_a_submenu() {
        SUBMENU_MARK
    } else {
        entry.shortcut.unwrap_or("")
    };

    let label = row![
        text(entry.caption)
            .size(chrome::MENU_LABEL_SIZE)
            .color(tokens.text.iced()),
        horizontal_space(),
        text(trailing)
            .size(chrome::MENU_LABEL_SIZE)
            .color(tokens.text_secondary.iced()),
    ]
    .spacing(12)
    .align_y(Alignment::Center);

    let control = button(label)
        .width(Length::Fill)
        .padding([4, 12])
        .on_press(Message::MenuCommand(entry.name))
        .style(move |theme, status| chrome::menu_item_button_style(tokens, theme, status));

    if entry.opens_a_submenu() {
        Item::with_menu(control, submenu(entry.children, tokens, SUBMENU_WIDTH))
    } else {
        Item::new(control)
    }
}

/// A separator line between groups of commands.
fn separator(tokens: ThemeTokens) -> Element<'static, Message> {
    container(
        column![
            container(horizontal_space())
                .width(Length::Fill)
                .height(Length::Fixed(1.0))
                .style(move |iced_theme| chrome::separator_style(tokens, iced_theme)),
        ]
        .width(Length::Fill),
    )
    .padding([4, 8])
    .width(Length::Fill)
    .into()
}
