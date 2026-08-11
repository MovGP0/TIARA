# Aloud

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LocalLLMForm |
| Component path | LocalLLMForm.cbAloud |
| Control class | TCheckBox |
| Caption | Aloud |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | cbAloudClick |
| Handler address | 01a40a90 |
| Graph node | `resource:dfm:LocalLLMForm/LocalLLMForm.cbAloud` |
| Handler node | `function:01a40a90` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Aloud"] -->|OnClick| handler["FUN_01a40a90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A40A90__FUN_01a40a90.c](../../../DecompiledSources/Tina16/functions/0000000001A40A90__FUN_01a40a90.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LocalLLMForm.cbAloud.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Chat:  at distance 472.
- Rank 2: User: at distance 893.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
