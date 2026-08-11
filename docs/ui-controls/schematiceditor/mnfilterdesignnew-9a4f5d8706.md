# Filter Design New...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnFilterDesignNew |
| Control class | TMenuItem |
| Caption | Filter Design New... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnFilterDesignNewClick |
| Handler address | 01c98bf0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnFilterDesignNew` |
| Handler node | `function:01c98bf0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Filter Design New..."] -->|OnClick| handler["FUN_01c98bf0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00416ba0"]
    handler --> call4["FUN_00416cd0"]
    handler --> call5["FUN_0064e770"]
    handler --> call6["FUN_007fc180"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C98BF0__FUN_01c98bf0.c](../../../DecompiledSources/Tina16/functions/0000000001C98BF0__FUN_01c98bf0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnFilterDesignNew.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416ba0` — FUN_00416ba0
- `function:00416cd0` — FUN_00416cd0
- `function:0064e770` — FUN_0064e770
- `function:007fc180` — FUN_007fc180
- `function:0123b660` — FUN_0123b660
- `function:0123b940` — FUN_0123b940
- `function:0123ba50` — FUN_0123ba50
- `function:0123bc40` — FUN_0123bc40
- `function:019a4600` — FUN_019a4600
- `function:019d45b0` — FUN_019d45b0
- `function:01c77470` — FUN_01c77470

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
