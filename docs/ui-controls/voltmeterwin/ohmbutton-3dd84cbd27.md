# R

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VoltmeterWin |
| Component path | VoltmeterWin.FunctionBox.OhmButton |
| Control class | TSpeedButton |
| Caption | R |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OhmButtonClick |
| Handler address | 01b6faf0 |
| Graph node | `resource:dfm:VoltmeterWin/VoltmeterWin.FunctionBox.OhmButton` |
| Handler node | `function:01b6faf0` |
| Graph layer | UI |

## What happens when clicked

The handler requests meter mode 4, which the shared control path maps to resistance. If the backend accepts the request, the helper stores the accepted mode and updates the function buttons and related display state. If the backend rejects it, the helper dispatches a mode-change event instead. The handler then reads the actual backend mode and refreshes the button state, so the UI follows the mode that is active. The click does not start a measurement by itself.

## Click flow

```mermaid
flowchart TD
    control["resistance button"] -->|"OnClick"| handler["OhmButtonClick (01b6faf0)"]
    handler --> request["Request meter mode 4: resistance"]
    request --> accepted{"Backend accepts requested mode?"}
    accepted -->|"Yes"| store["Store accepted mode"]
    accepted -->|"No"| dispatch["Dispatch mode-change event"]
    store --> actual["Read actual backend mode"]
    dispatch --> actual
    actual --> refresh["Refresh function buttons and display state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B6FAF0__FUN_01b6faf0.c](../../../DecompiledSources/Tina16/functions/0000000001B6FAF0__FUN_01b6faf0.c)
- Recovered role: Select resistance measurement mode.
- Current graph summary: Handles 1 Delphi UI event: VoltmeterWin.FunctionBox.OhmButton.OnClick.
- Current graph behavior: The handler requests meter mode 4, which the shared control path maps to resistance. If the backend accepts the request, the helper stores the accepted mode and updates the function buttons and related display state. If the backend rejects it, the helper dispatches a mode-change event instead. The handler then reads the actual backend mode and refreshes the button state, so the UI follows the mode that is active. The click does not start a measurement by itself.
- Current graph evidence: FUN_01b6faf0 calls FUN_01b6e340 with constant 4, reads the actual mode through backend virtual slot 0xA0, and passes that value to FUN_01b6bcd0. The shared selector uses backend slot 0x98 as its acceptance test, stores accepted mode byte 0x9CA, and dispatches event 0x537 on rejection. FUN_01b6bcd0 maps mode 4 to the DFM-bound VoltmeterWin.FunctionBox.OhmButton button.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:01b6bcd0` — FUN_01b6bcd0
- `function:01b6e340` — FUN_01b6e340

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

- The backend class and virtual method names are not recovered. The accepted and rejected meanings follow the repeated return-value, state-write, and refresh paths.

