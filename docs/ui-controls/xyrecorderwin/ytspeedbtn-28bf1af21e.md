# Y/T

> Analysis status: Complete. The control changes the recorder to Y/T plotting mode.

## Control

| Property | Recovered value |
| --- | --- |
| Form | XYRecorderWin |
| Component path | XYRecorderWin.XChannelGroupBox.YTSpeedBtn |
| Control class | TSpeedButton |
| Caption | Y/T |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | YTSpeedBtnClick |
| Handler address | 01b5a710 |
| Graph node | `resource:dfm:XYRecorderWin/XYRecorderWin.XChannelGroupBox.YTSpeedBtn` |
| Handler node | `function:01b5a710` |
| Graph layer | UI |

## What happens when clicked

If the recorder is already in Y/T mode, `YTSpeedBtnClick` returns without changing state. Otherwise, it requests Y/T mode from the acquisition backend. If the backend rejects the request, the handler restores the Y/X button state and returns.

For an accepted change, the handler stops an active acquisition before it changes the axes. It selects backend mode `0`, changes the horizontal-scale label to `Time/Div`, changes the plot-mode byte to `0x0B`, restores and normalizes the stored time scale, updates the scale editor and plot range, removes plot entries for the old mode, reapplies the plot mode, and invalidates both cursor caches. The click changes runtime acquisition and display state only.

## Click flow

```mermaid
flowchart TD
    control["Y/T<br/>YTSpeedBtn"] -->|OnClick| handler["FUN_01b5a710<br/>YTSpeedBtnClick"]
    handler --> current{"Already in Y/T mode?"}
    current -->|Yes| unchanged["Return without a change"]
    current -->|No| request["Request backend mode 0"]
    request --> accepted{"Mode accepted?"}
    accepted -->|No| restore["Restore Y/X button state"]
    accepted -->|Yes| stop["Stop active acquisition if necessary"]
    stop --> axes["Set Time/Div and plot mode 0x0B"]
    axes --> rebuild["Update range, rebuild plot,<br/>invalidate cursors"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B5A710__FUN_01b5a710.c](../../../DecompiledSources/Tina16/functions/0000000001B5A710__FUN_01b5a710.c)
- Review role: Switch the recorder from Y/X to Y/T plotting and rebuild its axes.
- Current graph summary: Handles 1 Delphi UI event: XYRecorderWin.XChannelGroupBox.YTSpeedBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression
- `function:0082a6c0` — FUN_0082a6c0
- `function:00b90440` — FUN_00b90440
- `function:010c0d70` — FUN_010c0d70
- `function:010e7b90` — FUN_010e7b90
- `function:010f6af0` — FUN_010f6af0
- `function:01b581d0` — FUN_01b581d0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Mode at distance 24.
- Rank 2: Position at distance 130.
- Rank 3: Volts/Div at distance 168.

## Analysis limits

- The recovered backend method can reject the requested mode, but the reason and user notification behavior are not visible in this handler.
- A live UI or hardware test was not performed. No file or persistent-setting write is present.
