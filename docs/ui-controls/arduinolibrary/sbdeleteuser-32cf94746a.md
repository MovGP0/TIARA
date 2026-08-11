# Delete

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ArduinoLibrary |
| Component path | ArduinoLibrary.sbDeleteUser |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Delete |
| Text | Not present in the recovered resource. |
| Handler name | sbDeleteUserClick |
| Handler address | 01070760 |
| Graph node | `resource:dfm:ArduinoLibrary/ArduinoLibrary.sbDeleteUser` |
| Handler node | `function:01070760` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Delete"] -->|OnClick| handler["FUN_01070760"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001070760__FUN_01070760.c](../../../DecompiledSources/Tina16/functions/0000000001070760__FUN_01070760.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ArduinoLibrary.sbDeleteUser.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0020_ArduinoLibrary_ArduinoLibrary_sbDeleteUser_Glyph_Data.png`](../../../glyph/0020_ArduinoLibrary_ArduinoLibrary_sbDeleteUser_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Selected user libraries at distance 217.
- Rank 2: Selected standard libraries at distance 385.
- Rank 3: Available user libraries: at distance 489.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
