# EDIF (*.EDF)...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.Import.ImportEDIF |
| Control class | TMenuItem |
| Caption | EDIF (*.EDF)... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ImportEDIFClick |
| Handler address | 01c834c0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.Import.ImportEDIF` |
| Handler node | `function:01c834c0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches ImportEDIFClick at 01c834c0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["EDIF (*.EDF)..."] -->|"OnClick"| handler["ImportEDIFClick (01c834c0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C834C0__FUN_01c834c0.c](../../../DecompiledSources/Tina16/functions/0000000001C834C0__FUN_01c834c0.c)
- Recovered role: Evidence-blocked ImportEDIFClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.Import.ImportEDIF.OnClick.
- Current graph behavior: The OnClick binding reaches ImportEDIFClick at 01c834c0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnFile.Import.ImportEDIF to ImportEDIFClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C834C0__FUN_01c834c0.c and directly references 00414560, 0041b800. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:0041b800` — FUN_0041b800

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

