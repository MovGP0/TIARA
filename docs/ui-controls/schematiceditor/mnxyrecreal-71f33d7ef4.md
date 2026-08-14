# Real-time

> Analysis status: Reviewed from recovered source and resource evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.XYRecorder1.mnXYRecReal |
| Control class | TMenuItem |
| Caption | Real-time |
| Handler | mnXYRecRealClick at `01c90470` |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.XYRecorder1.mnXYRecReal` |

## What happens when clicked

The click opens or reuses a real-time XY recorder window. The handler passes mode `1` and type `7` to `01c8f600`. The coordinator stops when no instance is available. Otherwise, it selects an instance when necessary, reuses or creates the indexed window, adds an instance label to a new caption when applicable, shows it, and sends native message `9`.

## Click flow

```mermaid
flowchart TD
    control["Real-time"] -->|"OnClick"| handler["mnXYRecRealClick 01c90470"]
    handler --> coordinator["Select real-time XY recorder type 7"]
    coordinator --> available{"Instance available?"}
    available -->|"No"| noOp["Do nothing"]
    available -->|"Yes"| slot{"Window already exists?"}
    slot -->|"No"| create["Create and store window"]
    slot -->|"Yes"| reuse["Reuse window"]
    create --> show["Show window and send message 9"]
    reuse --> show
```

## Handler evidence

- [Handler source](../../../DecompiledSources/Tina16/functions/0000000001C90470__FUN_01c90470.c) calls `FUN_01c8f600(form, 1, 7)`.
- [Coordinator source](../../../DecompiledSources/Tina16/functions/0000000001C8F600__FUN_01c8f600.c) maps type `7` to the XY recorder state and proves the remaining path.
- The simulated XY recorder controls change only the mode to `0`.

## Analysis limits

- The recovered source does not identify native message `9` or show a separate modal-cancel test.
