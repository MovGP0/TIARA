# Y/T

> Analysis status: Recovered mode guard, backend acceptance, axis reset, and redraw path reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ScopeWin |
| Component path | ScopeWin.HorizontalGroupBox.YTSpeedBtn |
| Control class | TSpeedButton |
| Caption | Y/T |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | YTSpeedBtnClick |
| Handler address | 012b16f0 |
| Graph node | `resource:dfm:ScopeWin/ScopeWin.HorizontalGroupBox.YTSpeedBtn` |
| Handler node | `function:012b16f0` |
| Graph layer | UI |

## What happens when clicked

The handler acts only when ScopeWin is currently in Y/X mode. It proposes Y/T mode by setting form flag `+0xdd0` to 0 and asks the scope backend to accept the change. If the backend restores a nonzero flag, the transition is rejected and the handler restores the Y/X button Down state.

On acceptance, the handler stops or resets active acquisition when required, selects internal axis code `0x0b`, selects storage mode byte `+0xde8` from current acquisition state, reconciles curves, resets cursor state, applies the axis code to the plot, and redraws.

## Click flow

```mermaid
flowchart TD
    control["Click Y/T"] --> current{"Already in Y/T mode?"}
    current -->|Yes| noAction["Return without a change"]
    current -->|No| propose["Propose mode flag 0 to the backend"]
    propose --> accepted{"Backend accepts Y/T?"}
    accepted -->|No| restore["Restore the Y/X button"]
    accepted -->|Yes| reset["Reset acquisition, curves, cursors, and axes"]
    reset --> redraw["Apply axis code 0x0b and redraw"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012B16F0__FUN_012b16f0.c](../../../DecompiledSources/Tina16/functions/00000000012B16F0__FUN_012b16f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ScopeWin.HorizontalGroupBox.YTSpeedBtn.OnClick.
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

- Rank 1: Mode at distance 20.
- Rank 2: X Source at distance 26.
- Rank 3: Position at distance 62.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The original enum names for axis code 0x0b and the derived storage mode are not recovered.
