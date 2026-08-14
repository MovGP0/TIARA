# btnNorth

> Analysis status: Reviewed from recovered shared-handler, state, caller, resource, and glyph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PinProps |
| Component path | PinProps.btnNorth |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DirClick |
| Handler address | 017a2230 |
| Graph node | `resource:dfm:PinProps/PinProps.btnNorth` |
| Handler node | `function:017a2230` |
| Graph layer | UI |

## What happens when clicked

`FUN_017a2230` verifies that `Sender` is a speed button. For `PinProps.btnNorth`, it reads direction code 3 from the sender's `Tag` byte and passes that code to `FUN_017a1fe0`.

The helper sets North down and sets East, South, and West up. Its `FUN_017a1fc0` callee skips any button that already has the requested state. A repeated North click therefore keeps North selected, despite the recovered `AllowAllUp = true` resource property.

The click changes only staged dialog state. It does not write the pin record, close the dialog, or refresh the schematic.

## Shared state and later commit

The four direction buttons share `DirClick` and `GroupIndex = 1`. Their recovered codes are East 0, South 1, West 2, and North 3. `FUN_017b0ee0` initializes the group from pin-record offset `0x147`. After an OK result, it reads the group through `FUN_017a1f60`, writes code 3 when North is selected, copies the other edited properties, and refreshes the owner. A non-OK result leaves the original record unchanged.

A null or non-speed-button `Sender` causes no action. An unsupported direction code would clear all four buttons, but the four recovered controls use valid codes. No explicit validation or error message is present in this handler.

## Click flow

```mermaid
flowchart TD
    northControl["Click North"] --> directionHandler["FUN_017a2230 checks Sender"]
    directionHandler --> senderDecision{"Sender is a speed button"}
    senderDecision -->|No| noChange["Leave the direction controls unchanged"]
    senderDecision -->|Yes| northCode["Read North direction code 3 from Sender.Tag"]
    northCode --> setDirection["FUN_017a1fe0 sets North down and the other directions up"]
    setDirection --> stagedDirection["Keep North as the staged direction"]
    stagedDirection --> modalDecision{"Later dialog result"}
    modalDecision -->|"Cancel or other non-OK"| discardEdit["Keep the original pin direction"]
    modalDecision -->|OK| commitDirection["FUN_017a1f60 returns 3; caller writes pin offset 0x147"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017A2230__FUN_017a2230.c](../../../DecompiledSources/Tina16/functions/00000000017A2230__FUN_017a2230.c)
- Recovered role: Route a direction speed-button click to the PinProps direction-state setter.
- Current graph summary: Handles 4 Delphi UI events: PinProps.btnNorth.OnClick, PinProps.btnEast.OnClick, PinProps.btnSouth.OnClick.
- Current graph behavior: Validates `Sender` as a speed button, reads its direction code, and sets exactly the matching direction button down for codes 0 through 3. This control supplies North code 3.
- Current graph evidence: `FUN_017a2230` class-checks `Sender`, reads its byte at `+0x18`, and calls `FUN_017a1fe0`. The setter maps code 3 to the form field for btnNorth, while `FUN_017a1f60` returns 3 when that button is down. The extracted glyph and Direction label agree with the North control identity.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:004113d0` — Test whether `Sender` is a compatible speed-button instance.
- `function:017a1fe0` — Apply one direction code to all four speed-button down states.

## Related source

- [Direction-state setter `FUN_017a1fe0`](../../../DecompiledSources/Tina16/functions/00000000017A1FE0__FUN_017a1fe0.c) — Maps codes 0 through 3 to East, South, West, and North.
- [Direction-state reader `FUN_017a1f60`](../../../DecompiledSources/Tina16/functions/00000000017A1F60__FUN_017a1f60.c) — Returns the code for the button that is down.
- [Pin-properties coordinator `FUN_017b0ee0`](../../../DecompiledSources/Tina16/functions/00000000017B0EE0__FUN_017b0ee0.c) — Initializes the staged direction and commits it only after OK.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0307_PinProps_PinProps_btnNorth_Glyph_Data.png`](../../../glyph/0307_PinProps_PinProps_btnNorth_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: &Direction: at distance 62.
- Rank 2: Name Color: at distance 89.
- Rank 3: S&hape: at distance 91.

## Analysis limits

- The DFM evidence subset omits the buttons' `Tag` property. The code mapping, button fields, names, Direction label, and inspected glyph establish the effective control-specific code.
- The caller owns the later model update and is used only to establish the commit boundary.
- Shared helper annotations are owned by the East fragment to avoid unnecessary duplicate annotation sources.
