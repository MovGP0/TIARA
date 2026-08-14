# &Equation Editor

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnSymbolicResults |
| Control class | TMenuItem |
| Caption | &Equation Editor |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSymbolicResultsClick |
| Handler address | 01c80600 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnSymbolicResults` |
| Handler node | `function:01c80600` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnSymbolicResultsClick at 01c80600. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Equation Editor"] -->|"OnClick"| handler["mnSymbolicResultsClick (01c80600)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C80600__FUN_01c80600.c](../../../DecompiledSources/Tina16/functions/0000000001C80600__FUN_01c80600.c)
- Recovered role: Evidence-blocked mnSymbolicResultsClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnSymbolicResults.OnClick.
- Current graph behavior: The OnClick binding reaches mnSymbolicResultsClick at 01c80600. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.mnSymbolicResults to mnSymbolicResultsClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C80600__FUN_01c80600.c and directly references 0065b870, 0145e620. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0065b870` — FUN_0065b870
- `function:0145e620` — FUN_0145e620

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

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

