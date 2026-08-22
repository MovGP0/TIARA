//! Shared lifecycle adapter for the SPICE and schematic macro parameter forms.

use iced::Size;

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ResizeConstraints {
    pub minimum_size: Size,
    pub maximum_width: f32,
}

impl ResizeConstraints {
    #[must_use]
    pub const fn vertical_only(initial_size: Size) -> Self {
        Self {
            minimum_size: initial_size,
            maximum_width: initial_size.width,
        }
    }
}

pub trait LifecycleAdapter {
    fn current_size(&self) -> Size;
    fn apply_resize_constraints(&mut self, constraints: ResizeConstraints);
    fn set_help_context(&mut self, help_context: u32);
}

pub fn initialize_vertical_resize(adapter: &mut impl LifecycleAdapter) {
    let constraints = ResizeConstraints::vertical_only(adapter.current_size());
    adapter.apply_resize_constraints(constraints);
}
