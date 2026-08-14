# Apply to all

> Analysis status: Reviewed from recovered source and UI evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Component path | `frmTestBenchEditor.pnlMain.pnlTestOptions.btnApplyAll` |
| Control class | `TButton` |
| Handler | `btnApplyAllClick` at `012c6960` |

## What happens when clicked

The handler visits every tree node and applies the current form options only to nodes marked as circuit files. The applied data includes transient, AC, and DC run, mode, corner, curve, tolerance, and sample settings. Folder nodes are skipped. The handler has no confirmation, rollback, or error message.

## Click flow

```mermaid
flowchart TD
    control["Apply to all button"] --> iterate["Visit every tree node"]
    iterate --> file{"Is the node a circuit file?"}
    file -->|No| skip["Skip the folder node"]
    file -->|Yes| apply["Copy all current test options to the file node"]
    skip --> iterate
    apply --> iterate
```

## Evidence

- [Recovered btnApplyAllClick source](../../../DecompiledSources/Tina16/functions/00000000012C6960__FUN_012c6960.c)
- [Recovered option-copy helper](../../../DecompiledSources/Tina16/functions/00000000012C7AE0__FUN_012c7ae0.c)
- The DFM resource supplies the control identity, caption or state, and event binding.
- No extracted glyph is present for this control.

## Analysis limits

- Private fields in the per-file settings record do not have recovered Delphi names; their control sources prove the option groups.
