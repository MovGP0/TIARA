# St&eady State Solver...

> Analysis status: Complete. The analysis context and one recovered solver call establish the action.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MISteadyStateSolver |
| Control class | TMenuItem |
| Caption | St&eady State Solver... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MISteadyStateSolverClick |
| Handler address | 015336b0 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MISteadyStateSolver` |
| Handler node | `function:015336b0` |
| Graph layer | UI |

## What happens when clicked

`FUN_015336b0` saves analysis context in mode 0, calls `FUN_0134d990`, and restores the prior context after the solver routine returns.

The wrapper has no result branch or local message. Solver configuration, cancellation, and result publication are handled inside `FUN_0134d990`.

## Click flow

```mermaid
flowchart TD
    control["Click Steady State Solver"] --> handler["FUN_015336b0"]
    handler --> prepare["Save analysis context"]
    prepare --> action["FUN_0134d990 Steady State Solver"]
    action --> restore["Restore prior context"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015336B0__FUN_015336b0.c](../../../DecompiledSources/Tina16/functions/00000000015336B0__FUN_015336b0.c)
- Recovered role: Runs the Steady State Solver within the Netlist Editor analysis context.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MISteadyStateSolver.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0134d990` — FUN_0134d990
- `function:0152fca0` — FUN_0152fca0
- `function:0152fd80` — FUN_0152fd80

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

- The handler exposes no solver return value.
- All detailed solver decisions and result handling remain inside `FUN_0134d990`.
