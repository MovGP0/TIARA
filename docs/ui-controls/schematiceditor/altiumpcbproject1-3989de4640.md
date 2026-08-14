# ALTIUM

> Analysis status: Reviewed from the recovered PCB profile, directory, settings, cache, and menu-state path.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.pcbdirectory1.AltiumPCBProject1 |
| Control class | TMenuItem |
| Caption | ALTIUM |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | AltiumPCBProject1Click |
| Handler address | 01c959d0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.pcbdirectory1.AltiumPCBProject1` |
| Handler node | `function:01c959d0` |
| Graph layer | UI |

## What happens when clicked

The handler selects the ALTIUM PCB profile. It clears the previous PCB-directory cache, sets the profile file to `\ALTIUM.PCB` and the profile key to `ALTIUM`, and makes the profile directory when it is absent. It checks this menu item, which also clears a checked sibling when the recovered radio-group setting applies.

It writes `PCBRootDir=ALTIUM` in the `Schematic Editor` settings section, clears two dependent caches, reloads the ALTIUM `.PCB` definition data, and releases temporary strings. The command changes the PCB profile; it does not export a board in this handler.

## Click flow

```mermaid
flowchart TD
    control["Click ALTIUM"] --> profile["Set ALTIUM and \\ALTIUM.PCB paths"]
    profile --> exists{"Profile directory exists?"}
    exists -->|"No"| create["Create profile directory"]
    exists -->|"Yes"| check["Check ALTIUM menu item"]
    create --> check
    check --> persist["Write PCBRootDir=ALTIUM"]
    persist --> reset["Clear dependent PCB caches"]
    reset --> load["Load ALTIUM.PCB definitions"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C959D0__FUN_01c959d0.c](../../../DecompiledSources/Tina16/functions/0000000001C959D0__FUN_01c959d0.c)
- Recovered role: Select and load the ALTIUM PCB profile.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.pcbdirectory1.AltiumPCBProject1.OnClick.
- Current graph behavior: Selects, persists, and reloads the ALTIUM PCB definition profile.
- Current graph evidence: `FUN_01c959d0` contains `\ALTIUM.PCB`, `ALTIUM`, `Schematic Editor`, and `PCBRootDir`; calls the menu checked-state setter; clears the profile caches; and passes the selected key to `FUN_00eadc90`, whose source loads a `<profile>.PCB` definition file.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00416ba0` — FUN_00416ba0
- `function:00442400` — FUN_00442400
- `function:007e2d20` — FUN_007e2d20
- `function:00b96de0` — FUN_00b96de0
- `function:00eadc90` — FUN_00eadc90
- `function:00eae050` — FUN_00eae050
- `function:00ec0300` — FUN_00ec0300
- `function:00ecbc20` — FUN_00ecbc20

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

- The settings object's storage backend is called through a virtual method and is not named in this function.
- Directory or definition-load errors are not caught locally.

