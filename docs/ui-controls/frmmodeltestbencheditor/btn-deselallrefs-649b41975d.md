# Uncheck All References

> Analysis status: Source reviewed for `TIARA-diz.6.7.1964`.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_select.btn_deselAllRefs |
| Control class | TButton |
| Caption | Uncheck all |
| Hint | See Resource evidence below. |
| Handler name | btn_deselAllRefsClick |
| Handler address | 012f8410 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_select.btn_deselAllRefs` |
| Handler node | `function:012f8410` |
| Graph layer | UI |

## What happens when clicked

- Reads the block selected by the Choose block control.
- For each local row of the current circuit, clears the reference according to that selected block.
- Returns without changes unless the current item is a circuit, the record list exists, and the local-settings container has rows.
- Refreshes the current circuit controls after the operation.

## Click flow

```mermaid
flowchart TD
    control["Uncheck all"] --> handler["btn_deselAllRefsClick (012f8410)"]
    handler --> valid{"Current circuit and rows exist?"}
    valid -->|No| stop["Return"]
    valid -->|Yes| block["Read chosen block"]
    block --> clear["Clear its reference in every row"]
    clear --> refresh["Refresh controls"]
```

## Handler evidence

- Source: [FUN_012f8410](../../../DecompiledSources/Tina16/functions/00000000012F8410__FUN_012f8410.c)
- Recovered role: Clear all reference selections for the chosen local block.
- The nearby label identifies the controlling combo as Choose block.
- FUN_012f8410 passes operation 1 and the combo index to FUN_01306a20.
- FUN_01306a20 iterates all local rows and writes the recovered unchecked value for the chosen reference field.
- Relevant callee: [FUN_01306a20](../../../DecompiledSources/Tina16/functions/0000000001306A20__FUN_01306a20.c)

## Resource evidence

- Caption: `Uncheck all`.
- No extracted glyph is present for this control.
- Nearby labels, when cited above, are candidates from the same parent and are used only with handler evidence.

## Analysis limits

- No runtime UI test was performed.
- The explanation does not infer behavior from the caption, hint, or nearby labels alone.
