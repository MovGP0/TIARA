# Comparison

> Analysis status: Reviewed from recovered source and UI evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Component path | `frmTestBenchEditor.pnlMain.pnlTestOptions.pctrlMode.tsDC.grbxDC.rbtnDCComparision` |
| Control class | `TRadioButton` |
| Handler | `rbtnDCComparisionClick` at `012c64e0` |

## What happens when clicked

The handler requires an active file node in the circuit tree. It resets the transient, AC, and DC curve lists to `Default`. It then builds the DC reference-result path for the selected circuit. The path uses the `.corner` part when the DC corner-test option is selected and ends in `.refresult.dc`. If the result exists, the application parses it and fills the DC curve list. If the result is absent, the list stays at `Default` and this click path shows no local error message.

## Click flow

```mermaid
flowchart TD
    control["DC Comparison option"] --> handler["rbtnDCComparisionClick at 012c64e0"]
    handler --> selected{"Is an active file node selected?"}
    selected -->|No| stop["Stop without a change"]
    selected -->|Yes| reset["Reset all curve lists to Default"]
    reset --> path["Build the DC reference-result path"]
    path --> exists{"Does the result file exist?"}
    exists -->|No| keep["Keep the DC list at Default"]
    exists -->|Yes| fill["Parse the result and fill the DC curve list"]
```

## Evidence

- [Recovered rbtnDCComparisionClick source](../../../DecompiledSources/Tina16/functions/00000000012C64E0__FUN_012c64e0.c)
- [Recovered comparison-list loader](../../../DecompiledSources/Tina16/functions/00000000012CA200__FUN_012ca200.c)
- The DFM resource supplies the control identity, caption, state, and event binding.
- No extracted glyph is present for this control.

## Analysis limits

- The recovered control name uses the spelling `Comparision`; the visible caption is `Comparison`.
