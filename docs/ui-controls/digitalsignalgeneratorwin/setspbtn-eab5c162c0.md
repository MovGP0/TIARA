# Set

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DigitalSignalGeneratorWin |
| Component path | DigitalSignalGeneratorWin.DataGroupBox.DataSetGroupBox.SetSpBtn |
| Control class | TSpeedButton |
| Caption | Set |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SetSpBtnClick |
| Handler address | 01512580 |
| Graph node | `resource:dfm:DigitalSignalGeneratorWin/DigitalSignalGeneratorWin.DataGroupBox.DataSetGroupBox.SetSpBtn` |
| Handler node | `function:01512580` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Set"] -->|OnClick| handler["FUN_01512580"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["VCL control Unicode text reader"]
    handler --> call4["FUN_010f6920"]
    handler --> call5["FUN_01506c70"]
    handler --> call6["FUN_01512f00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001512580__FUN_01512580.c](../../../DecompiledSources/Tina16/functions/0000000001512580__FUN_01512580.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DigitalSignalGeneratorWin.DataGroupBox.DataSetGroupBox.SetSpBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0064dd90` — VCL control Unicode text reader
- `function:010f6920` — FUN_010f6920
- `function:01506c70` — FUN_01506c70
- `function:01512f00` — FUN_01512f00

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

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
