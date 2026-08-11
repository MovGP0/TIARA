# BitBtn2

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Function_wind_form |
| Component path | Function_wind_form.BitBtn2 |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BitBtn2Click |
| Handler address | 01b2acd0 |
| Graph node | `resource:dfm:Function_wind_form/Function_wind_form.BitBtn2` |
| Handler node | `function:01b2acd0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["BitBtn2"] -->|OnClick| handler["FUN_01b2acd0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B2ACD0__FUN_01b2acd0.c](../../../DecompiledSources/Tina16/functions/0000000001B2ACD0__FUN_01b2acd0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Function_wind_form.BitBtn2.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: bkHelp
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Simplified maxterm at distance 603.
- Rank 2: Simplified minterm at distance 623.
- Rank 3: Maxterm at distance 643.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
