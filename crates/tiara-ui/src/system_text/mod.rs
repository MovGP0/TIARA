//! System-text model and navigation adapters recovered from the text component family.

use std::ops::Range;

pub const TDL_SCHEME: &str = "tdl://";
pub const EVERY_CURVE_SELECTOR: &str = "<EVERYCURVE>";
pub const DEFAULT_FOURIER_OUTPUT_MASK: u8 = 0x3f;
pub const LIBRARY_EVALUATION: &str = "Rust Clone::clone_from supplies complete value copying, Option represents invalidated measurement caches, and standard string split methods supply TDL parsing. Application navigation and analysis stay behind adapters because their effects depend on the active schematic and host shell.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct SystemTextMode(pub u8);

impl SystemTextMode {
    pub const POPUP: Self = Self(3);
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct TextGeometry {
    pub left: i64,
    pub top: i64,
    pub right: i64,
    pub bottom: i64,
    pub rotation: i16,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct TextColor(pub [u8; 4]);

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum BorderStyle {
    #[default]
    None,
    Solid,
    Dotted,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum BackgroundStyle {
    #[default]
    Transparent,
    Opaque,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DimensionCache {
    pub width: Option<i32>,
    pub height: Option<i32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ActionLink {
    pub range: Range<usize>,
    pub target: String,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct RenderedTextState {
    pub text: String,
    pub font_family: String,
    pub font_size: u16,
    pub links: Vec<ActionLink>,
    pub dimensions: DimensionCache,
    pub popup_text: bool,
}

impl RenderedTextState {
    /// Ports Ghidra `FUN_01d1c9b0` at `0x01D1C9B0`.
    ///
    /// `None` is the Rust representation of the recovered `-1` cache sentinel.
    pub const fn invalidate_dimensions(&mut self) {
        self.dimensions.width = None;
        self.dimensions.height = None;
    }

    #[must_use]
    pub fn link_target_at(&self, position: usize) -> Option<&str> {
        self.links
            .iter()
            .find(|link| link.range.contains(&position) && !link.target.is_empty())
            .map(|link| link.target.as_str())
    }

    /// Ports Ghidra `FUN_01a5e850` at `0x01A5E850`.
    ///
    /// A found local path is opened before the target is checked for the TDL scheme.
    pub fn activate_link(
        &self,
        position: usize,
        context: Option<&SchematicContext>,
        navigation: &mut impl LinkNavigation,
        effects: &mut impl TdlEffects,
    ) -> bool {
        let Some(target) = self.link_target_at(position) else {
            return false;
        };

        if let Some(local_target) = navigation.resolve_prefixed_target(target) {
            navigation.open_external(&local_target);
        } else if target.contains(TDL_SCHEME) {
            dispatch_tdl(target, context, effects);
        } else {
            navigation.open_external(target);
        }

        true
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SystemTextExtension {
    pub tag: i64,
    pub layer: i64,
    pub application_flags: u32,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SystemText {
    pub rendered: RenderedTextState,
    pub mode: SystemTextMode,
    pub geometry: TextGeometry,
    pub foreground: TextColor,
    pub border_color: TextColor,
    pub border: BorderStyle,
    pub background_color: TextColor,
    pub background: BackgroundStyle,
    pub link: Option<String>,
    pub extension: SystemTextExtension,
}

impl SystemText {
    /// Ports Ghidra `FUN_01a5eb60` at `0x01A5EB60`.
    ///
    /// `Clone::clone_from` supplies the deep copy. The nested popup flag is then
    /// derived from mode `3`, as it is in the recovered copy routine.
    pub fn copy_complete_from(&mut self, source: &Self) {
        Clone::clone_from(self, source);
        self.rendered.popup_text = self.mode == SystemTextMode::POPUP;
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SchematicContext(pub u64);

pub trait LinkNavigation {
    /// Resolves either recovered application path prefix and returns the first usable path.
    fn resolve_prefixed_target(&mut self, target: &str) -> Option<String>;

    fn open_external(&mut self, target: &str);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisKind {
    Transient,
    AcTransfer,
    DcTransfer,
    DcTemperature,
    Noise,
    AcNetwork,
    Digital,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FourierDataHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FourierOptions {
    pub output_mask: u8,
    pub first_option: u8,
    pub second_option: u8,
}

impl Default for FourierOptions {
    fn default() -> Self {
        Self {
            output_mask: DEFAULT_FOURIER_OUTPUT_MASK,
            first_option: 0,
            second_option: 0,
        }
    }
}

pub trait TdlEffects {
    fn configure_component(&mut self, context: &SchematicContext, label: &str, path: &str);
    fn set_temperature(&mut self, context: &SchematicContext, value: &str);
    fn set_parameter(
        &mut self,
        context: &SchematicContext,
        target: &str,
        value: &str,
        parameter_index: Option<&str>,
    );
    fn run_analysis(&mut self, context: &SchematicContext, analysis: AnalysisKind);
    fn run_tool(&mut self, context: &SchematicContext, command: &str);
    /// Returns true when the recovered selector-2 Fourier preflight stops dispatch.
    fn fourier_preflight_stops(&mut self, context: &SchematicContext) -> bool;
    fn request_fourier_data(
        &mut self,
        context: &SchematicContext,
        selector: &str,
    ) -> Option<FourierDataHandle>;
    fn show_shared_results(&mut self, context: &SchematicContext);
    fn fourier_options(&self) -> FourierOptions;
    fn generate_fourier_results(
        &mut self,
        context: &SchematicContext,
        data: FourierDataHandle,
        options: FourierOptions,
    );
}

/// Ports Ghidra `FUN_01a62740` at `0x01A62740`.
///
/// The dispatcher accepts semicolon-separated commands after the first TDL scheme.
/// It performs no parsing or effects when the schematic context is absent.
pub fn dispatch_tdl(
    target: &str,
    context: Option<&SchematicContext>,
    effects: &mut impl TdlEffects,
) {
    let Some(context) = context else {
        return;
    };
    let Some((_, commands)) = target.split_once(TDL_SCHEME) else {
        return;
    };

    for command in commands.split(';') {
        dispatch_command(command, context, effects);
    }
}

fn dispatch_command(command: &str, context: &SchematicContext, effects: &mut impl TdlEffects) {
    if let Some(configuration) = command.strip_prefix("component.config:") {
        if let Some((label, path)) = configuration.split_once(':')
            && !label.is_empty()
            && !path.is_empty()
        {
            effects.configure_component(context, label, path);
        }
        return;
    }

    if let Some(set_command) = command.strip_prefix("set:") {
        dispatch_set(set_command, context, effects);
        return;
    }

    if let Some(analysis) = command.strip_prefix("analysis.") {
        dispatch_analysis(analysis, context, effects);
        return;
    }

    if let Some(tool) = command.strip_prefix("tools.")
        && !tool.is_empty()
    {
        effects.run_tool(context, tool);
    }
}

fn dispatch_set(command: &str, context: &SchematicContext, effects: &mut impl TdlEffects) {
    let mut fields = command.splitn(3, ':');
    let Some(target) = fields.next().filter(|target| !target.is_empty()) else {
        return;
    };
    let Some(value) = fields.next() else {
        return;
    };
    let parameter_index = fields.next();

    if target == "TEMP" {
        effects.set_temperature(context, value);
    } else {
        effects.set_parameter(context, target, value, parameter_index);
    }
}

fn dispatch_analysis(analysis: &str, context: &SchematicContext, effects: &mut impl TdlEffects) {
    let kind = match analysis {
        "tr" => AnalysisKind::Transient,
        "ac.transfer" => AnalysisKind::AcTransfer,
        "dc.transfer" => AnalysisKind::DcTransfer,
        "dc.temperature" => AnalysisKind::DcTemperature,
        "noise" => AnalysisKind::Noise,
        "ac.network" => AnalysisKind::AcNetwork,
        "dig" => AnalysisKind::Digital,
        "fourier.spectrum" => {
            dispatch_fourier(context, effects);
            return;
        }
        _ => return,
    };

    effects.run_analysis(context, kind);
}

fn dispatch_fourier(context: &SchematicContext, effects: &mut impl TdlEffects) {
    if effects.fourier_preflight_stops(context) {
        return;
    }

    let data = effects.request_fourier_data(context, EVERY_CURVE_SELECTOR);
    effects.show_shared_results(context);

    if let Some(data) = data {
        let mut options = effects.fourier_options();
        if options.output_mask == 0 {
            options.output_mask = DEFAULT_FOURIER_OUTPUT_MASK;
        }
        effects.generate_fourier_results(context, data, options);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum NavigationEvent {
        Resolve(String),
        Open(String),
    }

    #[derive(Debug, Default)]
    struct NavigationRecorder {
        resolved: Option<String>,
        events: Vec<NavigationEvent>,
    }

    impl LinkNavigation for NavigationRecorder {
        fn resolve_prefixed_target(&mut self, target: &str) -> Option<String> {
            self.events
                .push(NavigationEvent::Resolve(target.to_owned()));
            self.resolved.clone()
        }

        fn open_external(&mut self, target: &str) {
            self.events.push(NavigationEvent::Open(target.to_owned()));
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum EffectEvent {
        Configure(String, String),
        Temperature(String),
        Parameter(String, String, Option<String>),
        Analysis(AnalysisKind),
        Tool(String),
        FourierPreflight,
        FourierRequest(String),
        SharedResults,
        FourierGenerate(FourierDataHandle, FourierOptions),
    }

    #[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
    enum PreflightResult {
        #[default]
        Continue,
        Stop,
    }

    #[derive(Debug, Default)]
    struct EffectRecorder {
        events: Vec<EffectEvent>,
        preflight: PreflightResult,
        data: Option<FourierDataHandle>,
        options: FourierOptions,
    }

    impl TdlEffects for EffectRecorder {
        fn configure_component(&mut self, _: &SchematicContext, label: &str, path: &str) {
            self.events
                .push(EffectEvent::Configure(label.to_owned(), path.to_owned()));
        }

        fn set_temperature(&mut self, _: &SchematicContext, value: &str) {
            self.events.push(EffectEvent::Temperature(value.to_owned()));
        }

        fn set_parameter(
            &mut self,
            _: &SchematicContext,
            target: &str,
            value: &str,
            parameter_index: Option<&str>,
        ) {
            self.events.push(EffectEvent::Parameter(
                target.to_owned(),
                value.to_owned(),
                parameter_index.map(str::to_owned),
            ));
        }

        fn run_analysis(&mut self, _: &SchematicContext, analysis: AnalysisKind) {
            self.events.push(EffectEvent::Analysis(analysis));
        }

        fn run_tool(&mut self, _: &SchematicContext, command: &str) {
            self.events.push(EffectEvent::Tool(command.to_owned()));
        }

        fn fourier_preflight_stops(&mut self, _: &SchematicContext) -> bool {
            self.events.push(EffectEvent::FourierPreflight);
            self.preflight == PreflightResult::Stop
        }

        fn request_fourier_data(
            &mut self,
            _: &SchematicContext,
            selector: &str,
        ) -> Option<FourierDataHandle> {
            self.events
                .push(EffectEvent::FourierRequest(selector.to_owned()));
            self.data
        }

        fn show_shared_results(&mut self, _: &SchematicContext) {
            self.events.push(EffectEvent::SharedResults);
        }

        fn fourier_options(&self) -> FourierOptions {
            self.options
        }

        fn generate_fourier_results(
            &mut self,
            _: &SchematicContext,
            data: FourierDataHandle,
            options: FourierOptions,
        ) {
            self.events
                .push(EffectEvent::FourierGenerate(data, options));
        }
    }

    fn linked_text(target: &str) -> RenderedTextState {
        RenderedTextState {
            text: "link".to_owned(),
            links: vec![ActionLink {
                range: 1..4,
                target: target.to_owned(),
            }],
            ..RenderedTextState::default()
        }
    }

    #[test]
    fn complete_copy_replaces_all_state_and_derives_popup_flag() {
        let source = SystemText {
            rendered: RenderedTextState {
                text: "copied".to_owned(),
                font_family: "Tina Sans".to_owned(),
                font_size: 14,
                dimensions: DimensionCache {
                    width: Some(80),
                    height: Some(20),
                },
                popup_text: false,
                ..RenderedTextState::default()
            },
            mode: SystemTextMode::POPUP,
            geometry: TextGeometry {
                left: 1,
                top: 2,
                right: 81,
                bottom: 22,
                rotation: 90,
            },
            foreground: TextColor([1, 2, 3, 255]),
            border_color: TextColor([4, 5, 6, 255]),
            border: BorderStyle::Dotted,
            background_color: TextColor([7, 8, 9, 255]),
            background: BackgroundStyle::Opaque,
            link: Some("https://example.test".to_owned()),
            extension: SystemTextExtension {
                tag: 11,
                layer: 12,
                application_flags: 13,
            },
        };
        let mut destination = SystemText::default();

        destination.copy_complete_from(&source);

        let mut expected = source;
        expected.rendered.popup_text = true;
        assert_eq!(destination, expected);
    }

    #[test]
    fn invalidation_clears_both_dimension_caches() {
        let mut rendered = RenderedTextState {
            dimensions: DimensionCache {
                width: Some(120),
                height: Some(40),
            },
            ..RenderedTextState::default()
        };

        rendered.invalidate_dimensions();

        assert_eq!(rendered.dimensions, DimensionCache::default());
    }

    #[test]
    fn activation_returns_false_when_position_has_no_link() {
        let rendered = linked_text("https://example.test");
        let mut navigation = NavigationRecorder::default();
        let mut effects = EffectRecorder::default();

        let handled =
            rendered.activate_link(4, Some(&SchematicContext(1)), &mut navigation, &mut effects);

        assert!(!handled);
        assert!(navigation.events.is_empty());
        assert!(effects.events.is_empty());
    }

    #[test]
    fn activation_opens_resolved_path_before_tdl_routing() {
        let rendered = linked_text("tdl://analysis.dig");
        let mut navigation = NavigationRecorder {
            resolved: Some("C:\\Tina\\analysis.dig".to_owned()),
            events: Vec::new(),
        };
        let mut effects = EffectRecorder::default();

        let handled =
            rendered.activate_link(2, Some(&SchematicContext(1)), &mut navigation, &mut effects);

        assert!(handled);
        assert_eq!(
            navigation.events,
            vec![
                NavigationEvent::Resolve("tdl://analysis.dig".to_owned()),
                NavigationEvent::Open("C:\\Tina\\analysis.dig".to_owned()),
            ]
        );
        assert!(effects.events.is_empty());
    }

    #[test]
    fn activation_routes_tdl_target_but_still_handles_missing_context() {
        let rendered = linked_text("tdl://analysis.dig");
        let mut navigation = NavigationRecorder::default();
        let mut effects = EffectRecorder::default();

        let handled = rendered.activate_link(2, None, &mut navigation, &mut effects);

        assert!(handled);
        assert_eq!(
            navigation.events,
            vec![NavigationEvent::Resolve("tdl://analysis.dig".to_owned())]
        );
        assert!(effects.events.is_empty());
    }

    #[test]
    fn dispatcher_routes_supported_command_namespaces() {
        let context = SchematicContext(7);
        let mut effects = EffectRecorder::default();

        dispatch_tdl(
            "tdl://component.config:R1:C:\\parts\\r.cnf;set:TEMP:27;set:R1:12k:2;analysis.ac.transfer;tools.report",
            Some(&context),
            &mut effects,
        );

        assert_eq!(
            effects.events,
            vec![
                EffectEvent::Configure("R1".to_owned(), "C:\\parts\\r.cnf".to_owned()),
                EffectEvent::Temperature("27".to_owned()),
                EffectEvent::Parameter("R1".to_owned(), "12k".to_owned(), Some("2".to_owned())),
                EffectEvent::Analysis(AnalysisKind::AcTransfer),
                EffectEvent::Tool("report".to_owned()),
            ]
        );
    }

    #[test]
    fn fourier_preflight_can_stop_all_later_effects() {
        let mut effects = EffectRecorder {
            preflight: PreflightResult::Stop,
            ..EffectRecorder::default()
        };

        dispatch_tdl(
            "tdl://analysis.fourier.spectrum",
            Some(&SchematicContext(1)),
            &mut effects,
        );

        assert_eq!(effects.events, vec![EffectEvent::FourierPreflight]);
    }

    #[test]
    fn fourier_shows_shared_results_without_a_data_handle() {
        let mut effects = EffectRecorder::default();

        dispatch_tdl(
            "tdl://analysis.fourier.spectrum",
            Some(&SchematicContext(1)),
            &mut effects,
        );

        assert_eq!(
            effects.events,
            vec![
                EffectEvent::FourierPreflight,
                EffectEvent::FourierRequest(EVERY_CURVE_SELECTOR.to_owned()),
                EffectEvent::SharedResults,
            ]
        );
    }

    #[test]
    fn fourier_uses_default_mask_only_when_configured_mask_is_zero() {
        let data = FourierDataHandle(9);
        let mut effects = EffectRecorder {
            data: Some(data),
            options: FourierOptions {
                output_mask: 0,
                first_option: 4,
                second_option: 5,
            },
            ..EffectRecorder::default()
        };

        dispatch_tdl(
            "tdl://analysis.fourier.spectrum",
            Some(&SchematicContext(1)),
            &mut effects,
        );

        assert_eq!(
            effects.events.last(),
            Some(&EffectEvent::FourierGenerate(
                data,
                FourierOptions {
                    output_mask: DEFAULT_FOURIER_OUTPUT_MASK,
                    first_option: 4,
                    second_option: 5,
                }
            ))
        );
    }
}
