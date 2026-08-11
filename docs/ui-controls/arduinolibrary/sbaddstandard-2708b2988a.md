# Add

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ArduinoLibrary |
| Component path | ArduinoLibrary.sbAddStandard |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Add |
| Text | Not present in the recovered resource. |
| Handler name | sbAddStandardClick |
| Handler address | 01070470 |
| Graph node | `resource:dfm:ArduinoLibrary/ArduinoLibrary.sbAddStandard` |
| Handler node | `function:01070470` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add"] -->|OnClick| handler["FUN_01070470"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416db0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001070470__FUN_01070470.c](../../../DecompiledSources/Tina16/functions/0000000001070470__FUN_01070470.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ArduinoLibrary.sbAddStandard.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416db0` — FUN_00416db0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0017_ArduinoLibrary_ArduinoLibrary_sbAddStandard_Glyph_Data.png`](../../../glyph/0017_ArduinoLibrary_ArduinoLibrary_sbAddStandard_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Selected standard libraries at distance 91.
- Rank 2: Available standard libraries: at distance 219.
- Rank 3: Selected user libraries at distance 221.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
