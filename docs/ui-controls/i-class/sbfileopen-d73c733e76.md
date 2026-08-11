# Open file

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.pnToolPanel.sbFileOpen |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Open file |
| Text | Not present in the recovered resource. |
| Handler name | sbFileOpenClick |
| Handler address | 017efd50 |
| Graph node | `resource:dfm:I_Class/I_Class.pnToolPanel.sbFileOpen` |
| Handler node | `function:017efd50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Open file"] -->|OnClick| handler["FUN_017efd50"]
    handler --> call1["FUN_017ef290"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EFD50__FUN_017efd50.c](../../../DecompiledSources/Tina16/functions/00000000017EFD50__FUN_017efd50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.pnToolPanel.sbFileOpen.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:017ef290` — FUN_017ef290

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0230_I_Class_I_Class_pnToolPanel_sbFileOpen_Glyph_Data.png`](../../../glyph/0230_I_Class_I_Class_pnToolPanel_sbFileOpen_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
