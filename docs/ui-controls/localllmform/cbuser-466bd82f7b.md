# cbUser

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LocalLLMForm |
| Component path | LocalLLMForm.cbUser |
| Control class | TComboBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | cbUserClick |
| Handler address | 01a52f60 |
| Graph node | `resource:dfm:LocalLLMForm/LocalLLMForm.cbUser` |
| Handler node | `function:01a52f60` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["cbUser"] -->|OnClick| handler["FUN_01a52f60"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["VCL control text setter with change suppression"]
    handler --> call3["FUN_01a47dd0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A52F60__FUN_01a52f60.c](../../../DecompiledSources/Tina16/functions/0000000001A52F60__FUN_01a52f60.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LocalLLMForm.cbUser.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064de00` — VCL control text setter with change suppression
- `function:01a47dd0` — FUN_01a47dd0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: User: at distance 22.
- Rank 2: Chat:  at distance 443.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
