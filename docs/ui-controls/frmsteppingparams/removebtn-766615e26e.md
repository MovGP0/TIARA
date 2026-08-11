# Remove

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmSteppingParams |
| Component path | frmSteppingParams.RemoveBtn |
| Control class | TBitBtn |
| Caption | Remove |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | RemoveBtnClick |
| Handler address | 01439890 |
| Graph node | `resource:dfm:frmSteppingParams/frmSteppingParams.RemoveBtn` |
| Handler node | `function:01439890` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Remove"] -->|OnClick| handler["FUN_01439890"]
    handler --> call1["FUN_004095f0"]
    handler --> call2["Nil-safe Delphi object destruction helper"]
    handler --> call3["FUN_004ae870"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001439890__FUN_01439890.c](../../../DecompiledSources/Tina16/functions/0000000001439890__FUN_01439890.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmSteppingParams.RemoveBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:004095f0` — FUN_004095f0
- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004ae870` — FUN_004ae870

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: 1
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
