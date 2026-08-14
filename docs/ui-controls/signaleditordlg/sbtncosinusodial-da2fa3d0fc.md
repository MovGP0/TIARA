# Cosinusodial|

> Analysis status: Reviewed with the shared signal-mode switch path and cosine glyph.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlExcitButtons.sbtnCosinusodial |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Cosinusodial\| |
| Text | Not present in the recovered resource. |
| Handler name | sbtnCosinusodialClick |
| Handler address | 01124320 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlExcitButtons.sbtnCosinusodial` |
| Handler node | `function:01124320` |
| Graph layer | UI |

## What happens when clicked

The handler clears the current preview/editor state through `FUN_011235a0`, then
calls `FUN_01123730` with signal mode `7` and resource ID `0x22d`. The shared
callee copies or initializes the mode's parameters, selects its editor page,
writes `7` to active-mode field `+0xb48`, refreshes the attribute controls, and
requests a preview update. The cosine-wave glyph and `Cosinusodial|` hint
corroborate the literal mode. This wrapper has no conditional or separate error
path.

## Click flow

```mermaid
flowchart LR
    control["Cosinusoidal"] -->|"OnClick"| handler["FUN_01124320"]
    handler --> clear["Clear current preview/editor state"]
    clear --> select["Apply signal mode 7"]
    select --> refresh["Refresh cosine editor and preview"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001124320__FUN_01124320.c](../../../DecompiledSources/Tina16/functions/0000000001124320__FUN_01124320.c)
- Recovered role: Select cosinusoidal excitation mode.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlExcitButtons.sbtnCosinusodial.OnClick.
- Current graph behavior: Calls the shared reset helper, then the shared mode switcher with literal mode `7`.
- Current graph evidence: The handler body passes `(param_1, 0x22d, 7)` to `FUN_01123730`; the extracted glyph is a cosine wave.
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
- Extracted glyph: [`0471_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnCosinusodial_Glyph_Data.png`](../../../glyph/0471_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnCosinusodial_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The recovered UI uses the spelling `Cosinusodial`; the waveform and handler path support cosinusoidal mode.
- Lower-level preview errors are outside this wrapper.
