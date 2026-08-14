# Set single transient mode

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SimTimeDlg |
| Component path | SimTimeDlg.SBTrSing |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Set single transient mode |
| Text | Not present in the recovered resource. |
| Handler name | SBTrSingClick |
| Handler address | 0132b470 |
| Graph node | `resource:dfm:SimTimeDlg/SimTimeDlg.SBTrSing` |
| Handler node | `function:0132b470` |
| Graph layer | UI |

## What happens when clicked

The handler first records a control-specific macro event. It then calls the single-transient mode routine. That routine compares the current `SBTrSing.Down` byte with the saved byte at form offset `+0x711`. If the state did not change, it makes no application-state change after the macro record.

If the state changed, the routine saves the three mode-button states, writes mode value `1` at form offset `+0x71c`, forces the Start/Stop button off, and runs the shared stop path. It then emits `[SetTINAMode(1)]` and refreshes the main application state. The `SBTrSingClick` wrapper does not branch on `Sender`. No local exception handler is present.

## Click flow

```mermaid
flowchart TD
    control["SBTrSing: single transient"] -->|OnClick| handler["SBTrSingClick"]
    handler --> macro["Record macro event"]
    handler --> mode["Apply single-transient mode"]
    mode --> changed{"Down state changed?"}
    changed -->|No| unchanged["Keep application state"]
    changed -->|Yes| snapshot["Save mode-button states"]
    snapshot --> stop["Set mode 1 and stop simulation"]
    stop --> appMode["Emit SetTINAMode(1)"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000132B470__FUN_0132b470.c](../../../DecompiledSources/Tina16/functions/000000000132B470__FUN_0132b470.c)
- Recovered role: Record the SBTrSing macro event and apply the single-transient simulation mode transition.
- Current graph summary: Handles 1 Delphi UI event: SimTimeDlg.SBTrSing.OnClick.
- Current graph behavior: Delegates to a state-change guard. A changed button state selects internal mode 1, stops an active run, and sends the application mode-1 command.
- Current graph evidence: `FUN_0132b470` calls the macro-event dispatcher and `FUN_0132b400`. The latter compares `SBTrSing.Down` with `+0x711`, writes `1` to `+0x71c`, forces the Start/Stop control down state to false, calls the common run-state routine, and reaches `FUN_013a44e0`, whose recovered string is `[SetTINAMode(1)]`.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414b50` — Assign the static macro token string.
- `function:0132b400` — Apply the guarded single-transient mode transition.
- `function:013a4ea0` — Format and dispatch a macro event.

Reviewed application callees: [mode transition](../../../DecompiledSources/Tina16/functions/000000000132B400__FUN_0132b400.c), [mode-state snapshot](../../../DecompiledSources/Tina16/functions/000000000132B660__FUN_0132b660.c), [shared run-state routine](../../../DecompiledSources/Tina16/functions/000000000132B070__FUN_0132b070.c), and [application mode-1 command](../../../DecompiledSources/Tina16/functions/00000000013A44E0__FUN_013a44e0.c).

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0480_SimTimeDlg_SimTimeDlg_SBTrSing_Glyph_Data.png`](../../../glyph/0480_SimTimeDlg_SimTimeDlg_SBTrSing_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: s at distance 142.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The recovered code identifies internal mode value 1 and the state offsets but not their original Delphi field names. The nearby `s` label is not used as behavioral evidence.
