use std::fmt;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcGoalKind {
    CenterFrequency,
    LowPass,
    BandPass,
    HighPass,
    Maximum,
    Minimum,
}

impl AcGoalKind {
    pub const ALL: [Self; 6] = [
        Self::CenterFrequency,
        Self::LowPass,
        Self::BandPass,
        Self::HighPass,
        Self::Maximum,
        Self::Minimum,
    ];

    #[must_use]
    pub const fn from_record_type(record_type: u8) -> Option<Self> {
        match record_type {
            1 => Some(Self::CenterFrequency),
            2 => Some(Self::LowPass),
            3 => Some(Self::BandPass),
            4 => Some(Self::HighPass),
            5 => Some(Self::Maximum),
            6 => Some(Self::Minimum),
            _ => None,
        }
    }

    #[must_use]
    pub const fn record_type(self) -> u8 {
        match self {
            Self::CenterFrequency => 1,
            Self::LowPass => 2,
            Self::BandPass => 3,
            Self::HighPass => 4,
            Self::Maximum => 5,
            Self::Minimum => 6,
        }
    }

    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::CenterFrequency => 0,
            Self::LowPass => 1,
            Self::BandPass => 2,
            Self::HighPass => 3,
            Self::Maximum => 4,
            Self::Minimum => 5,
        }
    }

    #[must_use]
    pub const fn parameter_count(self) -> usize {
        match self {
            Self::CenterFrequency | Self::LowPass | Self::BandPass | Self::HighPass => 3,
            Self::Maximum | Self::Minimum => 2,
        }
    }

    #[must_use]
    pub const fn requires_positive_primary(self) -> bool {
        matches!(
            self,
            Self::CenterFrequency | Self::LowPass | Self::BandPass | Self::HighPass
        )
    }
}

impl fmt::Display for AcGoalKind {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::CenterFrequency => "Center Frequency",
            Self::LowPass => "Low Pass",
            Self::BandPass => "Band Pass",
            Self::HighPass => "High Pass",
            Self::Maximum => "Maximum",
            Self::Minimum => "Minimum",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum AcGoalUnit {
    #[default]
    Decibels,
    Volts,
}

impl fmt::Display for AcGoalUnit {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Decibels => "dB",
            Self::Volts => "V",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AcGoalRecord {
    pub kind: AcGoalKind,
    pub values: [f64; 5],
    pub unit: AcGoalUnit,
}

impl AcGoalRecord {
    #[must_use]
    pub const fn new(kind: AcGoalKind, values: [f64; 5], unit: AcGoalUnit) -> Self {
        Self { kind, values, unit }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DcGoalKind {
    #[default]
    Value,
    Minimum,
    Maximum,
}

impl DcGoalKind {
    pub const ALL: [Self; 3] = [Self::Value, Self::Minimum, Self::Maximum];

    #[must_use]
    pub const fn from_record_type(record_type: u8) -> Option<Self> {
        match record_type {
            1 => Some(Self::Value),
            2 => Some(Self::Minimum),
            3 => Some(Self::Maximum),
            _ => None,
        }
    }

    #[must_use]
    pub const fn record_type(self) -> u8 {
        match self {
            Self::Value => 1,
            Self::Minimum => 2,
            Self::Maximum => 3,
        }
    }
}

impl fmt::Display for DcGoalKind {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Value => "Value",
            Self::Minimum => "Minimum",
            Self::Maximum => "Maximum",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcGoalRecord {
    pub kind: DcGoalKind,
    pub value: f64,
    pub tolerance_percent: f64,
}

impl DcGoalRecord {
    #[must_use]
    pub const fn new(kind: DcGoalKind, value: f64, tolerance_percent: f64) -> Self {
        Self {
            kind,
            value,
            tolerance_percent,
        }
    }
}

#[cfg(test)]
mod tests {
    use super::{AcGoalKind, DcGoalKind};

    #[test]
    fn recovered_record_types_round_trip() {
        for kind in AcGoalKind::ALL {
            assert_eq!(AcGoalKind::from_record_type(kind.record_type()), Some(kind));
        }
        for kind in DcGoalKind::ALL {
            assert_eq!(DcGoalKind::from_record_type(kind.record_type()), Some(kind));
        }
    }
}
