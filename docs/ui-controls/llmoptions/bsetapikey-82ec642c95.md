# Set API Key

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LLMOptions |
| Component path | LLMOptions.bSetAPIKey |
| Control class | TButton |
| Caption | Set API Key |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bSetAPIKeyClick |
| Handler address | 019db210 |
| Graph node | `resource:dfm:LLMOptions/LLMOptions.bSetAPIKey` |
| Handler node | `function:019db210` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Set API Key"] -->|OnClick| handler["FUN_019db210"]
    handler --> call1["FUN_00664d10"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000019DB210__FUN_019db210.c](../../../DecompiledSources/Tina16/functions/00000000019DB210__FUN_019db210.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LLMOptions.bSetAPIKey.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00664d10` — FUN_00664d10

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Model:  at distance 481.
- Rank 2: Welcome message:  at distance 513.
- Rank 3: Extract instruction model: at distance 582.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
