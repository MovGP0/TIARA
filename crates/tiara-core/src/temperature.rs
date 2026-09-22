//! What a circuit's temperature is called where one is swept.
//!
//! SPICE sweeps the temperature the way it sweeps a source, by the name
//! `TEMP` in a `.DC` line, which is why the Temperature Analysis dialog
//! needs no analysis of its own. It is named here rather than spelled into
//! the two places that care - the dialog that writes it and the solver that
//! refuses it - so the two cannot drift apart.

/// The name SPICE gives the temperature when it is swept.
pub const SWEPT: &str = "TEMP";
