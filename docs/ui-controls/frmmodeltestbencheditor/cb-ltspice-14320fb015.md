# Include LTspice Result

> Analysis status: Source reviewed for `TIARA-diz.6.7.1957`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_LTSpice |
| Control class | TCheckBox |
| Caption | LTspice |
| Hint | See Resource evidence below. |
| Handler name | cB_LTSpiceClick |
| Handler address | 012f79e0 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_LTSpice` |
| Handler node | `function:012f79e0` |
| Graph layer | UI |

## What happens when clicked

- Finds the per-circuit record for the current tree item.
- Writes the LTspice checked state to that record.
- The handler has no null or root-item guard. The surrounding UI must keep it available only for a valid circuit.

## Click flow

```mermaid
flowchart TD
    control["LTspice"] --> handler["cB_LTSpiceClick (012f79e0)"]
    handler --> record["Get current circuit record"]
    record --> state["Store LTspice checked state"]
```

## Handler evidence

- Source: [FUN_012f79e0](../../../DecompiledSources/Tina16/functions/00000000012F79E0__FUN_012f79e0.c)
- Recovered role: Store the selected circuit's LTspice-result option.
- The hint says the option adds a SPICE result as a picture to the report.
- FUN_012f79e0 maps the current node index to the record list and passes check box +0xA50 state to FUN_012e57d0.

## Resource evidence

- Caption: `LTspice`.
- No extracted glyph is present for this control.
- Nearby labels, when cited above, are candidates from the same parent and are used only with handler evidence.

## Analysis limits

- No runtime UI test was performed.
- The explanation does not infer behavior from the caption, hint, or nearby labels alone.
