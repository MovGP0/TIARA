# Mode

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DataSPI |
| Component path | DataSPI.rgMode |
| Control class | TRadioGroup |
| Caption | Mode |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rgModeClick |
| Handler address | 01411980 |
| Graph node | `resource:dfm:DataSPI/DataSPI.rgMode` |
| Handler node | `function:01411980` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Mode"] -->|OnClick| handler["FUN_01411980"]
    handler --> call1["FUN_00b0b020"]
    handler --> call2["FUN_01410d70"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001411980__FUN_01411980.c](../../../DecompiledSources/Tina16/functions/0000000001411980__FUN_01411980.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DataSPI.rgMode.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00b0b020` — FUN_00b0b020
- `function:01410d70` — FUN_01410d70

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("&Bin", "&Hex", "&Dec")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1:  Address     /   Data   at distance 342.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
