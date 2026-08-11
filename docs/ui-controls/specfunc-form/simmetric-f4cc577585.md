# Symmetric

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SpecFunc_form |
| Component path | SpecFunc_form.Simmetric |
| Control class | TRadioButton |
| Caption | Symmetric |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SimmetricClick |
| Handler address | 011aa540 |
| Graph node | `resource:dfm:SpecFunc_form/SpecFunc_form.Simmetric` |
| Handler node | `function:011aa540` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Symmetric"] -->|OnClick| handler["FUN_011aa540"]
    handler --> call1["FUN_0064dbe0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011AA540__FUN_011aa540.c](../../../DecompiledSources/Tina16/functions/00000000011AA540__FUN_011aa540.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SpecFunc_form.Simmetric.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0

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
