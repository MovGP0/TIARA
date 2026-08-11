# Button3

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | kiiro_form |
| Component path | kiiro_form.Button3 |
| Control class | TButton |
| Caption | Button3 |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Button3Click |
| Handler address | 011980e0 |
| Graph node | `resource:dfm:kiiro_form/kiiro_form.Button3` |
| Handler node | `function:011980e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Button3"] -->|OnClick| handler["FUN_011980e0"]
    handler --> call1["FUN_0064cbf0"]
    handler --> call2["FUN_0064cc50"]
    handler --> call3["FUN_0064dbe0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011980E0__FUN_011980e0.c](../../../DecompiledSources/Tina16/functions/00000000011980E0__FUN_011980e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: kiiro_form.Button3.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0064cbf0` — FUN_0064cbf0
- `function:0064cc50` — FUN_0064cc50
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
