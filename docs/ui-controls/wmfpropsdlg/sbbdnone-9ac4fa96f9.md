# sbBdNone

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | WMFPropsDlg |
| Component path | WMFPropsDlg.gbBackground.sbBdNone |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbBdNoneClick |
| Handler address | 010b68c0 |
| Graph node | `resource:dfm:WMFPropsDlg/WMFPropsDlg.gbBackground.sbBdNone` |
| Handler node | `function:010b68c0` |
| Graph layer | UI |

## What happens when clicked

The handler calls the shared `NoColor` routine with the background paint box as `Sender`. That routine writes sentinel value `0x03000000` to background color field `0x79c` and invalidates the background paint box at form offset `0x738`.

The recovered `PaintColor` handler then draws the special no-color preview instead of a filled color rectangle. The inspected two-state glyph includes a red cross, which agrees with this path. The source and paint behavior, not the glyph alone, establish the result. The click has no confirmation or error branch. Repeating it writes the same value and requests another repaint.

## Click flow

```mermaid
flowchart TD
    control["Background None button"] -->|OnClick| handler["sbBdNoneClick at 010b68c0"]
    handler --> shared["Call NoColor with the background paint box"]
    shared --> clear["Set background color to sentinel 0x03000000"]
    clear --> refresh["Invalidate the background preview"]
    refresh --> paint["PaintColor draws the no-color preview"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010B68C0__FUN_010b68c0.c](../../../DecompiledSources/Tina16/functions/00000000010B68C0__FUN_010b68c0.c)
- Recovered role: Clears the background fill color through the shared no-color handler.
- Current graph summary: Handles 1 Delphi UI event: WMFPropsDlg.gbBackground.sbBdNone.OnClick.
- Current graph behavior: The handler selects the background branch of `NoColor`, stores the no-color sentinel, and refreshes the preview.
- Current graph evidence: `sbBdNoneClick` passes form control `0x738` to `FUN_010b67f0`. That sender selects field `0x79c`, writes `0x03000000`, and invalidates the same paint box. `PaintColor` uses the sentinel branch for the preview.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010b67f0` — Selects the color field from `Sender`, writes the no-color sentinel, and invalidates its paint box.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0519_WMFPropsDlg_WMFPropsDlg_gbBackground_sbBdNone_Glyph_Data.png`](../../../glyph/0519_WMFPropsDlg_WMFPropsDlg_gbBackground_sbBdNone_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: &Fill color: at distance 254.

## Analysis limits

- The original Delphi name and external serialization meaning of sentinel `0x03000000` are not recovered. Its no-color UI meaning is established by the shared handler and paint path.
- The exact drawing-method names used by the paint-box preview are not recovered.
