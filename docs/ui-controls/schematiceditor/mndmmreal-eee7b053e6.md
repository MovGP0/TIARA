# Real-time

> Analysis status: Reviewed from recovered source and resource evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.Voltmeter1.mnDMMReal |
| Control class | TMenuItem |
| Caption | Real-time |
| Handler | mnDMMRealClick at `01c903f0` |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.Voltmeter1.mnDMMReal` |

## What happens when clicked

The click opens or reuses a real-time multimeter window. The handler passes mode `1` and type `1` to `01c8f600`. The coordinator stops when no instance is available. Otherwise, it selects an instance when necessary, reuses or creates the indexed window, adds an instance label to a new caption when applicable, shows it, and sends native message `9`.

## Click flow

```mermaid
flowchart TD
    control["Real-time"] -->|"OnClick"| handler["mnDMMRealClick 01c903f0"]
    handler --> coordinator["Select real-time multimeter type 1"]
    coordinator --> available{"Instance available?"}
    available -->|"No"| noOp["Do nothing"]
    available -->|"Yes"| slot{"Window already exists?"}
    slot -->|"No"| create["Create and store window"]
    slot -->|"Yes"| reuse["Reuse window"]
    create --> show["Show window and send message 9"]
    reuse --> show
```

## Handler evidence

- [Handler source](../../../DecompiledSources/Tina16/functions/0000000001C903F0__FUN_01c903f0.c) calls `FUN_01c8f600(form, 1, 1)`.
- [Coordinator source](../../../DecompiledSources/Tina16/functions/0000000001C8F600__FUN_01c8f600.c) maps type `1` to the multimeter state and proves the remaining path.
- The simulated multimeter controls change only the mode to `0`.

## Analysis limits

- The recovered source does not identify native message `9` or show a separate modal-cancel test.
