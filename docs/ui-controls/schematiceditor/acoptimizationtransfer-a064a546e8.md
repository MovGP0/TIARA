# AC Optimization (&Transfer)...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationTransfer |
| Control class | TMenuItem |
| Caption | AC Optimization (&Transfer)... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ACOptimizationTransferClick |
| Handler address | 01c97190 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationTransfer` |
| Handler node | `function:01c97190` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches ACOptimizationTransferClick at 01c97190. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["AC Optimization (&Transfer)..."] -->|"OnClick"| handler["ACOptimizationTransferClick (01c97190)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97190__FUN_01c97190.c](../../../DecompiledSources/Tina16/functions/0000000001C97190__FUN_01c97190.c)
- Recovered role: Evidence-blocked ACOptimizationTransferClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationTransfer.OnClick.
- Current graph behavior: The OnClick binding reaches ACOptimizationTransferClick at 01c97190. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationTransfer to ACOptimizationTransferClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C97190__FUN_01c97190.c and directly references 00414ad0, 013748b0. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:013748b0` — FUN_013748b0

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

