# D&ock Netlist Editor

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnDockNetlistEditor |
| Control class | TMenuItem |
| Caption | D&ock Netlist Editor |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnDockNetlistEditorClick |
| Handler address | 01c94810 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnDockNetlistEditor` |
| Handler node | `function:01c94810` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["D&ock Netlist Editor"] -->|OnClick| handler["FUN_01c94810"]
    handler --> call1["FUN_004aeac0"]
    handler --> call2["FUN_006d5120"]
    handler --> call3["FUN_007e2d20"]
    handler --> call4["FUN_01c8a4d0"]
    handler --> call5["FUN_01c8a7e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C94810__FUN_01c94810.c](../../../DecompiledSources/Tina16/functions/0000000001C94810__FUN_01c94810.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnDockNetlistEditor.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:004aeac0` — FUN_004aeac0
- `function:006d5120` — FUN_006d5120
- `function:007e2d20` — FUN_007e2d20
- `function:01c8a4d0` — FUN_01c8a4d0
- `function:01c8a7e0` — FUN_01c8a7e0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
