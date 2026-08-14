# Stop

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnInteractive.mnStopInteractive |
| Control class | TMenuItem |
| Caption | Stop |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnStopInteractiveClick |
| Handler address | 01c99780 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnInteractive.mnStopInteractive` |
| Handler node | `function:01c99780` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnStopInteractiveClick at 01c99780. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Stop"] -->|"OnClick"| handler["mnStopInteractiveClick (01c99780)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C99780__FUN_01c99780.c](../../../DecompiledSources/Tina16/functions/0000000001C99780__FUN_01c99780.c)
- Recovered role: Evidence-blocked mnStopInteractiveClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnInteractive.mnStopInteractive.OnClick.
- Current graph behavior: The OnClick binding reaches mnStopInteractiveClick at 01c99780. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnInteractive.mnStopInteractive to mnStopInteractiveClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C99780__FUN_01c99780.c and directly references 0082a6c0, 01c87e40. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0082a6c0` — FUN_0082a6c0
- `function:01c87e40` — Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolInteractive.OnClick.

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

