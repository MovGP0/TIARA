# DC Result

> Analysis status: Complete. The wrapper selector and recovered symbolic-result loop establish the numeric DC result path.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MISymbolic.MIDCResult |
| Control class | TMenuItem |
| Caption | DC Result |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MIDCResultClick |
| Handler address | 01533930 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MISymbolic.MIDCResult` |
| Handler node | `function:01533930` |
| Graph layer | UI |

## What happens when clicked

`FUN_01533930` saves analysis context and calls `FUN_0145ef50` with selector 0 and the active circuit. The callee initializes the symbolic engine, labels the output `DC result:`, processes entries until completion or cancellation, and publishes the result text in the result/equation window on completion.

The handler restores the prior context after the callee returns.

## Click flow

```mermaid
flowchart TD
    control["Click DC Result"] --> handler["FUN_01533930"]
    handler --> prepare["Save analysis context"]
    prepare --> action["FUN_0145ef50 selector 0 DC result"]
    action --> restore["Restore prior context"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001533930__FUN_01533930.c](../../../DecompiledSources/Tina16/functions/0000000001533930__FUN_01533930.c)
- Recovered role: Generates and displays the DC symbolic-result view with numeric formatting selector 0.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MISymbolic.MIDCResult.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0145ef50` — FUN_0145ef50
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

- The symbolic engine's internal expression transformations are not named.
- Cancellation is tested inside the callee; the wrapper has no separate message.
