# Properties...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPrintDialog |
| Component path | frxPrintDialog.Label12.PropButton |
| Control class | TButton |
| Caption | Properties... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PropButtonClick |
| Handler address | 018b35f0 |
| Graph node | `resource:dfm:frxPrintDialog/frxPrintDialog.Label12.PropButton` |
| Handler node | `function:018b35f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Properties..."] -->|OnClick| handler["FUN_018b35f0"]
    handler --> call1["FUN_0188d190"]
    handler --> call2["FUN_0188d920"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018B35F0__FUN_018b35f0.c](../../../DecompiledSources/Tina16/functions/00000000018B35F0__FUN_018b35f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPrintDialog.Label12.PropButton.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0188d190` — FUN_0188d190
- `function:0188d920` — FUN_0188d920

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: WhereL1 at distance 416.
- Rank 2: Name: at distance 440.
- Rank 3: Where: at distance 468.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
