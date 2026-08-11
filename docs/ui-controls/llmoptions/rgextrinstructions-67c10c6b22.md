# Extract Instructions

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LLMOptions |
| Component path | LLMOptions.rgExtrInstructions |
| Control class | TRadioGroup |
| Caption | Extract Instructions |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rgExtrInstructionsClick |
| Handler address | 019dba30 |
| Graph node | `resource:dfm:LLMOptions/LLMOptions.rgExtrInstructions` |
| Handler node | `function:019dba30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Extract Instructions"] -->|OnClick| handler["FUN_019dba30"]
    handler --> call1["FUN_019db970"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000019DBA30__FUN_019dba30.c](../../../DecompiledSources/Tina16/functions/00000000019DBA30__FUN_019dba30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LLMOptions.rgExtrInstructions.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:019db970` — FUN_019db970

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("Fast  LLM", "Selected LLM", "Without LLM")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Extract instruction model: at distance 87.
- Rank 2: Tina LLM version:   at distance 143.
- Rank 3: History size:  at distance 371.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
