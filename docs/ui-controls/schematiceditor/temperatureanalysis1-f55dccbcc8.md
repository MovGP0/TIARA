# &Temperature Analysis...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.TemperatureAnalysis1 |
| Control class | TMenuItem |
| Caption | &Temperature Analysis... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TemperatureAnalysisClick |
| Handler address | 01c758f0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.TemperatureAnalysis1` |
| Handler node | `function:01c758f0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches TemperatureAnalysisClick at 01c758f0. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Temperature Analysis..."] -->|"OnClick"| handler["TemperatureAnalysisClick (01c758f0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C758F0__FUN_01c758f0.c](../../../DecompiledSources/Tina16/functions/0000000001C758F0__FUN_01c758f0.c)
- Recovered role: Evidence-blocked TemperatureAnalysisClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.TemperatureAnalysis1.OnClick.
- Current graph behavior: The OnClick binding reaches TemperatureAnalysisClick at 01c758f0. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.TemperatureAnalysis1 to TemperatureAnalysisClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C758F0__FUN_01c758f0.c and directly references 00414ad0, 01328250, 013c7550, 013d45f0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:01328250` — FUN_01328250
- `function:013c7550` — FUN_013c7550
- `function:013d45f0` — FUN_013d45f0

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

