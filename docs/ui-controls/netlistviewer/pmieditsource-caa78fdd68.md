# &Edit Source

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.ListBoxPopup.pmiEditSource |
| Control class | TMenuItem |
| Caption | &Edit Source |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmiEditSourceClick |
| Handler address | 014b6790 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.ListBoxPopup.pmiEditSource` |
| Handler node | `function:014b6790` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Edit Source"] -->|OnClick| handler["FUN_014b6790"]
    handler --> call1["FUN_014b64f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B6790__FUN_014b6790.c](../../../DecompiledSources/Tina16/functions/00000000014B6790__FUN_014b6790.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistViewer.ListBoxPopup.pmiEditSource.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014b64f0` — Handles 1 Delphi UI event: NetlistViewer.ListBox.OnDblClick.

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
