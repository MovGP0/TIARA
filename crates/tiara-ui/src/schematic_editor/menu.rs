use iced::widget::{button, column, container, horizontal_space, rich_text, row, span, text};
use iced::{Alignment, Element, Length, Theme};
use iced_aw::menu::{DrawPath, Item, Menu, MenuBar};

use super::Message;
use super::chrome;
use tiara_core::editor_settings::EditorSettings;

use super::command_state::{self, EditorState};
use super::menu_tree::{self, MenuEntry};
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

/// The mark drawn beside a command whose setting is on.
const TICK: &str = "\u{2713}";

/// Builds the menu that originates at `SchematicEditor.MainMenu`.
///
/// The original form setup is recovered at Ghidra address `01c69770`, and the
/// entries come from the recovered resource in [`super::menu_tree`]. Every
/// command sends its own name, so a click is answered by the item that was
/// clicked rather than by a shared placeholder.
pub fn view(
    tokens: ThemeTokens,
    state: EditorState,
    settings: &EditorSettings,
) -> Element<'static, Message> {
    let roots = menu_tree::MAIN_MENU
        .iter()
        .filter(|entry| command_state::is_shown(entry.name, entry.visible, state))
        .map(|entry| {
            let root = button(caption_of(entry, tokens.text.iced()))
                .padding([7, 6])
                .on_press(Message::MenuCommand(entry.name))
                .style(move |theme, status| chrome::menu_root_button_style(tokens, theme, status));

            let children = command_state::children_of(entry);
            Item::with_menu(root, submenu(children, tokens, state, settings, MENU_WIDTH))
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
    state: EditorState,
    settings: &EditorSettings,
    width: f32,
) -> Menu<'static, Message, Theme, iced::Renderer> {
    let items = drawn(entries, state)
        .into_iter()
        .map(|entry| item(entry, tokens, state, settings))
        .collect::<Vec<_>>();

    Menu::new(items)
        .width(Length::Fixed(width))
        .max_width(width + 40.0)
        .offset(2.0)
        .spacing(1.0)
}

/// The entries one dropdown actually draws, in order.
///
/// Taking the hidden entries out leaves the separators that surrounded them
/// behind, and drawing those would give a line at the top of the menu, a line
/// at the bottom, or two lines together - none of which the original draws. So
/// the separators are settled after the entries are, not before.
fn drawn(entries: &'static [MenuEntry], state: EditorState) -> Vec<&'static MenuEntry> {
    let mut kept: Vec<&'static MenuEntry> = Vec::with_capacity(entries.len());
    for entry in entries {
        if !command_state::is_shown(entry.name, entry.visible, state) {
            continue;
        }
        if entry.is_separator() && kept.last().is_none_or(|last| last.is_separator()) {
            continue;
        }
        kept.push(entry);
    }
    while kept.last().is_some_and(|last| last.is_separator()) {
        kept.pop();
    }
    kept
}

/// Builds one entry, which is a separator, a command, or a submenu.
fn item(
    entry: &'static MenuEntry,
    tokens: ThemeTokens,
    state: EditorState,
    settings: &EditorSettings,
) -> Item<'static, Message, Theme, iced::Renderer> {
    if entry.is_separator() {
        return Item::new(separator(tokens));
    }

    // An instrument offers a submenu only where real-time hardware was found;
    // without it the original shows the plain command, which is what the
    // recovered pair collapses to here.
    let children = command_state::children_of(entry);
    let opens = !children.is_empty() && (state.has_hardware || !is_an_instrument(entry));
    let trailing = if opens {
        SUBMENU_MARK
    } else {
        entry.shortcut.unwrap_or("")
    };
    let enabled = entry.enabled && command_state::is_enabled(entry.name, state);

    let caption_colour = if enabled {
        tokens.text.iced()
    } else {
        tokens.text_secondary.iced()
    };
    // A command that keeps a setting is drawn ticked while that setting is on,
    // which is what the original shows and what tells a switch from an action.
    let tick = if settings.is_checked(entry.name) == Some(true) {
        TICK
    } else {
        " "
    };

    let label = row![
        text(tick)
            .size(chrome::MENU_LABEL_SIZE)
            .color(caption_colour),
        caption_of(entry, caption_colour),
        horizontal_space(),
        text(trailing)
            .size(chrome::MENU_LABEL_SIZE)
            .color(tokens.text_secondary.iced()),
    ]
    .spacing(12)
    .align_y(Alignment::Center);

    let mut control = button(label)
        .width(Length::Fill)
        .padding([4, 12])
        .style(move |theme, status| chrome::menu_item_button_style(tokens, theme, status));
    if enabled {
        control = control.on_press(Message::MenuCommand(entry.name));
    }

    if opens {
        Item::with_menu(
            control,
            submenu(children, tokens, state, settings, SUBMENU_WIDTH),
        )
    } else {
        Item::new(control)
    }
}

/// Whether this entry is one of the nine instruments the resource names twice.
///
/// The original offers `Simulated` and `Real-time` only where it found a
/// measurement card, and otherwise shows one plain command.
fn is_an_instrument(entry: &'static MenuEntry) -> bool {
    command_state::children_of(entry)
        .iter()
        .any(|child| child.caption == "Simulated")
}

/// The caption, with the letter the original underlines underlined.
fn caption_of(entry: &'static MenuEntry, colour: iced::Color) -> Element<'static, Message> {
    let Some(at) = entry.accelerator else {
        return text(entry.caption)
            .size(chrome::MENU_LABEL_SIZE)
            .color(colour)
            .into();
    };

    let before: String = entry.caption.chars().take(at).collect();
    let marked: String = entry.caption.chars().skip(at).take(1).collect();
    let after: String = entry.caption.chars().skip(at + 1).collect();

    rich_text([
        span(before).color(colour),
        span(marked).color(colour).underline(true),
        span(after).color(colour),
    ])
    .size(chrome::MENU_LABEL_SIZE)
    .into()
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

#[cfg(test)]
mod tests {
    use super::{drawn, is_an_instrument};
    use crate::schematic_editor::command_state::EditorState;
    use crate::schematic_editor::menu_tree::{MAIN_MENU, MenuEntry};

    fn empty() -> EditorState {
        EditorState::default()
    }

    fn menu(caption: &str) -> &'static MenuEntry {
        MAIN_MENU
            .iter()
            .find(|entry| entry.caption == caption)
            .unwrap_or_else(|| panic!("the bar has no {caption} menu"))
    }

    fn every_dropdown(entries: &'static [MenuEntry], into: &mut Vec<&'static [MenuEntry]>) {
        for entry in entries {
            let children = super::command_state::children_of(entry);
            if !children.is_empty() {
                into.push(children);
                every_dropdown(children, into);
            }
        }
    }

    #[test]
    fn no_dropdown_starts_or_ends_with_a_line() {
        let mut dropdowns = Vec::new();
        every_dropdown(MAIN_MENU, &mut dropdowns);
        assert!(!dropdowns.is_empty());

        for entries in dropdowns {
            let shown = drawn(entries, empty());
            if let Some(first) = shown.first() {
                assert!(!first.is_separator(), "a dropdown starts with a line");
            }
            if let Some(last) = shown.last() {
                assert!(!last.is_separator(), "a dropdown ends with a line");
            }
        }
    }

    #[test]
    fn no_dropdown_draws_two_lines_together() {
        let mut dropdowns = Vec::new();
        every_dropdown(MAIN_MENU, &mut dropdowns);

        for entries in dropdowns {
            let shown = drawn(entries, empty());
            for pair in shown.windows(2) {
                assert!(
                    !(pair[0].is_separator() && pair[1].is_separator()),
                    "two lines together"
                );
            }
        }
    }

    #[test]
    fn hiding_an_entry_takes_the_line_that_followed_it_too() {
        // Help holds `-`, `Check for Updates...`, `-`, `Getting Started`, both
        // of them hidden. The original draws one line there, not two.
        let help = drawn(super::command_state::children_of(menu("Help")), empty());
        let captions: Vec<&str> = help.iter().map(|entry| entry.caption).collect();

        assert_eq!(
            captions,
            [
                "Contents",
                "Component Help",
                "-",
                "DesignSoft on the Web",
                "-",
                "About",
            ]
        );
    }

    #[test]
    fn the_language_submenu_is_the_one_the_original_builds() {
        let view = drawn(super::command_state::children_of(menu("View")), empty());
        let language = view
            .iter()
            .find(|entry| entry.name == "mnLanguage")
            .expect("View should offer Language");

        let offered: Vec<&str> = super::command_state::children_of(language)
            .iter()
            .map(|entry| entry.caption)
            .collect();

        assert_eq!(offered.len(), 10);
        assert_eq!(offered.first(), Some(&"English"));
        assert!(
            !offered.contains(&"Other"),
            "the resource's placeholder should not be drawn"
        );
    }

    #[test]
    fn an_instrument_is_recognised_by_the_choice_it_offers() {
        let measurement = menu("T&M");
        let oscilloscope = super::command_state::children_of(measurement)
            .iter()
            .find(|entry| entry.caption == "Oscilloscope")
            .expect("T&M should offer the Oscilloscope");

        assert!(is_an_instrument(oscilloscope));
        assert!(!is_an_instrument(measurement));
    }
}
