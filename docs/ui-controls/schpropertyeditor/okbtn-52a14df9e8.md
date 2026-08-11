# OKBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchPropertyEditor |
| Component path | SchPropertyEditor.BottomPanel.OKBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OKBtnClick |
| Handler address | 00f42dd0 |
| Graph node | `resource:dfm:SchPropertyEditor/SchPropertyEditor.BottomPanel.OKBtn` |
| Handler node | `function:00f42dd0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["OKBtn"] -->|OnClick| handler["FUN_00f42dd0"]
    handler --> call1["FUN_00805200"]
    handler --> call2["FUN_00b0a890"]
    handler --> call3["FUN_00b0a960"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000F42DD0__FUN_00f42dd0.c](../../../DecompiledSources/Tina16/functions/0000000000F42DD0__FUN_00f42dd0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchPropertyEditor.BottomPanel.OKBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00805200` — FUN_00805200
- `function:00b0a890` — FUN_00b0a890
- `function:00b0a960` — FUN_00b0a960

## Resource evidence

- Kind: bkOK
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
