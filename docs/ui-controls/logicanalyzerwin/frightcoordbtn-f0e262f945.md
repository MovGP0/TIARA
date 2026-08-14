# Right

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LogicAnalyzerWin |
| Component path | LogicAnalyzerWin.DisplayGroupBox.FRightCoordBtn |
| Control class | TSpeedButton |
| Caption | Right |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | RightCoordBtnClick |
| Handler address | 015209b0 |
| Graph node | `resource:dfm:LogicAnalyzerWin/LogicAnalyzerWin.DisplayGroupBox.FRightCoordBtn` |
| Handler node | `function:015209b0` |
| Graph layer | UI |

## What happens when clicked

VCL selects **Right** in the Left/Right speed-button group. `FUN_015209b0` then calls `FUN_015073a0`. The helper reads the stored upper X bound at `+0xc58` and writes it to the shared floating-point coordinate edit at `+0xb90`, which stores and formats the value.

The click selects and displays an existing bound. It does not change either bound, move the graph, move a cursor, or select a channel. Later edit and spin handlers enforce `right > left`, store an accepted value, clamp cursors, and update the graph. Those later actions are not direct calls from this click.

Repeated clicks reload the same value. The direct path has no message, file write, local exception handler, or rollback.

## Click flow

```mermaid
flowchart TD
    Click["Click Right"] --> Select["VCL selects Right mode"]
    Select --> Handler["FUN_015209b0"]
    Handler --> Read["Read upper X bound +0xc58"]
    Read --> Edit["Write and format coordinate edit +0xb90"]
    Edit -. "later edit or spin" .-> Apply["Validate and apply a new upper bound"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015209B0__FUN_015209b0.c](../../../DecompiledSources/Tina16/functions/00000000015209B0__FUN_015209b0.c)
- Recovered role: Select and display the Logic Analyzer's upper X-axis bound.
- Current graph summary: Handles 1 Delphi UI event: LogicAnalyzerWin.DisplayGroupBox.FRightCoordBtn.OnClick.
- Current graph behavior: The handler copies the stored right bound into the shared coordinate editor.
- Current graph evidence: The handler, `FUN_015073a0`, and paired bound-update path establish the field roles.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:015073a0` — FUN_015073a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Original Delphi field names for the bounds and edit pointer are not recovered.
- The click does not expose the custom spin control's later callback order.
