# Set parameter limits...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.mnSetCompValueLimits |
| Control class | TMenuItem |
| Caption | Set parameter limits... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSetCompValueLimitsClick |
| Handler address | 01ca3b10 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.mnSetCompValueLimits` |
| Handler node | `function:01ca3b10` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnSetCompValueLimitsClick at 01ca3b10. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Set parameter limits..."] -->|"OnClick"| handler["mnSetCompValueLimitsClick (01ca3b10)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA3B10__FUN_01ca3b10.c](../../../DecompiledSources/Tina16/functions/0000000001CA3B10__FUN_01ca3b10.c)
- Recovered role: Evidence-blocked mnSetCompValueLimitsClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.mnSetCompValueLimits.OnClick.
- Current graph behavior: The OnClick binding reaches mnSetCompValueLimitsClick at 01ca3b10. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.mnSetCompValueLimits to mnSetCompValueLimitsClick. The recovered source is DecompiledSources/Tina16/functions/0000000001CA3B10__FUN_01ca3b10.c and directly references 00410f20, 01c480a0. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:01c480a0` — FUN_01c480a0

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

