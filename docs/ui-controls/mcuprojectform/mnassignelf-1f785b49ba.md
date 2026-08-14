# Assign ELF/HEX manually...

> Analysis status: Recovered handler and relevant call path reviewed for mnAssignElfClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnProject.mnAssignElf |
| Control class | TMenuItem |
| Caption | Assign ELF/HEX manually... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnAssignElfClick |
| Handler address | 0108d670 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnProject.mnAssignElf` |
| Handler node | `function:0108d670` |
| Graph layer | UI |

## What happens when clicked

The handler creates the assignment dialog and tells it whether the active target uses the recovered alternate format. Canceling leaves the project unchanged. On acceptance it applies the selected output path through the form-owned assignment object, clears and repopulates the related project collection, marks two form dirty flags, and updates project state. The handler has no local file-validation message; validation belongs to the dialog.

## Click flow

```mermaid
flowchart TD
    control["Assign ELF/HEX manually..."] -->|OnClick| handler["TMCUProjectForm.mnAssignElfClick<br/>FUN_0108d670"]
    handler --> dialog["Open ELF or HEX assignment dialog"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| noOp["Keep current assignment"]
    accepted -->|Yes| apply["Apply selected image path<br/>Replace related project entry"]
    apply --> dirty["Mark project assignment state changed"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108D670__FUN_0108d670.c](../../../DecompiledSources/Tina16/functions/000000000108D670__FUN_0108d670.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnProject.mnAssignElf.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004b9f40` — FUN_004b9f40
- `function:007fc180` — FUN_007fc180
- `function:010b2840` — FUN_010b2840
- `function:010b3ad0` — FUN_010b3ad0

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

## Reviewed boundaries

- The explanation comes from the recovered handler and the named call path. The caption, hint, and glyph are supporting UI evidence only.
- Unnamed virtual calls are described only by the values passed at this call site and by the state that this handler reads or writes.
- The handler has no local exception recovery unless the behavior section states otherwise.
