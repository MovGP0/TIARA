# eModel

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LocalLLMForm |
| Component path | LocalLLMForm.Panel1.eModel |
| Control class | TEdit |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | eModelClick |
| Handler address | 01a42420 |
| Graph node | `resource:dfm:LocalLLMForm/LocalLLMForm.Panel1.eModel` |
| Handler node | `function:01a42420` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["eModel"] -->|OnClick| handler["FUN_01a42420"]
    handler --> call1["FUN_01a42840"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A42420__FUN_01a42420.c](../../../DecompiledSources/Tina16/functions/0000000001A42420__FUN_01a42420.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LocalLLMForm.Panel1.eModel.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01a42840` — Handles 1 Delphi UI event: LocalLLMForm.Panel1.sbOptions.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Model: at distance 54.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
