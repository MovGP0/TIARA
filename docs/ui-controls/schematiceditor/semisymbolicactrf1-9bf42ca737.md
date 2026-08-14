# Semi-symbolic AC transfer

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SemisymbolicACtrf1 |
| Control class | TMenuItem |
| Caption | Semi-symbolic AC transfer |
| Handler name | SemisymbolicACtrf1Click |
| Handler address | 01c75eb0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SemisymbolicACtrf1` |
| Handler node | `function:01c75eb0` |
| Graph layer | UI |

## What happens when clicked

Runs the semi-symbolic AC-transfer calculation for the current circuit and registers this command as the last analysis command after the calculation returns.

## Click flow

```mermaid
flowchart TD
    control["Semi-symbolic AC transfer"] -->|"OnClick"| handler["SemisymbolicACtrf1Click (01c75eb0)"]
    handler --> calculate["Run semi-symbolic AC-transfer analysis"]
    calculate --> result{"Calculation produced a result?"}
    result -->|"Yes"| show["Show the generated result text"]
    result -->|"No"| skip["Skip result presentation"]
    show --> remember["Record this as the last analysis command"]
    skip --> remember
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C75EB0__FUN_01c75eb0.c](../../../DecompiledSources/Tina16/functions/0000000001C75EB0__FUN_01c75eb0.c)
- Recovered role: Run semi-symbolic AC-transfer analysis.
- Evidence: The handler calls FUN_0145e790 with mode 1 and SchematicEditor +0x2788. The callee selects its semi-symbolic path, generates result text, and presents it when the engine is not aborted. The handler then writes SemisymbolicACtrf1Click to +0x27e8.

## Application-relevant calls

- FUN_0145e790 calculates and presents the AC transfer.

## Resource evidence

- The DFM binds this menu item to `SemisymbolicACtrf1Click`.
- The recovered caption is `Semi-symbolic AC transfer`.
- No extracted glyph is associated with this control.

## Analysis limits

- The recovered names of some form fields and global state bytes are not available. This article identifies them by stable offsets and proven readers or writers where necessary.