# Re-check

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ERCForm |
| Component path | ERCForm.btnCheck |
| Control class | TButton |
| Caption | Re-check |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnCheckClick |
| Handler address | 014b7800 |
| Graph node | `resource:dfm:ERCForm/ERCForm.btnCheck` |
| Handler node | `function:014b7800` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Re-check"] -->|OnClick| handler["FUN_014b7800"]
    handler --> call1["FUN_014b7750"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B7800__FUN_014b7800.c](../../../DecompiledSources/Tina16/functions/00000000014B7800__FUN_014b7800.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ERCForm.btnCheck.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014b7750` — FUN_014b7750

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Click any of the errors/warnings above to highlight the questionable wires or components in the schematic editor. at distance 253.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
