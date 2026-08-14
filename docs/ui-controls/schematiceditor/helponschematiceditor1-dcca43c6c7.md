# &Schematic Editor

> Analysis status: Evidence-backed behavior recovered.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Help.HelponSchematicEditor1 |
| Control class | TMenuItem |
| Caption | &Schematic Editor |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | HelponSchematicEditor1Click |
| Handler address | 01c81350 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Help.HelponSchematicEditor1` |
| Handler node | `function:01c81350` |
| Graph layer | UI |

## What happens when clicked

The handler builds a path to `TINA.CHM` from the application help base, passes it to `FUN_01B1DEF0` to select an existing language-specific help-file variant, and calls the application help-system method at virtual offset `0x20` with context ID 1000. It does not pass the current selection and does not change the schematic model. Missing-file behavior is not present in this handler.

## Click flow

```mermaid
flowchart TD
    control["Schematic Editor Help"] --> handler["HelponSchematicEditor1Click<br/>01c81350"]
    handler --> path["Build TINA.CHM path"]
    path --> locale["Select existing localized help file"]
    locale --> help["Open help context 1000"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C81350__FUN_01c81350.c](../../../DecompiledSources/Tina16/functions/0000000001C81350__FUN_01c81350.c)
- Recovered role: Opens TINA help context 1000 from the localized help file.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Help.HelponSchematicEditor1.OnClick.
- Current graph behavior: The handler resolves localized `TINA.CHM` and invokes the help system with numeric context 1000.
- Current graph evidence: The file literal, localization helper, virtual help call, and context ID are direct recovered source values.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:01b1def0` — FUN_01b1def0

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

- This handler and Contents use the same recovered file and context ID. Any different presentation comes from the help file or menu placement, not from this code path.

