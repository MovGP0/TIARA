# Time

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DigitalSignalGeneratorWin |
| Component path | DigitalSignalGeneratorWin.ClockGroupBox.XAxisTimeSpBtn |
| Control class | TSpeedButton |
| Caption | Time |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | XAxisTimeSpBtnClick |
| Handler address | 01512d60 |
| Graph node | `resource:dfm:DigitalSignalGeneratorWin/DigitalSignalGeneratorWin.ClockGroupBox.XAxisTimeSpBtn` |
| Handler node | `function:01512d60` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Time"] -->|OnClick| handler["FUN_01512d60"]
    handler --> call1["FUN_010eb4a0"]
    handler --> call2["FUN_010f6920"]
    handler --> call3["FUN_01506ac0"]
    handler --> call4["FUN_01506c70"]
    handler --> call5["FUN_01513140"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001512D60__FUN_01512d60.c](../../../DecompiledSources/Tina16/functions/0000000001512D60__FUN_01512d60.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DigitalSignalGeneratorWin.ClockGroupBox.XAxisTimeSpBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:010eb4a0` — FUN_010eb4a0
- `function:010f6920` — FUN_010f6920
- `function:01506ac0` — FUN_01506ac0
- `function:01506c70` — FUN_01506c70
- `function:01513140` — FUN_01513140

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: X : at distance 21.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
