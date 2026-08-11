# Set &Font...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.PopupMenu.pmiSetFont |
| Control class | TMenuItem |
| Caption | Set &Font... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmiSetFontClick |
| Handler address | 01127440 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.PopupMenu.pmiSetFont` |
| Handler node | `function:01127440` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Set &Font..."] -->|OnClick| handler["FUN_01127440"]
    handler --> call1["FUN_00725900"]
    handler --> call2["FUN_00bf2c10"]
    handler --> call3["FUN_00bfafa0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001127440__FUN_01127440.c](../../../DecompiledSources/Tina16/functions/0000000001127440__FUN_01127440.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.PopupMenu.pmiSetFont.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00725900` — FUN_00725900
- `function:00bf2c10` — FUN_00bf2c10
- `function:00bfafa0` — FUN_00bfafa0

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
