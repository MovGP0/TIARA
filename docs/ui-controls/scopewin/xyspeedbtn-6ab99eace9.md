# Y/X

> Analysis status: Recovered mode guard, backend acceptance, axis reset, and redraw path reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ScopeWin |
| Component path | ScopeWin.HorizontalGroupBox.XYSpeedBtn |
| Control class | TSpeedButton |
| Caption | Y/X |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | XYSpeedBtnClick |
| Handler address | 012b17d0 |
| Graph node | `resource:dfm:ScopeWin/ScopeWin.HorizontalGroupBox.XYSpeedBtn` |
| Handler node | `function:012b17d0` |
| Graph layer | UI |

## What happens when clicked

The handler acts only when ScopeWin is currently in Y/T mode. It proposes Y/X mode by setting form flag `+0xdd0` to 1 and asks the scope backend to accept the change. If the backend clears the flag, the transition is rejected and the handler restores the Y/T button Down state.

On acceptance, the handler stops or resets active acquisition when required, selects internal axis code `0x0c`, sets storage mode byte `+0xde8` to 4, reconciles curves, resets cursor state, applies the axis code to the plot, and redraws. The resource labels **Mode** and **X Source** support the Y/X context, and XSourceBox supplies input or channel choices.

## Click flow

```mermaid
flowchart TD
    control["Click Y/X"] --> current{"Already in Y/X mode?"}
    current -->|Yes| noAction["Return without a change"]
    current -->|No| propose["Propose mode flag 1 to the backend"]
    propose --> accepted{"Backend accepts Y/X?"}
    accepted -->|No| restore["Restore the Y/T button"]
    accepted -->|Yes| reset["Reset acquisition, curves, cursors, and axes"]
    reset --> redraw["Apply axis code 0x0c and redraw"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012B17D0__FUN_012b17d0.c](../../../DecompiledSources/Tina16/functions/00000000012B17D0__FUN_012b17d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ScopeWin.HorizontalGroupBox.XYSpeedBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:0082a6c0` — FUN_0082a6c0
- `function:010e7b90` — FUN_010e7b90
- `function:010f6af0` — FUN_010f6af0
- `function:012ae470` — FUN_012ae470

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Mode at distance 51.
- Rank 2: X Source at distance 57.
- Rank 3: Position at distance 93.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The original enum names for axis code 0x0c and storage mode 4 are not recovered.
