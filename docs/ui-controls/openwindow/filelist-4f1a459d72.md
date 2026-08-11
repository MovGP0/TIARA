# FileList

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | OpenWindow |
| Component path | OpenWindow.CenterPanel.FileList |
| Control class | TListView |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FileListClick |
| Handler address | 014bf0a0 |
| Graph node | `resource:dfm:OpenWindow/OpenWindow.CenterPanel.FileList` |
| Handler node | `function:014bf0a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["FileList"] -->|OnClick| handler["FUN_014bf0a0"]
    handler --> call1["FUN_014bebe0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014BF0A0__FUN_014bf0a0.c](../../../DecompiledSources/Tina16/functions/00000000014BF0A0__FUN_014bf0a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: OpenWindow.CenterPanel.FileList.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014bebe0` — FUN_014bebe0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: File: at distance 18.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
