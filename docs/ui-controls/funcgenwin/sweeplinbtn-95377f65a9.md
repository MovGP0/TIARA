# Lin

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FuncGenWin |
| Component path | FuncGenWin.ParametersBox.SweepBox.SweepLinBtn |
| Control class | TSpeedButton |
| Caption | Lin |
| Hint | Liner or logarithmic sweep |
| Text | Not present in the recovered resource. |
| Handler name | SweepLinBtnClick |
| Handler address | 0113c550 |
| Graph node | `resource:dfm:FuncGenWin/FuncGenWin.ParametersBox.SweepBox.SweepLinBtn` |
| Handler node | `function:0113c550` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Lin"] -->|OnClick| handler["FUN_0113c550"]
    handler --> call1["VCL control text setter with change suppression"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000113C550__FUN_0113c550.c](../../../DecompiledSources/Tina16/functions/000000000113C550__FUN_0113c550.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FuncGenWin.ParametersBox.SweepBox.SweepLinBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression

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
