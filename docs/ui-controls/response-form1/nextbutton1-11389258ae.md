# &Next

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.NEXTButton1 |
| Control class | TBitBtn |
| Caption | &Next |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NEXTButton1Click |
| Handler address | 011781a0 |
| Graph node | `resource:dfm:Response_form1/Response_form1.NEXTButton1` |
| Handler node | `function:011781a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Next"] -->|OnClick| handler["FUN_011781a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011781A0__FUN_011781a0.c](../../../DecompiledSources/Tina16/functions/00000000011781A0__FUN_011781a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Response_form1.NEXTButton1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: 8
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0319_Response_form1_Response_form1_NEXTButton1_Glyph_Data.png`](../../../glyph/0319_Response_form1_Response_form1_NEXTButton1_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
