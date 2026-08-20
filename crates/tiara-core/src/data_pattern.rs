use std::fmt;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PatternMethod {
    #[default]
    FillZero,
    FillOne,
    WalkOneLeft,
    WalkOneRight,
    WalkZeroLeft,
    WalkZeroRight,
    CountUp,
    CountDown,
}

impl PatternMethod {
    pub const ALL: [Self; 8] = [
        Self::FillZero,
        Self::FillOne,
        Self::WalkOneLeft,
        Self::WalkOneRight,
        Self::WalkZeroLeft,
        Self::WalkZeroRight,
        Self::CountUp,
        Self::CountDown,
    ];

    #[must_use]
    pub const fn is_fixed(self) -> bool {
        matches!(
            self,
            Self::FillZero
                | Self::FillOne
                | Self::WalkOneLeft
                | Self::WalkOneRight
                | Self::WalkZeroLeft
                | Self::WalkZeroRight
        )
    }

    #[must_use]
    pub const fn default_initial(self, width: PatternWidth) -> u32 {
        let mask = width.mask();
        let high_bit = width.high_bit();
        match self {
            Self::FillZero | Self::CountUp => 0,
            Self::FillOne | Self::CountDown => mask,
            Self::WalkOneLeft => 1,
            Self::WalkOneRight => high_bit,
            Self::WalkZeroLeft => mask & !1,
            Self::WalkZeroRight => mask & !high_bit,
        }
    }
}

impl fmt::Display for PatternMethod {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        let label = match self {
            Self::FillZero => "Fill with 0",
            Self::FillOne => "Fill with 1",
            Self::WalkOneLeft => "Shift 1 left",
            Self::WalkOneRight => "Shift 1 right",
            Self::WalkZeroLeft => "Shift 0 left",
            Self::WalkZeroRight => "Shift 0 right",
            Self::CountUp => "Count up",
            Self::CountDown => "Count down",
        };
        formatter.write_str(label)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PatternWidth(u32);

impl PatternWidth {
    /// Creates a fixed-width value domain from 1 through 32 bits.
    ///
    /// # Errors
    ///
    /// Returns [`PatternError::InvalidWidth`] for zero or a value above 32.
    pub const fn new(bits: u32) -> Result<Self, PatternError> {
        if bits == 0 || bits > u32::BITS {
            return Err(PatternError::InvalidWidth { bits });
        }

        Ok(Self(bits))
    }

    #[must_use]
    pub const fn bits(self) -> u32 {
        self.0
    }

    #[must_use]
    pub const fn mask(self) -> u32 {
        if self.0 == u32::BITS {
            u32::MAX
        } else {
            (1_u32 << self.0) - 1
        }
    }

    const fn high_bit(self) -> u32 {
        1_u32 << (self.0 - 1)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct PatternDescriptor {
    pub method: PatternMethod,
    pub first: usize,
    pub last: usize,
    pub initial: u32,
    pub step: u32,
    pub limit: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PatternError {
    InvalidWidth {
        bits: u32,
    },
    InvalidRange {
        first: usize,
        last: usize,
        output_length: usize,
    },
}

impl fmt::Display for PatternError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidWidth { bits } => {
                write!(
                    formatter,
                    "Pattern width must be from 1 through 32 bits, got {bits}"
                )
            }
            Self::InvalidRange {
                first,
                last,
                output_length,
            } => write!(
                formatter,
                "Pattern range {first}..={last} is outside an output of length {output_length}"
            ),
        }
    }
}

impl std::error::Error for PatternError {}

/// Generates the 16-bit output mode recovered for Ghidra function
/// `FUN_0140b070` at `0x0140B070`.
///
/// The function writes the inclusive descriptor range in place. Fill methods
/// repeat a constant, walking methods rotate one bit within `width`, and count
/// methods use wrapping 32-bit arithmetic before values are narrowed to 16
/// bits. A nonzero descriptor limit can shorten the effective output range.
///
/// # Errors
///
/// Returns [`PatternError::InvalidRange`] before changing the output when the
/// descriptor range is reversed or outside the supplied slice.
pub fn generate_u16_pattern(
    output: &mut [u16],
    descriptor: PatternDescriptor,
    width: PatternWidth,
) -> Result<(), PatternError> {
    generate_pattern(output, descriptor, width)
}

/// Generates the 32-bit output mode recovered for Ghidra function
/// `FUN_0140b070` at `0x0140B070`.
///
/// The function writes the inclusive descriptor range in place. Fill methods
/// repeat a constant, walking methods rotate one bit within `width`, and count
/// methods use wrapping 32-bit arithmetic. A nonzero descriptor limit can
/// shorten the effective output range.
///
/// # Errors
///
/// Returns [`PatternError::InvalidRange`] before changing the output when the
/// descriptor range is reversed or outside the supplied slice.
pub fn generate_u32_pattern(
    output: &mut [u32],
    descriptor: PatternDescriptor,
    width: PatternWidth,
) -> Result<(), PatternError> {
    generate_pattern(output, descriptor, width)
}

fn generate_pattern<T: PatternWord>(
    output: &mut [T],
    descriptor: PatternDescriptor,
    width: PatternWidth,
) -> Result<(), PatternError> {
    validate_range(output.len(), descriptor)?;

    let effective_last = effective_last(descriptor);
    let range = descriptor.first..=effective_last;
    match descriptor.method {
        PatternMethod::FillZero => fill(output, range, 0),
        PatternMethod::FillOne => fill(output, range, descriptor.initial),
        PatternMethod::WalkOneLeft | PatternMethod::WalkZeroLeft => {
            walk_left(output, range, descriptor.initial, width);
        }
        PatternMethod::WalkOneRight | PatternMethod::WalkZeroRight => {
            walk_right(output, range, descriptor.initial, width);
        }
        PatternMethod::CountUp => count_up(output, range, descriptor),
        PatternMethod::CountDown => count_down(output, range, descriptor),
    }

    Ok(())
}

const fn validate_range(
    output_length: usize,
    descriptor: PatternDescriptor,
) -> Result<(), PatternError> {
    if descriptor.first > descriptor.last || descriptor.last >= output_length {
        return Err(PatternError::InvalidRange {
            first: descriptor.first,
            last: descriptor.last,
            output_length,
        });
    }

    Ok(())
}

fn effective_last(descriptor: PatternDescriptor) -> usize {
    let Ok(limit) = usize::try_from(descriptor.limit) else {
        return descriptor.last;
    };
    if descriptor.limit == 0 || limit >= descriptor.last {
        descriptor.last
    } else {
        descriptor.first.max(limit)
    }
}

fn fill<T: PatternWord>(output: &mut [T], range: std::ops::RangeInclusive<usize>, value: u32) {
    for index in range {
        output[index] = T::from_u32(value);
    }
}

fn walk_left<T: PatternWord>(
    output: &mut [T],
    range: std::ops::RangeInclusive<usize>,
    initial: u32,
    width: PatternWidth,
) {
    let mut value = initial;
    for index in range {
        output[index] = T::from_u32(value);
        let wrapped_bit = (value >> (width.bits() - 1)) & 1;
        value = (value << 1 | wrapped_bit) & width.mask();
    }
}

fn walk_right<T: PatternWord>(
    output: &mut [T],
    range: std::ops::RangeInclusive<usize>,
    initial: u32,
    width: PatternWidth,
) {
    let mut value = initial;
    for index in range {
        output[index] = T::from_u32(value);
        let wrapped_bit = (value & 1) << (width.bits() - 1);
        value = (value >> 1 | wrapped_bit) & width.mask();
    }
}

fn count_up<T: PatternWord>(
    output: &mut [T],
    range: std::ops::RangeInclusive<usize>,
    descriptor: PatternDescriptor,
) {
    let default_limit = u32::try_from(output.len().saturating_sub(1)).unwrap_or(u32::MAX);
    let wrap_limit = if descriptor.limit == 0 {
        default_limit
    } else {
        descriptor.limit
    };
    let modulus = u64::from(wrap_limit.max(65_536));
    let mut value = descriptor.initial;
    for index in range {
        output[index] = T::from_u32(value);
        value = u32::try_from(u64::from(value.wrapping_add(descriptor.step)) % modulus)
            .unwrap_or_default();
    }
}

fn count_down<T: PatternWord>(
    output: &mut [T],
    range: std::ops::RangeInclusive<usize>,
    descriptor: PatternDescriptor,
) {
    let wrap_limit = u32::try_from(output.len().saturating_sub(1)).unwrap_or(u32::MAX);
    let mut value = descriptor.initial;
    for index in range {
        output[index] = T::from_u32(value);
        if value == 0 {
            value = wrap_limit;
        }
        value = value.wrapping_sub(descriptor.step);
    }
}

trait PatternWord: Copy {
    fn from_u32(value: u32) -> Self;
}

impl PatternWord for u16 {
    fn from_u32(value: u32) -> Self {
        let [first, second, ..] = value.to_le_bytes();
        Self::from_le_bytes([first, second])
    }
}

impl PatternWord for u32 {
    fn from_u32(value: u32) -> Self {
        value
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn fixed_methods_use_the_supplied_initial_and_keep_values_outside_the_range() {
        let width = PatternWidth::new(8).unwrap();
        let mut output = [0x55_u16; 6];
        let descriptor = PatternDescriptor {
            method: PatternMethod::FillOne,
            first: 1,
            last: 4,
            initial: 0xFF,
            ..PatternDescriptor::default()
        };

        generate_u16_pattern(&mut output, descriptor, width).unwrap();

        assert_eq!(output, [0x55, 0xFF, 0xFF, 0xFF, 0xFF, 0x55]);
    }

    #[test]
    fn walking_methods_rotate_within_the_selected_width() {
        let width = PatternWidth::new(4).unwrap();
        let mut left = [0_u32; 5];
        let mut right = [0_u32; 5];

        generate_u32_pattern(
            &mut left,
            PatternDescriptor {
                method: PatternMethod::WalkOneLeft,
                first: 0,
                last: 4,
                initial: 1,
                ..PatternDescriptor::default()
            },
            width,
        )
        .unwrap();
        generate_u32_pattern(
            &mut right,
            PatternDescriptor {
                method: PatternMethod::WalkZeroRight,
                first: 0,
                last: 4,
                initial: 0b0111,
                ..PatternDescriptor::default()
            },
            width,
        )
        .unwrap();

        assert_eq!(left, [1, 2, 4, 8, 1]);
        assert_eq!(right, [0b0111, 0b1011, 0b1101, 0b1110, 0b0111]);
    }

    #[test]
    fn count_methods_apply_the_recovered_wrap_rules() {
        let width = PatternWidth::new(16).unwrap();
        let mut up = [0_u32; 4];
        let mut down = [9_u32; 6];

        generate_u32_pattern(
            &mut up,
            PatternDescriptor {
                method: PatternMethod::CountUp,
                first: 0,
                last: 3,
                initial: 65_534,
                step: 2,
                ..PatternDescriptor::default()
            },
            width,
        )
        .unwrap();
        generate_u32_pattern(
            &mut down,
            PatternDescriptor {
                method: PatternMethod::CountDown,
                first: 0,
                last: 5,
                initial: 1,
                step: 1,
                limit: 3,
            },
            width,
        )
        .unwrap();

        assert_eq!(up, [65_534, 0, 2, 4]);
        assert_eq!(down, [1, 0, 4, 3, 9, 9]);
    }

    #[test]
    fn a_nonzero_limit_can_shorten_the_effective_output_range() {
        let width = PatternWidth::new(8).unwrap();
        let mut output = [9_u32; 6];

        generate_u32_pattern(
            &mut output,
            PatternDescriptor {
                method: PatternMethod::FillZero,
                first: 1,
                last: 5,
                limit: 3,
                ..PatternDescriptor::default()
            },
            width,
        )
        .unwrap();

        assert_eq!(output, [9, 0, 0, 0, 9, 9]);
    }

    #[test]
    fn invalid_ranges_do_not_change_the_output() {
        let width = PatternWidth::new(8).unwrap();
        let mut output = [7_u16; 3];
        let error = generate_u16_pattern(
            &mut output,
            PatternDescriptor {
                first: 1,
                last: 3,
                ..PatternDescriptor::default()
            },
            width,
        )
        .unwrap_err();

        assert!(matches!(error, PatternError::InvalidRange { .. }));
        assert_eq!(output, [7; 3]);
    }

    #[test]
    fn method_defaults_cover_32_bit_values_without_shift_overflow() {
        let width = PatternWidth::new(32).unwrap();

        assert_eq!(PatternMethod::FillOne.default_initial(width), u32::MAX);
        assert_eq!(
            PatternMethod::WalkOneRight.default_initial(width),
            0x8000_0000
        );
        assert_eq!(
            PatternMethod::WalkZeroRight.default_initial(width),
            0x7FFF_FFFF
        );
    }
}
