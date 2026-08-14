# Close (Ctrl+F4)

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.GeneralTools.ToolClose |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Close (Ctrl+F4) |
| Text | Not present in the recovered resource. |
| Handler name | ToolCloseClick |
| Handler address | 01c98960 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.GeneralTools.ToolClose` |
| Handler node | `function:01c98960` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches ToolCloseClick at 01c98960. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Close (Ctrl+F4)"] -->|"OnClick"| handler["ToolCloseClick (01c98960)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C98960__FUN_01c98960.c](../../../DecompiledSources/Tina16/functions/0000000001C98960__FUN_01c98960.c)
- Recovered role: Evidence-blocked ToolCloseClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.GeneralTools.ToolClose.OnClick.
- Current graph behavior: The OnClick binding reaches ToolCloseClick at 01c98960. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.TopToolBar.GeneralTools.ToolClose to ToolCloseClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C98960__FUN_01c98960.c and directly references 01c94450. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c94450` — Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.mnClose.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0358_SchematicEditor_SchematicEditor_TopToolBar_GeneralTools_ToolClose_Glyph_Data.png`](../../../glyph/0358_SchematicEditor_SchematicEditor_TopToolBar_GeneralTools_ToolClose_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

