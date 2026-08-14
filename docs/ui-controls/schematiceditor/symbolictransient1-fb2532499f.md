# Semi-symbolic Transient

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicTransient1 |
| Control class | TMenuItem |
| Caption | Semi-symbolic Transient |
| Handler name | SymbolicTransient1Click |
| Handler address | 01c76110 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicTransient1` |
| Handler node | `function:01c76110` |
| Graph layer | UI |

## What happens when clicked

Runs the semi-symbolic transient calculation for the current circuit and registers this command as the last analysis command after the calculation returns.

## Click flow

```mermaid
flowchart TD
    control["Semi-symbolic Transient"] -->|"OnClick"| handler["SymbolicTransient1Click (01c76110)"]
    handler --> calculate["Run semi-symbolic transient analysis"]
    calculate --> result{"Calculation produced a result?"}
    result -->|"Yes"| show["Show the titled result text"]
    result -->|"No"| skip["Skip result presentation"]
    show --> remember["Record this as the last analysis command"]
    skip --> remember
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C76110__FUN_01c76110.c](../../../DecompiledSources/Tina16/functions/0000000001C76110__FUN_01c76110.c)
- Recovered role: Run semi-symbolic transient analysis.
- Evidence: The handler calls FUN_0145f1a0 with the title TR Result and SchematicEditor +0x2788. The callee initializes transient mode, iterates the calculation, and presents the titled result when it is not aborted. The handler then writes SymbolicTransient1Click to +0x27e8.

## Application-relevant calls

- FUN_0145f1a0 calculates and presents the transient result.

## Resource evidence

- The DFM binds this menu item to `SymbolicTransient1Click`.
- The recovered caption is `Semi-symbolic Transient`.
- No extracted glyph is associated with this control.

## Analysis limits

- The recovered names of some form fields and global state bytes are not available. This article identifies them by stable offsets and proven readers or writers where necessary.