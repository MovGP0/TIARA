# Remove

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ManageElfProjects |
| Component path | ManageElfProjects.bRemove |
| Control class | TButton |
| Caption | Remove |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bRemoveClick |
| Handler address | 015e5490 |
| Graph node | `resource:dfm:ManageElfProjects/ManageElfProjects.bRemove` |
| Handler node | `function:015e5490` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Remove"] -->|OnClick| handler["FUN_015e5490"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015E5490__FUN_015e5490.c](../../../DecompiledSources/Tina16/functions/00000000015E5490__FUN_015e5490.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ManageElfProjects.bRemove.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper

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
