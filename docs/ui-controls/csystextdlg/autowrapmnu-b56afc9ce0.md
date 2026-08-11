# Wrap lines

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.TTPopupMnu.AutoWrapMnu |
| Control class | TMenuItem |
| Caption | Wrap lines |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | AutoWrapMnuClick |
| Handler address | 0146c620 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.TTPopupMnu.AutoWrapMnu` |
| Handler node | `function:0146c620` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Wrap lines"] -->|OnClick| handler["FUN_0146c620"]
    handler --> call1["FUN_00682ee0"]
    handler --> call2["FUN_00682f00"]
    handler --> call3["FUN_007e2d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146C620__FUN_0146c620.c](../../../DecompiledSources/Tina16/functions/000000000146C620__FUN_0146c620.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.TTPopupMnu.AutoWrapMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00682ee0` — FUN_00682ee0
- `function:00682f00` — FUN_00682f00
- `function:007e2d20` — FUN_007e2d20

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
