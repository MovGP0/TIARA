# Download to FPGA Card...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.mnConfigFPGA |
| Control class | TMenuItem |
| Caption | Download to FPGA Card... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnConfigFPGAClick |
| Handler address | 01c999e0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.mnConfigFPGA` |
| Handler node | `function:01c999e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Download to FPGA Card..."] -->|OnClick| handler["FUN_01c999e0"]
    handler --> call1["FUN_004144d0"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["Delphi UnicodeString assignment helper"]
    handler --> call4["FUN_00415dd0"]
    handler --> call5["FUN_00416cd0"]
    handler --> call6["FUN_0043e1a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C999E0__FUN_01c999e0.c](../../../DecompiledSources/Tina16/functions/0000000001C999E0__FUN_01c999e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTM.mnConfigFPGA.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:004144d0` — FUN_004144d0
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00415dd0` — FUN_00415dd0
- `function:00416cd0` — FUN_00416cd0
- `function:0043e1a0` — FUN_0043e1a0
- `function:004425e0` — FUN_004425e0
- `function:00724270` — FUN_00724270
- `function:00724380` — FUN_00724380
- `function:00e1e1a0` — FUN_00e1e1a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
