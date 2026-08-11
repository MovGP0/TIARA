# Remove Wires

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ImportFromPicture |
| Component path | ImportFromPicture.bRemoveWires |
| Control class | TButton |
| Caption | Remove Wires |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bRemoveWiresClick |
| Handler address | 01a2b5d0 |
| Graph node | `resource:dfm:ImportFromPicture/ImportFromPicture.bRemoveWires` |
| Handler node | `function:01a2b5d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Remove Wires"] -->|OnClick| handler["FUN_01a2b5d0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_004aeac0"]
    handler --> call3["FUN_0072d440"]
    handler --> call4["FUN_00b95360"]
    handler --> call5["FUN_0198b6a0"]
    handler --> call6["FUN_019a4600"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A2B5D0__FUN_01a2b5d0.c](../../../DecompiledSources/Tina16/functions/0000000001A2B5D0__FUN_01a2b5d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ImportFromPicture.bRemoveWires.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004aeac0` — FUN_004aeac0
- `function:0072d440` — FUN_0072d440
- `function:00b95360` — FUN_00b95360
- `function:0198b6a0` — FUN_0198b6a0
- `function:019a4600` — FUN_019a4600
- `function:01a2a060` — FUN_01a2a060
- `function:01a2b2d0` — FUN_01a2b2d0
- `function:01ca2aa0` — FUN_01ca2aa0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Value:  at distance 497.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
