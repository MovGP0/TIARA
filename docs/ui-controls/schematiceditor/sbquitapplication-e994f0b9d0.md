# Exit

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.StatusPanel.ButtonPanel.ExitPanel.sbQuitApplication |
| Control class | TSpeedButton |
| Caption | Exit |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbQuitApplicationClick |
| Handler address | 01ca0ce0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.StatusPanel.ButtonPanel.ExitPanel.sbQuitApplication` |
| Handler node | `function:01ca0ce0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches sbQuitApplicationClick at 01ca0ce0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Exit"] -->|"OnClick"| handler["sbQuitApplicationClick (01ca0ce0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA0CE0__FUN_01ca0ce0.c](../../../DecompiledSources/Tina16/functions/0000000001CA0CE0__FUN_01ca0ce0.c)
- Recovered role: Evidence-blocked sbQuitApplicationClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.StatusPanel.ButtonPanel.ExitPanel.sbQuitApplication.OnClick.
- Current graph behavior: The OnClick binding reaches sbQuitApplicationClick at 01ca0ce0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.StatusPanel.ButtonPanel.ExitPanel.sbQuitApplication to sbQuitApplicationClick. The recovered source is DecompiledSources/Tina16/functions/0000000001CA0CE0__FUN_01ca0ce0.c and directly references 00805200. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00805200` — FUN_00805200

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

