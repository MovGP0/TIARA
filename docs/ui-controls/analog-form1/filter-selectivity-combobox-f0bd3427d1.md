# Filter_Selectivity_ComboBox

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.SpecificationGroupBox1.Filter_Selectivity_ComboBox |
| Control class | TComboBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Filter_Selectivity_ComboBoxClick |
| Handler address | 01234a80 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.SpecificationGroupBox1.Filter_Selectivity_ComboBox` |
| Handler node | `function:01234a80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Filter_Selectivity_ComboBox"] -->|OnClick| handler["FUN_01234a80"]
    handler --> call1["VCL control text setter with change suppression"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001234A80__FUN_01234a80.c](../../../DecompiledSources/Tina16/functions/0000000001234A80__FUN_01234a80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.SpecificationGroupBox1.Filter_Selectivity_ComboBox.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("Lowpass", "Highpass", "Bandpass", "Bandstop")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Type: at distance 13.
- Rank 2: Selectivity at distance 112.
- Rank 3: Approximation at distance 131.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
