use iced::widget::{
    button, column, container, horizontal_space, mouse_area, responsive, rich_text, row, span, svg,
    text,
};
use iced::{Alignment, Element, Length, Theme};

use super::Message;
use super::chrome;
use tiara_core::editor_settings::EditorSettings;

use super::command_state::{self, EditorState};
use super::menu_tree::{self, MenuEntry};
use crate::shared::glyphs::Glyphs;
use crate::shared::theme::ThemeTokens;

/// How wide a dropdown is, and how wide one nested inside it is.
const MENU_WIDTH: f32 = 320.0;
const SUBMENU_WIDTH: f32 = 300.0;
const ROOT_SPACING: f32 = 1.0;
const MAX_MENU_DEPTH: usize = 4;

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

/// Which menu is open, and which of its entries has opened one of its own.
///
/// The editor keeps this rather than the widget, which is the whole point:
/// `iced_aw`'s menu bar keeps it inside itself and lets nothing reach it, so
/// the Alt key could never open a menu. This can be set by a press, by a
/// pointer, or by a key.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct OpenMenu {
    /// Which of the bar's roots is open, counting the ones that are drawn.
    pub root: Option<usize>,
    /// The submenu opener at each depth, from the root panel outwards.
    pub path: [Option<&'static str>; MAX_MENU_DEPTH],
}

impl OpenMenu {
    /// Nothing open.
    #[must_use]
    pub const fn shut() -> Self {
        Self {
            root: None,
            path: [None; MAX_MENU_DEPTH],
        }
    }

    /// Whether any menu is open.
    #[must_use]
    pub const fn is_open(&self) -> bool {
        self.root.is_some()
    }

    /// Opens one of the roots, closing whatever it had open.
    #[must_use]
    pub const fn opening(root: usize) -> Self {
        Self {
            root: Some(root),
            path: [None; MAX_MENU_DEPTH],
        }
    }

    /// Opens one submenu and retains every parent needed to reach it.
    pub fn open_entry(&mut self, name: &'static str, state: EditorState) {
        let Some(root) = self.root.and_then(|root| roots(state).get(root).copied()) else {
            return;
        };
        let mut entries = command_state::children_of(root);
        for depth in 0..MAX_MENU_DEPTH {
            if entries.iter().any(|entry| entry.name == name) {
                self.path[depth] = Some(name);
                self.path[(depth + 1)..].fill(None);
                return;
            }
            let Some(parent) = self.path[depth]
                .and_then(|parent| entries.iter().find(|entry| entry.name == parent))
            else {
                return;
            };
            entries = command_state::children_of(parent);
        }
    }

    /// Closes the deepest submenu. Returns false when only the root remains.
    pub fn close_deepest(&mut self) -> bool {
        if let Some(depth) = self.path.iter().rposition(Option::is_some) {
            self.path[depth] = None;
            self.path[(depth + 1)..].fill(None);
            true
        } else {
            false
        }
    }
}

/// The roots the bar draws, in order.
#[must_use]
pub fn roots(state: EditorState) -> Vec<&'static MenuEntry> {
    menu_tree::MAIN_MENU
        .iter()
        .filter(|entry| command_state::is_shown(entry.name, entry.visible, state))
        .collect()
}

/// Which root a letter opens, by the letter the resource underlines.
///
/// `Alt` and that letter is what opens a menu in the original, and the
/// letters were already known: `MenuEntry::accelerator` holds where in the
/// caption the underlined one is.
#[must_use]
pub fn root_for(letter: char, state: EditorState) -> Option<usize> {
    roots(state)
        .into_iter()
        .position(|entry| accelerator_of(entry) == Some(letter.to_ascii_lowercase()))
}

/// Which entry of an open menu a letter chooses.
///
/// Only an entry that is offered can be chosen: a letter belonging to a
/// greyed command does nothing, exactly as a click on it would.
#[must_use]
pub fn entry_for(
    letter: char,
    entries: &'static [MenuEntry],
    state: EditorState,
) -> Option<&'static MenuEntry> {
    drawn(entries, state).into_iter().find(|entry| {
        accelerator_of(entry) == Some(letter.to_ascii_lowercase())
            && entry.enabled
            && command_state::is_enabled(entry.name, state)
    })
}

/// Whether an entry opens a submenu rather than doing something.
///
/// An instrument opens one only where a measurement card was found, which
/// is what the original does and what the recovered pair collapses to.
#[must_use]
pub fn opens_a_submenu(entry: &'static MenuEntry, state: EditorState) -> bool {
    let children = command_state::children_of(entry);
    !children.is_empty() && (state.has_hardware || !is_an_instrument(entry))
}

/// The letter the resource underlines in a caption, in lower case.
#[must_use]
pub fn accelerator_of(entry: &'static MenuEntry) -> Option<char> {
    let at = entry.accelerator?;
    entry
        .caption
        .chars()
        .nth(at)
        .map(|letter| letter.to_ascii_lowercase())
}

/// How far along the bar one root starts.
///
/// The bar and this calculation use the same explicit width for every root.
/// Therefore, the dropdown starts at the rendered button boundary.
#[must_use]
pub fn root_offset(root: usize, state: EditorState) -> f32 {
    let widths: f32 = roots(state).into_iter().take(root).map(root_width).sum();
    #[allow(
        clippy::cast_precision_loss,
        reason = "the menu has fewer roots than f32 can represent exactly"
    )]
    let gaps = root as f32 * ROOT_SPACING;
    widths + gaps
}

/// Roughly how wide one root button is.
fn root_width(entry: &'static MenuEntry) -> f32 {
    #[allow(
        clippy::cast_precision_loss,
        reason = "a caption is a dozen characters"
    )]
    let letters = entry.caption.chars().count() as f32;
    letters.mul_add(LETTER_WIDTH, ROOT_PADDING)
}

/// About how wide one letter of the menu font is.
const LETTER_WIDTH: f32 = 7.0;

/// The padding and spacing around one root button.
const ROOT_PADDING: f32 = 14.0;

/// The bar of roots, with the open one standing out.
pub fn bar(tokens: ThemeTokens, state: EditorState, open: OpenMenu) -> Element<'static, Message> {
    let mut strip = row![].spacing(ROOT_SPACING).align_y(Alignment::Center);
    for (at, entry) in roots(state).into_iter().enumerate() {
        let lit = open.root == Some(at);
        strip = strip.push(
            mouse_area(
                button(caption_of(entry, tokens.text.iced()))
                    .width(Length::Fixed(root_width(entry)))
                    .padding([7, 6])
                    .on_press(Message::MenuRootPressed(at))
                    .style(move |theme, status| {
                        chrome::menu_root_button_style(tokens, theme, status)
                    }),
            )
            // Once one menu is open, moving across the bar opens the next,
            // which is what every menu bar does and what the original does.
            .on_enter(if open.is_open() {
                Message::MenuRootHovered(at)
            } else {
                Message::NoOp
            }),
        );
        let _ = lit;
    }

    container(strip.push(horizontal_space()))
        .width(Length::Fill)
        .style(move |_: &Theme| chrome::menu_strip_style(tokens))
        .into()
}

/// The dropdown of whichever menu is open, if one is.
///
/// Drawn over the rest of the editor rather than inside the bar, so it can
/// cover the sheet the way a menu does.
pub fn dropdown(
    tokens: ThemeTokens,
    state: EditorState,
    settings: &EditorSettings,
    open: OpenMenu,
) -> Option<Element<'static, Message>> {
    let root = open.root?;
    let entry = *roots(state).get(root)?;
    let entries = command_state::children_of(entry);
    let settings = settings.clone();
    Some(
        responsive(move |size| {
            let layout =
                dropdown_layout(root_offset(root, state), size.width, open.path[0].is_some());
            let panel = panel(
                entries,
                tokens,
                state,
                &settings,
                MENU_WIDTH,
                &open.path,
                layout.submenu_before,
            );
            container(panel)
                .padding(iced::Padding {
                    top: 0.0,
                    right: 0.0,
                    bottom: 0.0,
                    left: layout.left,
                })
                .into()
        })
        .into(),
    )
}

#[derive(Debug, Clone, Copy, PartialEq)]
struct DropdownLayout {
    left: f32,
    submenu_before: bool,
}

fn dropdown_layout(root_left: f32, available_width: f32, has_submenu: bool) -> DropdownLayout {
    let root_left = root_left.min((available_width - MENU_WIDTH).max(0.0));
    let submenu_before = has_submenu
        && root_left + MENU_WIDTH + SUBMENU_WIDTH > available_width
        && root_left >= SUBMENU_WIDTH;
    let left = if submenu_before {
        root_left - SUBMENU_WIDTH
    } else {
        root_left
    };
    DropdownLayout {
        left,
        submenu_before,
    }
}

/// One dropdown, and the one it has open inside it.
fn panel(
    entries: &'static [MenuEntry],
    tokens: ThemeTokens,
    state: EditorState,
    settings: &EditorSettings,
    width: f32,
    path: &[Option<&'static str>],
    submenu_before: bool,
) -> Element<'static, Message> {
    let mut lines = column![].width(Length::Fixed(width));
    for entry in drawn(entries, state) {
        lines = lines.push(line(entry, tokens, state, settings));
    }

    let root_panel = container(lines)
        .padding(2)
        .style(move |iced_theme| chrome::menu_panel_style(tokens, iced_theme));

    // A submenu is drawn beside the one that opened it, as far down as the
    // entry that did.
    let Some(name) = path.first().copied().flatten() else {
        return root_panel.into();
    };
    let Some(opener) = drawn(entries, state)
        .into_iter()
        .find(|entry| entry.name == name)
    else {
        return root_panel.into();
    };
    let children = command_state::children_of(opener);
    if children.is_empty() {
        return root_panel.into();
    }

    let top = submenu_offset(entries, name, state);
    let submenu = container(panel(
        children,
        tokens,
        state,
        settings,
        SUBMENU_WIDTH,
        path.get(1..).unwrap_or_default(),
        submenu_before,
    ))
    .padding(iced::Padding {
        top,
        right: 0.0,
        bottom: 0.0,
        left: 0.0,
    });

    if submenu_before {
        row![submenu, root_panel].into()
    } else {
        row![root_panel, submenu].into()
    }
}

fn submenu_offset(entries: &'static [MenuEntry], name: &str, state: EditorState) -> f32 {
    drawn(entries, state)
        .into_iter()
        .take_while(|entry| entry.name != name)
        .map(|entry| if entry.is_separator() { 9.0 } else { 26.0 })
        .sum()
}

/// One line of a dropdown.
fn line(
    entry: &'static MenuEntry,
    tokens: ThemeTokens,
    state: EditorState,
    settings: &EditorSettings,
) -> Element<'static, Message> {
    if entry.is_separator() {
        return separator(tokens);
    }

    let opens = opens_a_submenu(entry, state);
    let enabled = entry.enabled && command_state::is_enabled(entry.name, state);

    let caption_colour = if enabled {
        tokens.text.iced()
    } else {
        tokens.text_secondary.iced()
    };
    let icons = Glyphs::shared();
    let tick = if settings.is_checked(entry.name) == Some(true) {
        icons.named("check")
    } else {
        None
    };
    let trailing = if opens {
        icon_cell(icons.named("chevron-right"), caption_colour)
    } else {
        text(entry.shortcut.unwrap_or(""))
            .size(chrome::MENU_LABEL_SIZE)
            .color(tokens.text_secondary.iced())
            .into()
    };

    let label = row![
        icon_cell(tick, caption_colour),
        icon_cell(icons.get(entry.name), caption_colour),
        caption_of(entry, caption_colour),
        horizontal_space(),
        trailing,
    ]
    .spacing(8)
    .align_y(Alignment::Center);

    let mut control = button(label)
        .width(Length::Fill)
        .padding([4, 12])
        .style(move |theme, status| chrome::menu_item_button_style(tokens, theme, status));
    if enabled {
        control = control.on_press(if opens {
            Message::MenuEntryOpened(entry.name)
        } else {
            Message::MenuCommand(entry.name)
        });
    }

    mouse_area(control)
        .on_enter(if opens {
            Message::MenuEntryOpened(entry.name)
        } else {
            Message::MenuEntryHovered
        })
        .into()
}

/// A fixed icon column keeps checked and unchecked captions aligned.
fn icon_cell(handle: Option<svg::Handle>, colour: iced::Color) -> Element<'static, Message> {
    handle.map_or_else(
        || horizontal_space().width(18).into(),
        |handle| {
            svg(handle)
                .width(18)
                .height(18)
                .style(move |_, _| svg::Style {
                    color: Some(colour),
                })
                .into()
        },
    )
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
    use super::{
        OpenMenu, ROOT_SPACING, drawn, dropdown_layout, is_an_instrument, root_offset, root_width,
        submenu_offset,
    };
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

    #[test]
    fn each_dropdown_uses_the_exact_widths_assigned_to_earlier_roots() {
        let state = empty();
        let roots = super::roots(state);
        let tools = roots
            .iter()
            .position(|entry| entry.caption == "Tools")
            .expect("Tools root");
        let preceding_width = roots[..tools]
            .iter()
            .map(|entry| root_width(entry))
            .sum::<f32>();
        let root_count = f32::from(u16::try_from(tools).unwrap());
        let expected = root_count.mul_add(ROOT_SPACING, preceding_width);

        assert!((root_offset(tools, state) - expected).abs() < f32::EPSILON);
    }

    #[test]
    fn a_submenu_is_offset_to_the_row_that_opened_it() {
        let help = super::command_state::children_of(menu("Help"));
        let offset = submenu_offset(help, "mnDesignSoftontheWeb", empty());

        assert!(offset > 0.0);
    }

    #[test]
    fn a_right_edge_submenu_opens_towards_the_available_space() {
        let narrow = dropdown_layout(400.0, 720.0, true);
        assert!(narrow.submenu_before);
        assert!((narrow.left - 100.0).abs() < f32::EPSILON);

        let wide = dropdown_layout(400.0, 1_200.0, true);
        assert!(!wide.submenu_before);
        assert!((wide.left - 400.0).abs() < f32::EPSILON);
    }

    #[test]
    fn submenu_ownership_keeps_the_parent_path() {
        let state = empty();
        let help_root = super::roots(state)
            .iter()
            .position(|entry| entry.caption == "Help")
            .expect("Help root");
        let mut open = OpenMenu::opening(help_root);

        open.open_entry("mnDesignSoftontheWeb", state);

        assert_eq!(open.path[0], Some("mnDesignSoftontheWeb"));
        assert!(open.close_deepest());
        assert_eq!(open.path, [None; 4]);
    }
}
