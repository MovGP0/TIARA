# E&xport Macro...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnExportMacro |
| Control class | TMenuItem |
| Caption | E&xport Macro... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnExportMacroClick |
| Handler address | 01c89df0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnExportMacro` |
| Handler node | `function:01c89df0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["E&xport Macro..."] -->|OnClick| handler["FUN_01c89df0"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00724270"]
    handler --> call3["FUN_00724300"]
    handler --> call4["FUN_01440040"]
    handler --> call5["FUN_0176cff0"]
    handler --> call6["FUN_01993ec0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C89DF0__FUN_01c89df0.c](../../../DecompiledSources/Tina16/functions/0000000001C89DF0__FUN_01c89df0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnExportMacro.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00724270` — FUN_00724270
- `function:00724300` — FUN_00724300
- `function:01440040` — FUN_01440040
- `function:0176cff0` — FUN_0176cff0
- `function:01993ec0` — FUN_01993ec0
- `function:01d04d40` — FUN_01d04d40

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
