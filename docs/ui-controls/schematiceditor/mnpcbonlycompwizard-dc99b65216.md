# PCB Component Wizard...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnPCBTools.mnPCBOnlyCompWizard |
| Control class | TMenuItem |
| Caption | PCB Component Wizard... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnPCBOnlyCompWizardClick |
| Handler address | 01c9aec0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnPCBTools.mnPCBOnlyCompWizard` |
| Handler node | `function:01c9aec0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["PCB Component Wizard..."] -->|OnClick| handler["FUN_01c9aec0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_007fc180"]
    handler --> call3["FUN_008088b0"]
    handler --> call4["FUN_00c82c10"]
    handler --> call5["FUN_00c85140"]
    handler --> call6["FUN_01c691d0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9AEC0__FUN_01c9aec0.c](../../../DecompiledSources/Tina16/functions/0000000001C9AEC0__FUN_01c9aec0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnPCBTools.mnPCBOnlyCompWizard.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180
- `function:008088b0` — FUN_008088b0
- `function:00c82c10` — FUN_00c82c10
- `function:00c85140` — FUN_00c85140
- `function:01c691d0` — FUN_01c691d0

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
