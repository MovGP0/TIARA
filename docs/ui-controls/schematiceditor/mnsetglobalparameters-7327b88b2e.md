# Define global parameters...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.mnSetGlobalParameters |
| Control class | TMenuItem |
| Caption | Define global parameters... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSetGlobalParametersClick |
| Handler address | 01ca3b60 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.mnSetGlobalParameters` |
| Handler node | `function:01ca3b60` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnSetGlobalParametersClick at 01ca3b60. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Define global parameters..."] -->|"OnClick"| handler["mnSetGlobalParametersClick (01ca3b60)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA3B60__FUN_01ca3b60.c](../../../DecompiledSources/Tina16/functions/0000000001CA3B60__FUN_01ca3b60.c)
- Recovered role: Evidence-blocked mnSetGlobalParametersClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.mnSetGlobalParameters.OnClick.
- Current graph behavior: The OnClick binding reaches mnSetGlobalParametersClick at 01ca3b60. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.mnSetGlobalParameters to mnSetGlobalParametersClick. The recovered source is DecompiledSources/Tina16/functions/0000000001CA3B60__FUN_01ca3b60.c and directly references 00410f20, 0143a6e0. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:0143a6e0` — FUN_0143a6e0

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

