# New

> Analysis status: Reviewed with recovered external-viewer command evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Component path | `SchematicEditor.MainMenu.View.mnBreadBoardView.mnBreadBoardViewNew` |
| Control class | `TMenuItem` |
| Handler | `mnBreadBoardViewNewClick` at `01ca19d0` |

## What happens when clicked

The command starts `pcbviewer.exe` when no matching viewer process is active and waits for its ready flag. It builds a `NewBreadBoard(...)` command from the configured breadboard component data and the current schematic context. It appends `BreadBoardComplete(0)` for new mode and sends the command text to the external viewer path.

## Click flow

```mermaid
flowchart TD
    control["New menu item"] --> handler["mnBreadBoardViewNewClick"]
    handler --> running{"pcbviewer.exe active?"}
    running -->|"No"| launch["Start viewer and wait until ready"]
    running -->|"Yes"| build["Build NewBreadBoard command"]
    launch --> build
    build --> mode["Append BreadBoardComplete(0)"]
    mode --> send["Send command to viewer"]
```

## Evidence

- [Menu handler](../../../DecompiledSources/Tina16/functions/0000000001CA19D0__FUN_01ca19d0.c) calls the common path with mode value `0`.
- [Breadboard path](../../../DecompiledSources/Tina16/functions/0000000001CA13B0__FUN_01ca13b0.c) checks or launches `pcbviewer.exe`, builds both command strings, and sends them.
- [Process check](../../../DecompiledSources/Tina16/functions/0000000001B1D9D0__FUN_01b1d9d0.c) searches active processes for the requested executable.

## Analysis limits

- The recovered code does not expose the viewer-side implementation of `BreadBoardComplete(0)`.
