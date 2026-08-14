# FPrevCurveBtn

> Analysis status: Recovered previous-curve command descriptor and local-or-remote dispatch reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ScopeWin |
| Component path | ScopeWin.CursorBox.FPrevCurveBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PrevCurveBtnClick |
| Handler address | 012b16a0 |
| Graph node | `resource:dfm:ScopeWin/ScopeWin.CursorBox.FPrevCurveBtn` |
| Handler node | `function:012b16a0` |
| Graph layer | UI |

## What happens when clicked

The handler builds shared cursor-curve command `0x53B` with direction field 1. In local mode, the dispatcher changes the curve assigned to the currently selected cursor by the paired opposite route and refreshes cursor readouts. In remote mode, it forwards the command instead.

The extracted glyph points downward. The helper does not directly draw a curve or change the A/B cursor selection.

## Click flow

```mermaid
flowchart TD
    control["Click Previous curve"] --> request["Build command 0x53B with direction 1"]
    request --> remote{"Remote mode?"}
    remote -->|Yes| forward["Forward the command"]
    remote -->|No| select["Select the paired previous curve with collection wrap"]
    select --> refresh["Refresh cursor readouts"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012B16A0__FUN_012b16a0.c](../../../DecompiledSources/Tina16/functions/00000000012B16A0__FUN_012b16a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ScopeWin.CursorBox.FPrevCurveBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010f6d40` — FUN_010f6d40

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0394_ScopeWin_ScopeWin_CursorBox_FPrevCurveBtn_Glyph_Data.png`](../../../glyph/0394_ScopeWin_ScopeWin_CursorBox_FPrevCurveBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The exact index arithmetic for direction 1 is inside the cursor controller and is not recovered as a named method.
