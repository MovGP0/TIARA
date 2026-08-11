# Triangle|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalEditorDlg |
| Component path | SignalEditorDlg.pnlExcitButtons.sbtnTriangle |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Triangle\| |
| Text | Not present in the recovered resource. |
| Handler name | sbtnTriangleClick |
| Handler address | 01124380 |
| Graph node | `resource:dfm:SignalEditorDlg/SignalEditorDlg.pnlExcitButtons.sbtnTriangle` |
| Handler node | `function:01124380` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Triangle|"] -->|OnClick| handler["FUN_01124380"]
    handler --> call1["FUN_011235a0"]
    handler --> call2["FUN_01123730"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001124380__FUN_01124380.c](../../../DecompiledSources/Tina16/functions/0000000001124380__FUN_01124380.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalEditorDlg.pnlExcitButtons.sbtnTriangle.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
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
- Extracted glyph: [`0473_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnTriangle_Glyph_Data.png`](../../../glyph/0473_SignalEditorDlg_SignalEditorDlg_pnlExcitButtons_sbtnTriangle_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
