# &XY Recorder

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.XYRecorder |
| Control class | TMenuItem |
| Caption | &XY Recorder |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnXYRecVirtualClick |
| Handler address | 01c90450 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.XYRecorder` |
| Handler node | `function:01c90450` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnXYRecVirtualClick at 01c90450. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&XY Recorder"] -->|"OnClick"| handler["mnXYRecVirtualClick (01c90450)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C90450__FUN_01c90450.c](../../../DecompiledSources/Tina16/functions/0000000001C90450__FUN_01c90450.c)
- Recovered role: Evidence-blocked mnXYRecVirtualClick command.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.mnTM.XYRecorder1.mnXYRecVirtual.OnClick, SchematicEditor.MainMenu.mnTM.XYRecorder.OnClick.
- Current graph behavior: The OnClick binding reaches mnXYRecVirtualClick at 01c90450. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTM.XYRecorder, SchematicEditor.MainMenu.mnTM.XYRecorder1.mnXYRecVirtual to mnXYRecVirtualClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C90450__FUN_01c90450.c and directly references 01c8f600. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c8f600` — FUN_01c8f600

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

