# Delete Library

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Component path | PcbForm.Panel2.sbtnDeleteLibrary |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Delete Library |
| Text | Not present in the recovered resource. |
| Handler name | sbtnDeleteLibraryClick |
| Handler address | 00ed56b0 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel2.sbtnDeleteLibrary` |
| Handler node | `function:00ed56b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Delete Library"] -->|OnClick| handler["FUN_00ed56b0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00442f70"]
    handler --> call4["FUN_0072d440"]
    handler --> call5["FUN_00eae480"]
    handler --> call6["FUN_00ecba00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000ED56B0__FUN_00ed56b0.c](../../../DecompiledSources/Tina16/functions/0000000000ED56B0__FUN_00ed56b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm.Panel2.sbtnDeleteLibrary.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00442f70` — FUN_00442f70
- `function:0072d440` — FUN_0072d440
- `function:00eae480` — FUN_00eae480
- `function:00ecba00` — FUN_00ecba00

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0299_PcbForm_PcbForm_Panel2_sbtnDeleteLibrary_Glyph_Data.png`](../../../glyph/0299_PcbForm_PcbForm_Panel2_sbtnDeleteLibrary_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Footprint list: at distance 39.
- Rank 2: 3D component view: at distance 194.
- Rank 3: Component list: at distance 220.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
