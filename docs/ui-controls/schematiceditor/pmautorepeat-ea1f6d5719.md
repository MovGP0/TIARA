# &Auto Repeat

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmAutoRepeat |
| Control class | TMenuItem |
| Caption | &Auto Repeat |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnAutoRepeatClick |
| Handler address | 01c83d30 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmAutoRepeat` |
| Handler node | `function:01c83d30` |
| Graph layer | UI |

## What happens when clicked

The handler toggles the main menu item's checked state and copies the new value to the matching popup item. Sender is unused, so both controls change the same shared option.

## Click flow

```mermaid
flowchart TD
    control["&Auto Repeat"] -->|"OnClick"| handler["mnAutoRepeatClick (01c83d30)"]
    handler --> current{"Current checked or visible state"}
    current -->|"Off"| enable["Set Auto Repeat and synchronize menu checks: enable"]
    current -->|"On"| disable["Set Auto Repeat and synchronize menu checks: disable"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C83D30__FUN_01c83d30.c](../../../DecompiledSources/Tina16/functions/0000000001C83D30__FUN_01c83d30.c)
- Recovered role: Toggle automatic component repetition.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.Insert.mnAutoRepeat.OnClick, SchematicEditor.SchPopup.pmAutoRepeat.OnClick.
- Current graph behavior: The handler toggles the main menu item's checked state and copies the new value to the matching popup item. Sender is unused, so both controls change the same shared option.
- Current graph evidence: The recovered body negates one menu checked byte and writes it through the checked setter to both paired menu-item fields. Two DFM events resolve to the handler.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:007e2d20` — FUN_007e2d20

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

- The downstream placement consumer of the option is outside this click path.

