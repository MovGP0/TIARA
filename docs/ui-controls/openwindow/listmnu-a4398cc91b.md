# List

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | OpenWindow |
| Component path | OpenWindow.ListPopupMnu.ListMnu |
| Control class | TMenuItem |
| Caption | List |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ListMnuClick |
| Handler address | 014bebc0 |
| Graph node | `resource:dfm:OpenWindow/OpenWindow.ListPopupMnu.ListMnu` |
| Handler node | `function:014bebc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["List"] -->|OnClick| handler["FUN_014bebc0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014BEBC0__FUN_014bebc0.c](../../../DecompiledSources/Tina16/functions/00000000014BEBC0__FUN_014bebc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: OpenWindow.ListPopupMnu.ListMnu.OnClick.
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

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
