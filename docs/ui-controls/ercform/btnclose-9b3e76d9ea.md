# Close

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ERCForm |
| Component path | ERCForm.btnClose |
| Control class | TButton |
| Caption | Close |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnCloseClick |
| Handler address | 014b78c0 |
| Graph node | `resource:dfm:ERCForm/ERCForm.btnClose` |
| Handler node | `function:014b78c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Close"] -->|OnClick| handler["FUN_014b78c0"]
    handler --> call1["FUN_00805990"]
    handler --> call2["FUN_01d44460"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B78C0__FUN_014b78c0.c](../../../DecompiledSources/Tina16/functions/00000000014B78C0__FUN_014b78c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ERCForm.btnClose.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00805990` — FUN_00805990
- `function:01d44460` — FUN_01d44460

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Click any of the errors/warnings above to highlight the questionable wires or components in the schematic editor. at distance 360.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
