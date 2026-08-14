# Comparison

> Analysis status: Reviewed from recovered source and UI evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Component path | `frmTestBenchEditor.pnlMain.pnlTestOptions.pctrlMode.tsTR.grbxTR.rbtnTRComparision` |
| Control class | `TRadioButton` |
| Handler | `rbtnTRComparisionClick` at `012c5b60` |

## What happens when clicked

The handler requires an active file node in the circuit tree. It resets the transient, AC, and DC curve lists to `Default`. It then builds the transient reference-result path for the selected circuit. The path uses the `.corner` part when the transient corner-test option is selected and ends in `.refresult.tr`. If the result exists, the application parses it and fills the transient curve list. If the result is absent, the list stays at `Default` and this click path shows no local error message.

## Click flow

```mermaid
flowchart TD
    control["Transient Comparison option"] --> handler["rbtnTRComparisionClick at 012c5b60"]
    handler --> selected{"Is an active file node selected?"}
    selected -->|No| stop["Stop without a change"]
    selected -->|Yes| reset["Reset all curve lists to Default"]
    reset --> path["Build the transient reference-result path"]
    path --> exists{"Does the result file exist?"}
    exists -->|No| keep["Keep the transient list at Default"]
    exists -->|Yes| fill["Parse the result and fill the transient curve list"]
```

## Evidence

- [Recovered rbtnTRComparisionClick source](../../../DecompiledSources/Tina16/functions/00000000012C5B60__FUN_012c5b60.c)
- [Recovered comparison-list loader](../../../DecompiledSources/Tina16/functions/00000000012CA200__FUN_012ca200.c)
- The DFM resource supplies the control identity, caption, state, and event binding.
- No extracted glyph is present for this control.

## Analysis limits

- The recovered control name uses the spelling `Comparision`; the visible caption is `Comparison`.
