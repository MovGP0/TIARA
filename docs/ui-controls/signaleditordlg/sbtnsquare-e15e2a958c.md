# Square|

> Analysis status: Reviewed with the shared signal-mode switch path and square-wave glyph.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlExcitButtons.sbtnSquare |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Square\| |
| Text | Not present in the recovered resource. |
| Handler name | sbtnSquareClick |
| Handler address | 01124350 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlExcitButtons.sbtnSquare` |
| Handler node | `function:01124350` |
| Graph layer | UI |

## What happens when clicked

The handler clears the current preview/editor state through `FUN_011235a0`, then
calls `FUN_01123730` with signal mode `5` and resource ID `0x240`. The shared
callee copies or initializes the mode's parameters, selects its editor page,
writes `5` to active-mode field `+0xb48`, refreshes the attribute controls, and
requests a preview update. The square-wave glyph and hint corroborate the mode.
This wrapper has no conditional or separate error path.

## Click flow

```mermaid
flowchart LR
    control["Square"] -->|"OnClick"| handler["FUN_01124350"]
    handler --> clear["Clear current preview/editor state"]
    clear --> select["Apply signal mode 5"]
    select --> refresh["Refresh square-wave editor and preview"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001124350__FUN_01124350.c](../../../DecompiledSources/Tina16/functions/0000000001124350__FUN_01124350.c)
- Recovered role: Select square-wave excitation mode.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlExcitButtons.sbtnSquare.OnClick.
- Current graph behavior: Calls the shared reset helper, then the shared mode switcher with literal mode `5`.
- Current graph evidence: The handler body passes `(param_1, 0x240, 5)` to `FUN_01123730`; the extracted glyph is a square wave.
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
- Extracted glyph: [`0472_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnSquare_Glyph_Data.png`](../../../glyph/0472_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnSquare_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The resource ID `0x240` is not mapped to recovered text.
- Lower-level preview errors are outside this wrapper.
