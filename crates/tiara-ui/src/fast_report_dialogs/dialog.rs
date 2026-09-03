use iced::Element;
use iced::widget::text;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    CloseRequested,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DialogForm;

impl DialogForm {
    /// Rejects direct closure of the hosted `FastReport` dialog form.
    ///
    /// Reimplements Ghidra function `FUN_018dd070` at `0x018DD070`.
    /// The recovered close query always returns false and changes no state.
    #[must_use]
    pub const fn can_close(&self) -> bool {
        false
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        text("").into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn close_query_always_rejects_direct_close() {
        assert!(!DialogForm.can_close());
    }
}
