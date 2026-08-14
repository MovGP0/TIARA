# Set continuous transient mode

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SimTimeDlg |
| Component path | SimTimeDlg.SBTrCont |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Set continuous transient mode |
| Text | Not present in the recovered resource. |
| Handler name | SBTrContClick |
| Handler address | 0132b570 |
| Graph node | `resource:dfm:SimTimeDlg/SimTimeDlg.SBTrCont` |
| Handler node | `function:0132b570` |
| Graph layer | UI |

## What happens when clicked

The handler first records a control-specific macro event. It then calls the continuous-transient mode routine. That routine compares the current `SBTrCont.Down` byte with the saved byte at form offset `+0x712`. If the state did not change, it makes no application-state change after the macro record.

If the state changed, the routine saves the three mode-button states, writes mode value `4` at form offset `+0x71c`, forces the Start/Stop button off, and runs the shared stop path. It then emits `[SetTINAMode(1)]` and refreshes the main application state. The `SBTrContClick` wrapper does not branch on `Sender`. No local exception handler is present.

## Click flow

```mermaid
flowchart TD
    control["SBTrCont: continuous transient"] -->|OnClick| handler["SBTrContClick"]
    handler --> macro["Record macro event"]
    handler --> mode["Apply continuous-transient mode"]
    mode --> changed{"Down state changed?"}
    changed -->|No| unchanged["Keep application state"]
    changed -->|Yes| snapshot["Save mode-button states"]
    snapshot --> stop["Set mode 4 and stop simulation"]
    stop --> appMode["Emit SetTINAMode(1)"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000132B570__FUN_0132b570.c](../../../DecompiledSources/Tina16/functions/000000000132B570__FUN_0132b570.c)
- Recovered role: Record the SBTrCont macro event and apply the continuous-transient simulation mode transition.
- Current graph summary: Handles 1 Delphi UI event: SimTimeDlg.SBTrCont.OnClick.
- Current graph behavior: Delegates to a state-change guard. A changed button state selects internal mode 4, stops an active run, and sends the application mode-1 command.
- Current graph evidence: `FUN_0132b570` calls the macro-event dispatcher and `FUN_0132b500`. The latter compares `SBTrCont.Down` with `+0x712`, writes `4` to `+0x71c`, forces the Start/Stop control down state to false, calls the common run-state routine, and reaches `FUN_013a44e0`, whose recovered string is `[SetTINAMode(1)]`.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414b50` — Assign the static macro token string.
- `function:0132b500` — Apply the guarded continuous-transient mode transition.
- `function:013a4ea0` — Format and dispatch a macro event.

Reviewed application callees: [mode transition](../../../DecompiledSources/Tina16/functions/000000000132B500__FUN_0132b500.c), [mode-state snapshot](../../../DecompiledSources/Tina16/functions/000000000132B660__FUN_0132b660.c), [shared run-state routine](../../../DecompiledSources/Tina16/functions/000000000132B070__FUN_0132b070.c), and [application mode-1 command](../../../DecompiledSources/Tina16/functions/00000000013A44E0__FUN_013a44e0.c).

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0481_SimTimeDlg_SimTimeDlg_SBTrCont_Glyph_Data.png`](../../../glyph/0481_SimTimeDlg_SimTimeDlg_SBTrCont_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: s at distance 109.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- The recovered code identifies internal mode value 4 and the state offsets but not their original Delphi field names. The nearby `s` label is not used as behavioral evidence.
