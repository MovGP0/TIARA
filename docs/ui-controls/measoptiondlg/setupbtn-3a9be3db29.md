# &HW Setup...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MeasOptionDlg |
| Component path | MeasOptionDlg.SetupBtn |
| Control class | TBitBtn |
| Caption | &HW Setup... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SetupBtnClick |
| Handler address | 01b712d0 |
| Graph node | `resource:dfm:MeasOptionDlg/MeasOptionDlg.SetupBtn` |
| Handler node | `function:01b712d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&HW Setup..."] -->|OnClick| handler["FUN_01b712d0"]
    handler --> call1["FUN_00e1dce0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B712D0__FUN_01b712d0.c](../../../DecompiledSources/Tina16/functions/0000000001B712D0__FUN_01b712d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MeasOptionDlg.SetupBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00e1dce0` — FUN_00e1dce0

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
