# Set OpenRouter API Key...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LLMOptions |
| Component path | LLMOptions.pmSetAPIKey.mnSetOpenRouterAPIKey |
| Control class | TMenuItem |
| Caption | Set OpenRouter API Key... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSetOpenRouterAPIKeyClick |
| Handler address | 019db430 |
| Graph node | `resource:dfm:LLMOptions/LLMOptions.pmSetAPIKey.mnSetOpenRouterAPIKey` |
| Handler node | `function:019db430` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Set OpenRouter API Key..."] -->|OnClick| handler["FUN_019db430"]
    handler --> call1["FUN_019db260"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000019DB430__FUN_019db430.c](../../../DecompiledSources/Tina16/functions/00000000019DB430__FUN_019db430.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LLMOptions.pmSetAPIKey.mnSetOpenRouterAPIKey.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:019db260` — FUN_019db260

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
