# OKBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ParStepListEditor |
| Component path | ParStepListEditor.OKBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OKBtnClick |
| Handler address | 014377e0 |
| Graph node | `resource:dfm:ParStepListEditor/ParStepListEditor.OKBtn` |
| Handler node | `function:014377e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["OKBtn"] -->|OnClick| handler["FUN_014377e0"]
    handler --> call1["FUN_00b0a890"]
    handler --> call2["FUN_01d0efe0"]
    handler --> call3["FUN_01d0f0e0"]
    handler --> call4["FUN_01d0f160"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014377E0__FUN_014377e0.c](../../../DecompiledSources/Tina16/functions/00000000014377E0__FUN_014377e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ParStepListEditor.OKBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00b0a890` — FUN_00b0a890
- `function:01d0efe0` — FUN_01d0efe0
- `function:01d0f0e0` — FUN_01d0f0e0
- `function:01d0f160` — FUN_01d0f160

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Parameter # at distance 193.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
