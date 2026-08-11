# Stop

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FuncGenWin |
| Component path | FuncGenWin.ControlBox.FStopBtn |
| Control class | TSpeedButton |
| Caption | Stop |
| Hint | Stop Function Generator |
| Text | Not present in the recovered resource. |
| Handler name | StopBtnClick |
| Handler address | 01139900 |
| Graph node | `resource:dfm:FuncGenWin/FuncGenWin.ControlBox.FStopBtn` |
| Handler node | `function:01139900` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Stop"] -->|OnClick| handler["FUN_01139900"]
    handler --> call1["FUN_01139800"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001139900__FUN_01139900.c](../../../DecompiledSources/Tina16/functions/0000000001139900__FUN_01139900.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FuncGenWin.ControlBox.FStopBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01139800` — FUN_01139800

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

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
