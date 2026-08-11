# Show time diagram

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | tables_form |
| Component path | tables_form.Time_f |
| Control class | TButton |
| Caption | Show time diagram |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Time_fClick |
| Handler address | 011ac1d0 |
| Graph node | `resource:dfm:tables_form/tables_form.Time_f` |
| Handler node | `function:011ac1d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Show time diagram"] -->|OnClick| handler["FUN_011ac1d0"]
    handler --> call1["FUN_0040c770"]
    handler --> call2["FUN_00526500"]
    handler --> call3["FUN_008059a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011AC1D0__FUN_011ac1d0.c](../../../DecompiledSources/Tina16/functions/00000000011AC1D0__FUN_011ac1d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: tables_form.Time_f.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0040c770` — FUN_0040c770
- `function:00526500` — FUN_00526500
- `function:008059a0` — FUN_008059a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Meret: at distance 95.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
