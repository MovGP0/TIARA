# Scalable Vector Graphics...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EquEditor |
| Component path | EquEditor.EEMenu.EEFileMnu.EEExportMnu.EESVGMnu |
| Control class | TMenuItem |
| Caption | Scalable Vector Graphics... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | EESVGMnuClick |
| Handler address | 01464520 |
| Graph node | `resource:dfm:EquEditor/EquEditor.EEMenu.EEFileMnu.EEExportMnu.EESVGMnu` |
| Handler node | `function:01464520` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Scalable Vector Graphics..."] -->|OnClick| handler["FUN_01464520"]
    handler --> call1["FUN_01463140"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001464520__FUN_01464520.c](../../../DecompiledSources/Tina16/functions/0000000001464520__FUN_01464520.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EquEditor.EEMenu.EEFileMnu.EEExportMnu.EESVGMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01463140` — FUN_01463140

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
