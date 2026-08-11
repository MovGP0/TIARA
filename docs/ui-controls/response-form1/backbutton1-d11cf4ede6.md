# &Back

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.BackButton1 |
| Control class | TBitBtn |
| Caption | &Back |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BackButton1Click |
| Handler address | 01178190 |
| Graph node | `resource:dfm:Response_form1/Response_form1.BackButton1` |
| Handler node | `function:01178190` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Back"] -->|OnClick| handler["FUN_01178190"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001178190__FUN_01178190.c](../../../DecompiledSources/Tina16/functions/0000000001178190__FUN_01178190.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Response_form1.BackButton1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0318_Response_form1_Response_form1_BackButton1_Glyph_Data.png`](../../../glyph/0318_Response_form1_Response_form1_BackButton1_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
