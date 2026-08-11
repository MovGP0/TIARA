# Nodal Voltages

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | TinaAskVoltagesDlg |
| Component path | TinaAskVoltagesDlg.BtnPanel.GroupBox1.VoltagesCB |
| Control class | TCheckBox |
| Caption | Nodal Voltages |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FilterCBClick |
| Handler address | 012b8950 |
| Graph node | `resource:dfm:TinaAskVoltagesDlg/TinaAskVoltagesDlg.BtnPanel.GroupBox1.VoltagesCB` |
| Handler node | `function:012b8950` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Nodal Voltages"] -->|OnClick| handler["FUN_012b8950"]
    handler --> call1["FUN_012b6470"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012B8950__FUN_012b8950.c](../../../DecompiledSources/Tina16/functions/00000000012B8950__FUN_012b8950.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 4 Delphi UI events: TinaAskVoltagesDlg.BtnPanel.GroupBox1.VoltagesCB.OnClick, TinaAskVoltagesDlg.BtnPanel.GroupBox1.OtherVCB.OnClick, TinaAskVoltagesDlg.BtnPanel.GroupBox1.CurrentsCB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:012b6470` — FUN_012b6470

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
