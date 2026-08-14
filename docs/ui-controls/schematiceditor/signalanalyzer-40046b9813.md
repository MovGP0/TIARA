# &Signal Analyzer

> Analysis status: Reviewed from recovered source and resource evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.SignalAnalyzer |
| Control class | TMenuItem |
| Caption | &Signal Analyzer |
| Handler | mnSAVirtualClick at `01c90610` |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.SignalAnalyzer` |

## What happens when clicked

The click opens or reuses a simulated signal analyzer window. The shared `mnSAVirtualClick` handler passes mode `0` and instrument type `4` to the coordinator at `01c8f600`.

The coordinator stops when no instance is available. For multiple instances, it shows a selector and continues only with an in-range index. It reuses the selected window or creates and stores a new one, adds an instance label to a new caption when applicable, shows the window, and sends native message `9`.

## Click flow

```mermaid
flowchart TD
    control["Signal Analyzer"] -->|"OnClick"| handler["mnSAVirtualClick 01c90610"]
    handler --> coordinator["Select simulated signal analyzer type 4"]
    coordinator --> available{"Instance available?"}
    available -->|"No"| noOp["Do nothing"]
    available -->|"Yes"| slot{"Window already exists?"}
    slot -->|"No"| create["Create and store window"]
    slot -->|"Yes"| reuse["Reuse window"]
    create --> show["Show window and send message 9"]
    reuse --> show
```

## Handler evidence

- [Handler source](../../../DecompiledSources/Tina16/functions/0000000001C90610__FUN_01c90610.c) calls `FUN_01c8f600(form, 0, 4)`.
- [Coordinator source](../../../DecompiledSources/Tina16/functions/0000000001C8F600__FUN_01c8f600.c) proves the availability, selection, reuse, creation, caption, show, and message paths.
- The Simulated submenu item shares this handler. The Real-time item changes only the mode to `1`.

## Analysis limits

- The recovered source does not identify native message `9` or show a separate modal-cancel test.
