# Run test

> Analysis status: Reviewed from recovered source and UI evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Component path | `frmTestBenchEditor.pnlMain.pnlTestOptions.pctrlMode.tsAC.grbxAC.chkbxACRunTest` |
| Control class | `TCheckBox` |
| Handler | `chkbxACRunTestClick` at `012c5fe0` |

## What happens when clicked

The VCL check box changes its checked state. When Run test becomes cleared, the handler selects the AC `None` radio button. When Run test becomes selected, the handler makes no additional change. This handler does not start a test.

## Click flow

```mermaid
flowchart TD
    control["AC Run test check box"] --> toggle["VCL changes the checked state"]
    toggle --> handler["chkbxACRunTestClick at 012c5fe0"]
    handler --> checked{"Is Run test selected?"}
    checked -->|Yes| keep["Keep the current AC result option"]
    checked -->|No| none["Select the AC None option"]
```

## Evidence

- [Recovered chkbxACRunTestClick source](../../../DecompiledSources/Tina16/functions/00000000012C5FE0__FUN_012c5fe0.c)
- The DFM resource supplies the control identity, caption, initial state, and event binding.
- No extracted glyph is present for this control.

## Analysis limits

- Test execution starts through the separate Start test control, not through this immediate click handler.
