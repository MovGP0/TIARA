# Semi-symbolic DC Result

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SemisymbolicDCResult1 |
| Control class | TMenuItem |
| Caption | Semi-symbolic DC Result |
| Handler name | SemisymbolicDCResult1Click |
| Handler address | 01c76050 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SemisymbolicDCResult1` |
| Handler node | `function:01c76050` |
| Graph layer | UI |

## What happens when clicked

Runs the semi-symbolic DC-result calculation for the current circuit and registers this command as the last analysis command after the calculation returns.

## Click flow

```mermaid
flowchart TD
    control["Semi-symbolic DC Result"] -->|"OnClick"| handler["SemisymbolicDCResult1Click (01c76050)"]
    handler --> calculate["Run semi-symbolic DC-result analysis"]
    calculate --> result{"Calculation produced a result?"}
    result -->|"Yes"| show["Show the generated result text"]
    result -->|"No"| skip["Skip result presentation"]
    show --> remember["Record this as the last analysis command"]
    skip --> remember
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C76050__FUN_01c76050.c](../../../DecompiledSources/Tina16/functions/0000000001C76050__FUN_01c76050.c)
- Recovered role: Run semi-symbolic DC-result analysis.
- Evidence: The handler calls FUN_0145ef50 with mode 1 and SchematicEditor +0x2788. The callee initializes DC-result mode, selects its semi-symbolic result builder, and presents result text when it is not aborted. The handler then writes SemisymbolicDCResult1Click to +0x27e8.

## Application-relevant calls

- FUN_0145ef50 calculates and presents the DC result.

## Resource evidence

- The DFM binds this menu item to `SemisymbolicDCResult1Click`.
- The recovered caption is `Semi-symbolic DC Result`.
- No extracted glyph is associated with this control.

## Analysis limits

- The recovered names of some form fields and global state bytes are not available. This article identifies them by stable offsets and proven readers or writers where necessary.