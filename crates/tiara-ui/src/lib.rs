mod analysis_results;
mod application;
mod bill_of_materials;
mod block_wizard;
pub mod clone_test_bench;
mod converters;
pub mod decrypt_circuits;
mod design_tool;
mod digital_signal_generator;
mod drawing_preferences;
mod equation_editor;
mod exam_manager;
mod filter_design;
mod find_component;
mod flowchart_editor;
mod footprint_name_editor;
mod function_generator;
mod interactive_mode;
mod interpreter;
mod logic_analyzer;
mod logic_design;
mod map_fault_to_hardware;
pub mod message_window;
pub mod mod_replication_file;
pub mod model_test_bench_editor;
pub mod model_test_options;
pub mod mtb_progress;
mod multimeter;
pub mod multithread_percentage_dialog;
mod network_analyzer;
mod numerical_format;
mod oscilloscope;
mod pcb_component_wizard;
mod pcb_design;
mod pcb_viewer;
pub mod picture_viewer;
mod protect_circuit;
mod schematic_editor;
mod schematic_reconciliation;
mod schematic_symbol_editor;
mod serial_monitor;
mod shared;
mod signal_analyzer;
mod spectrum_analyzer;
mod symbol_table;
mod test_and_measurement_options;
mod window_catalog;
mod xy_recorder;

use iced::Size;

pub use application::TiaraApplication;

/// Runs the Schematic Editor shell.
///
/// # Errors
///
/// Returns an iced runtime error when the window or renderer cannot start.
pub fn run() -> iced::Result {
    iced::application(
        TiaraApplication::title,
        TiaraApplication::update,
        TiaraApplication::view,
    )
    .theme(|_| iced::Theme::Light)
    .window_size(Size::new(1_280.0, 800.0))
    .run()
}
