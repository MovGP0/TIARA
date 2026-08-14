# General|

> Analysis status: Reviewed with the shared signal-mode switch path and general-waveform glyph.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlExcitButtons.sbtnGeneral |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | General\| |
| Text | Not present in the recovered resource. |
| Handler name | sbtnGeneralClick |
| Handler address | 011243b0 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlExcitButtons.sbtnGeneral` |
| Handler node | `function:011243b0` |
| Graph layer | UI |

## What happens when clicked

The handler clears the current preview/editor state through `FUN_011235a0`, then
calls `FUN_01123730` with signal mode `3` and resource ID `0x233`. The shared
callee copies or initializes the mode's parameters, selects its editor page,
writes `3` to active-mode field `+0xb48`, refreshes the attribute controls, and
requests a preview update. The multi-level waveform glyph and `General|` hint
corroborate this selection but do not define its parameters. This wrapper has no
conditional or separate error path.

## Click flow

```mermaid
flowchart LR
    control["General"] -->|"OnClick"| handler["FUN_011243b0"]
    handler --> clear["Clear current preview/editor state"]
    clear --> select["Apply signal mode 3"]
    select --> refresh["Refresh general editor and preview"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011243B0__FUN_011243b0.c](../../../DecompiledSources/Tina16/functions/00000000011243B0__FUN_011243b0.c)
- Recovered role: Select general excitation mode.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlExcitButtons.sbtnGeneral.OnClick.
- Current graph behavior: Calls the shared reset helper, then the shared mode switcher with literal mode `3`.
- Current graph evidence: The handler body passes `(param_1, 0x233, 3)` to `FUN_01123730`; the resource identifies the control as General.
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
- Extracted glyph: [`0474_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnGeneral_Glyph_Data.png`](../../../glyph/0474_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnGeneral_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The recovered source does not name the general waveform's parameter model.
- Lower-level preview errors are outside this wrapper.
