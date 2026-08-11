# Start

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LLMAutoTest |
| Component path | LLMAutoTest.bStart |
| Control class | TBitBtn |
| Caption | Start |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bStartClick |
| Handler address | 019ce470 |
| Graph node | `resource:dfm:LLMAutoTest/LLMAutoTest.bStart` |
| Handler node | `function:019ce470` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Start"] -->|OnClick| handler["FUN_019ce470"]
    handler --> call1["FUN_01a593b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000019CE470__FUN_019ce470.c](../../../DecompiledSources/Tina16/functions/00000000019CE470__FUN_019ce470.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LLMAutoTest.bStart.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01a593b0` — FUN_01a593b0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: lErrors at distance 225.
- Rank 2: Label1 at distance 250.
- Rank 3: lConfigs at distance 275.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
