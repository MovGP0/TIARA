# Unit step|

> Analysis status: Reviewed with the shared signal-mode switch path and unit-step glyph.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlExcitButtons.sbtnUnitStep |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Unit step\| |
| Text | Not present in the recovered resource. |
| Handler name | sbtnUnitStepClick |
| Handler address | 011242c0 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlExcitButtons.sbtnUnitStep` |
| Handler node | `function:011242c0` |
| Graph layer | UI |

## What happens when clicked

The handler clears the current preview/editor state through `FUN_011235a0`, then
calls `FUN_01123730` with signal mode `2` and resource ID `0x23c`. The shared
callee copies or initializes the mode's parameters, selects the matching editor
page, writes `2` to active-mode field `+0xb48`, refreshes the attribute controls,
and requests a preview update. The unit-step glyph and hint corroborate the mode.
This wrapper has no conditional or separate error path.

## Click flow

```mermaid
flowchart LR
    control["Unit step"] -->|"OnClick"| handler["FUN_011242c0"]
    handler --> clear["Clear current preview/editor state"]
    clear --> select["Apply signal mode 2"]
    select --> refresh["Refresh unit-step editor and preview"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011242C0__FUN_011242c0.c](../../../DecompiledSources/Tina16/functions/00000000011242C0__FUN_011242c0.c)
- Recovered role: Select unit-step excitation mode.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlExcitButtons.sbtnUnitStep.OnClick.
- Current graph behavior: Calls the shared reset helper, then the shared mode switcher with literal mode `2`.
- Current graph evidence: The handler body passes `(param_1, 0x23c, 2)` to `FUN_01123730`; the extracted glyph is a unit step.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:011235a0` — FUN_011235a0
- `function:01123730` — FUN_01123730

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0469_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnUnitStep_Glyph_Data.png`](../../../glyph/0469_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnUnitStep_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The resource ID `0x23c` is not mapped to recovered text.
- Lower-level preview errors are outside this wrapper.
