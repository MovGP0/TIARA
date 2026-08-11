# Current

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CspEditorDlg |
| Component path | CspEditorDlg.pnlIO.gbxOutput.rbtnCurrent |
| Control class | TRadioButton |
| Caption | Current |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbtnCurrentClick |
| Handler address | 01402e60 |
| Graph node | `resource:dfm:CspEditorDlg/CspEditorDlg.pnlIO.gbxOutput.rbtnCurrent` |
| Handler node | `function:01402e60` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Current"] -->|OnClick| handler["FUN_01402e60"]
    handler --> call1["FUN_01402e30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001402E60__FUN_01402e60.c](../../../DecompiledSources/Tina16/functions/0000000001402E60__FUN_01402e60.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CspEditorDlg.pnlIO.gbxOutput.rbtnCurrent.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01402e30` — Handles 1 Delphi UI event: CspEditorDlg.pnlIO.gbxInput.iedVoltages.OnChange.

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
