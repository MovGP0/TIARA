# Open Picture...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ImportPictureExt |
| Component path | ImportPictureExt.bOpenPicture |
| Control class | TButton |
| Caption | Open Picture... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bOpenPictureClick |
| Handler address | 01a2ce30 |
| Graph node | `resource:dfm:ImportPictureExt/ImportPictureExt.bOpenPicture` |
| Handler node | `function:01a2ce30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Open Picture..."] -->|OnClick| handler["FUN_01a2ce30"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["FUN_00441920"]
    handler --> call4["VCL control text setter with change suppression"]
    handler --> call5["FUN_00724270"]
    handler --> call6["FUN_00724300"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A2CE30__FUN_01a2ce30.c](../../../DecompiledSources/Tina16/functions/0000000001A2CE30__FUN_01a2ce30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ImportPictureExt.bOpenPicture.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 12

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00441920` — FUN_00441920
- `function:0064de00` — VCL control text setter with change suppression
- `function:00724270` — FUN_00724270
- `function:00724300` — FUN_00724300
- `function:00724350` — FUN_00724350
- `function:00724420` — FUN_00724420
- `function:0147d480` — FUN_0147d480
- `function:0147d630` — FUN_0147d630
- `function:01b256f0` — FUN_01b256f0
- `function:01b258f0` — FUN_01b258f0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Picture: at distance 48.
- Rank 2: Netlist: at distance 72.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
