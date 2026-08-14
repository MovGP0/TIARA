# Include PSpice Result

> Analysis status: Source reviewed for `TIARA-diz.6.7.1958`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_PSpice |
| Control class | TCheckBox |
| Caption | PSpice |
| Hint | See Resource evidence below. |
| Handler name | cB_PSpiceClick |
| Handler address | 012f7a40 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_PSpice` |
| Handler node | `function:012f7a40` |
| Graph layer | UI |

## What happens when clicked

- Finds the per-circuit record for the current tree item.
- Writes the PSpice checked state to that record.
- The handler has no null or root-item guard. The surrounding UI must keep it available only for a valid circuit.

## Click flow

```mermaid
flowchart TD
    control["PSpice"] --> handler["cB_PSpiceClick (012f7a40)"]
    handler --> record["Get current circuit record"]
    record --> state["Store PSpice checked state"]
```

## Handler evidence

- Source: [FUN_012f7a40](../../../DecompiledSources/Tina16/functions/00000000012F7A40__FUN_012f7a40.c)
- Recovered role: Store the selected circuit's PSpice-result option.
- The hint says the option adds a SPICE result as a picture to the report.
- FUN_012f7a40 maps the current node index to the record list and passes check box +0xA58 state to FUN_012e57f0.

## Resource evidence

- Caption: `PSpice`.
- No extracted glyph is present for this control.
- Nearby labels, when cited above, are candidates from the same parent and are used only with handler evidence.

## Analysis limits

- No runtime UI test was performed.
- The explanation does not infer behavior from the caption, hint, or nearby labels alone.
