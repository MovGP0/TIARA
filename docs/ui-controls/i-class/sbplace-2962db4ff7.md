# Place to Schematic

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.pnToolPanel.sbPlace |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Place to Schematic |
| Text | Not present in the recovered resource. |
| Handler name | sbPlaceClick |
| Handler address | 017f2a00 |
| Graph node | `resource:dfm:I_Class/I_Class.pnToolPanel.sbPlace` |
| Handler node | `function:017f2a00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Place to Schematic"] -->|OnClick| handler["FUN_017f2a00"]
    handler --> call1["FUN_00c0dad0"]
    handler --> call2["FUN_017f28b0"]
    handler --> call3["FUN_017f2a50"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017F2A00__FUN_017f2a00.c](../../../DecompiledSources/Tina16/functions/00000000017F2A00__FUN_017f2a00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.pnToolPanel.sbPlace.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00c0dad0` — FUN_00c0dad0
- `function:017f28b0` — Handles 1 Delphi UI event: I_Class.MainMenu.mFile.CloseUpdate1.OnClick.
- `function:017f2a50` — FUN_017f2a50

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0233_I_Class_I_Class_pnToolPanel_sbPlace_Glyph_Data.png`](../../../glyph/0233_I_Class_I_Class_pnToolPanel_sbPlace_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
