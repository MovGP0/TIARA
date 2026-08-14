# Simulated

> Analysis status: Reviewed from recovered source and resource evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.Oscilloscope1.mnSCPVirtual |
| Control class | TMenuItem |
| Caption | Simulated |
| Handler | mnSCPVirtualClick at `01c904b0` |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.Oscilloscope1.mnSCPVirtual` |

## What happens when clicked

The click opens or reuses a simulated oscilloscope window. `mnSCPVirtualClick` passes mode `0` and instrument type `2` to the shared coordinator at `01c8f600`.

The coordinator stops when no instance is available. For multiple instances, it shows a selector and continues only with an in-range index. It reuses the selected window or creates and stores a new one, adds an instance label to a new caption when applicable, shows the window, and sends native message `9`.

## Click flow

```mermaid
flowchart TD
    control["Simulated"] -->|"OnClick"| handler["mnSCPVirtualClick 01c904b0"]
    handler --> coordinator["Select simulated oscilloscope type 2"]
    coordinator --> available{"Instance available?"}
    available -->|"No"| noOp["Do nothing"]
    available -->|"Yes"| slot{"Window already exists?"}
    slot -->|"No"| create["Create and store window"]
    slot -->|"Yes"| reuse["Reuse window"]
    create --> show["Show window and send message 9"]
    reuse --> show
```

## Handler evidence

- [Handler source](../../../DecompiledSources/Tina16/functions/0000000001C904B0__FUN_01c904b0.c) calls `FUN_01c8f600(form, 0, 2)`.
- [Coordinator source](../../../DecompiledSources/Tina16/functions/0000000001C8F600__FUN_01c8f600.c) proves the availability, selection, reuse, creation, caption, show, and message paths.
- This address also handles the parent Oscilloscope menu item. The Real-time item changes only the mode to `1`.

## Analysis limits

- The recovered source does not identify native message `9` or show a separate modal-cancel test.
