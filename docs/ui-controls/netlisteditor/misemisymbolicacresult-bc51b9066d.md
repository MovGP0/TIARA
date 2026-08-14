# Semi-symbolic AC Result

> Analysis status: Complete. The wrapper selector and recovered symbolic-result loop establish the semi-symbolic AC result path.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MISymbolic.MISemisymbolicACResult |
| Control class | TMenuItem |
| Caption | Semi-symbolic AC Result |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MISemisymbolicACResultClick |
| Handler address | 015339c0 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MISymbolic.MISemisymbolicACResult` |
| Handler node | `function:015339c0` |
| Graph layer | UI |

## What happens when clicked

`FUN_015339c0` saves analysis context and calls `FUN_0145ecb0` with selector 1. The callee initializes the same AC symbolic-result pipeline as selector 0 but chooses the selector-1 formatting routines while processing entries. On completion without cancellation, it publishes the result text in the result/equation window.

The handler restores the prior context after the callee returns.

## Click flow

```mermaid
flowchart TD
    control["Click Semi-symbolic AC Result"] --> handler["FUN_015339c0"]
    handler --> prepare["Save analysis context"]
    prepare --> action["FUN_0145ecb0 selector 1 AC result"]
    action --> restore["Restore prior context"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015339C0__FUN_015339c0.c](../../../DecompiledSources/Tina16/functions/00000000015339C0__FUN_015339c0.c)
- Recovered role: Generates and displays the AC result with semi-symbolic selector 1.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MISymbolic.MISemisymbolicACResult.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0145ecb0` — FUN_0145ecb0
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

- The exact symbolic terms retained by selector 1 are not named in this wrapper.
- Cancellation is handled inside the callee without a wrapper message.
