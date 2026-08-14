# Autotest

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.mnDetailedDC.mnACDCAutotest |
| Control class | TMenuItem |
| Caption | Autotest |
| Handler name | mnACDCAutotestClick |
| Handler address | 01ca51d0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.mnDetailedDC.mnACDCAutotest` |
| Handler node | `function:01ca51d0` |
| Graph layer | UI |

## What happens when clicked

Creates the detailed-DC Python solver object, initializes it in the recovered mode-1 path, runs the fixed circuit suite, and destroys the object.

## Click flow

```mermaid
flowchart TD
    control["Autotest"] -->|"OnClick"| handler["mnACDCAutotestClick (01ca51d0)"]
    handler --> create["Create and initialize the detailed-DC solver"]
    create --> suite["Run the fixed 18-circuit suite"]
    suite --> files["Write circuit JSON files and filelist.json"]
    files --> done["Show Finished and destroy the solver"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA51D0__FUN_01ca51d0.c](../../../DecompiledSources/Tina16/functions/0000000001CA51D0__FUN_01ca51d0.c)
- Recovered role: Run the detailed-DC autotest suite.
- Evidence: The handler constructs the object through FUN_01a33340, calls FUN_01a33cd0 with mode 1, invokes FUN_01a36470, and destroys the object. FUN_01a36470 processes a fixed 18-circuit suite, writes per-circuit JSON plus filelist.json, and shows Finished. The recovered signature does not expose how the handler local mode byte differs from the All command.

## Application-relevant calls

- FUN_01a33cd0 initializes the Python circuit solver; FUN_01a36470 runs the fixed suite.

## Resource evidence

- The DFM binds this menu item to `mnACDCAutotestClick`.
- The recovered caption is `Autotest`.
- No extracted glyph is associated with this control.

## Analysis limits

- The recovered names of some form fields and global state bytes are not available. This article identifies them by stable offsets and proven readers or writers where necessary.