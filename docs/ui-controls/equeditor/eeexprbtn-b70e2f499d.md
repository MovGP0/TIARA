# View

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EquEditor |
| Component path | EquEditor.EETPanel.EEExprBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | View |
| Text | Not present in the recovered resource. |
| Handler name | EEExprBtnClick |
| Handler address | 01463d20 |
| Graph node | `resource:dfm:EquEditor/EquEditor.EETPanel.EEExprBtn` |
| Handler node | `function:01463d20` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["View"] -->|OnClick| handler["FUN_01463d20"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0082a6c0"]
    handler --> call3["FUN_014635d0"]
    handler --> call4["FUN_01aed550"]
    handler --> call5["FUN_01aee720"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001463D20__FUN_01463d20.c](../../../DecompiledSources/Tina16/functions/0000000001463D20__FUN_01463d20.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EquEditor.EETPanel.EEExprBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0082a6c0` — FUN_0082a6c0
- `function:014635d0` — FUN_014635d0
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0137_EquEditor_EquEditor_EETPanel_EEExprBtn_Glyph_Data.png`](../../../glyph/0137_EquEditor_EquEditor_EETPanel_EEExprBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
