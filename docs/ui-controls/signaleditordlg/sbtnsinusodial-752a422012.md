# Sinusodial|

> Analysis status: Reviewed with the shared signal-mode switch path and sine glyph.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlExcitButtons.sbtnSinusodial |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Sinusodial\| |
| Text | Not present in the recovered resource. |
| Handler name | sbtnSinusodialClick |
| Handler address | 011242f0 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlExcitButtons.sbtnSinusodial` |
| Handler node | `function:011242f0` |
| Graph layer | UI |

## What happens when clicked

The handler clears the current preview/editor state through `FUN_011235a0`, then
calls `FUN_01123730` with signal mode `4` and resource ID `0x230`. The shared
callee copies or initializes the mode's parameters, selects its editor page,
writes `4` to active-mode field `+0xb48`, refreshes the attribute controls, and
requests a preview update. The sine-wave glyph and `Sinusodial|` hint corroborate
the literal mode. This wrapper has no conditional or separate error path.

## Click flow

```mermaid
flowchart LR
    control["Sinusoidal"] -->|"OnClick"| handler["FUN_011242f0"]
    handler --> clear["Clear current preview/editor state"]
    clear --> select["Apply signal mode 4"]
    select --> refresh["Refresh sine editor and preview"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011242F0__FUN_011242f0.c](../../../DecompiledSources/Tina16/functions/00000000011242F0__FUN_011242f0.c)
- Recovered role: Select sinusoidal excitation mode.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlExcitButtons.sbtnSinusodial.OnClick.
- Current graph behavior: Calls the shared reset helper, then the shared mode switcher with literal mode `4`.
- Current graph evidence: The handler body passes `(param_1, 0x230, 4)` to `FUN_01123730`; the extracted glyph is a sine wave.
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
- Extracted glyph: [`0470_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnSinusodial_Glyph_Data.png`](../../../glyph/0470_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnSinusodial_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The recovered UI uses the spelling `Sinusodial`; the waveform and handler path support sinusoidal mode.
- Lower-level preview errors are outside this wrapper.
