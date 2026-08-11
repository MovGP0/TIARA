# Store macro by content

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MacroPropertiesForm |
| Component path | MacroPropertiesForm.btnChangeStorageMode |
| Control class | TButton |
| Caption | Store macro by content |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnChangeStorageModeClick |
| Handler address | 01b92440 |
| Graph node | `resource:dfm:MacroPropertiesForm/MacroPropertiesForm.btnChangeStorageMode` |
| Handler node | `function:01b92440` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Store macro by content"] -->|OnClick| handler["FUN_01b92440"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B92440__FUN_01b92440.c](../../../DecompiledSources/Tina16/functions/0000000001B92440__FUN_01b92440.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MacroPropertiesForm.btnChangeStorageMode.OnClick.
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

- Rank 1: &Shape: at distance 260.
- Rank 2: C&ontent: at distance 291.
- Rank 3: &Name: at distance 322.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
