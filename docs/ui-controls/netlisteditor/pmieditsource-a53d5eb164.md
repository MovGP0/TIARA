# &Edit Source

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.ListBoxPopup.pmiEditSource |
| Control class | TMenuItem |
| Caption | &Edit Source |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmiEditSourceClick |
| Handler address | 01534460 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.ListBoxPopup.pmiEditSource` |
| Handler node | `function:01534460` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Edit Source"] -->|OnClick| handler["FUN_01534460"]
    handler --> call1["FUN_015341c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001534460__FUN_01534460.c](../../../DecompiledSources/Tina16/functions/0000000001534460__FUN_01534460.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.ListBoxPopup.pmiEditSource.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:015341c0` — Handles 1 Delphi UI event: NetlistEditor.ListBox.OnDblClick.

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
