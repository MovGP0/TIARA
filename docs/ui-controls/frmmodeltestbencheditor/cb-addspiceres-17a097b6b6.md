# Add SPICE Result

> Analysis status: Source reviewed for `TIARA-diz.6.7.1960`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_addSpiceRes |
| Control class | TCheckBox |
| Caption | Add spice result |
| Hint | See Resource evidence below. |
| Handler name | cB_addSpiceResClick |
| Handler address | 012f7920 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_addSpiceRes` |
| Handler node | `function:012f7920` |
| Graph layer | UI |

## What happens when clicked

- Finds the per-circuit record for the current tree item.
- Writes the Add spice result checked state to that record.
- The handler has no null or root-item guard. The surrounding UI must keep it available only for a valid circuit.

## Click flow

```mermaid
flowchart TD
    control["Add spice result"] --> handler["cB_addSpiceResClick (012f7920)"]
    handler --> record["Get current circuit record"]
    record --> state["Store add-result checked state"]
```

## Handler evidence

- Source: [FUN_012f7920](../../../DecompiledSources/Tina16/functions/00000000012F7920__FUN_012f7920.c)
- Recovered role: Store the selected circuit's add-SPICE-result option.
- The hint says the option adds a SPICE result as a picture to the report.
- FUN_012f7920 maps the current node index to the record list and passes check box +0xA48 state to FUN_012e57b0.

## Resource evidence

- Caption: `Add spice result`.
- No extracted glyph is present for this control.
- Nearby labels, when cited above, are candidates from the same parent and are used only with handler evidence.

## Analysis limits

- No runtime UI test was performed.
- The explanation does not infer behavior from the caption, hint, or nearby labels alone.
