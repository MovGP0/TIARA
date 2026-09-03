use std::fmt::{self, Display, Formatter};

use iced::font::Weight;
use iced::widget::{button, column, row, scrollable, text};
use iced::{Element, Font, Length, Task};
use tiara_core::ordered_list::OrderedList;

pub const TITLE: &str = "Pin Order";
pub const FORM_RESOURCE: &str = "PinOrderDlg";
pub const LIBRARY_EVALUATION: &str = "iced supplies selection, button enablement, and the idle message. The existing tiara-core OrderedList uses Vec::swap for adjacent moves. A typed row flag preserves the recovered category boundary without an additional collection crate.";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinOrderRow {
    pub label: String,
    pub boundary_flag: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DrawBounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinRowDrawPlan {
    pub fill_background: bool,
    pub bold: bool,
    pub text: String,
    pub origin: (i32, i32),
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WindowConstraints {
    pub min_width: u32,
    pub min_height: u32,
    pub max_width: Option<u32>,
    pub max_height: Option<u32>,
}

impl Display for PinOrderRow {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        formatter.write_str(&self.label)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Created {
        width: u32,
        height: u32,
        item_height: u32,
        current_ppi: u32,
    },
    Selected(usize),
    MoveUp,
    MoveDown,
    Idle,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct State {
    pins: OrderedList<PinOrderRow>,
    up_enabled: bool,
    down_enabled: bool,
    constraints: WindowConstraints,
    item_height: u32,
}

impl State {
    #[must_use]
    pub const fn new(pins: Vec<PinOrderRow>) -> Self {
        Self {
            pins: OrderedList::new(pins),
            up_enabled: false,
            down_enabled: false,
            constraints: WindowConstraints {
                min_width: 0,
                min_height: 0,
                max_width: None,
                max_height: None,
            },
            item_height: 0,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created {
                width,
                height,
                item_height,
                current_ppi,
            } => self.on_create(width, height, item_height, current_ppi),
            Message::Selected(index) => self.pins.select(Some(index)),
            Message::MoveUp => {
                let _ = self.pins.move_selected_up();
            }
            Message::MoveDown => {
                let _ = self.pins.move_selected_down();
            }
            Message::Idle => {}
        }
        self.on_idle();
        Task::none()
    }

    /// Initializes the fixed-width window and owner-draw row height.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01781BB0`, symbol `FUN_01781bb0` (`TPinOrderDlg.FormCreate`). The
    /// current width becomes both width limits, the current height becomes the
    /// minimum height, and maximum height remains unbounded. The existing list
    /// item height is DPI-scaled from 96 PPI with Win32 `MulDiv` rounding.
    pub fn on_create(&mut self, width: u32, height: u32, item_height: u32, current_ppi: u32) {
        self.constraints = WindowConstraints {
            min_width: width,
            min_height: height,
            max_width: Some(width),
            max_height: None,
        };
        self.item_height = scale_for_ppi(item_height, current_ppi);
    }

    /// Refreshes the two move-button enabled states.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01781920`, symbol `FUN_01781920`
    /// (`TPinOrderDlg.PinOrderDlgEventsIdle`). Up is disabled without a
    /// movable predecessor and when a flagged row is directly below an
    /// unflagged row. Down is disabled without a movable successor and when
    /// an unflagged row is directly above a flagged row. The raw flag's
    /// business name is not recovered, so the typed model keeps it explicit.
    pub fn on_idle(&mut self) {
        let Some(selected) = self.pins.selected() else {
            self.up_enabled = false;
            self.down_enabled = false;
            return;
        };
        let rows = self.pins.values();
        let Some(current) = rows.get(selected) else {
            self.up_enabled = false;
            self.down_enabled = false;
            return;
        };

        self.up_enabled = selected.checked_sub(1).is_some_and(|previous| {
            let previous = &rows[previous];
            !current.boundary_flag || previous.boundary_flag
        });
        self.down_enabled = selected.checked_add(1).is_some_and(|next| {
            rows.get(next)
                .is_some_and(|next| current.boundary_flag || !next.boundary_flag)
        });
    }

    #[must_use]
    pub const fn up_enabled(&self) -> bool {
        self.up_enabled
    }

    #[must_use]
    pub const fn down_enabled(&self) -> bool {
        self.down_enabled
    }

    #[must_use]
    pub const fn selected(&self) -> Option<usize> {
        self.pins.selected()
    }

    #[must_use]
    pub fn pins(&self) -> &[PinOrderRow] {
        self.pins.values()
    }

    #[must_use]
    pub const fn constraints(&self) -> WindowConstraints {
        self.constraints
    }

    #[must_use]
    pub const fn item_height(&self) -> u32 {
        self.item_height
    }

    /// Builds the owner-draw operations for one pin row.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01781AB0`, symbol `FUN_01781ab0`
    /// (`TPinOrderDlg.lbPinsDrawItem`). The existing selection brush and text
    /// color remain unchanged. The row background is filled, flag bit `0x04`
    /// selects bold instead of normal text, and the label begins two pixels
    /// inside the left edge at the row's top coordinate.
    #[must_use]
    pub fn row_draw_plan(&self, index: usize, bounds: DrawBounds) -> Option<PinRowDrawPlan> {
        self.pins.values().get(index).map(|pin| PinRowDrawPlan {
            fill_background: true,
            bold: pin.boundary_flag,
            text: pin.label.clone(),
            origin: (bounds.left.saturating_add(2), bounds.top),
        })
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let items = self.pins.values().iter().enumerate().map(|(index, pin)| {
            let weight = if pin.boundary_flag {
                Weight::Bold
            } else {
                Weight::Normal
            };
            button(text(pin.to_string()).font(Font {
                weight,
                ..Font::default()
            }))
            .on_press(Message::Selected(index))
            .width(Length::Fill)
            .into()
        });

        column![
            text(TITLE).size(24),
            scrollable(column(items).spacing(4)).height(Length::Fill),
            row![
                button("Up").on_press_maybe(self.up_enabled.then_some(Message::MoveUp)),
                button("Down").on_press_maybe(self.down_enabled.then_some(Message::MoveDown)),
            ]
            .spacing(8),
        ]
        .padding(8)
        .spacing(8)
        .into()
    }
}

fn scale_for_ppi(value: u32, current_ppi: u32) -> u32 {
    let scaled = u64::from(value)
        .saturating_mul(u64::from(current_ppi))
        .saturating_add(48)
        / 96;
    u32::try_from(scaled).unwrap_or(u32::MAX)
}

#[cfg(test)]
mod tests {
    use iced::Task;

    use super::{DrawBounds, Message, PinOrderRow, PinRowDrawPlan, State, WindowConstraints};

    fn row(label: &str, boundary_flag: bool) -> PinOrderRow {
        PinOrderRow {
            label: label.to_owned(),
            boundary_flag,
        }
    }

    fn state() -> State {
        State::new(vec![
            row("A", false),
            row("B", false),
            row("C", true),
            row("D", true),
        ])
    }

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn idle_disables_both_buttons_without_selection() {
        let mut state = state();

        discard(state.update(Message::Idle));

        assert!(!state.up_enabled());
        assert!(!state.down_enabled());
    }

    #[test]
    fn idle_applies_list_edges_and_flag_boundary_in_both_directions() {
        let mut state = state();

        discard(state.update(Message::Selected(0)));
        assert!(!state.up_enabled());
        assert!(state.down_enabled());

        discard(state.update(Message::Selected(1)));
        assert!(state.up_enabled());
        assert!(!state.down_enabled());

        discard(state.update(Message::Selected(2)));
        assert!(!state.up_enabled());
        assert!(state.down_enabled());

        discard(state.update(Message::Selected(3)));
        assert!(state.up_enabled());
        assert!(!state.down_enabled());
    }

    #[test]
    fn move_messages_reuse_ordered_list_and_refresh_availability() {
        let mut state = State::new(vec![row("A", false), row("B", false), row("C", false)]);
        discard(state.update(Message::Selected(1)));

        discard(state.update(Message::MoveUp));
        assert_eq!(state.selected(), Some(0));
        assert_eq!(state.pins()[0].label, "B");
        assert!(!state.up_enabled());
        assert!(state.down_enabled());
    }

    #[test]
    fn draw_plan_fills_row_and_uses_flag_for_font_weight() {
        let state = state();
        let bounds = DrawBounds {
            left: 9,
            top: 24,
            right: 270,
            bottom: 40,
        };

        assert_eq!(
            state.row_draw_plan(0, bounds),
            Some(PinRowDrawPlan {
                fill_background: true,
                bold: false,
                text: "A".to_owned(),
                origin: (11, 24),
            })
        );
        assert_eq!(
            state.row_draw_plan(2, bounds),
            Some(PinRowDrawPlan {
                fill_background: true,
                bold: true,
                text: "C".to_owned(),
                origin: (11, 24),
            })
        );
    }

    #[test]
    fn draw_plan_rejects_an_out_of_range_row() {
        assert_eq!(state().row_draw_plan(99, DrawBounds::default()), None);
    }

    #[test]
    fn create_fixes_width_sets_minimum_height_and_scales_rows() {
        let mut state = state();

        discard(state.update(Message::Created {
            width: 320,
            height: 240,
            item_height: 17,
            current_ppi: 144,
        }));

        assert_eq!(
            state.constraints(),
            WindowConstraints {
                min_width: 320,
                min_height: 240,
                max_width: Some(320),
                max_height: None,
            }
        );
        assert_eq!(state.item_height(), 26);
    }

    #[test]
    fn create_uses_saturating_dpi_scaling() {
        let mut state = state();

        state.on_create(u32::MAX, u32::MAX, u32::MAX, u32::MAX);

        assert_eq!(state.item_height(), u32::MAX);
    }
}
