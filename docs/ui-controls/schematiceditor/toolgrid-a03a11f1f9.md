# Grid On/Off|Turns the grid on or off in the schematic editor

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.ToolGrid |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Grid On/Off\|Turns the grid on or off in the schematic editor |
| Text | Not present in the recovered resource. |
| Handler name | ToolGridClick |
| Handler address | 01c73f30 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.ToolGrid` |
| Handler node | `function:01c73f30` |
| Graph layer | UI |

## What happens when clicked

The handler reads the current schematic-grid setting and applies its opposite value, then refreshes the related UI state.

## Click flow

```mermaid
flowchart TD
    control["Grid On/Off|Turns the grid on or off in the schematic editor"] -->|"OnClick"| handler["ToolGridClick (01c73f30)"]
    handler --> current{"Current checked or visible state"}
    current -->|"Off"| enable["Set grid visibility: enable"]
    current -->|"On"| disable["Set grid visibility: disable"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C73F30__FUN_01c73f30.c](../../../DecompiledSources/Tina16/functions/0000000001C73F30__FUN_01c73f30.c)
- Recovered role: Toggle the schematic grid.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolGrid.OnClick.
- Current graph behavior: The handler reads the current schematic-grid setting and applies its opposite value, then refreshes the related UI state.
- Current graph evidence: The recovered body negates the grid-state byte and passes it to the grid-setting helper. The DFM binds the address to ToolGrid.OnClick.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:01995220` — FUN_01995220
- `function:01995280` — FUN_01995280

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0335_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolGrid_Glyph_Data.png`](../../../glyph/0335_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolGrid_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The grid-state field has no recovered Delphi name.

