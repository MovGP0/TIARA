pub const ERC_MATRIX_SIZE: usize = 9;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ErcRule {
    #[default]
    Blank,
    Warning,
    Error,
}

impl ErcRule {
    #[must_use]
    pub const fn marker(self) -> char {
        match self {
            Self::Blank => ' ',
            Self::Warning => 'W',
            Self::Error => 'E',
        }
    }

    #[must_use]
    pub const fn from_marker(marker: char) -> Self {
        match marker {
            'W' | 'w' => Self::Warning,
            'E' | 'e' => Self::Error,
            _ => Self::Blank,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ErcMatrix {
    cells: [[ErcRule; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE],
}

impl Default for ErcMatrix {
    fn default() -> Self {
        Self {
            cells: [[ErcRule::Blank; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE],
        }
    }
}

impl ErcMatrix {
    #[must_use]
    pub fn built_in_defaults() -> Self {
        let mut matrix = Self::default();
        for (row, column) in [
            (1, 1),
            (1, 3),
            (1, 5),
            (1, 6),
            (1, 7),
            (3, 5),
            (3, 6),
            (3, 7),
        ] {
            matrix.set_symmetric(row, column, ErcRule::Error);
        }
        for (row, column) in [(0, 8), (1, 2), (2, 2), (2, 3), (6, 7), (7, 7)] {
            matrix.set_symmetric(row, column, ErcRule::Warning);
        }
        matrix
    }

    #[must_use]
    pub fn rule(&self, row: usize, column: usize) -> Option<ErcRule> {
        self.cells.get(row)?.get(column).copied()
    }

    pub const fn set_symmetric(&mut self, row: usize, column: usize, rule: ErcRule) -> bool {
        if row >= ERC_MATRIX_SIZE || column >= ERC_MATRIX_SIZE {
            return false;
        }
        self.cells[row][column] = rule;
        self.cells[column][row] = rule;
        true
    }

    #[must_use]
    pub fn display_grid(&self) -> [[char; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE] {
        let mut grid = [[' '; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE];
        for (row, cells) in grid.iter_mut().enumerate() {
            for (column, marker) in cells.iter_mut().enumerate() {
                *marker = if row < column {
                    '.'
                } else {
                    self.cells[row][column].marker()
                };
            }
        }
        grid
    }

    pub fn apply_display_grid(&mut self, grid: &[[char; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE]) {
        for (row, cells) in grid.iter().enumerate() {
            for (column, marker) in cells.iter().copied().enumerate() {
                if marker != '.' {
                    let _ = self.set_symmetric(row, column, ErcRule::from_marker(marker));
                }
            }
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TransientOptions {
    pub integration_method: u8,
    pub integration_order: u8,
}

impl Default for TransientOptions {
    fn default() -> Self {
        Self {
            integration_method: 1,
            integration_order: 2,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PerformanceOptions {
    pub acceleration: bool,
    pub maximum_threads: u16,
    pub matrix_compilation: bool,
    pub matrix_solver: u8,
    pub nonlinear_solver: u8,
    pub mosfet_pwl_level: u8,
}

impl Default for PerformanceOptions {
    fn default() -> Self {
        Self {
            acceleration: true,
            maximum_threads: 1,
            matrix_compilation: true,
            matrix_solver: 0,
            nonlinear_solver: 0,
            mosfet_pwl_level: 0,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
#[allow(clippy::struct_excessive_bools)]
pub struct DigitalOptions {
    pub code_debugger: bool,
    pub generate_synthesizable_code: bool,
    pub old_digital_engine: bool,
    pub vhdl_mixed_mode: bool,
    pub warnings_enabled: bool,
    pub delay_mode: u8,
    pub glitch_control_enabled: bool,
    pub glitch_control_percent: f64,
}

impl Default for DigitalOptions {
    fn default() -> Self {
        Self {
            code_debugger: false,
            generate_synthesizable_code: false,
            old_digital_engine: false,
            vhdl_mixed_mode: false,
            warnings_enabled: true,
            delay_mode: 0,
            glitch_control_enabled: true,
            glitch_control_percent: 50.0,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
#[allow(clippy::struct_excessive_bools)]
pub struct DiagramOptions {
    pub curve_filter_enabled: bool,
    pub curve_filter_trigger: f64,
    pub curve_filter_max_skip: u32,
    pub round_x_scale: bool,
    pub round_y_scale: bool,
    pub gain_margin_reference: f64,
    pub phase_margin_reference: f64,
    pub remember_settings: bool,
    pub grid_view_design: bool,
    pub manual_scale: bool,
}

impl Default for DiagramOptions {
    fn default() -> Self {
        Self {
            curve_filter_enabled: false,
            curve_filter_trigger: 0.0,
            curve_filter_max_skip: 0,
            round_x_scale: false,
            round_y_scale: false,
            gain_margin_reference: 0.0,
            phase_margin_reference: 0.0,
            remember_settings: false,
            grid_view_design: false,
            manual_scale: false,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct ResultOptions {
    pub statistics_enabled: bool,
    pub instant_drawing_enabled: bool,
    pub save_all_results: bool,
    pub suppress_large_result_warning: bool,
    pub stress_analysis: bool,
    pub power_dissipation_analysis: bool,
    pub auto_converge: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ErcOptions {
    pub matrix: ErcMatrix,
    pub apply_rules: bool,
    pub warn_unconnected_pins: bool,
    pub check_unconnected_wires: bool,
}

impl Default for ErcOptions {
    fn default() -> Self {
        Self {
            matrix: ErcMatrix::default(),
            apply_rules: true,
            warn_unconnected_pins: true,
            check_unconnected_wires: true,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct AnalysisOptions {
    pub trace_mode: u8,
    pub numeric_precision: u8,
    pub transient: TransientOptions,
    pub performance: PerformanceOptions,
    pub digital: DigitalOptions,
    pub diagram: DiagramOptions,
    pub results: ResultOptions,
    pub erc: ErcOptions,
}

#[cfg(test)]
mod tests {
    use super::{ERC_MATRIX_SIZE, ErcMatrix, ErcRule};

    #[test]
    fn built_in_erc_defaults_match_recovered_rule_pairs() {
        let matrix = ErcMatrix::built_in_defaults();
        let error_pairs = [
            (1, 1),
            (1, 3),
            (1, 5),
            (1, 6),
            (1, 7),
            (3, 5),
            (3, 6),
            (3, 7),
        ];
        let warning_pairs = [(0, 8), (1, 2), (2, 2), (2, 3), (6, 7), (7, 7)];
        for row in 0..ERC_MATRIX_SIZE {
            for column in 0..ERC_MATRIX_SIZE {
                let normalized = (row.min(column), row.max(column));
                let expected = if error_pairs.contains(&normalized) {
                    ErcRule::Error
                } else if warning_pairs.contains(&normalized) {
                    ErcRule::Warning
                } else {
                    ErcRule::Blank
                };
                assert_eq!(matrix.rule(row, column), Some(expected));
            }
        }
        let grid = matrix.display_grid();
        assert_eq!(grid[0][1], '.');
        assert_eq!(grid[1][0], ' ');
        assert_eq!(
            grid.iter()
                .flatten()
                .filter(|marker| **marker == '.')
                .count(),
            36
        );
    }

    #[test]
    fn display_grid_commit_skips_duplicate_dots_and_writes_symmetrically() {
        let mut matrix = ErcMatrix::default();
        let mut grid = [[' '; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE];
        grid[0][1] = '.';
        grid[1][0] = 'E';
        grid[2][2] = 'W';
        matrix.apply_display_grid(&grid);

        assert_eq!(matrix.rule(0, 1), Some(ErcRule::Error));
        assert_eq!(matrix.rule(1, 0), Some(ErcRule::Error));
        assert_eq!(matrix.rule(2, 2), Some(ErcRule::Warning));
    }
}
