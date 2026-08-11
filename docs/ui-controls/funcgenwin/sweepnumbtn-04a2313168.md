# Num

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FuncGenWin |
| Component path | FuncGenWin.ParametersBox.SweepBox.SweepNumBtn |
| Control class | TSpeedButton |
| Caption | Num |
| Hint | Number of steps |
| Text | Not present in the recovered resource. |
| Handler name | SweepNumBtnClick |
| Handler address | 0113b300 |
| Graph node | `resource:dfm:FuncGenWin/FuncGenWin.ParametersBox.SweepBox.SweepNumBtn` |
| Handler node | `function:0113b300` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Num"] -->|OnClick| handler["FUN_0113b300"]
    handler --> call1["FUN_0082a890"]
    handler --> call2["FUN_0113a720"]
    handler --> call3["FUN_0113a9b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000113B300__FUN_0113b300.c](../../../DecompiledSources/Tina16/functions/000000000113B300__FUN_0113b300.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FuncGenWin.ParametersBox.SweepBox.SweepNumBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0082a890` — FUN_0082a890
- `function:0113a720` — FUN_0113a720
- `function:0113a9b0` — FUN_0113a9b0

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
