# Index

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EquEditor |
| Component path | EquEditor.EETPanel.EEIndxBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Index |
| Text | Not present in the recovered resource. |
| Handler name | EEIndxBtnClick |
| Handler address | 01464470 |
| Graph node | `resource:dfm:EquEditor/EquEditor.EETPanel.EEIndxBtn` |
| Handler node | `function:01464470` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Index"] -->|OnClick| handler["FUN_01464470"]
    handler --> call1["FUN_014641a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001464470__FUN_01464470.c](../../../DecompiledSources/Tina16/functions/0000000001464470__FUN_01464470.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EquEditor.EETPanel.EEIndxBtn.OnClick.
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
- Extracted glyph: [`0144_EquEditor_EquEditor_EETPanel_EEIndxBtn_Glyph_Data.png`](../../../glyph/0144_EquEditor_EquEditor_EETPanel_EEIndxBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
