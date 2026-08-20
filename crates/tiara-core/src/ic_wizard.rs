use std::io::{self, BufRead};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum PinKind {
    Input = 0,
    Output = 1,
    InOut = 2,
    Power = 3,
    Buffer = 4,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Pin {
    pub name: String,
    pub kind: PinKind,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PowerGroup {
    First,
    Second,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PinLayout {
    pub input_group: Vec<Pin>,
    pub output_group: Vec<Pin>,
    pub first_power_group: Vec<Pin>,
    pub second_power_group: Vec<Pin>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ParseSummary {
    pub appended: usize,
    pub ignored: usize,
}

/// Reimplements Ghidra function `FUN_01785360` at `0x01785360`.
///
/// The recovered format uses one-based field numbers and plain commas. It does
/// not define CSV quoting or escaped commas.
#[must_use]
pub fn comma_separated_field(line: &str, field_number: usize) -> &str {
    if field_number == 0 {
        return "";
    }
    line.split(',').nth(field_number - 1).unwrap_or_default()
}

/// Reimplements Ghidra function `FUN_01785490` at `0x01785490`.
///
/// Existing entries remain in `layout`. The caller supplies POWER routing
/// because the recovered evidence does not identify the two name tests.
///
/// # Errors
///
/// Returns the first line-read error from `reader`.
pub fn parse_vendor_pin_list<R, F>(
    reader: R,
    layout: &mut PinLayout,
    mut route_power: F,
) -> io::Result<ParseSummary>
where
    R: BufRead,
    F: FnMut(&str) -> PowerGroup,
{
    let mut summary = ParseSummary::default();
    for line in reader.lines() {
        let line = line?;
        let name = comma_separated_field(&line, 2).to_owned();
        let category = comma_separated_field(&line, 3).to_uppercase();
        let destination = match category.as_str() {
            "INPUT" => Some((&mut layout.input_group, PinKind::Input)),
            "INOUT" => Some((&mut layout.input_group, PinKind::InOut)),
            "BUFFER" => Some((&mut layout.input_group, PinKind::Buffer)),
            "OUTPUT" => Some((&mut layout.output_group, PinKind::Output)),
            "" => Some((&mut layout.output_group, PinKind::Buffer)),
            "POWER" => Some(match route_power(&name) {
                PowerGroup::First => (&mut layout.first_power_group, PinKind::Power),
                PowerGroup::Second => (&mut layout.second_power_group, PinKind::Power),
            }),
            _ => None,
        };
        if let Some((group, kind)) = destination {
            group.push(Pin { name, kind });
            summary.appended += 1;
        } else {
            summary.ignored += 1;
        }
    }
    Ok(summary)
}

#[must_use]
pub fn shorten_middle(value: &str, maximum_characters: usize) -> String {
    let character_count = value.chars().count();
    if character_count <= maximum_characters {
        return value.to_owned();
    }
    if maximum_characters <= 3 {
        return ".".repeat(maximum_characters);
    }
    let retained = maximum_characters - 3;
    let prefix_count = retained.div_ceil(2);
    let suffix_count = retained / 2;
    let prefix: String = value.chars().take(prefix_count).collect();
    let suffix: String = value
        .chars()
        .rev()
        .take(suffix_count)
        .collect::<String>()
        .chars()
        .rev()
        .collect();
    format!("{prefix}...{suffix}")
}

#[cfg(test)]
mod tests {
    use std::io::Cursor;

    use super::{
        PinKind, PinLayout, PowerGroup, comma_separated_field, parse_vendor_pin_list,
        shorten_middle,
    };

    #[test]
    fn field_extractor_returns_final_and_empty_fields() {
        assert_eq!(comma_separated_field("1,CLK,INPUT", 3), "INPUT");
        assert_eq!(comma_separated_field("1,CLK", 2), "CLK");
        assert_eq!(comma_separated_field("", 1), "");
        assert_eq!(comma_separated_field("1", 2), "");
    }

    #[test]
    fn parser_classifies_known_categories_and_ignores_unknown_categories() {
        let input = "1,A,INPUT\n2,B,INOUT\n3,C,BUFFER\n4,D,OUTPUT\n5,E,\n6,VCC,POWER\n7,GND,POWER\n8,X,NC\n";
        let mut layout = PinLayout::default();
        let summary = parse_vendor_pin_list(Cursor::new(input), &mut layout, |name| {
            if name == "VCC" {
                PowerGroup::First
            } else {
                PowerGroup::Second
            }
        })
        .expect("valid in-memory pin list");
        assert_eq!(summary.appended, 7);
        assert_eq!(summary.ignored, 1);
        assert_eq!(layout.input_group[0].kind, PinKind::Input);
        assert_eq!(layout.input_group[1].kind, PinKind::InOut);
        assert_eq!(layout.input_group[2].kind, PinKind::Buffer);
        assert_eq!(layout.output_group[0].kind, PinKind::Output);
        assert_eq!(layout.output_group[1].kind, PinKind::Buffer);
        assert_eq!(layout.first_power_group[0].name, "VCC");
        assert_eq!(layout.second_power_group[0].name, "GND");
    }

    #[test]
    fn parser_appends_to_existing_layout() {
        let mut layout = PinLayout::default();
        parse_vendor_pin_list(Cursor::new("1,A,INPUT\n"), &mut layout, |_| {
            PowerGroup::First
        })
        .expect("first list");
        parse_vendor_pin_list(Cursor::new("2,B,INPUT\n"), &mut layout, |_| {
            PowerGroup::First
        })
        .expect("second list");
        assert_eq!(layout.input_group.len(), 2);
    }

    #[test]
    fn middle_shortening_preserves_both_ends() {
        assert_eq!(shorten_middle("C:/vendor/pins.csv", 12), "C:/ve....csv");
        assert_eq!(shorten_middle("pins.csv", 12), "pins.csv");
    }
}
