# &Fill

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | tables_form |
| Component path | tables_form.SpecialBox.BitBtn1 |
| Control class | TBitBtn |
| Caption | &Fill |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BitBtn1Click |
| Handler address | 011acd00 |
| Graph node | `resource:dfm:tables_form/tables_form.SpecialBox.BitBtn1` |
| Handler node | `function:011acd00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Fill"] -->|OnClick| handler["FUN_011acd00"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_0119a4f0"]
    handler --> call3["FUN_011abdf0"]
    handler --> call4["FUN_011acfa0"]
    handler --> call5["FUN_011acff0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011ACD00__FUN_011acd00.c](../../../DecompiledSources/Tina16/functions/00000000011ACD00__FUN_011acd00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: tables_form.SpecialBox.BitBtn1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0119a4f0` — FUN_0119a4f0
- `function:011abdf0` — FUN_011abdf0
- `function:011acfa0` — Handles 1 Delphi UI event: tables_form.SpecialBox.RadioF0.OnClick.
- `function:011acff0` — Handles 1 Delphi UI event: tables_form.SpecialBox.RadioF1.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: 8
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0486_tables_form_tables_form_SpecialBox_BitBtn1_Glyph_Data.png`](../../../glyph/0486_tables_form_tables_form_SpecialBox_BitBtn1_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
