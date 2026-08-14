# Import WAV file|

> Analysis status: Reviewed with the shared signal-mode switch path and WAV glyph.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlExcitButtons.sbtnWAV |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Import WAV file\| |
| Text | Not present in the recovered resource. |
| Handler name | sbtnWAVClick |
| Handler address | 01124440 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlExcitButtons.sbtnWAV` |
| Handler node | `function:01124440` |
| Graph layer | UI |

## What happens when clicked

The handler clears the current preview/editor state through `FUN_011235a0`, then
calls `FUN_01123730` with signal mode `10` and no resource ID (`-1`). The shared
callee selects the sound-input page, writes `10` to active-mode field `+0xb48`,
updates the WAV-specific controls, and refreshes the referenced audio state. The
audio-wave glyph and Import WAV file hint corroborate this assignment. It does
not show the file picker; that action belongs to `btnLoadWAV`.

## Click flow

```mermaid
flowchart LR
    control["Import WAV file"] -->|"OnClick"| handler["FUN_01124440"]
    handler --> clear["Clear current preview/editor state"]
    clear --> select["Apply signal mode 10"]
    select --> sound["Show WAV controls and refresh audio state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001124440__FUN_01124440.c](../../../DecompiledSources/Tina16/functions/0000000001124440__FUN_01124440.c)
- Recovered role: Select WAV-file excitation mode.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlExcitButtons.sbtnWAV.OnClick.
- Current graph behavior: Calls the shared reset helper, then the shared mode switcher with literal mode `10`.
- Current graph evidence: The handler body passes `(param_1, -1, 10)` to `FUN_01123730`; the extracted glyph is an audio waveform.
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
- Extracted glyph: [`0477_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnWAV_Glyph_Data.png`](../../../glyph/0477_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnWAV_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- This selector does not choose or load a file.
- Audio-load errors are handled below the shared switch helper.
