# Save Circuit as Reference

> Analysis status: Source reviewed for `TIARA-diz.6.7.1976`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_testSettings.rbtn_saveResult |
| Control class | TRadioButton |
| Caption | Save reference |
| Hint | See Resource evidence below. |
| Handler name | rbtn_saveResultClick |
| Handler address | 012f7db0 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_testSettings.rbtn_saveResult` |
| Handler node | `function:012f7db0` |
| Graph layer | UI |

## What happens when clicked

- If the current tree item maps to a circuit record, writes test-mode code 1.
- Refreshes the test-setting control state.
- It does not write a result file on click. The later test run interprets the stored mode.
- A missing item or root item produces no record change.

## Click flow

```mermaid
flowchart TD
    control["Save reference"] --> handler["rbtn_saveResultClick (012f7db0)"]
    handler --> valid{"Current circuit exists?"}
    valid -->|No| stop["Return"]
    valid -->|Yes| mode["Store test mode 1"]
    mode --> refresh["Refresh test-setting controls"]
```

## Handler evidence

- Source: [FUN_012f7db0](../../../DecompiledSources/Tina16/functions/00000000012F7DB0__FUN_012f7db0.c)
- Recovered role: Set the current circuit test mode to Save reference.
- The control caption and its dedicated handler provide the mode meaning.
- FUN_012f7db0 requires a selected node with a positive circuit index, calls FUN_012e5850(record, 1), then FUN_01306350.

## Resource evidence

- Caption: `Save reference`.
- No extracted glyph is present for this control.
- Nearby labels, when cited above, are candidates from the same parent and are used only with handler evidence.

## Analysis limits

- No runtime UI test was performed.
- The explanation does not infer behavior from the caption, hint, or nearby labels alone.
