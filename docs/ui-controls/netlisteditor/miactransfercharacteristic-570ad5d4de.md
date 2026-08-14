# &AC Transfer Characteristic...

> Analysis status: Complete. The setup return branch and recovered AC result publisher establish the flow.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistEditor |
| Component path | NetlistEditor.MainMenu.MAnalysis.MIACAnalysis.MIACTransferCharacteristic |
| Control class | TMenuItem |
| Caption | &AC Transfer Characteristic... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MIACTransferCharacteristicClick |
| Handler address | 01533320 |
| Graph node | `resource:dfm:NetlistEditor/NetlistEditor.MainMenu.MAnalysis.MIACAnalysis.MIACTransferCharacteristic` |
| Handler node | `function:01533320` |
| Graph layer | UI |

## What happens when clicked

`FUN_01533320` saves analysis context in mode 2 and calls `FUN_01394040` for the active circuit. When the call returns zero, it passes the resulting circuit data and recovered global output mode to `FUN_013d4bc0`, which builds and registers the AC result views.

A nonzero return skips publication. The handler always restores the prior context.

## Click flow

```mermaid
flowchart TD
    control["Click AC Transfer Characteristic"] --> handler["FUN_01533320"]
    handler --> prepare["Save analysis context in mode 2"]
    prepare --> setup["FUN_01394040 AC transfer setup"]
    setup --> zero{"Return is zero?"}
    zero -->|Yes| publish["FUN_013d4bc0 builds AC results"]
    zero -->|No| skip["Skip result publication"]
    publish --> restore["Restore prior context"]
    skip --> restore
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001533320__FUN_01533320.c](../../../DecompiledSources/Tina16/functions/0000000001533320__FUN_01533320.c)
- Recovered role: Runs AC transfer-characteristic setup and publishes its result on success.
- Current graph summary: Handles 1 Delphi UI event: NetlistEditor.MainMenu.MAnalysis.MIACAnalysis.MIACTransferCharacteristic.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:01394040` — FUN_01394040
- `function:013d4bc0` — FUN_013d4bc0
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
- The recovered global output-mode field has no Delphi name.
