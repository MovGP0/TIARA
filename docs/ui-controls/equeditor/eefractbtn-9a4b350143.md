# Fraction

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EquEditor |
| Component path | EquEditor.EETPanel.EEFractBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Fraction |
| Text | Not present in the recovered resource. |
| Handler name | EEFractBtnClick |
| Handler address | 01464370 |
| Graph node | `resource:dfm:EquEditor/EquEditor.EETPanel.EEFractBtn` |
| Handler node | `function:01464370` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Fraction"] -->|OnClick| handler["FUN_01464370"]
    handler --> call1["FUN_014641a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001464370__FUN_01464370.c](../../../DecompiledSources/Tina16/functions/0000000001464370__FUN_01464370.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EquEditor.EETPanel.EEFractBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014641a0` — FUN_014641a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0139_EquEditor_EquEditor_EETPanel_EEFractBtn_Glyph_Data.png`](../../../glyph/0139_EquEditor_EquEditor_EETPanel_EEFractBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
