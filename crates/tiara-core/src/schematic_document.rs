//! What is on the sheet, and what the editor can do to it.
//!
//! The editor has had a menu, a toolbar and a palette for some time and
//! nothing to point them at: the commands that cut, rotate, mirror, arrange or
//! undo had no document to act on, and the conditions that decide whether they
//! are offered - whether anything is drawn, whether anything is selected -
//! could never turn true. This is that document.
//!
//! Positions are in the whole grid units the editor counts in and reports in
//! its status bar, not in pixels: the sheet is a grid and everything on it
//! sits on it.
//!
//! Undo is kept by snapshot rather than by recording each change and its
//! inverse. A schematic small enough to edit by hand is small enough to copy,
//! and a snapshot cannot disagree with the change it was taken before, which
//! an inverse can.

use std::collections::{BTreeMap, BTreeSet};

use serde::{Deserialize, Serialize};

/// How many states back the editor can go.
///
/// The original offers an unbounded undo in its options; this keeps a bound so
/// a long session cannot grow without limit, and the bound is large enough
/// that reaching it takes deliberate work.
pub const HISTORY_DEPTH: usize = 128;

/// A place on the sheet, in whole grid units.
#[derive(
    Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Default, Hash, Serialize, Deserialize,
)]
pub struct Point {
    pub x: i32,
    pub y: i32,
}

impl Point {
    #[must_use]
    pub const fn new(x: i32, y: i32) -> Self {
        Self { x, y }
    }

    /// The same place moved by `dx` and `dy`, which cannot run off the end of
    /// the range: a sheet never reaches it, and a drag that somehow did should
    /// stop rather than wrap.
    #[must_use]
    pub const fn moved(self, dx: i32, dy: i32) -> Self {
        Self {
            x: self.x.saturating_add(dx),
            y: self.y.saturating_add(dy),
        }
    }
}

/// How far a part is turned from the way it was drawn.
///
/// The original turns parts in quarter turns and nothing finer, which is why
/// `Rotate Left` and `Rotate Right` are commands rather than an angle.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Serialize, Deserialize)]
pub enum Rotation {
    #[default]
    None,
    Quarter,
    Half,
    ThreeQuarters,
}

impl Rotation {
    /// The four, in the order a right turn visits them.
    pub const ALL: [Self; 4] = [Self::None, Self::Quarter, Self::Half, Self::ThreeQuarters];

    #[must_use]
    pub const fn right(self) -> Self {
        match self {
            Self::None => Self::Quarter,
            Self::Quarter => Self::Half,
            Self::Half => Self::ThreeQuarters,
            Self::ThreeQuarters => Self::None,
        }
    }

    #[must_use]
    pub const fn left(self) -> Self {
        match self {
            Self::None => Self::ThreeQuarters,
            Self::Quarter => Self::None,
            Self::Half => Self::Quarter,
            Self::ThreeQuarters => Self::Half,
        }
    }

    /// The turn a number of degrees names, to the nearest quarter.
    ///
    /// Reading a sheet written by something else brings a turn as a number,
    /// and anything that is not a quarter is rounded to one - this editor
    /// turns parts in quarters and nothing else.
    #[must_use]
    pub const fn from_degrees(degrees: u32) -> Self {
        match (degrees % 360) / 90 {
            1 => Self::Quarter,
            2 => Self::Half,
            3 => Self::ThreeQuarters,
            _ => Self::None,
        }
    }

    /// The turn in degrees, which is what a drawing needs.
    #[must_use]
    pub const fn degrees(self) -> u16 {
        match self {
            Self::None => 0,
            Self::Quarter => 90,
            Self::Half => 180,
            Self::ThreeQuarters => 270,
        }
    }
}

/// What identifies one thing on the sheet.
///
/// Parts and wires are numbered from the same counter, so an identifier says
/// which thing it is without saying which kind, and a selection can hold both.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash, Serialize, Deserialize)]
pub struct Id(u32);

impl Id {
    #[must_use]
    pub const fn number(self) -> u32 {
        self.0
    }

    /// An id that stands for no part.
    ///
    /// A sheet never hands one of these out - it numbers from one - so it
    /// is only useful for naming a part that is not on a sheet at all.
    #[must_use]
    pub const fn none() -> Self {
        Self(0)
    }
}

/// One part on the sheet.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Part {
    pub id: Id,
    /// What the palette called it, which is how it is drawn.
    pub kind: String,
    pub at: Point,
    pub rotation: Rotation,
    pub mirrored: bool,
    /// What the original prints beside it, such as `R1`.
    pub label: String,
    /// Whether the part is drawn but left out of the circuit.
    ///
    /// `Edit > Hide/Reconnect` is one command that does both: it takes a part
    /// out of the circuit without taking it off the sheet, and puts it back.
    pub hidden: bool,
    /// Whether the part is locked against being changed.
    ///
    /// The `Edit > Sharing` group locks parts so that someone else working on
    /// the same schematic cannot move or alter them.
    pub locked: bool,
    /// Where a wire may be joined to it.
    ///
    /// Empty where the symbol is not known, and then the part joins a net at
    /// its own place instead. See [`crate::netlist`].
    #[serde(default)]
    pub pins: Vec<Pin>,
    /// What the part is worth, as it is written beside it - `1k`, `10n`,
    /// `2N2222`.
    ///
    /// Empty until someone says, because nothing in the catalogue says for
    /// them: a `.tld` entry carries a part's pins and its symbol and no
    /// value. A netlist leaves the value off a part that has none rather
    /// than inventing one. See [`crate::spice_netlist`].
    #[serde(default)]
    pub value: String,
}

impl Part {
    /// Where each of this part's pins is on the sheet, turned as it sits.
    #[must_use]
    pub fn pin_places(&self) -> Vec<(&str, Point)> {
        self.pins
            .iter()
            .map(|pin| {
                (
                    pin.name.as_str(),
                    pin.at(self.at, self.rotation, self.mirrored),
                )
            })
            .collect()
    }

    /// Everywhere a wire may join this part.
    ///
    /// Its pins where it has them, and otherwise its own place - which is
    /// all that could be said before symbols carried pins.
    #[must_use]
    pub fn joins(&self) -> Vec<Point> {
        if self.pins.is_empty() {
            return vec![self.at];
        }
        self.pin_places().into_iter().map(|(_, at)| at).collect()
    }
}

/// One place on a part that a wire can be joined to.
///
/// The offset is in whole grid squares from the part's own place, as the
/// symbol draws it before it is turned or mirrored. Where the symbol comes
/// from a device library it is [`crate::ddb_device::Place::in_squares`] of
/// the pin's place; a part whose symbol is not known carries none, and then
/// the part joins a net at its own place as it always did.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Pin {
    /// What the pin is called on the symbol, such as `IN` or `GPMC_A0`.
    pub name: String,
    /// How far from the part's place it sits, unturned.
    pub offset: Point,
    /// Which way it points away from the symbol, unturned.
    ///
    /// On a gate this says which pins are inputs and which is the output:
    /// exactly one faces the odd way. See
    /// [`crate::logic_gate::output_pin`], which was measured across every
    /// gate the component bar offers.
    #[serde(default)]
    pub facing: crate::ddb_device::Facing,
}

impl Pin {
    /// A pin at an offset.
    pub fn new(name: impl Into<String>, offset: Point) -> Self {
        Self {
            name: name.into(),
            offset,
            facing: crate::ddb_device::Facing::default(),
        }
    }

    /// The same pin, facing a given way.
    #[must_use]
    pub const fn facing(mut self, facing: crate::ddb_device::Facing) -> Self {
        self.facing = facing;
        self
    }

    /// Where this pin is on the sheet, for a part placed and turned so.
    ///
    /// Mirroring is across the upright, which is what `Edit > Mirror` does,
    /// and it is applied before the turn - the same order the drawing uses,
    /// so a pin lands where it is drawn.
    #[must_use]
    pub const fn at(&self, place: Point, rotation: Rotation, mirrored: bool) -> Point {
        let x = if mirrored {
            -self.offset.x
        } else {
            self.offset.x
        };
        let y = self.offset.y;
        let (x, y) = match rotation {
            Rotation::None => (x, y),
            Rotation::Quarter => (-y, x),
            Rotation::Half => (-x, -y),
            Rotation::ThreeQuarters => (y, -x),
        };
        Point::new(place.x + x, place.y + y)
    }
}

/// What a line between two places carries.
///
/// The original draws a bus with the same two clicks as a wire and tells them
/// apart by how it is drawn and what may connect to it, so they are one thing
/// here with a mark saying which.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Serialize, Deserialize)]
pub enum WireKind {
    #[default]
    Wire,
    Bus,
}

/// One wire or bus, between two places on the grid.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Wire {
    pub id: Id,
    pub from: Point,
    pub to: Point,
    pub kind: WireKind,
}

/// What a drawn shape is.
///
/// The original offers these under `Insert > Shape`, and every one of them is
/// drawn the same way - two clicks giving opposite corners, or the ends of a
/// line - so they are one thing here with a mark saying which.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Serialize, Deserialize)]
pub enum ShapeKind {
    #[default]
    Line,
    ArrowLinear,
    ArrowRoundedCorner,
    ArrowCircular,
    Polygon,
    Rectangle,
    Ellipse,
    Arc,
}

impl ShapeKind {
    /// The eight the resource offers, in the order it lists them.
    pub const ALL: [Self; 8] = [
        Self::Line,
        Self::ArrowLinear,
        Self::ArrowRoundedCorner,
        Self::ArrowCircular,
        Self::Polygon,
        Self::Rectangle,
        Self::Ellipse,
        Self::Arc,
    ];

    /// The name the resource gives the command that draws it.
    #[must_use]
    pub const fn command(self) -> &'static str {
        match self {
            Self::Line => "mnLine",
            Self::ArrowLinear => "mnArrowLinear",
            Self::ArrowRoundedCorner => "mnArrowRoundedCorner",
            Self::ArrowCircular => "mnArrowCircular",
            Self::Polygon => "mnPolygon",
            Self::Rectangle => "mnRectangle",
            Self::Ellipse => "mnEllipse",
            Self::Arc => "mnArc",
        }
    }

    /// Which shape that command draws, if it draws one.
    #[must_use]
    pub fn from_command(name: &str) -> Option<Self> {
        Self::ALL.into_iter().find(|kind| kind.command() == name)
    }
}

/// What a piece of writing on the sheet is for.
///
/// The original puts three things down that are a place and some text: a note,
/// and the two terminals an analysis measures between. They differ in what
/// they mean to a run rather than in what they are, so they are one thing here
/// with a mark saying which.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default, Serialize, Deserialize)]
pub enum NoteKind {
    /// `Insert > Text`, which says something to a reader and nothing to a run.
    #[default]
    Text,
    /// `Insert > Input`.
    Input,
    /// `Insert > Output`.
    Output,
}

impl NoteKind {
    /// The three, in the order the resource lists them.
    pub const ALL: [Self; 3] = [Self::Text, Self::Input, Self::Output];

    /// The name the resource gives the command that puts one down.
    #[must_use]
    pub const fn command(self) -> &'static str {
        match self {
            Self::Text => "mnText",
            Self::Input => "mnInput",
            Self::Output => "mnOutput",
        }
    }

    /// Which one that command puts down, if it puts one down.
    #[must_use]
    pub fn from_command(name: &str) -> Option<Self> {
        Self::ALL.into_iter().find(|kind| kind.command() == name)
    }

    /// What one is called before it is given a name of its own.
    #[must_use]
    pub const fn default_text(self) -> &'static str {
        match self {
            Self::Text => "Text",
            Self::Input => "IN",
            Self::Output => "OUT",
        }
    }
}

/// One piece of writing on the sheet.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Note {
    pub id: Id,
    pub kind: NoteKind,
    pub at: Point,
    pub text: String,
}

/// One shape, between two places on the grid.
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct Shape {
    pub id: Id,
    pub kind: ShapeKind,
    pub from: Point,
    pub to: Point,
}

/// The sheet, and everything the editor can do to it.
/// Every field stands on its own, so a file written before one of them
/// existed still reads back - it simply has none of that thing.
#[derive(Debug, Clone, Default, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default)]
pub struct Document {
    parts: Vec<Part>,
    wires: Vec<Wire>,
    shapes: Vec<Shape>,
    notes: Vec<Note>,
    /// What is picked out, which is about the moment rather than about the
    /// circuit, so it is not written to a file and a sheet read back starts
    /// with nothing picked out.
    #[serde(skip)]
    selection: BTreeSet<Id>,
    next_id: u32,
    /// Whether there is anything to save. A sheet just read from a file has
    /// nothing to save, so this is not written either.
    #[serde(skip)]
    modified: bool,
}

/// A sheet and its selection, kept so the editor can go back to it.
type Snapshot = Document;

/// A sheet set aside while another is being worked on, with its own history.
#[derive(Debug, Clone, Default)]
struct Frame {
    document: Document,
    behind: Vec<Snapshot>,
    ahead: Vec<Snapshot>,
}

/// The sheet the editor is working on, with where it has been.
#[derive(Debug, Clone, Default)]
pub struct Sheet {
    document: Document,
    /// States to go back to, most recent last.
    behind: Vec<Snapshot>,
    /// States to go forward to, most recent last.
    ahead: Vec<Snapshot>,
    /// What was last cut or copied.
    clipboard: Vec<Part>,
    /// The sheets left behind on the way into a macro, outermost first.
    ///
    /// A macro is edited on a sheet of its own, with its own undo: going back
    /// inside a macro must not undo what was done outside it.
    outer: Vec<Frame>,
}

impl Document {
    /// Whether anything at all is drawn.
    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.parts.is_empty()
            && self.wires.is_empty()
            && self.shapes.is_empty()
            && self.notes.is_empty()
    }

    #[must_use]
    pub fn parts(&self) -> &[Part] {
        &self.parts
    }

    #[must_use]
    pub fn wires(&self) -> &[Wire] {
        &self.wires
    }

    #[must_use]
    pub fn shapes(&self) -> &[Shape] {
        &self.shapes
    }

    #[must_use]
    pub fn notes(&self) -> &[Note] {
        &self.notes
    }

    /// Whether anything is selected.
    #[must_use]
    pub fn has_selection(&self) -> bool {
        !self.selection.is_empty()
    }

    #[must_use]
    pub const fn is_modified(&self) -> bool {
        self.modified
    }

    /// Whether one thing is selected.
    #[must_use]
    pub fn is_selected(&self, id: Id) -> bool {
        self.selection.contains(&id)
    }

    /// The parts that are selected, in the order they are drawn.
    #[must_use]
    pub fn selected_parts(&self) -> Vec<&Part> {
        self.parts
            .iter()
            .filter(|part| self.selection.contains(&part.id))
            .collect()
    }

    const fn take_id(&mut self) -> Id {
        self.next_id += 1;
        Id(self.next_id)
    }
}

impl Sheet {
    #[must_use]
    pub const fn document(&self) -> &Document {
        &self.document
    }

    /// Whether there is a state to go back to.
    #[must_use]
    pub fn can_undo(&self) -> bool {
        !self.behind.is_empty()
    }

    /// Whether there is a state to go forward to.
    #[must_use]
    pub fn can_redo(&self) -> bool {
        !self.ahead.is_empty()
    }

    /// Whether the editor is inside a macro.
    #[must_use]
    pub fn inside_macro(&self) -> bool {
        !self.outer.is_empty()
    }

    /// How deep in, which is what tells one macro inside another apart.
    #[must_use]
    pub fn macro_depth(&self) -> usize {
        self.outer.len()
    }

    /// Opens the selected parts on a sheet of their own.
    ///
    /// The original enters a macro to edit what is inside it, and leaves the
    /// rest of the schematic alone while that goes on. Nothing is entered
    /// without a selection, which is why the command is greyed without one.
    pub fn enter_macro(&mut self) -> bool {
        let inside: Vec<Part> = self
            .document
            .selected_parts()
            .into_iter()
            .cloned()
            .collect();
        if inside.is_empty() {
            return false;
        }

        self.outer.push(Frame {
            document: std::mem::take(&mut self.document),
            behind: std::mem::take(&mut self.behind),
            ahead: std::mem::take(&mut self.ahead),
        });

        let mut document = Document::default();
        for part in inside {
            let id = document.take_id();
            document.parts.push(Part { id, ..part });
        }
        self.document = document;
        true
    }

    /// Goes back out to the sheet the macro was entered from.
    ///
    /// What was done inside is kept on the macro's own sheet and not yet
    /// carried back out: turning an edited macro back into the part it came
    /// from needs a macro that is a part, which the document does not have.
    pub fn leave_macro(&mut self) -> bool {
        let Some(frame) = self.outer.pop() else {
            return false;
        };
        self.document = frame.document;
        self.behind = frame.behind;
        self.ahead = frame.ahead;
        true
    }

    /// Whether anything has been cut or copied.
    #[must_use]
    pub fn clipboard_has_content(&self) -> bool {
        !self.clipboard.is_empty()
    }

    /// Keeps where the sheet is, before changing it.
    ///
    /// Going forward is given up here rather than when the change is made: a
    /// change made after going back is a new branch, and the states that were
    /// ahead of it are no longer reachable.
    fn remember(&mut self) {
        self.behind.push(self.document.clone());
        if self.behind.len() > HISTORY_DEPTH {
            self.behind.remove(0);
        }
        self.ahead.clear();
        self.document.modified = true;
    }

    /// Puts a part on the sheet, and selects it as the original does.
    pub fn place(&mut self, kind: impl Into<String>, at: Point) -> Id {
        let kind = kind.into();
        let label = self.next_label(&kind);
        self.place_as(kind, at, Rotation::default(), false, label)
    }

    /// Puts a part down as it already is, rather than as a new one.
    ///
    /// Reading a sheet written by something else brings the part's own name
    /// and the way round it sits, and neither should be thrown away and made
    /// up again: a resistor that was `R7` stays `R7`.
    pub fn place_as(
        &mut self,
        kind: impl Into<String>,
        at: Point,
        rotation: Rotation,
        mirrored: bool,
        label: impl Into<String>,
    ) -> Id {
        self.place_with_pins(kind, at, rotation, mirrored, label, Vec::new())
    }

    /// Says what a part is worth.
    ///
    /// One undo step, like renaming one.
    pub fn set_value(&mut self, id: Id, value: impl Into<String>) {
        let value = value.into();
        let Some(part) = self.document.parts.iter().find(|part| part.id == id) else {
            return;
        };
        if part.value == value {
            return;
        }
        self.remember();
        if let Some(part) = self.document.parts.iter_mut().find(|part| part.id == id) {
            part.value = value;
        }
    }

    /// Puts a new part down with the pins its symbol draws.
    ///
    /// [`Self::place`] with pins: the part is named the same way, so a
    /// resistor is still the next `R`.
    pub fn place_pinned(&mut self, kind: impl Into<String>, at: Point, pins: Vec<Pin>) -> Id {
        let kind = kind.into();
        let label = self.next_label(&kind);
        self.place_with_pins(kind, at, Rotation::default(), false, label, pins)
    }

    /// Puts a part down with the pins its symbol draws.
    ///
    /// This is what the palette uses once the library has been read: a part
    /// that knows its pins joins a net at each of them rather than at its
    /// own place. See [`crate::netlist`].
    pub fn place_with_pins(
        &mut self,
        kind: impl Into<String>,
        at: Point,
        rotation: Rotation,
        mirrored: bool,
        label: impl Into<String>,
        pins: Vec<Pin>,
    ) -> Id {
        self.remember();
        let id = self.document.take_id();
        self.document.parts.push(Part {
            id,
            kind: kind.into(),
            at,
            rotation,
            mirrored,
            label: label.into(),
            hidden: false,
            locked: false,
            pins,
            value: String::new(),
        });
        self.document.selection.clear();
        self.document.selection.insert(id);
        id
    }

    /// Takes the selected parts out of the circuit, or puts them back.
    ///
    /// One command for both directions, as the original has it: a part that is
    /// hidden is reconnected, and one that is not is hidden.
    pub fn hide_or_reconnect_selection(&mut self) {
        if !self.document.has_selection() {
            return;
        }
        self.remember();
        let selected = self.document.selection.clone();
        for part in &mut self.document.parts {
            if selected.contains(&part.id) && !part.locked {
                part.hidden = !part.hidden;
            }
        }
    }

    /// Locks or unlocks the selected parts.
    pub fn set_selection_locked(&mut self, locked: bool) {
        if !self.document.has_selection() {
            return;
        }
        self.remember();
        let selected = self.document.selection.clone();
        for part in &mut self.document.parts {
            if selected.contains(&part.id) {
                part.locked = locked;
            }
        }
    }

    /// Unlocks everything, whatever is selected.
    ///
    /// `Clear lock` is not the same as unlocking a selection: it takes every
    /// lock off the sheet, which is what makes it worth its own command.
    pub fn clear_locks(&mut self) {
        if !self.document.parts.iter().any(|part| part.locked) {
            return;
        }
        self.remember();
        for part in &mut self.document.parts {
            part.locked = false;
        }
    }

    /// Numbers the parts again, each kind from one, in the order they are
    /// drawn.
    ///
    /// Placing numbers each kind as it goes and keeps counting, so deleting
    /// `R1` leaves the next resistor as `R3`. This is the command that tidies
    /// that up, and it is the only thing that renumbers: placing never reuses
    /// a number by itself.
    pub fn renumber(&mut self) {
        if self.document.parts.is_empty() {
            return;
        }
        self.remember();

        let mut counted: BTreeMap<String, usize> = BTreeMap::new();
        for part in &mut self.document.parts {
            let seen = counted.entry(part.kind.clone()).or_insert(0);
            *seen += 1;
            part.label = format!("{}{seen}", part.kind);
        }
    }

    /// Puts a piece of writing down, and selects it as the original does.
    pub fn write(&mut self, kind: NoteKind, at: Point) -> Id {
        self.remember();
        let id = self.document.take_id();
        self.document.notes.push(Note {
            id,
            kind,
            at,
            text: kind.default_text().to_owned(),
        });
        self.document.selection.clear();
        self.document.selection.insert(id);
        id
    }

    /// Draws a shape between two places.
    ///
    /// As with a line, one whose two places are the same is not a shape, and
    /// the original leaves none behind either.
    pub fn draw_shape(&mut self, kind: ShapeKind, from: Point, to: Point) -> Option<Id> {
        if from == to {
            return None;
        }
        self.remember();
        let id = self.document.take_id();
        self.document.shapes.push(Shape { id, kind, from, to });
        Some(id)
    }

    /// Draws a wire or a bus between two places.
    ///
    /// A line from a place to itself is not a line, and the original does not
    /// leave one behind either.
    pub fn draw_wire(&mut self, from: Point, to: Point, kind: WireKind) -> Option<Id> {
        if from == to {
            return None;
        }
        self.remember();
        let id = self.document.take_id();
        self.document.wires.push(Wire { id, from, to, kind });
        Some(id)
    }

    /// What the next part of this kind is called.
    ///
    /// The original numbers each kind from one and keeps counting, so removing
    /// `R1` does not make the next resistor `R1` again.
    fn next_label(&self, kind: &str) -> String {
        let used = self
            .document
            .parts
            .iter()
            .filter(|part| part.kind == kind)
            .count();
        format!("{kind}{}", used + 1)
    }

    /// Selects one thing, or adds it to what is selected.
    pub fn select(&mut self, id: Id, add: bool) {
        if !add {
            self.document.selection.clear();
        }
        self.document.selection.insert(id);
    }

    /// Selects everything, which the original offers whether or not anything
    /// is selected already.
    pub fn select_all(&mut self) {
        self.document.selection = self
            .document
            .parts
            .iter()
            .map(|part| part.id)
            .chain(self.document.wires.iter().map(|wire| wire.id))
            .chain(self.document.shapes.iter().map(|shape| shape.id))
            .chain(self.document.notes.iter().map(|note| note.id))
            .collect();
    }

    pub fn clear_selection(&mut self) {
        self.document.selection.clear();
    }

    /// Takes the selection off the sheet.
    pub fn delete_selection(&mut self) {
        if !self.document.has_selection() {
            return;
        }
        self.remember();
        let going = self.document.selection.clone();
        // A locked part stays: the point of locking it is that someone else's
        // work cannot be taken away.
        self.document
            .parts
            .retain(|part| !going.contains(&part.id) || part.locked);
        self.document.wires.retain(|wire| !going.contains(&wire.id));
        self.document
            .shapes
            .retain(|shape| !going.contains(&shape.id));
        self.document.notes.retain(|note| !going.contains(&note.id));

        // What survived stays selected. A locked part is not taken away, and
        // dropping it from the selection would leave it on the sheet with no
        // way to reach it but to click it again.
        self.document
            .selection
            .retain(|id| self.document.parts.iter().any(|p| p.id == *id));
    }

    /// Copies the selected parts, leaving the sheet as it is.
    pub fn copy_selection(&mut self) {
        let copied: Vec<Part> = self
            .document
            .selected_parts()
            .into_iter()
            .cloned()
            .collect();
        if !copied.is_empty() {
            self.clipboard = copied;
        }
    }

    /// Copies the selection and then takes it off the sheet.
    pub fn cut_selection(&mut self) {
        self.copy_selection();
        self.delete_selection();
    }

    /// Puts what was cut or copied back on the sheet, offset so it does not
    /// land exactly on what it came from, and selects it.
    pub fn paste(&mut self, offset: Point) {
        if self.clipboard.is_empty() {
            return;
        }
        self.remember();
        let pasted: Vec<Part> = self.clipboard.clone();
        self.document.selection.clear();
        for part in pasted {
            let id = self.document.take_id();
            let label = self.next_label(&part.kind);
            self.document.parts.push(Part {
                id,
                at: part.at.moved(offset.x, offset.y),
                label,
                ..part
            });
            self.document.selection.insert(id);
        }
    }

    /// Turns the selected parts a quarter turn.
    pub fn rotate_selection(&mut self, right: bool) {
        if !self.document.has_selection() {
            return;
        }
        self.remember();
        let selected = self.document.selection.clone();
        for part in &mut self.document.parts {
            if selected.contains(&part.id) && !part.locked {
                part.rotation = if right {
                    part.rotation.right()
                } else {
                    part.rotation.left()
                };
            }
        }
    }

    /// Flips the selected parts.
    pub fn mirror_selection(&mut self) {
        if !self.document.has_selection() {
            return;
        }
        self.remember();
        let selected = self.document.selection.clone();
        for part in &mut self.document.parts {
            if selected.contains(&part.id) && !part.locked {
                part.mirrored = !part.mirrored;
            }
        }
    }

    /// Moves the selection by whole grid units.
    pub fn move_selection(&mut self, dx: i32, dy: i32) {
        if !self.document.has_selection() || (dx == 0 && dy == 0) {
            return;
        }
        self.remember();
        let selected = self.document.selection.clone();
        for part in &mut self.document.parts {
            if selected.contains(&part.id) && !part.locked {
                part.at = part.at.moved(dx, dy);
            }
        }
        for wire in &mut self.document.wires {
            if selected.contains(&wire.id) {
                wire.from = wire.from.moved(dx, dy);
                wire.to = wire.to.moved(dx, dy);
            }
        }
        for shape in &mut self.document.shapes {
            if selected.contains(&shape.id) {
                shape.from = shape.from.moved(dx, dy);
                shape.to = shape.to.moved(dx, dy);
            }
        }
        for note in &mut self.document.notes {
            if selected.contains(&note.id) {
                note.at = note.at.moved(dx, dy);
            }
        }
    }

    /// Moves the selected parts in the drawing order, which is what the
    /// `Arrange` group does: the later a part is in the list, the later it is
    /// drawn, and so the further forward it appears.
    pub fn arrange(&mut self, how: Arrange) {
        if !self.document.has_selection() {
            return;
        }
        self.remember();
        let selected = self.document.selection.clone();
        let (mut chosen, mut rest): (Vec<Part>, Vec<Part>) = self
            .document
            .parts
            .drain(..)
            .partition(|part| selected.contains(&part.id));

        match how {
            Arrange::ToFront => {
                rest.append(&mut chosen);
                self.document.parts = rest;
            }
            Arrange::ToBack => {
                chosen.append(&mut rest);
                self.document.parts = chosen;
            }
            Arrange::Forward | Arrange::Backward => {
                // One place at a time, which is what Forward and Backward do.
                let mut all = rest;
                let step = usize::from(matches!(how, Arrange::Forward));
                for part in chosen {
                    let at = all
                        .iter()
                        .position(|other| other.at == part.at && other.kind == part.kind)
                        .unwrap_or(all.len());
                    let to = if step == 1 {
                        (at + 1).min(all.len())
                    } else {
                        at.saturating_sub(1)
                    };
                    all.insert(to, part);
                }
                self.document.parts = all;
            }
        }
    }

    /// Goes back one state.
    pub fn undo(&mut self) {
        if let Some(previous) = self.behind.pop() {
            self.ahead.push(self.document.clone());
            self.document = previous;
        }
    }

    /// Goes forward one state.
    pub fn redo(&mut self) {
        if let Some(next) = self.ahead.pop() {
            self.behind.push(self.document.clone());
            self.document = next;
        }
    }

    /// The thing drawn at a place, if anything is.
    ///
    /// The later a part is drawn the further forward it is, so the search runs
    /// backwards: a click lands on what is on top.
    #[must_use]
    pub fn at(&self, point: Point) -> Option<Id> {
        self.document
            .parts
            .iter()
            .rev()
            .find(|part| part.at == point)
            .map(|part| part.id)
    }

    /// Starts again with an empty sheet, as `File > New` does.
    pub fn clear(&mut self) {
        *self = Self::default();
    }

    /// A fresh sheet holding a document read from a file.
    ///
    /// Nothing behind it and nothing ahead: what was on the sheet before
    /// belongs to the sheet that was there before, and undoing past the point
    /// a file was opened is not something the original offers.
    #[must_use]
    pub fn holding(document: Document) -> Self {
        Self {
            document,
            ..Self::default()
        }
    }

    /// Calls a part something else.
    ///
    /// Renaming is what a board layout sends back when it has moved parts
    /// about, and what the editor does when a part is given a name by hand.
    /// A part that is not there is not renamed, and nothing is remembered
    /// for the undo in that case.
    pub fn rename(&mut self, id: Id, label: impl Into<String>) -> bool {
        if !self.document.parts.iter().any(|part| part.id == id) {
            return false;
        }
        self.remember();
        if let Some(part) = self.document.parts.iter_mut().find(|part| part.id == id) {
            part.label = label.into();
        }
        true
    }

    /// The part with a label, if the sheet has one.
    #[must_use]
    pub fn part_called(&self, label: &str) -> Option<Id> {
        self.document
            .parts
            .iter()
            .find(|part| part.label == label)
            .map(|part| part.id)
    }

    /// Says the sheet has been written out, so it is no longer modified.
    pub const fn mark_saved(&mut self) {
        self.document.modified = false;
    }
}

/// How the `Arrange` group moves the selection in the drawing order.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Arrange {
    ToFront,
    ToBack,
    Forward,
    Backward,
}

#[cfg(test)]
mod tests {
    use super::{
        Arrange, Document, HISTORY_DEPTH, NoteKind, Point, Rotation, ShapeKind, Sheet, WireKind,
    };

    fn sheet_with(kinds: &[&str]) -> Sheet {
        let mut sheet = Sheet::default();
        for (index, kind) in kinds.iter().enumerate() {
            let at = Point::new(
                i32::try_from(index).unwrap_or(0) * 10,
                i32::try_from(index).unwrap_or(0) * 10,
            );
            sheet.place(*kind, at);
        }
        sheet.clear_selection();
        sheet
    }

    #[test]
    fn a_new_sheet_is_empty_and_unmodified() {
        let sheet = Sheet::default();
        assert!(sheet.document().is_empty());
        assert!(!sheet.document().is_modified());
        assert!(!sheet.document().has_selection());
        assert!(!sheet.can_undo());
        assert!(!sheet.can_redo());
        assert!(!sheet.clipboard_has_content());
    }

    #[test]
    fn placing_a_part_fills_the_sheet_and_selects_what_was_placed() {
        let mut sheet = Sheet::default();
        let id = sheet.place("R", Point::new(4, 4));

        assert!(!sheet.document().is_empty());
        assert!(sheet.document().is_modified());
        assert!(sheet.document().is_selected(id));
        assert_eq!(sheet.document().parts().len(), 1);
    }

    #[test]
    fn each_kind_is_numbered_from_one_and_keeps_counting() {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(0, 0));
        sheet.place("R", Point::new(10, 0));
        sheet.place("C", Point::new(20, 0));

        let labels: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.label.as_str())
            .collect();
        assert_eq!(labels, ["R1", "R2", "C1"]);
    }

    #[test]
    fn a_wire_from_a_place_to_itself_is_not_drawn() {
        let mut sheet = Sheet::default();
        assert!(
            sheet
                .draw_wire(Point::new(1, 1), Point::new(1, 1), WireKind::Wire)
                .is_none()
        );
        assert!(sheet.document().is_empty());

        assert!(
            sheet
                .draw_wire(Point::new(1, 1), Point::new(5, 1), WireKind::Wire)
                .is_some()
        );
        assert_eq!(sheet.document().wires().len(), 1);
    }

    #[test]
    fn a_bus_is_a_line_that_says_it_is_one() {
        let mut sheet = Sheet::default();
        sheet.draw_wire(Point::new(0, 0), Point::new(8, 0), WireKind::Bus);

        assert_eq!(sheet.document().wires()[0].kind, WireKind::Bus);
        assert_eq!(WireKind::default(), WireKind::Wire);
    }

    #[test]
    fn the_eight_shapes_are_the_ones_the_resource_offers() {
        assert_eq!(ShapeKind::ALL.len(), 8);
        assert_eq!(ShapeKind::Line.command(), "mnLine");
        assert_eq!(ShapeKind::Arc.command(), "mnArc");
        assert_eq!(
            ShapeKind::from_command("mnRectangle"),
            Some(ShapeKind::Rectangle)
        );
        assert_eq!(ShapeKind::from_command("mnWire"), None);
    }

    #[test]
    fn a_shape_needs_two_different_places() {
        let mut sheet = Sheet::default();
        assert!(
            sheet
                .draw_shape(ShapeKind::Rectangle, Point::new(1, 1), Point::new(1, 1))
                .is_none()
        );
        assert!(sheet.document().is_empty());

        assert!(
            sheet
                .draw_shape(ShapeKind::Rectangle, Point::new(1, 1), Point::new(9, 5))
                .is_some()
        );
        assert_eq!(sheet.document().shapes().len(), 1);
    }

    #[test]
    fn a_shape_is_selected_moved_and_deleted_like_everything_else() {
        let mut sheet = Sheet::default();
        sheet.draw_shape(ShapeKind::Ellipse, Point::new(0, 0), Point::new(8, 8));
        sheet.select_all();

        sheet.move_selection(2, 3);
        assert_eq!(sheet.document().shapes()[0].from, Point::new(2, 3));
        assert_eq!(sheet.document().shapes()[0].to, Point::new(10, 11));

        sheet.delete_selection();
        assert!(sheet.document().is_empty());
    }

    #[test]
    fn a_macro_is_not_entered_without_a_selection() {
        let mut sheet = sheet_with(&["R"]);
        assert!(!sheet.enter_macro());
        assert!(!sheet.inside_macro());
    }

    #[test]
    fn entering_a_macro_opens_what_was_selected_on_a_sheet_of_its_own() {
        let mut sheet = sheet_with(&["R", "C", "L"]);
        sheet.select(sheet.document().parts()[1].id, false);

        assert!(sheet.enter_macro());
        assert!(sheet.inside_macro());
        assert_eq!(sheet.macro_depth(), 1);

        let inside: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.kind.as_str())
            .collect();
        assert_eq!(inside, ["C"]);
    }

    #[test]
    fn leaving_a_macro_gives_the_sheet_back_as_it_was() {
        let mut sheet = sheet_with(&["R", "C"]);
        sheet.select_all();
        sheet.enter_macro();
        sheet.place("L", Point::new(5, 5));

        assert!(sheet.leave_macro());
        assert!(!sheet.inside_macro());

        let outside: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.kind.as_str())
            .collect();
        assert_eq!(outside, ["R", "C"]);
    }

    #[test]
    fn a_macro_has_its_own_history() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();
        sheet.enter_macro();
        assert!(!sheet.can_undo());

        sheet.place("C", Point::new(9, 9));
        assert!(sheet.can_undo());

        sheet.leave_macro();

        // The history outside is the one it had before. Going back undoes
        // placing the R, which is what happened out here - not placing the C,
        // which happened inside the macro.
        sheet.undo();
        assert!(sheet.document().is_empty());
    }

    #[test]
    fn leaving_when_not_inside_one_does_nothing() {
        let mut sheet = sheet_with(&["R"]);
        assert!(!sheet.leave_macro());
        assert_eq!(sheet.document().parts().len(), 1);
    }

    #[test]
    fn hiding_takes_a_part_out_of_the_circuit_and_puts_it_back() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();

        sheet.hide_or_reconnect_selection();
        assert!(sheet.document().parts()[0].hidden);

        sheet.hide_or_reconnect_selection();
        assert!(!sheet.document().parts()[0].hidden);
    }

    #[test]
    fn a_locked_part_is_not_moved_turned_flipped_or_deleted() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();
        sheet.set_selection_locked(true);
        let before = sheet.document().parts()[0].clone();

        sheet.move_selection(5, 5);
        sheet.rotate_selection(true);
        sheet.mirror_selection();
        sheet.hide_or_reconnect_selection();
        sheet.delete_selection();

        assert_eq!(sheet.document().parts().len(), 1);
        assert_eq!(sheet.document().parts()[0].at, before.at);
        assert_eq!(sheet.document().parts()[0].rotation, before.rotation);
        assert!(!sheet.document().parts()[0].mirrored);
        assert!(!sheet.document().parts()[0].hidden);
    }

    #[test]
    fn a_locked_part_that_survives_a_delete_stays_selected() {
        let mut sheet = sheet_with(&["R", "C"]);
        sheet.select_all();
        sheet.set_selection_locked(true);

        sheet.delete_selection();
        assert_eq!(sheet.document().parts().len(), 2);
        assert!(sheet.document().has_selection());

        // Which means unlocking them is still reachable.
        sheet.set_selection_locked(false);
        sheet.delete_selection();
        assert!(sheet.document().is_empty());
    }

    #[test]
    fn unlocking_gives_a_part_back() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();
        sheet.set_selection_locked(true);
        sheet.set_selection_locked(false);

        sheet.move_selection(5, 5);
        assert_eq!(sheet.document().parts()[0].at, Point::new(5, 5));
    }

    #[test]
    fn clearing_the_locks_takes_every_one_off_whatever_is_selected() {
        let mut sheet = sheet_with(&["R", "C"]);
        sheet.select_all();
        sheet.set_selection_locked(true);
        sheet.clear_selection();

        sheet.clear_locks();
        assert!(sheet.document().parts().iter().all(|part| !part.locked));
    }

    #[test]
    fn clearing_the_locks_when_there_are_none_is_not_a_change() {
        let mut sheet = sheet_with(&["R"]);
        let behind = sheet.behind.len();

        sheet.clear_locks();
        assert_eq!(sheet.behind.len(), behind);
    }

    #[test]
    fn renumbering_starts_each_kind_from_one_again() {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(0, 0));
        sheet.place("R", Point::new(10, 0));
        sheet.place("C", Point::new(20, 0));

        // Taking the first one away leaves a gap, which is what the original
        // leaves too.
        sheet.select(sheet.document().parts()[0].id, false);
        sheet.delete_selection();
        let before: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.label.as_str())
            .collect();
        assert_eq!(before, ["R2", "C1"]);

        sheet.renumber();
        let after: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.label.as_str())
            .collect();
        assert_eq!(after, ["R1", "C1"]);
    }

    #[test]
    fn renumbering_an_empty_sheet_is_not_a_change() {
        let mut sheet = Sheet::default();
        sheet.renumber();
        assert!(!sheet.can_undo());
        assert!(!sheet.document().is_modified());
    }

    #[test]
    fn renumbering_follows_the_drawing_order() {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(0, 0));
        sheet.place("R", Point::new(10, 0));
        let first = sheet.document().parts()[0].id;

        sheet.select(first, false);
        sheet.arrange(Arrange::ToFront);
        sheet.renumber();

        let labels: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.label.as_str())
            .collect();
        assert_eq!(labels, ["R1", "R2"]);
        // The one that was first is now last, and so is now R2.
        assert_eq!(sheet.document().parts()[1].id, first);
    }

    #[test]
    fn the_three_notes_are_the_ones_the_resource_puts_down() {
        assert_eq!(NoteKind::ALL.len(), 3);
        assert_eq!(NoteKind::Text.command(), "mnText");
        assert_eq!(NoteKind::from_command("mnInput"), Some(NoteKind::Input));
        assert_eq!(NoteKind::from_command("mnWire"), None);
        assert_eq!(NoteKind::Output.default_text(), "OUT");
    }

    #[test]
    fn writing_puts_something_down_and_selects_it() {
        let mut sheet = Sheet::default();
        let id = sheet.write(NoteKind::Text, Point::new(3, 4));

        assert_eq!(sheet.document().notes().len(), 1);
        assert_eq!(sheet.document().notes()[0].text, "Text");
        assert!(sheet.document().is_selected(id));
        assert!(!sheet.document().is_empty());
    }

    #[test]
    fn a_note_moves_and_is_deleted_like_everything_else() {
        let mut sheet = Sheet::default();
        sheet.write(NoteKind::Input, Point::new(0, 0));
        sheet.select_all();

        sheet.move_selection(4, 5);
        assert_eq!(sheet.document().notes()[0].at, Point::new(4, 5));

        sheet.delete_selection();
        assert!(sheet.document().is_empty());
    }

    #[test]
    fn selecting_replaces_unless_it_is_told_to_add() {
        let mut sheet = sheet_with(&["R", "C"]);
        let first = sheet.document().parts()[0].id;
        let second = sheet.document().parts()[1].id;

        sheet.select(first, false);
        assert!(sheet.document().is_selected(first));
        assert!(!sheet.document().is_selected(second));

        sheet.select(second, true);
        assert!(sheet.document().is_selected(first));
        assert!(sheet.document().is_selected(second));

        sheet.select(second, false);
        assert!(!sheet.document().is_selected(first));
    }

    #[test]
    fn select_all_takes_the_wires_as_well() {
        let mut sheet = sheet_with(&["R"]);
        sheet.draw_wire(Point::new(0, 0), Point::new(10, 0), WireKind::Wire);
        sheet.clear_selection();

        sheet.select_all();
        assert_eq!(sheet.document().selected_parts().len(), 1);
        assert!(sheet.document().has_selection());
    }

    #[test]
    fn deleting_takes_only_what_is_selected() {
        let mut sheet = sheet_with(&["R", "C", "L"]);
        let second = sheet.document().parts()[1].id;
        sheet.select(second, false);
        sheet.delete_selection();

        let kinds: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.kind.as_str())
            .collect();
        assert_eq!(kinds, ["R", "L"]);
        assert!(!sheet.document().has_selection());
    }

    #[test]
    fn deleting_nothing_changes_nothing() {
        let mut sheet = sheet_with(&["R"]);
        let before = sheet.document().clone();

        sheet.delete_selection();
        assert_eq!(sheet.document(), &before);
    }

    #[test]
    fn cutting_fills_the_clipboard_and_empties_the_sheet() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();
        sheet.cut_selection();

        assert!(sheet.document().is_empty());
        assert!(sheet.clipboard_has_content());
    }

    #[test]
    fn pasting_puts_a_copy_beside_the_original_and_selects_it() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();
        sheet.copy_selection();
        sheet.paste(Point::new(5, 5));

        assert_eq!(sheet.document().parts().len(), 2);
        assert_eq!(sheet.document().selected_parts().len(), 1);
        assert_eq!(sheet.document().parts()[1].at, Point::new(5, 5));
        assert_eq!(sheet.document().parts()[1].label, "R2");
    }

    #[test]
    fn pasting_an_empty_clipboard_does_nothing() {
        let mut sheet = sheet_with(&["R"]);
        let before = sheet.document().clone();

        sheet.paste(Point::new(5, 5));
        assert_eq!(sheet.document(), &before);
    }

    #[test]
    fn rotating_turns_a_quarter_at_a_time_and_comes_back_round() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();

        for expected in [
            Rotation::Quarter,
            Rotation::Half,
            Rotation::ThreeQuarters,
            Rotation::None,
        ] {
            sheet.rotate_selection(true);
            assert_eq!(sheet.document().parts()[0].rotation, expected);
        }

        sheet.rotate_selection(false);
        assert_eq!(
            sheet.document().parts()[0].rotation,
            Rotation::ThreeQuarters
        );
    }

    #[test]
    fn the_four_turns_are_the_degrees_a_drawing_needs() {
        let degrees: Vec<u16> = Rotation::ALL.iter().map(|turn| turn.degrees()).collect();
        assert_eq!(degrees, [0, 90, 180, 270]);
    }

    #[test]
    fn mirroring_flips_and_flips_back() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();

        sheet.mirror_selection();
        assert!(sheet.document().parts()[0].mirrored);

        sheet.mirror_selection();
        assert!(!sheet.document().parts()[0].mirrored);
    }

    #[test]
    fn moving_takes_the_selection_and_leaves_the_rest() {
        let mut sheet = sheet_with(&["R", "C"]);
        let first = sheet.document().parts()[0].id;
        sheet.select(first, false);
        sheet.move_selection(3, -2);

        assert_eq!(sheet.document().parts()[0].at, Point::new(3, -2));
        assert_eq!(sheet.document().parts()[1].at, Point::new(10, 10));
    }

    #[test]
    fn moving_nowhere_is_not_a_change() {
        let mut sheet = sheet_with(&["R"]);
        sheet.select_all();
        let before = sheet.document().clone();

        sheet.move_selection(0, 0);
        assert_eq!(sheet.document(), &before);
    }

    #[test]
    fn bringing_to_front_draws_it_last() {
        let mut sheet = sheet_with(&["R", "C", "L"]);
        let first = sheet.document().parts()[0].id;
        sheet.select(first, false);
        sheet.arrange(Arrange::ToFront);

        let kinds: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.kind.as_str())
            .collect();
        assert_eq!(kinds, ["C", "L", "R"]);
    }

    #[test]
    fn sending_to_back_draws_it_first() {
        let mut sheet = sheet_with(&["R", "C", "L"]);
        let last = sheet.document().parts()[2].id;
        sheet.select(last, false);
        sheet.arrange(Arrange::ToBack);

        let kinds: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.kind.as_str())
            .collect();
        assert_eq!(kinds, ["L", "R", "C"]);
    }

    #[test]
    fn a_click_lands_on_what_is_on_top() {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(2, 2));
        let on_top = sheet.place("C", Point::new(2, 2));

        assert_eq!(sheet.at(Point::new(2, 2)), Some(on_top));
        assert_eq!(sheet.at(Point::new(9, 9)), None);
    }

    #[test]
    fn undo_goes_back_and_redo_goes_forward_again() {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(0, 0));
        assert!(sheet.can_undo());

        sheet.undo();
        assert!(sheet.document().is_empty());
        assert!(sheet.can_redo());

        sheet.redo();
        assert_eq!(sheet.document().parts().len(), 1);
        assert!(!sheet.can_redo());
    }

    #[test]
    fn changing_something_after_going_back_gives_up_what_was_ahead() {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(0, 0));
        sheet.place("C", Point::new(10, 0));
        sheet.undo();
        assert!(sheet.can_redo());

        sheet.place("L", Point::new(20, 0));
        assert!(!sheet.can_redo());

        let kinds: Vec<&str> = sheet
            .document()
            .parts()
            .iter()
            .map(|part| part.kind.as_str())
            .collect();
        assert_eq!(kinds, ["R", "L"]);
    }

    #[test]
    fn undo_on_a_new_sheet_does_nothing() {
        let mut sheet = Sheet::default();
        sheet.undo();
        sheet.redo();
        assert!(sheet.document().is_empty());
    }

    #[test]
    fn the_history_does_not_grow_without_limit() {
        let mut sheet = Sheet::default();
        for step in 0..(HISTORY_DEPTH + 20) {
            sheet.place("R", Point::new(i32::try_from(step).unwrap_or(0), 0));
        }

        assert_eq!(sheet.behind.len(), HISTORY_DEPTH);
        assert!(sheet.can_undo());
    }

    #[test]
    fn saving_says_the_sheet_is_no_longer_modified() {
        let mut sheet = sheet_with(&["R"]);
        assert!(sheet.document().is_modified());

        sheet.mark_saved();
        assert!(!sheet.document().is_modified());

        sheet.place("C", Point::new(9, 9));
        assert!(sheet.document().is_modified());
    }

    #[test]
    fn starting_again_leaves_nothing_behind() {
        let mut sheet = sheet_with(&["R", "C"]);
        sheet.select_all();
        sheet.copy_selection();

        sheet.clear();
        assert_eq!(sheet.document(), &Document::default());
        assert!(!sheet.can_undo());
        assert!(!sheet.clipboard_has_content());
    }

    #[test]
    fn a_position_cannot_be_moved_off_the_end_of_the_range() {
        let edge = Point::new(i32::MAX, i32::MIN);
        assert_eq!(edge.moved(1, -1), Point::new(i32::MAX, i32::MIN));
    }
}
