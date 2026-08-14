# Semi-symbolic AC Result

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SSACResMnu |
| Control class | TMenuItem |
| Caption | Semi-symbolic AC Result |
| Handler name | SSACResMnuClick |
| Handler address | 01c75f80 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SSACResMnu` |
| Handler node | `function:01c75f80` |
| Graph layer | UI |

## What happens when clicked

Runs the semi-symbolic AC-result calculation for the current circuit and registers this command as the last analysis command after the calculation returns.

## Click flow

```mermaid
flowchart TD
    control["Semi-symbolic AC Result"] -->|"OnClick"| handler["SSACResMnuClick (01c75f80)"]
    handler --> calculate["Run semi-symbolic AC-result analysis"]
    calculate --> result{"Calculation produced a result?"}
    result -->|"Yes"| show["Show the generated result text"]
    result -->|"No"| skip["Skip result presentation"]
    show --> remember["Record this as the last analysis command"]
    skip --> remember
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C75F80__FUN_01c75f80.c](../../../DecompiledSources/Tina16/functions/0000000001C75F80__FUN_01c75f80.c)
- Recovered role: Run semi-symbolic AC-result analysis.
- Evidence: The handler calls FUN_0145ecb0 with mode 1 and SchematicEditor +0x2788. The callee uses mode 1 for the semi-symbolic result path and presents generated result text when it is not aborted. The handler then writes SSACResMnuClick to +0x27e8.

## Application-relevant calls

- FUN_0145ecb0 calculates and presents the AC result.

## Resource evidence

- The DFM binds this menu item to `SSACResMnuClick`.
- The recovered caption is `Semi-symbolic AC Result`.
- No extracted glyph is associated with this control.

## Analysis limits

- The recovered names of some form fields and global state bytes are not available. This article identifies them by stable offsets and proven readers or writers where necessary.