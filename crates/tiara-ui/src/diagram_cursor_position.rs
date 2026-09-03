//! Diagram cursor positioning and display refresh coordination.

use iced::Point;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DiagramCursorHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DataPoint {
    pub x: f64,
    pub y: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CursorDomain {
    pub lower_x: f64,
    pub upper_x: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum CursorBinding {
    StandardCurve(CursorDomain),
    ConvertedCurve(CursorDomain),
    AxisOnly(CursorDomain),
    None,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMoveResult {
    MissingCursor,
    UnboundCursor,
    CurveMoved,
    AxisCursorMoved,
}

pub trait DiagramCursorPositionHost {
    fn cursor_for_selector(&mut self, selector: u8) -> Option<DiagramCursorHandle>;
    fn binding(&mut self, cursor: DiagramCursorHandle) -> CursorBinding;
    fn erase_cursor(&mut self, cursor: DiagramCursorHandle);
    fn evaluate_standard_curve(&mut self, cursor: DiagramCursorHandle, x: f64) -> f64;
    fn convert_curve_coordinate(&mut self, cursor: DiagramCursorHandle, x: f64) -> DataPoint;
    fn store_data_position(&mut self, cursor: DiagramCursorHandle, position: DataPoint);
    fn map_curve_position(&mut self, cursor: DiagramCursorHandle, position: DataPoint) -> Point;
    fn store_screen_position(&mut self, cursor: DiagramCursorHandle, position: Point);
    fn map_axis_x(&mut self, cursor: DiagramCursorHandle, x: f64) -> f32;
    fn store_axis_position(&mut self, cursor: DiagramCursorHandle, x: f64, screen_x: f32);
    fn update_cursor(&mut self, cursor: DiagramCursorHandle);
    fn redraw_cursor(&mut self, cursor: DiagramCursorHandle);
    fn refresh_cursor_readouts(&mut self);
    fn refresh_cursor_pair(&mut self);
}

/// Implements Ghidra function `FUN_01ae24a0` at `0x01AE24A0`.
///
/// Selects one of the diagram cursors, erases its old display, clamps the
/// requested X coordinate to the bound provider domain, and rebuilds its data
/// and screen positions. Provider-specific curves use their coordinate
/// converter. A cursor without a curve can still move on its owning axis.
/// Diagram readouts and paired-cursor state refresh after every request,
/// including requests that cannot move a cursor.
pub fn move_diagram_cursor(
    selector: u8,
    requested_x: f64,
    host: &mut impl DiagramCursorPositionHost,
) -> CursorMoveResult {
    let result = host
        .cursor_for_selector(selector)
        .map_or(CursorMoveResult::MissingCursor, |cursor| {
            move_resolved_cursor(cursor, requested_x, host)
        });

    host.refresh_cursor_readouts();
    host.refresh_cursor_pair();
    result
}

fn move_resolved_cursor(
    cursor: DiagramCursorHandle,
    requested_x: f64,
    host: &mut impl DiagramCursorPositionHost,
) -> CursorMoveResult {
    match host.binding(cursor) {
        CursorBinding::StandardCurve(domain) => {
            host.erase_cursor(cursor);
            let x = clamp_to_domain(requested_x, domain);
            let position = DataPoint {
                x,
                y: host.evaluate_standard_curve(cursor, x),
            };
            finish_curve_move(cursor, position, host);
            CursorMoveResult::CurveMoved
        }
        CursorBinding::ConvertedCurve(domain) => {
            host.erase_cursor(cursor);
            let x = clamp_to_domain(requested_x, domain);
            let position = host.convert_curve_coordinate(cursor, x);
            finish_curve_move(cursor, position, host);
            CursorMoveResult::CurveMoved
        }
        CursorBinding::AxisOnly(domain) => {
            host.erase_cursor(cursor);
            let x = clamp_to_domain(requested_x, domain);
            let screen_x = host.map_axis_x(cursor, x);
            host.store_axis_position(cursor, x, screen_x);
            host.update_cursor(cursor);
            host.redraw_cursor(cursor);
            CursorMoveResult::AxisCursorMoved
        }
        CursorBinding::None => CursorMoveResult::UnboundCursor,
    }
}

fn finish_curve_move(
    cursor: DiagramCursorHandle,
    position: DataPoint,
    host: &mut impl DiagramCursorPositionHost,
) {
    host.store_data_position(cursor, position);
    let screen_position = host.map_curve_position(cursor, position);
    host.store_screen_position(cursor, screen_position);
    host.update_cursor(cursor);
    host.redraw_cursor(cursor);
}

const fn clamp_to_domain(value: f64, domain: CursorDomain) -> f64 {
    value.max(domain.lower_x).min(domain.upper_x)
}

#[cfg(test)]
mod tests {
    use super::{
        CursorBinding, CursorDomain, CursorMoveResult, DataPoint, DiagramCursorHandle,
        DiagramCursorPositionHost, move_diagram_cursor,
    };
    use iced::Point;

    struct Host {
        cursor: Option<DiagramCursorHandle>,
        binding: CursorBinding,
        events: Vec<String>,
    }

    impl DiagramCursorPositionHost for Host {
        fn cursor_for_selector(&mut self, selector: u8) -> Option<DiagramCursorHandle> {
            self.events.push(format!("select:{selector}"));
            self.cursor
        }

        fn binding(&mut self, cursor: DiagramCursorHandle) -> CursorBinding {
            self.events.push(format!("binding:{}", cursor.0));
            self.binding
        }

        fn erase_cursor(&mut self, cursor: DiagramCursorHandle) {
            self.events.push(format!("erase:{}", cursor.0));
        }

        fn evaluate_standard_curve(&mut self, cursor: DiagramCursorHandle, x: f64) -> f64 {
            self.events.push(format!("evaluate:{}:{x}", cursor.0));
            x * 2.0
        }

        fn convert_curve_coordinate(&mut self, cursor: DiagramCursorHandle, x: f64) -> DataPoint {
            self.events.push(format!("convert:{}:{x}", cursor.0));
            DataPoint { x: x + 1.0, y: 9.0 }
        }

        fn store_data_position(&mut self, cursor: DiagramCursorHandle, position: DataPoint) {
            self.events
                .push(format!("data:{}:{}:{}", cursor.0, position.x, position.y));
        }

        fn map_curve_position(
            &mut self,
            cursor: DiagramCursorHandle,
            _position: DataPoint,
        ) -> Point {
            self.events.push(format!("map:{}", cursor.0));
            Point::new(12.0, 13.0)
        }

        fn store_screen_position(&mut self, cursor: DiagramCursorHandle, position: Point) {
            self.events
                .push(format!("screen:{}:{}:{}", cursor.0, position.x, position.y));
        }

        fn map_axis_x(&mut self, cursor: DiagramCursorHandle, x: f64) -> f32 {
            self.events.push(format!("axis-map:{}:{x}", cursor.0));
            5.0
        }

        fn store_axis_position(&mut self, cursor: DiagramCursorHandle, x: f64, screen_x: f32) {
            self.events
                .push(format!("axis:{}:{x}:{screen_x}", cursor.0));
        }

        fn update_cursor(&mut self, cursor: DiagramCursorHandle) {
            self.events.push(format!("update:{}", cursor.0));
        }

        fn redraw_cursor(&mut self, cursor: DiagramCursorHandle) {
            self.events.push(format!("redraw:{}", cursor.0));
        }

        fn refresh_cursor_readouts(&mut self) {
            self.events.push("readouts".to_owned());
        }

        fn refresh_cursor_pair(&mut self) {
            self.events.push("pair".to_owned());
        }
    }

    fn host(binding: CursorBinding) -> Host {
        Host {
            cursor: Some(DiagramCursorHandle(8)),
            binding,
            events: Vec::new(),
        }
    }

    #[test]
    fn standard_curve_clamps_evaluates_maps_and_redraws_in_order() {
        let mut host = host(CursorBinding::StandardCurve(CursorDomain {
            lower_x: 2.0,
            upper_x: 5.0,
        }));

        assert_eq!(
            move_diagram_cursor(0, 10.0, &mut host),
            CursorMoveResult::CurveMoved
        );
        assert_eq!(
            host.events,
            [
                "select:0",
                "binding:8",
                "erase:8",
                "evaluate:8:5",
                "data:8:5:10",
                "map:8",
                "screen:8:12:13",
                "update:8",
                "redraw:8",
                "readouts",
                "pair",
            ]
        );
    }

    #[test]
    fn converted_curve_uses_provider_conversion_after_lower_clamp() {
        let mut host = host(CursorBinding::ConvertedCurve(CursorDomain {
            lower_x: 2.0,
            upper_x: 5.0,
        }));

        assert_eq!(
            move_diagram_cursor(1, -4.0, &mut host),
            CursorMoveResult::CurveMoved
        );
        assert!(host.events.iter().any(|event| event == "convert:8:2"));
        assert!(host.events.iter().any(|event| event == "data:8:3:9"));
        assert_eq!(host.events.last().map(String::as_str), Some("pair"));
    }

    #[test]
    fn axis_fallback_maps_only_x_and_still_redraws() {
        let mut host = host(CursorBinding::AxisOnly(CursorDomain {
            lower_x: -1.0,
            upper_x: 1.0,
        }));

        assert_eq!(
            move_diagram_cursor(2, 0.5, &mut host),
            CursorMoveResult::AxisCursorMoved
        );
        assert!(host.events.iter().any(|event| event == "axis-map:8:0.5"));
        assert!(host.events.iter().any(|event| event == "axis:8:0.5:5"));
        assert!(!host.events.iter().any(|event| event.starts_with("data:")));
    }

    #[test]
    fn missing_and_unbound_cursors_only_refresh_shared_state() {
        let mut missing = host(CursorBinding::None);
        missing.cursor = None;
        let mut unbound = host(CursorBinding::None);

        assert_eq!(
            move_diagram_cursor(0, 3.0, &mut missing),
            CursorMoveResult::MissingCursor
        );
        assert_eq!(missing.events, ["select:0", "readouts", "pair"]);

        assert_eq!(
            move_diagram_cursor(1, 3.0, &mut unbound),
            CursorMoveResult::UnboundCursor
        );
        assert_eq!(
            unbound.events,
            ["select:1", "binding:8", "readouts", "pair"]
        );
    }
}
