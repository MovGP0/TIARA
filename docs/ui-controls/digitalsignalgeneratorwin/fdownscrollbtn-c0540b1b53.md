# Scroll down

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DigitalSignalGeneratorWin |
| Component path | DigitalSignalGeneratorWin.DisplayGroupBox.FDownScrollBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Scroll down |
| Text | Not present in the recovered resource. |
| Handler name | DownScrollBtnClick |
| Handler address | 01510340 |
| Graph node | `resource:dfm:DigitalSignalGeneratorWin/DigitalSignalGeneratorWin.DisplayGroupBox.FDownScrollBtn` |
| Handler node | `function:01510340` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Scroll down"] -->|OnClick| handler["FUN_01510340"]
    handler --> call1["FUN_01506f50"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001510340__FUN_01510340.c](../../../DecompiledSources/Tina16/functions/0000000001510340__FUN_01510340.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DigitalSignalGeneratorWin.DisplayGroupBox.FDownScrollBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01506f50` — FUN_01506f50

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0114_DigitalSignalGeneratorWin_DigitalSignalGeneratorWin_DisplayGroupBox_FDownScrollBtn_Glyph_Data.png`](../../../glyph/0114_DigitalSignalGeneratorWin_DigitalSignalGeneratorWin_DisplayGroupBox_FDownScrollBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
