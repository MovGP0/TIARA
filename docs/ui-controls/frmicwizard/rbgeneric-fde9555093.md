# Generic

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmICWizard |
| Component path | frmICWizard.gbPinLayout.rbGeneric |
| Control class | TRadioButton |
| Caption | Generic |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbGenericClick |
| Handler address | 01784e00 |
| Graph node | `resource:dfm:frmICWizard/frmICWizard.gbPinLayout.rbGeneric` |
| Handler node | `function:01784e00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Generic"] -->|OnClick| handler["FUN_01784e00"]
    handler --> call1["FUN_006ec320"]
    handler --> call2["FUN_00f04fa0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001784E00__FUN_01784e00.c](../../../DecompiledSources/Tina16/functions/0000000001784E00__FUN_01784e00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmICWizard.gbPinLayout.rbGeneric.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:006ec320` — FUN_006ec320
- `function:00f04fa0` — FUN_00f04fa0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Number of pins at distance 44.
- Rank 2: Color of pin labels at distance 71.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
