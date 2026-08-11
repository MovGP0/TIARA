# Show '0'

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VK_form |
| Component path | VK_form.GroupBox1.kell_nulla |
| Control class | TCheckBox |
| Caption | Show '0' |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | kell_nullaClick |
| Handler address | 011d2d40 |
| Graph node | `resource:dfm:VK_form/VK_form.GroupBox1.kell_nulla` |
| Handler node | `function:011d2d40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Show '0'"] -->|OnClick| handler["FUN_011d2d40"]
    handler --> call1["Karnaugh-map renderer and simplified-expression generator"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011D2D40__FUN_011d2d40.c](../../../DecompiledSources/Tina16/functions/00000000011D2D40__FUN_011d2d40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VK_form.GroupBox1.kell_nulla.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:011ae5b0` — Karnaugh-map renderer and simplified-expression generator

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Don't care at distance 48.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
