//! The style sheet the help viewer starts from.
//!
//! Every element the viewer knows how to draw gets its appearance from here,
//! built one rule at a time. What makes this worth recovering in full is not
//! the values — those are ordinary — but the shape: each new selector is made
//! by **copying** an existing rule rather than pointing at it, so the order
//! the rules are built in is the order they inherit in, and a later change
//! cannot reach back into an earlier selector.
//!
//! A rule is sixty-seven value cells in a row, each one able to hold a text, a
//! number or a colour ([`crate::variant_value`]). That is why one property can
//! be given a colour in one rule and a length in the next without anything
//! objecting, and it is why only some of the properties can be named at all:
//! a property used with three kinds of value in three rules does not say what
//! it is.

use crate::variant_value::CELL_SIZE;

/// How many value cells one rule holds.
///
/// Part of Ghidra function `FUN_00a529a0` at `0x00A529A0`, whose copy loop runs
/// exactly this many times — which is what makes the count certain rather than
/// inferred from the properties that happen to be used.
pub const PROPERTY_COUNT: u8 = 0x43;

/// Where the first value cell sits in a rule.
///
/// Part of Ghidra function `FUN_00a529a0` at `0x00A529A0`.
///
/// Everything before it is not a property: the owner, a name, and a flag byte
/// at `0x6c` that the style sheet sets directly.
pub const FIRST_PROPERTY_OFFSET: usize = 0x78;

/// Where the flag byte sits.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// Twelve bytes before the first property, so it is not one of them and is not
/// carried by the copy that duplicates a rule — a derived selector loses it.
pub const RULE_FLAG_OFFSET: usize = 0x6C;

/// One property of a rule, by its place in the row.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub struct Property(pub u8);

impl Property {
    /// Which family the text is set in.
    pub const FONT_FAMILY: Self = Self(0);
    /// How large it is.
    pub const FONT_SIZE: Self = Self(1);
    /// Whether it leans.
    pub const FONT_STYLE: Self = Self(2);
    /// How heavy it is.
    pub const FONT_WEIGHT: Self = Self(3);
    /// Which edge it is aligned to.
    pub const TEXT_ALIGN: Self = Self(4);
    /// What line is drawn through or under it.
    pub const TEXT_DECORATION: Self = Self(5);
    /// What colour it is.
    pub const COLOUR: Self = Self(7);
    /// How it sits against the line.
    pub const VERTICAL_ALIGN: Self = Self(48);

    /// Where this property's cell sits in a rule.
    #[must_use]
    pub const fn offset(self) -> usize {
        FIRST_PROPERTY_OFFSET + (self.0 as usize) * CELL_SIZE
    }

    /// Whether this property exists at all.
    #[must_use]
    pub const fn is_real(self) -> bool {
        self.0 < PROPERTY_COUNT
    }
}

/// The properties that can be named from the values they are given.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// These eight are named because every value any rule gives them is of one
/// kind and says the same thing — a family, a size, a weight. The rest are
/// left as numbers on purpose: a property given a colour in one rule, a count
/// in another and an em length in a third cannot be identified from its uses,
/// and guessing at it would be the one thing a recovered name must not do.
pub const NAMED_PROPERTIES: [(u8, &str); 8] = [
    (0, "font-family"),
    (1, "font-size"),
    (2, "font-style"),
    (3, "font-weight"),
    (4, "text-align"),
    (5, "text-decoration"),
    (7, "colour"),
    (48, "vertical-align"),
];

/// Implements part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// What one property is called, where it can be called anything.
#[must_use]
pub fn property_name(property: Property) -> Option<&'static str> {
    NAMED_PROPERTIES
        .iter()
        .find(|(at, _)| *at == property.0)
        .map(|(_, name)| *name)
}

/// The two pairs of properties the sheet keeps together.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// Each pair is set from one caller value in the first rule, and the first pair
/// is set by copying one cell into the other in the headings — so they are not
/// merely given equal values, they are made equal. [`PAIRS_BROKEN_AT`] is the
/// one rule where that stops being true.
pub const PROPERTY_PAIRS: [(u8, u8); 2] = [(18, 20), (19, 21)];

/// The one rule that gives a pair two different values.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// The last of the seven marker rules. It gives the first pair a colour and a
/// small number — so the pair differs there not only in value but in kind,
/// which is the strongest evidence in the routine that the two cells are
/// genuinely separate properties and not one value stored twice.
pub const PAIRS_BROKEN_AT: u8 = 6;

/// A selector, as far as it survived.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Selector {
    /// One that survived as a typed string.
    Named(&'static str),
    /// One that did not, recorded by where its text sits.
    Unrecovered(u32),
    /// One read from a table of pointers, recorded by the table and the place
    /// in it.
    FromTable {
        /// Where the table sits.
        table: u32,
        /// Which entry.
        at: u8,
    },
}

/// A value as a rule is given it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Declared {
    /// A text that survived.
    Text(&'static str),
    /// A text that did not, recorded by where it sits.
    Unrecovered(u32),
    /// A thirty-two bit value stored under a kind.
    ///
    /// The kind is passed straight through to the cell, negative values and
    /// all — see [`crate::variant_value::code_for_kind`].
    Value(u32, i8),
}

/// The kind the sheet uses for nearly every value it stores.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// Negative, and nothing between here and the cell checks it, so it reads in
/// front of the table of type codes. Whatever is there is what the whole
/// default style sheet is stored as.
pub const USUAL_KIND: i8 = -4;

/// The kind used for plain counts.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
pub const COUNT_KIND: i8 = 1;

/// The kind used once, for one property of one rule.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
pub const THIRD_KIND: i8 = 2;

/// How many headings the sheet defines.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
pub const HEADING_LEVELS: u8 = 6;

/// How many marker rules it defines.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
pub const MARKER_RULES: u8 = 7;

/// Implements part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// How large one heading is set.
///
/// Three of the six levels are named outright and the other three share one
/// value — so headings four, five and six are all the same size, and only the
/// spacing tells them apart.
#[must_use]
pub const fn heading_font_size(level: u8) -> Declared {
    match level {
        1 => Declared::Unrecovered(0x00A5_E994),
        2 => Declared::Text("1.5em"),
        3 => Declared::Text("1.17em"),
        _ => Declared::Unrecovered(0x00A5_E9C0),
    }
}

/// Implements part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// How much room one heading is given above it.
///
/// The complement of the sizes: the three levels that share a size are given
/// distinct spacings, and the three with distinct sizes share one spacing —
/// which is a plain number rather than a length, so the two halves of the six
/// are not even measured in the same thing.
#[must_use]
pub const fn heading_spacing(level: u8) -> Declared {
    match level {
        4 => Declared::Text("1.67em"),
        5 => Declared::Text("1.5em"),
        6 => Declared::Text("1.12em"),
        _ => Declared::Value(0x13, COUNT_KIND),
    }
}

/// What the sheet is given to start from.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
#[derive(Debug, Clone)]
pub struct PageDefaults {
    /// The family ordinary text is set in.
    pub proportional_family: String,
    /// The family fixed-width text is set in.
    pub fixed_family: String,
    /// How large ordinary text is, in points.
    pub point_size: i32,
    /// What colour text is.
    pub text_colour: u32,
    /// What colour a link is.
    pub link_colour: u32,
    /// What colour a link already followed is.
    pub visited_colour: u32,
    /// What colour a link under the pointer is.
    pub hover_colour: u32,
    /// Whether links are underlined.
    pub underline_links: bool,
    /// The caller's value for the first property pair.
    pub paired_18_20: u32,
    /// The caller's value for the second.
    pub paired_19_21: u32,
    /// The bits every link colour is given whether the caller wants them or
    /// not.
    ///
    /// Read from a global and combined into all three link colours, so a
    /// caller choosing those colours does not fully choose them.
    pub colour_floor: u32,
    /// Whether the viewer is in its forgiving mode.
    pub quirks: bool,
    /// Whether text entry boxes are forced to the wide-coverage family.
    ///
    /// Read from a global, not from the caller.
    pub wide_font_fallback: bool,
    /// A further value handed to a routine of its own.
    pub extra: u32,
    /// The flag byte written directly into the first rule.
    pub flag: u8,
}

/// What building the sheet needs.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`.
pub trait StyleSheetHost {
    /// How a rule is referred to while it is being built.
    type Rule: Copy;

    /// A new rule, told which mode the viewer is in.
    fn new_rule(&mut self, quirks: bool) -> Self::Rule;

    /// A new rule by the other constructor, which is not told the mode.
    ///
    /// Used twice, for the two rules whose appearance does not depend on it.
    fn new_rule_without_the_mode(&mut self) -> Self::Rule;

    /// Gives one property a text.
    fn set_text(&mut self, rule: Self::Rule, property: Property, text: &str);

    /// Gives one property a value under a kind.
    fn set_value(&mut self, rule: Self::Rule, property: Property, value: u32, kind: i8);

    /// Gives one property a size as a floating value.
    fn set_size(&mut self, rule: Self::Rule, property: Property, points: f64);

    /// Copies one property of a rule into another of the same rule.
    fn copy_property(&mut self, rule: Self::Rule, to: Property, from: Property);

    /// Writes the sheet's own name into the first rule.
    fn set_sheet_name(&mut self, rule: Self::Rule, name: &str);

    /// Hands the first rule the caller's further value.
    fn apply_extra(&mut self, rule: Self::Rule, extra: u32);

    /// Writes the flag byte, which sits outside the properties.
    fn set_rule_flag(&mut self, rule: Self::Rule, flag: u8);

    /// Registers a rule under a selector.
    fn register(&mut self, selector: Selector, rule: Self::Rule);

    /// Registers a **copy** of a rule under another selector, and answers the
    /// copy.
    ///
    /// Implements Ghidra function `FUN_00a5d220` at `0x00A5D220`, which makes a
    /// new rule, copies the given one into it, and registers that. The copy is
    /// what every further change then lands on, so deriving twice from one
    /// rule gives two rules that cannot affect each other.
    fn derive(&mut self, selector: Selector, from: Self::Rule) -> Self::Rule;

    /// Clears whatever the sheet held before.
    fn reset(&mut self);

    /// Remembers the size ordinary text is set at.
    fn remember_point_size(&mut self, points: f64);

    /// Remembers which rule is the default one.
    fn remember_default(&mut self, rule: Self::Rule);
}

/// Implements Ghidra function `FUN_00a5d410` at `0x00A5D410`.
///
/// Builds the whole default style sheet.
///
/// The rules go in in a fixed order and nothing is conditional on what came
/// before except the viewer's mode, which forks the sheet twice — once to add
/// three rules that only the forgiving mode has, and once over where table
/// headings get their weight from. Both branches end with table headings bold,
/// but by different routes and carrying different other properties, so the two
/// modes do not differ only in the rules they add.
///
/// Answers how many selectors were registered.
#[allow(clippy::too_many_lines)] // The sheet is this long; splitting it would
// only hide the order, which is the part worth having.
pub fn build_default_style_sheet<Host: StyleSheetHost>(
    host: &mut Host,
    page: &PageDefaults,
) -> usize {
    let mut registered = 0usize;
    host.reset();
    host.remember_point_size(f64::from(page.point_size));

    // The rule everything else is measured against.
    let base = host.new_rule(page.quirks);
    host.set_sheet_name(base, &page.proportional_family);
    host.set_text(base, Property::FONT_FAMILY, &page.proportional_family);
    host.set_value(
        base,
        Property::FONT_SIZE,
        u32::try_from(page.point_size).unwrap_or(0),
        USUAL_KIND,
    );
    host.set_text(base, Property::FONT_STYLE, "none");
    host.set_text(base, Property::FONT_WEIGHT, "normal");
    host.set_text(base, Property::TEXT_ALIGN, "left");
    host.set_text(base, Property::TEXT_DECORATION, "none");
    host.set_value(base, Property(59), 0, COUNT_KIND);
    host.set_text(base, Property(60), "normal");
    // Out of order, and the last property of the rule: appended to the class
    // after the others, and put here because this is where it belongs by
    // meaning rather than by layout.
    host.set_text(base, Property(66), "normal");
    host.set_text(base, Property(61), "normal");
    host.set_value(base, Property::COLOUR, page.text_colour, USUAL_KIND);
    host.set_value(base, Property(18), page.paired_18_20, USUAL_KIND);
    host.set_value(base, Property(20), page.paired_18_20, USUAL_KIND);
    host.set_value(base, Property(21), page.paired_19_21, USUAL_KIND);
    host.set_value(base, Property(19), page.paired_19_21, USUAL_KIND);
    host.set_value(base, Property(46), 2, COUNT_KIND);
    host.set_value(base, Property(6), 0, COUNT_KIND);
    host.set_value(base, Property(17), 0, COUNT_KIND);
    host.apply_extra(base, page.extra);
    host.set_rule_flag(base, page.flag);
    host.register(Selector::Named("default"), base);
    registered += 1;
    host.remember_default(base);

    if page.quirks {
        // Three rules the strict mode does without, and the only place a size
        // is stored as a floating value rather than under a kind.
        let loose = host.new_rule(page.quirks);
        host.set_size(loose, Property::FONT_SIZE, f64::from(page.point_size));
        host.set_text(loose, Property::FONT_STYLE, "none");
        host.set_text(loose, Property::FONT_WEIGHT, "normal");
        host.set_value(loose, Property::COLOUR, page.text_colour, USUAL_KIND);
        host.register(Selector::Unrecovered(0x00A5_E510), loose);
        let table = host.derive(Selector::Named("table"), loose);
        let heading = host.derive(Selector::Unrecovered(0x00A5_E53C), table);
        host.set_text(heading, Property::FONT_WEIGHT, "bold");
        registered += 3;
    }

    // The three link states. Each colour is combined with a global before
    // being stored, so none of them is only what the caller asked for.
    let link = host.new_rule(page.quirks);
    host.set_value(
        link,
        Property::COLOUR,
        page.link_colour | page.colour_floor,
        USUAL_KIND,
    );
    host.set_text(
        link,
        Property::TEXT_DECORATION,
        if page.underline_links {
            "underline"
        } else {
            "none"
        },
    );
    host.register(Selector::Named("::link"), link);

    let visited = host.new_rule(page.quirks);
    host.set_value(
        visited,
        Property::COLOUR,
        page.visited_colour | page.colour_floor,
        USUAL_KIND,
    );
    host.register(Selector::Named("::visited"), visited);

    let hover = host.new_rule(page.quirks);
    host.set_value(
        hover,
        Property::COLOUR,
        page.hover_colour | page.colour_floor,
        USUAL_KIND,
    );
    host.register(Selector::Named("::hover"), hover);

    // Registered with nothing set on it at all, so it inherits everything.
    let nothing = host.new_rule(page.quirks);
    host.register(Selector::Named("null"), nothing);
    registered += 4;

    // Fixed-width text, at five sixths of the ordinary size.
    let fixed = host.new_rule(page.quirks);
    host.set_text(fixed, Property::FONT_FAMILY, &page.fixed_family);
    host.set_size(
        fixed,
        Property::FONT_SIZE,
        f64::from(page.point_size) * 10.0 / 12.0,
    );
    host.set_text(fixed, Property::FONT_STYLE, "none");
    host.set_text(fixed, Property::FONT_WEIGHT, "normal");
    host.set_text(fixed, Property::TEXT_DECORATION, "none");
    host.set_text(fixed, Property(66), "");
    host.register(Selector::Unrecovered(0x00A5_E5F8), fixed);

    let tinted = host.new_rule(page.quirks);
    host.set_value(tinted, Property(18), 0xFF43_92A2, USUAL_KIND);
    host.set_value(tinted, Property(20), 0xFF43_92A2, USUAL_KIND);
    host.register(Selector::Unrecovered(0x00A5_E60C), tinted);

    let plain = host.new_rule(page.quirks);
    host.set_value(plain, Property(18), 0, COUNT_KIND);
    host.register(Selector::Named("p 11pre"), plain);
    registered += 3;

    // Seven marker rules, whose selectors come from a table of pointers. The
    // first four share one appearance and the last three each have their own.
    for at in 0..MARKER_RULES {
        let marker = host.new_rule(page.quirks);
        match at {
            0..=3 => {
                host.set_text(marker, Property(51), "blank");
                host.set_value(marker, Property(18), 0xFF43_92A2, USUAL_KIND);
                host.set_value(marker, Property(20), 0xFF43_92A2, USUAL_KIND);
                host.set_value(marker, Property(21), 0xFF43_9EB2, USUAL_KIND);
                host.set_value(marker, Property(25), 0x28, COUNT_KIND);
            }
            4 => {
                host.set_text(marker, Property(51), "none");
                host.set_value(marker, Property(21), 0, COUNT_KIND);
                host.set_value(marker, Property(18), 0, COUNT_KIND);
                host.set_value(marker, Property(20), 0, COUNT_KIND);
                // Again, with the same value. Harmless, and a sign this rule
                // was edited rather than written.
                host.set_value(marker, Property(21), 0, COUNT_KIND);
            }
            5 => {
                host.set_value(marker, Property(18), 0, COUNT_KIND);
                host.set_value(marker, Property(20), 0, COUNT_KIND);
                host.set_value(marker, Property(21), 0x28, COUNT_KIND);
            }
            _ => {
                // The one place the first pair is given two different values,
                // and two different kinds of value.
                host.set_value(marker, Property(18), 0xFF43_92A2, USUAL_KIND);
                host.set_value(marker, Property(20), 0xE, COUNT_KIND);
                host.set_value(marker, Property(21), 0x28, COUNT_KIND);
            }
        }
        host.register(
            Selector::FromTable {
                table: 0x01E7_5998,
                at,
            },
            marker,
        );
        registered += 1;
    }

    // Fixed-width inline text, and three more selectors copied from it.
    let code = host.new_rule(page.quirks);
    host.set_text(code, Property::FONT_FAMILY, &page.fixed_family);
    host.set_text(code, Property::FONT_SIZE, "0.83em");
    host.register(Selector::Named("code"), code);
    host.derive(Selector::Unrecovered(0x00A5_E684), code);
    host.derive(Selector::Unrecovered(0x00A5_E698), code);
    host.derive(Selector::Named("samp"), code);
    registered += 4;

    // Bold, and what is copied from it.
    let bold = host.new_rule(page.quirks);
    host.set_text(bold, Property::FONT_WEIGHT, "bold");
    host.register(Selector::Unrecovered(0x00A5_E6C4), bold);
    host.derive(Selector::Named("strong"), bold);
    registered += 2;

    if !page.quirks {
        // The strict mode gets table headings from the bold rule instead of
        // from a table rule, so they carry the weight and nothing else — and
        // its table rule is built by the constructor that is not told the
        // mode, because in this mode there is nothing for the mode to change.
        host.derive(Selector::Unrecovered(0x00A5_E53C), bold);
        let table = host.new_rule_without_the_mode();
        host.set_text(table, Property::TEXT_ALIGN, "none");
        host.register(Selector::Named("table"), table);
        registered += 2;
    }

    // Raised and lowered text: the same size, opposite alignments.
    let raised = host.new_rule(page.quirks);
    host.set_text(raised, Property::FONT_SIZE, "0.83em");
    host.set_text(raised, Property::VERTICAL_ALIGN, "super");
    host.register(Selector::Unrecovered(0x00A5_E708), raised);

    let lowered = host.new_rule(page.quirks);
    host.set_text(lowered, Property::FONT_SIZE, "0.83em");
    host.set_text(lowered, Property::VERTICAL_ALIGN, "");
    host.register(Selector::Unrecovered(0x00A5_E71C), lowered);

    let larger = host.new_rule(page.quirks);
    host.set_text(larger, Property::FONT_SIZE, "1.17em");
    host.register(Selector::Unrecovered(0x00A5_E74C), larger);

    let smaller = host.new_rule(page.quirks);
    host.set_text(smaller, Property::FONT_SIZE, "0.83em");
    host.register(Selector::Named("small"), smaller);
    registered += 4;

    // Leaning text, and the five selectors copied from it.
    let leaning = host.new_rule(page.quirks);
    host.set_text(leaning, Property::FONT_STYLE, "italic");
    host.register(Selector::Unrecovered(0x00A5_E794), leaning);
    host.derive(Selector::Unrecovered(0x00A5_E7A4), leaning);
    host.derive(Selector::Named("cite"), leaning);
    host.derive(Selector::Unrecovered(0x00A5_E7D0), leaning);
    host.derive(Selector::Unrecovered(0x00A5_E7E4), leaning);
    host.derive(Selector::Named("address"), leaning);
    registered += 6;

    let underlined = host.new_rule(page.quirks);
    host.set_text(underlined, Property::TEXT_DECORATION, "underline");
    host.register(Selector::Unrecovered(0x00A5_E814), underlined);
    host.derive(Selector::Unrecovered(0x00A5_E824), underlined);
    registered += 2;

    let struck = host.new_rule(page.quirks);
    host.set_text(struck, Property::TEXT_DECORATION, "line-through");
    host.register(Selector::Unrecovered(0x00A5_E860), struck);
    host.derive(Selector::Named("strike"), struck);
    host.derive(Selector::Unrecovered(0x00A5_E88C), struck);
    registered += 3;

    let centred = host.new_rule(page.quirks);
    host.set_text(centred, Property::TEXT_ALIGN, "center");
    host.register(Selector::Named("center"), centred);
    host.derive(Selector::Named("caption"), centred);
    registered += 2;

    // Form controls, which are given a fixed family and a fixed size rather
    // than the caller's — so they do not follow the page.
    let control = host.new_rule(page.quirks);
    host.set_text(control, Property::FONT_FAMILY, "Arial Unicode MS, Arial");
    host.set_text(control, Property::FONT_SIZE, "10pt");
    host.set_text(control, Property::FONT_STYLE, "none");
    host.set_text(control, Property::FONT_WEIGHT, "normal");
    host.set_text(control, Property::TEXT_ALIGN, "left");
    host.set_text(control, Property::TEXT_DECORATION, "none");
    host.set_value(control, Property::COLOUR, page.text_colour, USUAL_KIND);
    host.register(Selector::Named("input"), control);
    host.derive(Selector::Named("select"), control);
    let text_box = host.derive(Selector::Named("textarea"), control);
    // And then the last of the three has its family put back, either to the
    // page's or to the wide one, depending on a global — so of the three
    // controls only this one can follow the page at all.
    host.set_text(
        text_box,
        Property::FONT_FAMILY,
        if page.wide_font_fallback {
            "Arial Unicode MS, Arial"
        } else {
            &page.fixed_family
        },
    );
    registered += 3;

    let rule_off = host.new_rule(page.quirks);
    host.set_value(rule_off, Property(21), 0, COUNT_KIND);
    host.set_value(rule_off, Property(19), 0, COUNT_KIND);
    host.set_value(rule_off, Property(18), 10, COUNT_KIND);
    host.set_value(rule_off, Property(20), 10, COUNT_KIND);
    host.register(Selector::Unrecovered(0x00A5_E980), rule_off);
    registered += 1;

    // The six headings.
    for level in 1..=HEADING_LEVELS {
        let heading = host.new_rule(page.quirks);
        match heading_font_size(level) {
            Declared::Text(text) => host.set_text(heading, Property::FONT_SIZE, text),
            Declared::Unrecovered(_) => host.set_text(heading, Property::FONT_SIZE, ""),
            Declared::Value(value, kind) => {
                host.set_value(heading, Property::FONT_SIZE, value, kind);
            }
        }
        match heading_spacing(level) {
            Declared::Text(text) => host.set_text(heading, Property(18), text),
            Declared::Unrecovered(_) => host.set_text(heading, Property(18), ""),
            Declared::Value(value, kind) => host.set_value(heading, Property(18), value, kind),
        }
        // Made equal rather than given equal values, so a heading cannot have
        // one without the other.
        host.copy_property(heading, Property(20), Property(18));
        // Heavier than whatever holds it, not bold — so a heading inside
        // something already bold comes out heavier still.
        host.set_text(heading, Property::FONT_WEIGHT, "bolder");
        host.register(Selector::Named("h"), heading);
        registered += 1;
    }

    // The second rule built without regard to the mode.
    let marked = host.new_rule_without_the_mode();
    host.set_text(marked, Property::FONT_STYLE, "none");
    host.set_value(marked, Property(8), 0xFFFF, THIRD_KIND);
    host.set_value(marked, Property::COLOUR, 0, COUNT_KIND);
    host.register(Selector::Named("mark"), marked);

    let abbreviated = host.new_rule(page.quirks);
    host.set_text(abbreviated, Property(36), "dotted");
    host.set_text(abbreviated, Property(28), "");
    host.register(Selector::Named("abbr"), abbreviated);
    host.derive(Selector::Named("acronym"), abbreviated);
    registered += 3;

    registered
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq)]
    enum Put {
        Text(u8, String),
        Value(u8, u32, i8),
        Size(u8, f64),
        Copied(u8, u8),
    }

    #[derive(Debug, Default)]
    struct Sheet {
        next: usize,
        told_the_mode: Vec<(usize, bool)>,
        puts: Vec<(usize, Put)>,
        registered: Vec<(Selector, usize)>,
        derived: Vec<(Selector, usize, usize)>,
        reset: bool,
    }

    impl Sheet {
        fn puts_on(&self, rule: usize) -> Vec<Put> {
            self.puts
                .iter()
                .filter(|(at, _)| *at == rule)
                .map(|(_, put)| put.clone())
                .collect()
        }

        fn rule_for(&self, selector: &Selector) -> usize {
            self.registered
                .iter()
                .find(|(named, _)| named == selector)
                .map(|(_, rule)| *rule)
                .or_else(|| {
                    self.derived
                        .iter()
                        .find(|(named, _, _)| named == selector)
                        .map(|(_, made, _)| *made)
                })
                .expect("the selector is registered")
        }

        fn was_told_the_mode(&self, rule: usize) -> bool {
            self.told_the_mode
                .iter()
                .find(|(at, _)| *at == rule)
                .map(|(_, told)| *told)
                .expect("the rule was made here")
        }

        /// What a rule holds, counting what it was copied from.
        ///
        /// A copy carries everything the rule it came from had, so the puts
        /// recorded against an ancestor are the derived rule's too.
        fn inherited_puts(&self, rule: usize) -> Vec<Put> {
            let mut found = self.puts_on(rule);
            let mut at = rule;
            while let Some((_, _, from)) = self.derived.iter().find(|(_, made, _)| *made == at) {
                found.extend(self.puts_on(*from));
                at = *from;
            }
            found
        }

        fn selectors(&self) -> Vec<Selector> {
            let mut all: Vec<Selector> = self.registered.iter().map(|(named, _)| *named).collect();
            all.extend(self.derived.iter().map(|(named, _, _)| *named));
            all
        }
    }

    impl StyleSheetHost for Sheet {
        type Rule = usize;

        fn new_rule(&mut self, quirks: bool) -> usize {
            let _ = quirks;
            self.next += 1;
            self.told_the_mode.push((self.next - 1, true));
            self.next - 1
        }

        fn new_rule_without_the_mode(&mut self) -> usize {
            self.next += 1;
            self.told_the_mode.push((self.next - 1, false));
            self.next - 1
        }

        fn set_text(&mut self, rule: usize, property: Property, text: &str) {
            self.puts
                .push((rule, Put::Text(property.0, text.to_owned())));
        }

        fn set_value(&mut self, rule: usize, property: Property, value: u32, kind: i8) {
            self.puts.push((rule, Put::Value(property.0, value, kind)));
        }

        fn set_size(&mut self, rule: usize, property: Property, points: f64) {
            self.puts.push((rule, Put::Size(property.0, points)));
        }

        fn copy_property(&mut self, rule: usize, to: Property, from: Property) {
            self.puts.push((rule, Put::Copied(to.0, from.0)));
        }

        fn set_sheet_name(&mut self, _rule: usize, _name: &str) {}

        fn apply_extra(&mut self, _rule: usize, _extra: u32) {}

        fn set_rule_flag(&mut self, _rule: usize, _flag: u8) {}

        fn register(&mut self, selector: Selector, rule: usize) {
            self.registered.push((selector, rule));
        }

        fn derive(&mut self, selector: Selector, from: usize) -> usize {
            self.next += 1;
            let made = self.next - 1;
            // A copy is made by a constructor of its own, which is told the
            // mode like the ordinary one.
            self.told_the_mode.push((made, true));
            self.derived.push((selector, made, from));
            made
        }

        fn reset(&mut self) {
            self.reset = true;
        }

        fn remember_point_size(&mut self, _points: f64) {}

        fn remember_default(&mut self, _rule: usize) {}
    }

    fn page(quirks: bool) -> PageDefaults {
        PageDefaults {
            proportional_family: "Times New Roman".to_owned(),
            fixed_family: "Courier New".to_owned(),
            point_size: 12,
            text_colour: 0x0000_0000,
            link_colour: 0x0000_00FF,
            visited_colour: 0x0080_0080,
            hover_colour: 0x00FF_0000,
            underline_links: true,
            paired_18_20: 0x1111_1111,
            paired_19_21: 0x2222_2222,
            colour_floor: 0xFF00_0000,
            quirks,
            wide_font_fallback: false,
            extra: 0,
            flag: 1,
        }
    }

    fn built(quirks: bool) -> (Sheet, usize) {
        let mut sheet = Sheet::default();
        let count = build_default_style_sheet(&mut sheet, &page(quirks));
        (sheet, count)
    }

    #[test]
    fn a_rule_is_sixty_seven_cells_and_the_copy_loop_is_what_says_so() {
        assert_eq!(PROPERTY_COUNT, 67);
        assert_eq!(Property(0).offset(), FIRST_PROPERTY_OFFSET);
        assert!(Property(66).is_real());
        assert!(!Property(67).is_real());
    }

    #[test]
    fn every_offset_the_sheet_writes_lands_on_a_cell() {
        // Which is the check that the layout is right: all twenty-four of the
        // offsets used are a whole number of cells past the first.
        for offset in [
            0x78, 0x90, 0xA8, 0xC0, 0xD8, 0xF0, 0x108, 0x120, 0x138, 0x210, 0x228, 0x240, 0x258,
            0x270, 0x2D0, 0x318, 0x3D8, 0x4C8, 0x4F8, 0x540, 0x600, 0x618, 0x630, 0x6A8,
        ] {
            let past = offset - FIRST_PROPERTY_OFFSET;
            assert_eq!(past % CELL_SIZE, 0, "{offset:#x}");
            assert!(Property(u8::try_from(past / CELL_SIZE).expect("a small index")).is_real());
        }
    }

    #[test]
    fn the_highest_property_written_is_the_last_one_there_is() {
        assert_eq!(Property(PROPERTY_COUNT - 1).offset(), 0x6A8);
    }

    #[test]
    fn the_flag_byte_is_not_a_property_and_is_not_carried_by_a_copy() {
        assert!(!(0..PROPERTY_COUNT).any(|at| Property(at).offset() == RULE_FLAG_OFFSET));
        assert_eq!(FIRST_PROPERTY_OFFSET - RULE_FLAG_OFFSET, 12);
    }

    #[test]
    fn only_the_properties_that_can_be_named_are() {
        assert_eq!(property_name(Property::FONT_FAMILY), Some("font-family"));
        assert_eq!(
            property_name(Property::VERTICAL_ALIGN),
            Some("vertical-align")
        );
        // Given a colour in one rule and a length in another, so it is left a
        // number.
        assert_eq!(property_name(Property(18)), None);
        assert_eq!(property_name(Property(20)), None);
    }

    #[test]
    fn no_property_is_named_twice_and_none_is_out_of_range() {
        let mut named: Vec<u8> = NAMED_PROPERTIES.iter().map(|(at, _)| *at).collect();
        let before = named.len();
        named.sort_unstable();
        named.dedup();

        assert_eq!(named.len(), before);
        for (at, _) in NAMED_PROPERTIES {
            assert!(Property(at).is_real(), "{at}");
        }
    }

    #[test]
    fn the_sheet_is_cleared_before_anything_is_added() {
        let (sheet, _) = built(false);

        assert!(sheet.reset);
    }

    #[test]
    fn the_first_rule_is_the_default_one() {
        let (sheet, _) = built(false);

        assert_eq!(sheet.registered[0].0, Selector::Named("default"));
        assert_eq!(sheet.registered[0].1, 0);
    }

    #[test]
    fn the_last_property_is_written_out_of_order_among_the_others() {
        // Appended to the class after the rest, and called where it belongs by
        // meaning rather than by layout.
        let (sheet, _) = built(false);
        let puts = sheet.puts_on(0);
        let at = |property: u8| {
            puts.iter()
                .position(|put| matches!(put, Put::Text(held, _) if *held == property))
                .unwrap_or(usize::MAX)
        };

        assert!(at(60) < at(66));
        assert!(at(66) < at(61));
    }

    #[test]
    fn every_link_colour_carries_the_global_bits_whatever_the_caller_asked() {
        let (sheet, _) = built(false);
        let defaults = page(false);

        for selector in ["::link", "::visited", "::hover"] {
            let rule = sheet.rule_for(&Selector::Named(selector));
            let colour = sheet
                .puts_on(rule)
                .into_iter()
                .find_map(|put| match put {
                    Put::Value(7, value, _) => Some(value),
                    _ => None,
                })
                .expect("a colour");

            assert_eq!(
                colour & defaults.colour_floor,
                defaults.colour_floor,
                "{selector}"
            );
        }
    }

    #[test]
    fn so_a_caller_choosing_those_colours_does_not_fully_choose_them() {
        let mut defaults = page(false);
        defaults.link_colour = 0;
        defaults.colour_floor = 0xFF00_0000;
        let mut sheet = Sheet::default();
        build_default_style_sheet(&mut sheet, &defaults);
        let rule = sheet.rule_for(&Selector::Named("::link"));

        assert!(
            sheet
                .puts_on(rule)
                .contains(&Put::Value(7, 0xFF00_0000, USUAL_KIND))
        );
    }

    #[test]
    fn links_are_underlined_or_not_and_nothing_else_changes() {
        for underline in [true, false] {
            let mut defaults = page(false);
            defaults.underline_links = underline;
            let mut sheet = Sheet::default();
            build_default_style_sheet(&mut sheet, &defaults);
            let rule = sheet.rule_for(&Selector::Named("::link"));
            let expected = if underline { "underline" } else { "none" };

            assert!(
                sheet
                    .puts_on(rule)
                    .contains(&Put::Text(5, expected.to_owned()))
            );
        }
    }

    #[test]
    fn the_null_selector_is_registered_with_nothing_set_on_it() {
        let (sheet, _) = built(false);
        let rule = sheet.rule_for(&Selector::Named("null"));

        assert!(sheet.puts_on(rule).is_empty());
    }

    #[test]
    fn the_forgiving_mode_adds_three_rules_the_strict_one_does_without() {
        let (_, loose) = built(true);
        let (_, strict) = built(false);

        assert_eq!(loose - strict, 1);
    }

    #[test]
    fn table_headings_get_their_weight_from_a_different_rule_in_each_mode() {
        // Bold either way, but carrying different other properties.
        let heading = Selector::Unrecovered(0x00A5_E53C);

        // In the forgiving mode it descends from the rule that carries a
        // size, by way of the table rule.
        let (loose, _) = built(true);
        let in_loose = loose.rule_for(&heading);
        let held = loose.inherited_puts(in_loose);
        assert!(held.iter().any(|put| matches!(put, Put::Size(1, _))));
        assert!(held.contains(&Put::Text(3, "bold".to_owned())));

        // In the strict mode it descends from the bold rule and carries no
        // size at all.
        let (strict, _) = built(false);
        let in_strict = strict.rule_for(&heading);
        let held = strict.inherited_puts(in_strict);
        assert!(held.contains(&Put::Text(3, "bold".to_owned())));
        assert!(!held.iter().any(|put| matches!(put, Put::Size(1, _))));
    }

    #[test]
    fn a_table_rule_exists_in_both_modes_but_is_built_differently() {
        let (loose, _) = built(true);
        let (strict, _) = built(false);

        assert!(loose.selectors().contains(&Selector::Named("table")));
        assert!(strict.selectors().contains(&Selector::Named("table")));

        // The strict one is built by the constructor that is not told the
        // mode, because in that mode there is nothing for the mode to change.
        assert!(!strict.was_told_the_mode(strict.rule_for(&Selector::Named("table"))));
    }

    #[test]
    fn exactly_two_rules_are_built_without_regard_to_the_mode() {
        let (sheet, _) = built(false);

        assert_eq!(
            sheet
                .told_the_mode
                .iter()
                .filter(|(_, told)| !*told)
                .count(),
            2
        );
    }

    #[test]
    fn and_in_the_forgiving_mode_only_one_is() {
        // The table rule is not among them there, because that mode reaches it
        // by copying instead.
        let (sheet, _) = built(true);

        assert_eq!(
            sheet
                .told_the_mode
                .iter()
                .filter(|(_, told)| !*told)
                .count(),
            1
        );
    }

    #[test]
    fn a_derived_selector_gets_a_rule_of_its_own_and_not_the_one_it_copied() {
        let (sheet, _) = built(false);

        for (_, made, from) in &sheet.derived {
            assert_ne!(made, from);
        }
    }

    #[test]
    fn so_two_selectors_derived_from_one_rule_cannot_affect_each_other() {
        let (sheet, _) = built(false);
        let code = sheet.rule_for(&Selector::Named("code"));
        let from_code: Vec<usize> = sheet
            .derived
            .iter()
            .filter(|(_, _, from)| *from == code)
            .map(|(_, made, _)| *made)
            .collect();

        assert_eq!(from_code.len(), 3);
        let mut distinct = from_code.clone();
        distinct.sort_unstable();
        distinct.dedup();
        assert_eq!(distinct.len(), from_code.len());
    }

    #[test]
    fn the_headings_that_share_a_size_are_the_ones_with_distinct_spacings() {
        let shared: Vec<u8> = (1..=HEADING_LEVELS)
            .filter(|level| heading_font_size(*level) == heading_font_size(6))
            .collect();
        let distinct: Vec<u8> = (1..=HEADING_LEVELS)
            .filter(|level| heading_spacing(*level) != heading_spacing(1))
            .collect();

        assert_eq!(shared, [4, 5, 6]);
        assert_eq!(distinct, [4, 5, 6]);
    }

    #[test]
    fn and_the_two_halves_are_not_measured_in_the_same_thing() {
        // Three levels get a length, three get a plain number.
        assert_eq!(heading_spacing(1), Declared::Value(0x13, COUNT_KIND));
        assert_eq!(heading_spacing(4), Declared::Text("1.67em"));
    }

    #[test]
    fn three_of_the_six_headings_are_the_same_size() {
        assert_eq!(heading_font_size(4), heading_font_size(5));
        assert_eq!(heading_font_size(5), heading_font_size(6));
        assert_ne!(heading_font_size(1), heading_font_size(2));
        assert_ne!(heading_font_size(2), heading_font_size(3));
    }

    #[test]
    fn a_heading_has_its_spacing_made_equal_rather_than_given_equal() {
        let (sheet, _) = built(false);
        let headings: Vec<usize> = sheet
            .registered
            .iter()
            .filter(|(named, _)| *named == Selector::Named("h"))
            .map(|(_, rule)| *rule)
            .collect();

        assert_eq!(headings.len(), usize::from(HEADING_LEVELS));
        for rule in headings {
            assert!(sheet.puts_on(rule).contains(&Put::Copied(20, 18)));
        }
    }

    #[test]
    fn a_heading_is_heavier_than_what_holds_it_rather_than_bold() {
        // So a heading inside something already bold comes out heavier still.
        let (sheet, _) = built(false);
        let rule = sheet
            .registered
            .iter()
            .find(|(named, _)| *named == Selector::Named("h"))
            .map(|(_, rule)| *rule)
            .expect("a heading");

        assert!(
            sheet
                .puts_on(rule)
                .contains(&Put::Text(3, "bolder".to_owned()))
        );
    }

    #[test]
    fn there_are_seven_marker_rules_and_the_first_four_are_alike() {
        let (sheet, _) = built(false);
        let markers: Vec<usize> = sheet
            .registered
            .iter()
            .filter(|(named, _)| matches!(named, Selector::FromTable { .. }))
            .map(|(_, rule)| *rule)
            .collect();

        assert_eq!(markers.len(), usize::from(MARKER_RULES));
        let first = sheet.puts_on(markers[0]);
        for rule in &markers[1..4] {
            assert_eq!(sheet.puts_on(*rule), first);
        }
        assert_ne!(sheet.puts_on(markers[4]), first);
    }

    #[test]
    fn one_marker_rule_sets_the_same_property_twice_with_the_same_value() {
        let (sheet, _) = built(false);
        let rule = sheet.rule_for(&Selector::FromTable {
            table: 0x01E7_5998,
            at: 4,
        });
        let twice = sheet
            .puts_on(rule)
            .into_iter()
            .filter(|put| matches!(put, Put::Value(21, 0, _)))
            .count();

        assert_eq!(twice, 2);
    }

    #[test]
    fn the_paired_properties_are_given_one_value_between_them() {
        let (sheet, _) = built(false);
        let defaults = page(false);
        let puts = sheet.puts_on(0);

        for (first, second) in PROPERTY_PAIRS {
            let value = puts
                .iter()
                .find_map(|put| match put {
                    Put::Value(at, value, _) if *at == first => Some(*value),
                    _ => None,
                })
                .expect("the first of the pair");
            assert!(puts.contains(&Put::Value(second, value, USUAL_KIND)));
        }

        assert!(puts.contains(&Put::Value(18, defaults.paired_18_20, USUAL_KIND)));
        assert!(puts.contains(&Put::Value(19, defaults.paired_19_21, USUAL_KIND)));
    }

    #[test]
    fn one_rule_gives_a_pair_two_values_of_two_different_kinds() {
        // The strongest sign in the routine that the two cells are separate
        // properties and not one value stored twice.
        let (sheet, _) = built(false);
        let rule = sheet.rule_for(&Selector::FromTable {
            table: 0x01E7_5998,
            at: PAIRS_BROKEN_AT,
        });
        let puts = sheet.puts_on(rule);

        assert!(puts.contains(&Put::Value(18, 0xFF43_92A2, USUAL_KIND)));
        assert!(puts.contains(&Put::Value(20, 0xE, COUNT_KIND)));
    }

    #[test]
    fn fixed_width_text_is_five_sixths_of_the_ordinary_size() {
        let (sheet, _) = built(false);
        let rule = sheet.rule_for(&Selector::Unrecovered(0x00A5_E5F8));
        let size = sheet
            .puts_on(rule)
            .into_iter()
            .find_map(|put| match put {
                Put::Size(1, points) => Some(points),
                _ => None,
            })
            .expect("a size");

        assert!((size - 10.0).abs() < f64::EPSILON);
    }

    #[test]
    fn three_selectors_are_given_the_same_smaller_size_separately() {
        // Lowered, raised and small text all get it, each in its own rule.
        let (sheet, _) = built(false);
        let with = sheet
            .puts
            .iter()
            .filter(|(_, put)| matches!(put, Put::Text(1, text) if text == "0.83em"))
            .count();

        assert_eq!(with, 4);
    }

    #[test]
    fn form_controls_are_given_a_family_and_size_of_their_own() {
        // So they do not follow the page.
        let (sheet, _) = built(false);
        let rule = sheet.rule_for(&Selector::Named("input"));
        let puts = sheet.puts_on(rule);

        assert!(puts.contains(&Put::Text(0, "Arial Unicode MS, Arial".to_owned())));
        assert!(puts.contains(&Put::Text(1, "10pt".to_owned())));
    }

    #[test]
    fn of_the_three_controls_only_the_text_box_can_follow_the_page() {
        let (sheet, _) = built(false);
        let defaults = page(false);
        let rule = sheet.rule_for(&Selector::Named("textarea"));

        assert!(
            sheet
                .puts_on(rule)
                .contains(&Put::Text(0, defaults.fixed_family))
        );
    }

    #[test]
    fn and_a_global_can_take_that_back() {
        let mut defaults = page(false);
        defaults.wide_font_fallback = true;
        let mut sheet = Sheet::default();
        build_default_style_sheet(&mut sheet, &defaults);
        let rule = sheet.rule_for(&Selector::Named("textarea"));

        assert!(
            sheet
                .puts_on(rule)
                .contains(&Put::Text(0, "Arial Unicode MS, Arial".to_owned()))
        );
    }

    #[test]
    fn every_selector_registered_is_registered_once() {
        for quirks in [false, true] {
            let (sheet, _) = built(quirks);
            let mut all = sheet.selectors();
            // The headings share one recovered name because theirs is built
            // from a format, so they are counted apart from the rest.
            all.retain(|selector| *selector != Selector::Named("h"));
            let before = all.len();
            all.sort_by_key(|selector| format!("{selector:?}"));
            all.dedup();

            assert_eq!(all.len(), before, "{quirks}");
        }
    }

    #[test]
    fn the_count_answered_is_the_number_of_selectors_registered() {
        for quirks in [false, true] {
            let (sheet, count) = built(quirks);

            assert_eq!(count, sheet.selectors().len(), "{quirks}");
        }
    }
}
