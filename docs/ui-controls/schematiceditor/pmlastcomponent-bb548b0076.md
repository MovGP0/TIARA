# Last &Component

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmLastComponent |
| Control class | TMenuItem |
| Caption | Last &Component |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnComponentClick |
| Handler address | 01c773a0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmLastComponent` |
| Handler node | `function:01c773a0` |
| Graph layer | UI |

## What happens when clicked

The handler delegates to ToolCompClick, which checks editing permission and lock state, selects the last-used component, and activates placement. Sender is unused, so the menu and popup controls behave identically.

## Click flow

```mermaid
flowchart TD
    control["Last &Component"] -->|"OnClick"| handler["mnComponentClick (01c773a0)"]
    handler --> guard{"Editing allowed and schematic unlocked?"}
    guard -->|"No"| noChange["Keep current command"]
    guard -->|"Yes"| action["Select last component and activate placement tool"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C773A0__FUN_01c773a0.c](../../../DecompiledSources/Tina16/functions/0000000001C773A0__FUN_01c773a0.c)
- Recovered role: Select the last component placement tool.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.Insert.mnComponent.OnClick, SchematicEditor.SchPopup.pmLastComponent.OnClick.
- Current graph behavior: The handler delegates to ToolCompClick, which checks editing permission and lock state, selects the last-used component, and activates placement. Sender is unused, so the menu and popup controls behave identically.
- Current graph evidence: The recovered wrapper calls FUN_01c6d6a0, whose guard, last-component selector call with -1, and tool activation were inspected.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c6d6a0` — Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolComp.OnClick.

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

- The selected component type is runtime state.

