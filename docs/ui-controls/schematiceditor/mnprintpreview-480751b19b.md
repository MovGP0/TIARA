# Print Pre&view

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.mnPrintPreview |
| Control class | TMenuItem |
| Caption | Print Pre&view |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnPrintPreviewClick |
| Handler address | 01c87b20 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.mnPrintPreview` |
| Handler node | `function:01c87b20` |
| Graph layer | UI |

## What happens when clicked

The recovered handler returns immediately without opening a preview or changing state.

## Click flow

```mermaid
flowchart TD
    control["Print Pre&view"] -->|"OnClick"| handler["mnPrintPreviewClick (01c87b20)"]
    handler --> return["Return without state change"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C87B20__FUN_01c87b20.c](../../../DecompiledSources/Tina16/functions/0000000001C87B20__FUN_01c87b20.c)
- Recovered role: No-op Print Preview handler.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.mnPrintPreview.OnClick.
- Current graph behavior: The recovered handler returns immediately without opening a preview or changing state.
- Current graph evidence: FUN_01c87b20 contains only a return and has zero outgoing graph calls.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

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

- The resource does not explain why the command is inactive.

