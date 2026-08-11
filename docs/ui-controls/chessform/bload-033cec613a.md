# Load and play demo

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ChessForm |
| Component path | ChessForm.Panel1.bLoad |
| Control class | TButton |
| Caption | Load and play demo |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bLoadClick |
| Handler address | 01ba3dc0 |
| Graph node | `resource:dfm:ChessForm/ChessForm.Panel1.bLoad` |
| Handler node | `function:01ba3dc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Load and play demo"] -->|OnClick| handler["FUN_01ba3dc0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_004b6930"]
    handler --> call3["FUN_00724270"]
    handler --> call4["FUN_01ba42f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BA3DC0__FUN_01ba3dc0.c](../../../DecompiledSources/Tina16/functions/0000000001BA3DC0__FUN_01ba3dc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ChessForm.Panel1.bLoad.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004b6930` — FUN_004b6930
- `function:00724270` — FUN_00724270
- `function:01ba42f0` — FUN_01ba42f0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Status:  at distance 128.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
