# &Analysis

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis |
| Control class | TMenuItem |
| Caption | &Analysis |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnAnalysisClick |
| Handler address | 01c805b0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis` |
| Handler node | `function:01c805b0` |
| Graph layer | UI |

## What happens when clicked

The recovered handler returns immediately and does not change state. Opening the parent menu can still expose its child commands through VCL menu behavior.

## Click flow

```mermaid
flowchart TD
    control["&Analysis"] -->|"OnClick"| handler["mnAnalysisClick (01c805b0)"]
    handler --> return["Return without state change"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C805B0__FUN_01c805b0.c](../../../DecompiledSources/Tina16/functions/0000000001C805B0__FUN_01c805b0.c)
- Recovered role: No-op Analysis menu handler.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.OnClick.
- Current graph behavior: The recovered handler returns immediately and does not change state. Opening the parent menu can still expose its child commands through VCL menu behavior.
- Current graph evidence: FUN_01c805b0 contains only a return and has zero outgoing graph calls. The DFM binds the Analysis parent menu OnClick to it.
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

- Child menu behavior is outside this handler.

