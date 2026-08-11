# Use board &template

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PCBWizard |
| Component path | PCBWizard.pnlTemplate.rbTemplate |
| Control class | TRadioButton |
| Caption | Use board &template |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbTemplateClick |
| Handler address | 01bb2b10 |
| Graph node | `resource:dfm:PCBWizard/PCBWizard.pnlTemplate.rbTemplate` |
| Handler node | `function:01bb2b10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Use board &template"] -->|OnClick| handler["FUN_01bb2b10"]
    handler --> call1["FUN_01bb3de0"]
    handler --> call2["FUN_01bb3e80"]
    handler --> call3["FUN_01bb3f00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BB2B10__FUN_01bb2b10.c](../../../DecompiledSources/Tina16/functions/0000000001BB2B10__FUN_01bb2b10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PCBWizard.pnlTemplate.rbTemplate.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:01bb3de0` — FUN_01bb3de0
- `function:01bb3e80` — FUN_01bb3e80
- `function:01bb3f00` — FUN_01bb3f00

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Board &width at distance 115.
- Rank 2: Board &height at distance 141.
- Rank 3: (inch) at distance 322.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
