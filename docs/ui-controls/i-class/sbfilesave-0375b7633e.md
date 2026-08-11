# Save file

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.pnToolPanel.sbFileSave |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Save file |
| Text | Not present in the recovered resource. |
| Handler name | sbFileSaveClick |
| Handler address | 017efd60 |
| Graph node | `resource:dfm:I_Class/I_Class.pnToolPanel.sbFileSave` |
| Handler node | `function:017efd60` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save file"] -->|OnClick| handler["FUN_017efd60"]
    handler --> call1["FUN_017ef6c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EFD60__FUN_017efd60.c](../../../DecompiledSources/Tina16/functions/00000000017EFD60__FUN_017efd60.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.pnToolPanel.sbFileSave.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:017ef6c0` — FUN_017ef6c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0231_I_Class_I_Class_pnToolPanel_sbFileSave_Glyph_Data.png`](../../../glyph/0231_I_Class_I_Class_pnToolPanel_sbFileSave_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
