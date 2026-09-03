//! Fourier analysis dispatch for selected diagram curve members.

use crate::analysis_results::FourierAnalysisMode;
use crate::diagram_selection::CURVE_CATEGORY;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct FourierMemberHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct FourierSeriesHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct FourierReferenceHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SelectedFourierMember {
    pub handle: FourierMemberHandle,
    pub series: FourierSeriesHandle,
    pub reference: FourierReferenceHandle,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FourierCurveOwner {
    pub curve_type: u8,
    pub members: Vec<FourierMemberHandle>,
}

pub trait DiagramFourierHost {
    fn show_selection_required_error(&mut self);
    fn open_fourier_series(
        &mut self,
        series: FourierSeriesHandle,
        reference: FourierReferenceHandle,
    );
    fn open_fourier_spectrum(
        &mut self,
        series: FourierSeriesHandle,
        reference: FourierReferenceHandle,
    );
}

pub trait ComponentParameterViewerHost {
    fn open_component_parameters(
        &mut self,
        series: FourierSeriesHandle,
        reference: FourierReferenceHandle,
    );
}

/// Implements Ghidra function `FUN_01ad6030` at `0x01AD6030`.
///
/// Uses selected item zero, finds its containing curve, and accepts only the
/// recovered curve type zero. An empty selection reports the common selection
/// error. Missing membership and unsupported owner types return silently. A
/// supported member supplies its series and reference handles to the requested
/// Fourier Series or Frequency Spectrum dialog.
pub fn dispatch_selected_fourier_analysis(
    selection: &[SelectedFourierMember],
    owners: &[FourierCurveOwner],
    mode: FourierAnalysisMode,
    host: &mut impl DiagramFourierHost,
) -> bool {
    let Some(selected) = selection.first() else {
        host.show_selection_required_error();
        return false;
    };
    let Some(owner) = owners
        .iter()
        .find(|owner| owner.members.contains(&selected.handle))
    else {
        return false;
    };
    if owner.curve_type != 0 {
        return false;
    }

    match mode {
        FourierAnalysisMode::Series => {
            host.open_fourier_series(selected.series, selected.reference);
        }
        FourierAnalysisMode::Spectrum => {
            host.open_fourier_spectrum(selected.series, selected.reference);
        }
    }
    true
}

/// Implements Ghidra function `FUN_01ad6200` at `0x01AD6200`.
///
/// Opens the Component Parameters viewer only for an exact curve-only
/// selection whose first member belongs to a recovered type-zero curve. A
/// category mismatch, empty selection, missing owner, or rejected owner type
/// is a silent no-op. This function does not modify diagram data.
pub fn open_selected_component_parameters(
    selection_category: u8,
    selection: &[SelectedFourierMember],
    owners: &[FourierCurveOwner],
    host: &mut impl ComponentParameterViewerHost,
) -> bool {
    if selection_category != CURVE_CATEGORY {
        return false;
    }
    let Some(selected) = selection.first() else {
        return false;
    };
    let Some(owner) = owners
        .iter()
        .find(|owner| owner.members.contains(&selected.handle))
    else {
        return false;
    };
    if owner.curve_type != 0 {
        return false;
    }

    host.open_component_parameters(selected.series, selected.reference);
    true
}

#[cfg(test)]
mod tests {
    use crate::analysis_results::FourierAnalysisMode;

    use super::{
        ComponentParameterViewerHost, DiagramFourierHost, FourierCurveOwner, FourierMemberHandle,
        FourierReferenceHandle, FourierSeriesHandle, SelectedFourierMember,
        dispatch_selected_fourier_analysis, open_selected_component_parameters,
    };

    #[derive(Default)]
    struct Host(Vec<String>);

    impl DiagramFourierHost for Host {
        fn show_selection_required_error(&mut self) {
            self.0.push("selection-error".to_owned());
        }

        fn open_fourier_series(
            &mut self,
            series: FourierSeriesHandle,
            reference: FourierReferenceHandle,
        ) {
            self.0.push(format!("series:{}:{}", series.0, reference.0));
        }

        fn open_fourier_spectrum(
            &mut self,
            series: FourierSeriesHandle,
            reference: FourierReferenceHandle,
        ) {
            self.0
                .push(format!("spectrum:{}:{}", series.0, reference.0));
        }
    }

    impl ComponentParameterViewerHost for Host {
        fn open_component_parameters(
            &mut self,
            series: FourierSeriesHandle,
            reference: FourierReferenceHandle,
        ) {
            self.0
                .push(format!("parameters:{}:{}", series.0, reference.0));
        }
    }

    fn member(handle: u64, series: u64, reference: u64) -> SelectedFourierMember {
        SelectedFourierMember {
            handle: FourierMemberHandle(handle),
            series: FourierSeriesHandle(series),
            reference: FourierReferenceHandle(reference),
        }
    }

    #[test]
    fn empty_selection_reports_the_common_error() {
        let mut host = Host::default();

        let opened =
            dispatch_selected_fourier_analysis(&[], &[], FourierAnalysisMode::Series, &mut host);

        assert!(!opened);
        assert_eq!(host.0, ["selection-error"]);
    }

    #[test]
    fn supported_item_zero_opens_the_requested_fourier_dialog() {
        let selected = [member(1, 11, 12), member(2, 21, 22)];
        let owners = [FourierCurveOwner {
            curve_type: 0,
            members: vec![FourierMemberHandle(1), FourierMemberHandle(2)],
        }];
        let mut series_host = Host::default();
        let mut spectrum_host = Host::default();

        assert!(dispatch_selected_fourier_analysis(
            &selected,
            &owners,
            FourierAnalysisMode::Series,
            &mut series_host,
        ));
        assert!(dispatch_selected_fourier_analysis(
            &selected,
            &owners,
            FourierAnalysisMode::Spectrum,
            &mut spectrum_host,
        ));

        assert_eq!(series_host.0, ["series:11:12"]);
        assert_eq!(spectrum_host.0, ["spectrum:11:12"]);
    }

    #[test]
    fn missing_membership_returns_silently() {
        let selected = [member(3, 31, 32)];
        let owners = [FourierCurveOwner {
            curve_type: 0,
            members: vec![FourierMemberHandle(4)],
        }];
        let mut host = Host::default();

        let opened = dispatch_selected_fourier_analysis(
            &selected,
            &owners,
            FourierAnalysisMode::Series,
            &mut host,
        );

        assert!(!opened);
        assert!(host.0.is_empty());
    }

    #[test]
    fn unsupported_curve_type_returns_silently() {
        let selected = [member(5, 51, 52)];
        let owners = [FourierCurveOwner {
            curve_type: 6,
            members: vec![FourierMemberHandle(5)],
        }];
        let mut host = Host::default();

        let opened = dispatch_selected_fourier_analysis(
            &selected,
            &owners,
            FourierAnalysisMode::Spectrum,
            &mut host,
        );

        assert!(!opened);
        assert!(host.0.is_empty());
    }

    #[test]
    fn component_parameters_require_an_exact_curve_selection() {
        let selected = [member(6, 61, 62)];
        let owners = [FourierCurveOwner {
            curve_type: 0,
            members: vec![FourierMemberHandle(6)],
        }];
        let mut host = Host::default();

        assert!(!open_selected_component_parameters(
            0, &selected, &owners, &mut host,
        ));
        assert!(!open_selected_component_parameters(
            3, &selected, &owners, &mut host,
        ));

        assert!(host.0.is_empty());
    }

    #[test]
    fn component_parameters_open_for_supported_selection_item_zero() {
        let selected = [member(7, 71, 72), member(8, 81, 82)];
        let owners = [FourierCurveOwner {
            curve_type: 0,
            members: vec![FourierMemberHandle(7), FourierMemberHandle(8)],
        }];
        let mut host = Host::default();

        let opened = open_selected_component_parameters(2, &selected, &owners, &mut host);

        assert!(opened);
        assert_eq!(host.0, ["parameters:71:72"]);
    }

    #[test]
    fn component_parameters_reject_missing_or_unsupported_owners_silently() {
        let selected = [member(9, 91, 92)];
        let missing_owner = [FourierCurveOwner {
            curve_type: 0,
            members: vec![FourierMemberHandle(10)],
        }];
        let unsupported_owner = [FourierCurveOwner {
            curve_type: 1,
            members: vec![FourierMemberHandle(9)],
        }];
        let mut host = Host::default();

        assert!(!open_selected_component_parameters(
            2,
            &selected,
            &missing_owner,
            &mut host,
        ));
        assert!(!open_selected_component_parameters(
            2,
            &selected,
            &unsupported_owner,
            &mut host,
        ));

        assert!(host.0.is_empty());
    }
}
