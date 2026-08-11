# &Options...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.View.mnEditorOptions |
| Control class | TMenuItem |
| Caption | &Options... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnEditorOptionsClick |
| Handler address | 01c83ba0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.View.mnEditorOptions` |
| Handler node | `function:01c83ba0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Options..."] -->|OnClick| handler["FUN_01c83ba0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00414b50"]
    handler --> call4["FUN_00416db0"]
    handler --> call5["FUN_0064e030"]
    handler --> call6["FUN_0064e770"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C83BA0__FUN_01c83ba0.c](../../../DecompiledSources/Tina16/functions/0000000001C83BA0__FUN_01c83ba0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.View.mnEditorOptions.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 11

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00416db0` — FUN_00416db0
- `function:0064e030` — FUN_0064e030
- `function:0064e770` — FUN_0064e770
- `function:00f833f0` — FUN_00f833f0
- `function:00f834f0` — FUN_00f834f0
- `function:01a77ef0` — Handles 1 Delphi UI event: DFWindow.OnPaint.
- `function:01b7a760` — FUN_01b7a760
- `function:01c835b0` — FUN_01c835b0

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
