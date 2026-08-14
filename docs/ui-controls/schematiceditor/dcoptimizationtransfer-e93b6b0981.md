# D&C Optimization (Transfer)...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Optimization.DCOptimizationTransfer |
| Control class | TMenuItem |
| Caption | D&C Optimization (Transfer)... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DCOptimizationTransferClick |
| Handler address | 01c98f90 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Optimization.DCOptimizationTransfer` |
| Handler node | `function:01c98f90` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches DCOptimizationTransferClick at 01c98f90. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["D&C Optimization (Transfer)..."] -->|"OnClick"| handler["DCOptimizationTransferClick (01c98f90)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C98F90__FUN_01c98f90.c](../../../DecompiledSources/Tina16/functions/0000000001C98F90__FUN_01c98f90.c)
- Recovered role: Evidence-blocked DCOptimizationTransferClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Optimization.DCOptimizationTransfer.OnClick.
- Current graph behavior: The OnClick binding reaches DCOptimizationTransferClick at 01c98f90. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.Optimization.DCOptimizationTransfer to DCOptimizationTransferClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C98F90__FUN_01c98f90.c and directly references 00414ad0, 01373fd0. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:01373fd0` — FUN_01373fd0

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

