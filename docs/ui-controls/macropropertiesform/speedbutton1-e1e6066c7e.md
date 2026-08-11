# SpeedButton1

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MacroPropertiesForm |
| Component path | MacroPropertiesForm.SpeedButton1 |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SpeedButton1Click |
| Handler address | 01b92290 |
| Graph node | `resource:dfm:MacroPropertiesForm/MacroPropertiesForm.SpeedButton1` |
| Handler node | `function:01b92290` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["SpeedButton1"] -->|OnClick| handler["FUN_01b92290"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["VCL control Unicode text reader"]
    handler --> call4["VCL control text setter with change suppression"]
    handler --> call5["FUN_00c86a90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B92290__FUN_01b92290.c](../../../DecompiledSources/Tina16/functions/0000000001B92290__FUN_01b92290.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MacroPropertiesForm.SpeedButton1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:00c86a90` — FUN_00c86a90

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0256_MacroPropertiesForm_MacroPropertiesForm_SpeedButton1_Glyph_Data.png`](../../../glyph/0256_MacroPropertiesForm_MacroPropertiesForm_SpeedButton1_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: &Shape: at distance 177.
- Rank 2: C&ontent: at distance 200.
- Rank 3: &Name: at distance 231.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
