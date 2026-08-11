# Save...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FilterDesign |
| Component path | FilterDesign.bSave |
| Control class | TButton |
| Caption | Save... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bSaveClick |
| Handler address | 019d5090 |
| Graph node | `resource:dfm:FilterDesign/FilterDesign.bSave` |
| Handler node | `function:019d5090` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save..."] -->|OnClick| handler["FUN_019d5090"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00724270"]
    handler --> call3["FUN_019d45b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000019D5090__FUN_019d5090.c](../../../DecompiledSources/Tina16/functions/00000000019D5090__FUN_019d5090.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FilterDesign.bSave.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00724270` — FUN_00724270
- `function:019d45b0` — FUN_019d45b0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Type: at distance 913.
- Rank 2: Approximation: at distance 942.
- Rank 3: Label1 at distance 970.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
