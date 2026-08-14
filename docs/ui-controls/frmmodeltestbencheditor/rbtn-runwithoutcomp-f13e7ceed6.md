# Run Circuit Without Comparison

> Analysis status: Source reviewed for `TIARA-diz.6.7.1974`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_testSettings.rbtn_RunWithoutComp |
| Control class | TRadioButton |
| Caption | Run without comparison |
| Hint | See Resource evidence below. |
| Handler name | rbtn_RunWithoutCompClick |
| Handler address | 012fef90 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_testSettings.rbtn_RunWithoutComp` |
| Handler node | `function:012fef90` |
| Graph layer | UI |

## What happens when clicked

- If the current tree item maps to a circuit record, writes test-mode code 3.
- Refreshes the test-setting control state.
- A missing item or root item produces no record change.

## Click flow

```mermaid
flowchart TD
    control["Run without comparison"] --> handler["rbtn_RunWithoutCompClick (012fef90)"]
    handler --> valid{"Current circuit exists?"}
    valid -->|No| stop["Return"]
    valid -->|Yes| mode["Store test mode 3"]
    mode --> refresh["Refresh test-setting controls"]
```

## Handler evidence

- Source: [FUN_012fef90](../../../DecompiledSources/Tina16/functions/00000000012FEF90__FUN_012fef90.c)
- Recovered role: Set the current circuit test mode to Run without comparison.
- The control caption and its dedicated handler provide the mode meaning.
- FUN_012fef90 requires a selected node with a positive circuit index, calls FUN_012e5850(record, 3), then FUN_01306350.

## Resource evidence

- Caption: `Run without comparison`.
- No extracted glyph is present for this control.
- Nearby labels, when cited above, are candidates from the same parent and are used only with handler evidence.

## Analysis limits

- No runtime UI test was performed.
- The explanation does not infer behavior from the caption, hint, or nearby labels alone.
