# Scroll up

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LogicAnalyzerWin |
| Component path | LogicAnalyzerWin.DisplayGroupBox.FUpScrollBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Scroll up |
| Text | Not present in the recovered resource. |
| Handler name | UpScrollBtnClick |
| Handler address | 015202a0 |
| Graph node | `resource:dfm:LogicAnalyzerWin/LogicAnalyzerWin.DisplayGroupBox.FUpScrollBtn` |
| Handler node | `function:015202a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Scroll up"] -->|OnClick| handler["FUN_015202a0"]
    handler --> call1["FUN_01506f30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015202A0__FUN_015202a0.c](../../../DecompiledSources/Tina16/functions/00000000015202A0__FUN_015202a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LogicAnalyzerWin.DisplayGroupBox.FUpScrollBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01506f30` — FUN_01506f30

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0242_LogicAnalyzerWin_LogicAnalyzerWin_DisplayGroupBox_FUpScrollBtn_Glyph_Data.png`](../../../glyph/0242_LogicAnalyzerWin_LogicAnalyzerWin_DisplayGroupBox_FUpScrollBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
