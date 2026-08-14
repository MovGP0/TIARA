# PSpice &Netlist (*.CIR)...

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.Import.ImportPSpice |
| Control class | TMenuItem |
| Caption | PSpice &Netlist (*.CIR)... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ImportPSpiceClick |
| Handler address | 01c834b0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.Import.ImportPSpice` |
| Handler node | `function:01c834b0` |
| Graph layer | UI |

## What happens when clicked

The recovered handler returns immediately and performs no import.

## Click flow

```mermaid
flowchart TD
    control["PSpice &Netlist (*.CIR)..."] -->|"OnClick"| handler["ImportPSpiceClick (01c834b0)"]
    handler --> return["Return without state change"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C834B0__FUN_01c834b0.c](../../../DecompiledSources/Tina16/functions/0000000001C834B0__FUN_01c834b0.c)
- Recovered role: No-op PSpice import handler.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.Import.ImportPSpice.OnClick.
- Current graph behavior: The recovered handler returns immediately and performs no import.
- Current graph evidence: FUN_01c834b0 contains only a return and has zero outgoing graph calls.
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

- The menu caption is resource evidence only; no import implementation is reached.

