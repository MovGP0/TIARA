# &Mirror

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmMirror |
| Control class | TMenuItem |
| Caption | &Mirror |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnMirrorClick |
| Handler address | 01c77030 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmMirror` |
| Handler node | `function:01c77030` |
| Graph layer | UI |

## What happens when clicked

The handler forwards the click to the traced mirror operation. Sender is unused, so the menu and popup controls behave identically.

## Click flow

```mermaid
flowchart TD
    control["&Mirror"] -->|"OnClick"| handler["mnMirrorClick (01c77030)"]
    handler --> guard{"Mirror allowed and schematic unlocked?"}
    guard -->|"No"| noChange["Leave selection unchanged"]
    guard -->|"Yes"| action["Create undo action and mirror selection"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C77030__FUN_01c77030.c](../../../DecompiledSources/Tina16/functions/0000000001C77030__FUN_01c77030.c)
- Recovered role: Mirror selected schematic objects.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.Edit.mnMirror.OnClick, SchematicEditor.SchPopup.pmMirror.OnClick.
- Current graph behavior: The handler forwards the click to the traced mirror operation. Sender is unused, so the menu and popup controls behave identically.
- Current graph evidence: The recovered body is a single call to FUN_01c6d440, whose permission, undo, transform, redraw, and result paths were inspected.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c6d440` — FUN_01c6d440

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

- The mirror axis is not named in the recovered source.

