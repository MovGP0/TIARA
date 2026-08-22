pub mod ac_goal_functions;
pub mod add_curve;
pub mod advanced_analysis_options;
pub mod analysis_mode_range;
pub mod analysis_options;
pub mod analysis_results;
mod application;
pub mod application_startup;
pub mod ask_voltages_controller;
pub mod batch_simulation;
pub mod bill_of_materials;
mod block_wizard;
pub mod catalog_editor;
pub mod chess;
pub mod cip_editor;
pub mod clone_test_bench;
pub mod complex_parameter_editor;
pub mod component_bitmap_manager;
pub mod component_explorer;
pub mod component_main_value_limits;
pub mod controlled_source_editor;
mod converters;
pub mod curve_import;
pub mod curve_list;
pub mod data_sequence_generator;
pub mod data_sequence_help;
pub mod data_sequence_pattern;
pub mod data_spi_editor;
pub mod dc_goal_functions;
pub mod dde_server;
pub mod decrypt_circuits;
pub mod design_tool;
mod digital_signal_generator;
pub mod digital_timing_dialog;
mod drawing_preferences;
pub mod edit_advice;
pub mod electric_rules_check;
pub mod elf_project_list_manager;
pub mod equation_editor;
pub mod equation_style_settings;
mod exam_manager;
pub mod extra_attributes_editor;
pub mod fast_report_dialogs;
pub mod fault_editor;
pub mod file_select;
mod filter_design;
mod find_component;
mod flowchart_editor;
pub mod footprint_name_editor;
pub mod form_help;
mod function_generator;
pub mod global_parameter_editor;
pub mod hdl_options;
pub mod hdl_picker;
pub mod hotkey_editor;
pub mod hterm_timed_sequence;
pub mod ic_wizard;
pub mod import_from_picture;
pub mod interactive_mode;
pub mod interpreter;
pub mod list_circuits;
pub mod llm_automation;
pub mod logic_analyzer;
pub mod logic_design;
pub mod ltspice_import;
mod macro_parameter_editor_lifecycle;
pub mod macro_picker;
pub mod macro_properties;
mod map_fault_to_hardware;
pub mod mcu_input_selector;
pub mod mcu_kernel_image_properties;
pub mod mcu_source_editor;
pub mod memory_editor;
pub mod message_box_dialog_2;
pub mod message_window;
pub mod minterm_maxterm_result;
pub mod mixed_digital_step_by_step;
pub mod mod_replication_file;
pub mod model_test_bench_editor;
pub mod model_test_options;
pub mod mtb_progress;
mod multimeter;
pub mod multithread_percentage_dialog;
pub mod netlist_editor;
pub mod netlist_viewer;
pub mod network_analysis_dialog;
mod network_analyzer;
pub mod new_name;
pub mod noise_analysis_dialog;
pub mod numerical_format;
pub mod optimization;
pub mod ordered_list_editor;
mod oscilloscope;
pub mod parameter_step_list_editor;
pub mod pcb_component_wizard;
mod pcb_design;
pub mod pcb_only_component_wizard;
mod pcb_viewer;
pub mod percentage_dialog;
pub mod picture_viewer;
pub mod pin_property_editor;
pub mod power_dissipation_report;
pub mod process_curve_filter;
mod protect_circuit;
pub mod pulse_generator;
pub mod python_shell;
pub mod remote_open_window;
pub mod rf_editor;
pub mod runtime_selection;
pub mod schematic_block_wizard;
mod schematic_editor;
pub mod schematic_macro_parameter_editor;
pub mod schematic_reconciliation;
pub mod schematic_symbol_editor;
pub mod select_tina_folder;
pub mod serial_monitor;
pub mod set_environment_variables;
pub mod shape_property_dialogs;
mod shared;
pub mod signal_analyzer;
pub mod sim_time_dialog;
mod spectrum_analyzer;
pub mod spice_command_editor;
pub mod spice_export;
pub mod spice_macro_parameter_editor;
pub mod statistic_dialog;
pub mod steady_state_analysis;
pub mod step_analysis_control_panel;
pub mod stepping_parameters;
mod symbol_table;
pub mod system_text;
pub mod system_text_editor;
pub mod target_setting_editor;
pub mod test_and_measurement_options;
pub mod text_log_windows;
pub mod tina_dde_manager;
pub mod tlr_catalog_editor;
pub mod tlr_real_editor;
pub mod transient_convergence_error;
pub mod trial_notice_startup;
pub mod vhdl_editor;
pub mod vhdl_library_manager;
mod window_catalog;
pub mod xy_recorder;

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
