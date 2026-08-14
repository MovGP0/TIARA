# Export curves

> Analysis status: Recovered shared buffered-curve publication path reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ScopeWin |
| Component path | ScopeWin.DataBox.FDataSaveBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Export curves |
| Text | Not present in the recovered resource. |
| Handler name | DataSaveBtnClick |
| Handler address | 012b1ca0 |
| Graph node | `resource:dfm:ScopeWin/ScopeWin.DataBox.FDataSaveBtn` |
| Handler node | `function:012b1ca0` |
| Graph layer | UI |

## What happens when clicked

Despite the **Export curves** hint and file-style glyph, this handler does not open a file dialog. It calls the shared analyzer export routine, which asks ScopeWin for an exportable buffered curve through virtual slot `+0x560`.

If the form type gate accepts a non-null curve, the routine installs that curve as the application's current analysis source, clears the prior nested current-curve slot, and creates two reference-counted curve-writer support objects configured for memory storage. If no curve is returned, or the form type gate rejects it, the click is a no-op.

The recovered path publishes data to the application analysis workspace; a later consumer can perform file export.

## Click flow

```mermaid
flowchart TD
    control["Click Export curves"] --> curve["Request an exportable ScopeWin curve"]
    curve --> usable{"Accepted non-null curve?"}
    usable -->|No| noAction["Return without publishing"]
    usable -->|Yes| publish["Install it as the current analysis source"]
    publish --> writers["Create two in-memory curve-writer helpers"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012B1CA0__FUN_012b1ca0.c](../../../DecompiledSources/Tina16/functions/00000000012B1CA0__FUN_012b1ca0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ScopeWin.DataBox.FDataSaveBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010f7ea0` — FUN_010f7ea0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0397_ScopeWin_ScopeWin_DataBox_FDataSaveBtn_Glyph_Data.png`](../../../glyph/0397_ScopeWin_ScopeWin_DataBox_FDataSaveBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The downstream action that converts the published curve to a disk file is outside this handler.
