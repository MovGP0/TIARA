# &AC Optimization...

> Analysis status: Complete. The handler selects AC optimization mode 8 with the single-output selector.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationSingle |
| Control class | TMenuItem |
| Caption | &AC Optimization... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ACOptimizationSingleClick |
| Handler address | 01c97110 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationSingle` |
| Handler node | `function:01c97110` |
| Graph layer | UI |

## What happens when clicked

`FUN_01c97110` calls `FUN_013748b0` with the active schematic, selector `0`, and interactive-dialog flag `0`. The shared routine verifies that the required schematic collections are not empty and that optimization mode `8` is available. It prepares an optimization job and opens its modal settings dialog.

Cancel result `2` cleans the prepared job without running it. An accepted result configures mode `8` with selector `0`, runs and finalizes the job, and destroys it. After the shared routine returns, the handler records `ACOptimizationSingleClick`; this record does not prove that the job ran because it is also written after Cancel.

## Click flow

```mermaid
flowchart TD
    control["Click AC Optimization"] --> handler["ACOptimizationSingleClick<br/>01c97110"]
    handler --> validate["Validate schematic and mode 8"]
    validate --> dialog["Prepare job and show settings dialog"]
    dialog --> accepted{"Modal result = 2?"}
    accepted -->|Yes| cancel["Cancel prepared job"]
    accepted -->|No| run["Configure mode 8 selector 0 and run"]
    cancel --> record["Record command name"]
    run --> cleanup["Finalize and destroy job"]
    cleanup --> record
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97110__FUN_01c97110.c](../../../DecompiledSources/Tina16/functions/0000000001C97110__FUN_01c97110.c)
- Recovered role: Runs interactive AC optimization with the single-output selector.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationSingle.OnClick.
- Current graph behavior: Validates the schematic, opens AC optimization settings, cancels cleanly for modal result 2, or configures and runs mode 8 with selector 0, then records the command.
- Current graph evidence: `FUN_01c97110` passes selector 0 to `FUN_013748b0`. That callee checks the two required collections and capability mode 8, prepares a job, shows the modal class at `PTR_FUN_0136de48`, treats result 2 as Cancel, and otherwise calls the mode-8 configure, run, finalize, and destruction path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Records the command name
- `function:013748b0` — Validates, configures, and runs interactive AC optimization

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

- Localized validation errors are raised inside the shared optimization routine.
- The handler records its command name after both acceptance and cancellation.
- The internal optimizer's convergence and failure codes are not returned to this wrapper.
