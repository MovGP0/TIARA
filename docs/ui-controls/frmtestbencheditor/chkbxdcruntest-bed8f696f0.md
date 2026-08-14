# Run test

> Analysis status: Reviewed from recovered source and UI evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Component path | `frmTestBenchEditor.pnlMain.pnlTestOptions.pctrlMode.tsDC.grbxDC.chkbxDCRunTest` |
| Control class | `TCheckBox` |
| Handler | `chkbxDCRunTestClick` at `012c64a0` |

## What happens when clicked

The VCL check box changes its checked state. When Run test becomes cleared, the handler selects the DC `None` radio button. When Run test becomes selected, the handler makes no additional change. This handler does not start a test.

## Click flow

```mermaid
flowchart TD
    control["DC Run test check box"] --> toggle["VCL changes the checked state"]
    toggle --> handler["chkbxDCRunTestClick at 012c64a0"]
    handler --> checked{"Is Run test selected?"}
    checked -->|Yes| keep["Keep the current DC result option"]
    checked -->|No| none["Select the DC None option"]
```

## Evidence

- [Recovered chkbxDCRunTestClick source](../../../DecompiledSources/Tina16/functions/00000000012C64A0__FUN_012c64a0.c)
- The DFM resource supplies the control identity, caption, initial state, and event binding.
- No extracted glyph is present for this control.

## Analysis limits

- Test execution starts through the separate Start test control, not through this immediate click handler.
