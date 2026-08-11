# Implicant number

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VK_form |
| Component path | VK_form.GroupBox1.Check_M_ind |
| Control class | TCheckBox |
| Caption | Implicant number |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Check_M_indClick |
| Handler address | 011d2ce0 |
| Graph node | `resource:dfm:VK_form/VK_form.GroupBox1.Check_M_ind` |
| Handler node | `function:011d2ce0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Implicant number"] -->|OnClick| handler["FUN_011d2ce0"]
    handler --> call1["Karnaugh-map renderer and simplified-expression generator"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011D2CE0__FUN_011d2ce0.c](../../../DecompiledSources/Tina16/functions/00000000011D2CE0__FUN_011d2ce0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VK_form.GroupBox1.Check_M_ind.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:011ae5b0` — Karnaugh-map renderer and simplified-expression generator

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Don't care at distance 29.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
