# &Exam Manager

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.View.mnFaultManager |
| Control class | TMenuItem |
| Caption | &Exam Manager |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnFaultManagerClick |
| Handler address | 01c7cef0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.View.mnFaultManager` |
| Handler node | `function:01c7cef0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnFaultManagerClick at 01c7cef0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Exam Manager"] -->|"OnClick"| handler["mnFaultManagerClick (01c7cef0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7CEF0__FUN_01c7cef0.c](../../../DecompiledSources/Tina16/functions/0000000001C7CEF0__FUN_01c7cef0.c)
- Recovered role: Evidence-blocked mnFaultManagerClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.View.mnFaultManager.OnClick.
- Current graph behavior: The OnClick binding reaches mnFaultManagerClick at 01c7cef0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.View.mnFaultManager to mnFaultManagerClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7CEF0__FUN_01c7cef0.c and directly references 0064dbe0, 007e2d20. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0
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

