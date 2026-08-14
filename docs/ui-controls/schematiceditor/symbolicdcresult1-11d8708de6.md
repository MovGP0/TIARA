# DC Result

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicDCResult1 |
| Control class | TMenuItem |
| Caption | DC Result |
| Handler name | SymbolicDCResult1Click |
| Handler address | 01c75fe0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicDCResult1` |
| Handler node | `function:01c75fe0` |
| Graph layer | UI |

## What happens when clicked

Runs the exact symbolic DC-result calculation for the current circuit and registers this command as the last analysis command after the calculation returns.

## Click flow

```mermaid
flowchart TD
    control["DC Result"] -->|"OnClick"| handler["SymbolicDCResult1Click (01c75fe0)"]
    handler --> calculate["Run exact symbolic DC-result analysis"]
    calculate --> result{"Calculation produced a result?"}
    result -->|"Yes"| show["Show the generated result text"]
    result -->|"No"| skip["Skip result presentation"]
    show --> remember["Record this as the last analysis command"]
    skip --> remember
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C75FE0__FUN_01c75fe0.c](../../../DecompiledSources/Tina16/functions/0000000001C75FE0__FUN_01c75fe0.c)
- Recovered role: Run exact symbolic DC-result analysis.
- Evidence: The handler calls FUN_0145ef50 with mode 0 and SchematicEditor +0x2788. The callee initializes DC-result mode, selects its exact symbolic result builder, and presents result text when it is not aborted. The handler then writes SymbolicDCResult1Click to +0x27e8.

## Application-relevant calls

- FUN_0145ef50 calculates and presents the DC result.

## Resource evidence

- The DFM binds this menu item to `SymbolicDCResult1Click`.
- The recovered caption is `DC Result`.
- No extracted glyph is associated with this control.

## Analysis limits

- The recovered names of some form fields and global state bytes are not available. This article identifies them by stable offsets and proven readers or writers where necessary.