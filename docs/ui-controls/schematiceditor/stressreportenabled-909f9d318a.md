# S&tress Analysis Enabled

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.StressReportEnabled |
| Control class | TMenuItem |
| Caption | S&tress Analysis Enabled |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | StressReportEnabledClick |
| Handler address | 01c9bed0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.StressReportEnabled` |
| Handler node | `function:01c9bed0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches StressReportEnabledClick at 01c9bed0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["S&tress Analysis Enabled"] -->|"OnClick"| handler["StressReportEnabledClick (01c9bed0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9BED0__FUN_01c9bed0.c](../../../DecompiledSources/Tina16/functions/0000000001C9BED0__FUN_01c9bed0.c)
- Recovered role: Evidence-blocked StressReportEnabledClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.StressReportEnabled.OnClick.
- Current graph behavior: The OnClick binding reaches StressReportEnabledClick at 01c9bed0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.StressReportEnabled to StressReportEnabledClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C9BED0__FUN_01c9bed0.c and directly references 007e2d20. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:007e2d20` — FUN_007e2d20

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

