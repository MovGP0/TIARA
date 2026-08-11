# Move D&own

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Component path | PcbForm.Panel1.BtnMoveDown |
| Control class | TBitBtn |
| Caption | Move D&own |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnMoveDownClick |
| Handler address | 00ece4f0 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel1.BtnMoveDown` |
| Handler node | `function:00ece4f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Move D&own"] -->|OnClick| handler["FUN_00ece4f0"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416ad0"]
    handler --> call3["FUN_00416dc0"]
    handler --> call4["FUN_00416e20"]
    handler --> call5["FUN_004170c0"]
    handler --> call6["FUN_00ea9ca0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000ECE4F0__FUN_00ece4f0.c](../../../DecompiledSources/Tina16/functions/0000000000ECE4F0__FUN_00ece4f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm.Panel1.BtnMoveDown.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416ad0` — FUN_00416ad0
- `function:00416dc0` — FUN_00416dc0
- `function:00416e20` — FUN_00416e20
- `function:004170c0` — FUN_004170c0
- `function:00ea9ca0` — FUN_00ea9ca0
- `function:00ed3300` — FUN_00ed3300

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1:  Valid node at distance 122.
- Rank 2: Swapped node at distance 142.
- Rank 3: Invalid node at distance 163.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
