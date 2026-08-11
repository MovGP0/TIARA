# &Remove messages

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.ListBoxPopup.pmiRemoveMessages |
| Control class | TMenuItem |
| Caption | &Remove messages |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmiRemoveMessagesClick |
| Handler address | 014b67a0 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.ListBoxPopup.pmiRemoveMessages` |
| Handler node | `function:014b67a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Remove messages"] -->|OnClick| handler["FUN_014b67a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B67A0__FUN_014b67a0.c](../../../DecompiledSources/Tina16/functions/00000000014B67A0__FUN_014b67a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistViewer.ListBoxPopup.pmiRemoveMessages.OnClick.
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
