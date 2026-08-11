# Cancel

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxProgress |
| Component path | frxProgress.Panel1.CancelB |
| Control class | TButton |
| Caption | Cancel |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CancelBClick |
| Handler address | 0181ccc0 |
| Graph node | `resource:dfm:frxProgress/frxProgress.Panel1.CancelB` |
| Handler node | `function:0181ccc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Cancel"] -->|OnClick| handler["FUN_0181ccc0"]
    handler --> call1["FUN_0181ccd0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000181CCC0__FUN_0181ccc0.c](../../../DecompiledSources/Tina16/functions/000000000181CCC0__FUN_0181ccc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxProgress.Panel1.CancelB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0181ccd0` — FUN_0181ccd0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: 2
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: LMessage at distance 137.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
