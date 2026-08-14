# &Find Component...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.FindComponent |
| Control class | TMenuItem |
| Caption | &Find Component... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FindComponentClick |
| Handler address | 01c979b0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.FindComponent` |
| Handler node | `function:01c979b0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches FindComponentClick at 01c979b0. The recovered body has 17 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Find Component..."] -->|"OnClick"| handler["FindComponentClick (01c979b0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C979B0__FUN_01c979b0.c](../../../DecompiledSources/Tina16/functions/0000000001C979B0__FUN_01c979b0.c)
- Recovered role: Evidence-blocked FindComponentClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.FindComponent.OnClick.
- Current graph behavior: The OnClick binding reaches FindComponentClick at 01c979b0. The recovered body has 17 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.FindComponent to FindComponentClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C979B0__FUN_01c979b0.c and directly references 00410f20, 00414ad0, 00415020, 00416740, 00416910, 004169a0, 00442bd0, 006efcb0, and 9 more. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 17

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00415020` — FUN_00415020
- `function:00416740` — FUN_00416740
- `function:00416910` — FUN_00416910
- `function:004169a0` — FUN_004169a0
- `function:00442bd0` — FUN_00442bd0
- `function:006efcb0` — FUN_006efcb0
- `function:007fc180` — FUN_007fc180
- `function:016ffb50` — FUN_016ffb50
- `function:0172cc40` — FUN_0172cc40
- `function:0172d840` — FUN_0172d840
- `function:0172f320` — FUN_0172f320
- `function:01c6ec30` — FUN_01c6ec30
- `function:01c8cee0` — FUN_01c8cee0
- `function:01d07850` — FUN_01d07850
- `function:01d37030` — FUN_01d37030

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

