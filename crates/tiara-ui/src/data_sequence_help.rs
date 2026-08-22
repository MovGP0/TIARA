//! Shared help dispatch for the Data Generator and Fill windows.

/// Opens application help for a resolved control context.
pub trait HelpAdapter {
    fn open_context(&mut self, context: u16);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HelpDispatch {
    pub handled: bool,
    pub call_default_handler: bool,
}

/// Maps the recovered VCL `OnHelp` result to a typed host boundary.
pub fn dispatch_help(context: u16, adapter: &mut impl HelpAdapter) -> HelpDispatch {
    adapter.open_context(context);
    HelpDispatch {
        handled: true,
        call_default_handler: false,
    }
}
