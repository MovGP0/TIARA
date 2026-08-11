# Stop

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DC_CharMeasWin |
| Component path | DC_CharMeasWin.StorageGroupBox.FStopBtn |
| Control class | TSpeedButton |
| Caption | Stop |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | StopBtnClick |
| Handler address | 01b674b0 |
| Graph node | `resource:dfm:DC_CharMeasWin/DC_CharMeasWin.StorageGroupBox.FStopBtn` |
| Handler node | `function:01b674b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Stop"] -->|OnClick| handler["FUN_01b674b0"]
    handler --> call1["FUN_004113f0"]
    handler --> call2["FUN_0065b870"]
    handler --> call3["FUN_0082a6c0"]
    handler --> call4["FUN_010e1a60"]
    handler --> call5["FUN_010e1b10"]
    handler --> call6["FUN_011390a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B674B0__FUN_01b674b0.c](../../../DecompiledSources/Tina16/functions/0000000001B674B0__FUN_01b674b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DC_CharMeasWin.StorageGroupBox.FStopBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:004113f0` — FUN_004113f0
- `function:0065b870` — FUN_0065b870
- `function:0082a6c0` — FUN_0082a6c0
- `function:010e1a60` — FUN_010e1a60
- `function:010e1b10` — FUN_010e1b10
- `function:011390a0` — FUN_011390a0
- `function:01b69a50` — FUN_01b69a50
- `function:01cc6020` — FUN_01cc6020
- `function:01cc6030` — FUN_01cc6030

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
