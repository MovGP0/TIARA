# Enable HDL Debugger

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.EnableHDLDebugger |
| Control class | TMenuItem |
| Caption | Enable HDL Debugger |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | EnableHDLDebuggerClick |
| Handler address | 01ca3bd0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.EnableHDLDebugger` |
| Handler node | `function:01ca3bd0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches EnableHDLDebuggerClick at 01ca3bd0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Enable HDL Debugger"] -->|"OnClick"| handler["EnableHDLDebuggerClick (01ca3bd0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA3BD0__FUN_01ca3bd0.c](../../../DecompiledSources/Tina16/functions/0000000001CA3BD0__FUN_01ca3bd0.c)
- Recovered role: Evidence-blocked EnableHDLDebuggerClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.EnableHDLDebugger.OnClick.
- Current graph behavior: The OnClick binding reaches EnableHDLDebuggerClick at 01ca3bd0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.EnableHDLDebugger to EnableHDLDebuggerClick. The recovered source is DecompiledSources/Tina16/functions/0000000001CA3BD0__FUN_01ca3bd0.c and directly references 007e2d20. No accepted end-to-end role was established for this control path.
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

