# Stop

> Analysis status: Reviewed from recovered state assignment and the shared interactive-mode handler.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnInteractive.mnStopInteractive |
| Control class | TMenuItem |
| Caption | Stop |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnStopInteractiveClick |
| Handler address | 01c99780 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnInteractive.mnStopInteractive` |
| Handler node | `function:01c99780` |
| Graph layer | UI |

## What happens when clicked

The handler sets the shared interactive control state to false and then calls the same worker as `SchematicEditor.TopToolBar.EditorTools.ToolInteractive`. On the stop branch, the shared worker can ask the active interactive path to finish. If that step refuses, it restores the control state to true and returns, so interactive mode stays active.

When the stop succeeds, the worker ends the current interactive command, updates the active document and global interactive subsystem, clears the global interactive flag, enables Start, disables Stop, and runs the editor idle-state refresh. If interactive mode is already off, the state setter can make no change and the common worker keeps the off-state controls synchronized.

## Click flow

```mermaid
flowchart TD
    control["Click Stop"] --> state["Set interactive control state to false"]
    state --> shared["Run shared ToolInteractive handler"]
    shared --> finish{"Active interactive path can finish?"}
    finish -->|"No"| restore["Restore true state; keep mode active"]
    finish -->|"Yes or already idle"| end["End current interactive command"]
    end --> flags["Clear global mode; enable Start; disable Stop"]
    flags --> refresh["Refresh editor idle state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C99780__FUN_01c99780.c](../../../DecompiledSources/Tina16/functions/0000000001C99780__FUN_01c99780.c)
- Recovered role: Stop the Schematic Editor interactive mode when its active path permits closure.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnInteractive.mnStopInteractive.OnClick.
- Current graph behavior: Forces the shared interactive state off and invokes the toolbar's recovered stop transition.
- Current graph evidence: `FUN_01c99780` passes 0 to `FUN_0082a6c0` and calls `FUN_01c87e40`. The shared worker restores state 1 on a rejected finish, otherwise calls the recovered current-command cleanup path, clears the global flag, and updates the Start and Stop menu items.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0082a6c0` — FUN_0082a6c0
- `function:01c87e40` — Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolInteractive.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The condition that makes `FUN_01c88130(Self, 1)` refuse the stop is not named in recovered source.
- The original Delphi class and property name for the state field are not recovered.

