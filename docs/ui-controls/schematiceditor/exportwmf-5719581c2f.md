# &Picture (*.EMF;*.BMP;*.JPG;*.GIF;*PNG)...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.Export.ExportWMF |
| Control class | TMenuItem |
| Caption | &Picture (*.EMF;*.BMP;*.JPG;*.GIF;*PNG)... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ExportWMFClick |
| Handler address | 01c81940 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.Export.ExportWMF` |
| Handler node | `function:01c81940` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Picture (*.EMF;*.BMP;*.JPG;*.GIF;*PNG)..."] -->|OnClick| handler["FUN_01c81940"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00416ad0"]
    handler --> call4["FUN_004414c0"]
    handler --> call5["FUN_00441640"]
    handler --> call6["FUN_00441920"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C81940__FUN_01c81940.c](../../../DecompiledSources/Tina16/functions/0000000001C81940__FUN_01c81940.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.Export.ExportWMF.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416ad0` — FUN_00416ad0
- `function:004414c0` — FUN_004414c0
- `function:00441640` — FUN_00441640
- `function:00441920` — FUN_00441920
- `function:00724270` — FUN_00724270
- `function:00724300` — FUN_00724300
- `function:00724380` — FUN_00724380
- `function:01c814e0` — FUN_01c814e0

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
