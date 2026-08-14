# Digital Transient...

> Analysis status: Complete. The setup return branch and recovered Digital Transient result publisher establish the flow.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MIDigitalTransient |
| Control class | TMenuItem |
| Caption | Digital Transient... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MIDigitalTransientClick |
| Handler address | 015338f0 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MIDigitalTransient` |
| Handler node | `function:015338f0` |
| Graph layer | UI |

## What happens when clicked

`FUN_015338f0` saves the analysis context in mode 0 and calls `FUN_015267a0` with selector 0. When that call returns zero, it passes the global digital result data to `FUN_013d39a0`, which creates a numbered `Digital Transient` result, registers `Analysis Result 1`, publishes it, and refreshes the application.

A nonzero return skips result publication. The handler restores the prior context on both branches.

## Click flow

```mermaid
flowchart TD
    control["Click Digital Transient"] --> handler["FUN_015338f0"]
    handler --> prepare["Save analysis context"]
    prepare --> setup["FUN_015267a0 Digital Transient setup"]
    setup --> zero{"Return is zero?"}
    zero -->|Yes| publish["FUN_013d39a0 publishes Digital Transient result"]
    zero -->|No| skip["Skip result publication"]
    publish --> restore["Restore prior context"]
    skip --> restore
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015338F0__FUN_015338f0.c](../../../DecompiledSources/Tina16/functions/00000000015338F0__FUN_015338f0.c)
- Recovered role: Runs Digital Transient setup and publishes a result on success.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MIDigitalTransient.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:013d39a0` — FUN_013d39a0
- `function:015267a0` — FUN_015267a0
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

- The exact meanings of nonzero setup returns are not recovered.
- The digital simulation data structure is referenced through an unnamed global.
