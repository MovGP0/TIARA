# Load Instructions...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LLMOptions |
| Component path | LLMOptions.MainMenu1.Tools1.mnLoadInstructions |
| Control class | TMenuItem |
| Caption | Load Instructions... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnLoadInstructionsClick |
| Handler address | 019da250 |
| Graph node | `resource:dfm:LLMOptions/LLMOptions.MainMenu1.Tools1.mnLoadInstructions` |
| Handler node | `function:019da250` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Load Instructions..."] -->|OnClick| handler["FUN_019da250"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00416ba0"]
    handler --> call3["FUN_00724270"]
    handler --> call4["FUN_00724300"]
    handler --> call5["FUN_00724420"]
    handler --> call6["FUN_019da490"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000019DA250__FUN_019da250.c](../../../DecompiledSources/Tina16/functions/00000000019DA250__FUN_019da250.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LLMOptions.MainMenu1.Tools1.mnLoadInstructions.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416ba0` — FUN_00416ba0
- `function:00724270` — FUN_00724270
- `function:00724300` — FUN_00724300
- `function:00724420` — FUN_00724420
- `function:019da490` — FUN_019da490

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
