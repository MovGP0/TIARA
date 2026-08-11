# Scroll right

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DigitalSignalGeneratorWin |
| Component path | DigitalSignalGeneratorWin.DisplayGroupBox.FRightScrollBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Scroll right |
| Text | Not present in the recovered resource. |
| Handler name | RightScrollBtnClick |
| Handler address | 01510350 |
| Graph node | `resource:dfm:DigitalSignalGeneratorWin/DigitalSignalGeneratorWin.DisplayGroupBox.FRightScrollBtn` |
| Handler node | `function:01510350` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Scroll right"] -->|OnClick| handler["FUN_01510350"]
    handler --> call1["Shared display right-scroll bridge"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001510350__FUN_01510350.c](../../../DecompiledSources/Tina16/functions/0000000001510350__FUN_01510350.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DigitalSignalGeneratorWin.DisplayGroupBox.FRightScrollBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01506f70` — Shared display right-scroll bridge

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0116_DigitalSignalGeneratorWin_DigitalSignalGeneratorWin_DisplayGroupBox_FRightScrollBtn_Glyph_Data.png`](../../../glyph/0116_DigitalSignalGeneratorWin_DigitalSignalGeneratorWin_DisplayGroupBox_FRightScrollBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
