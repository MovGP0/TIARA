# &Load

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.GroupBox1.FileLoadButton |
| Control class | TBitBtn |
| Caption | &Load |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FileLoadButtonClick |
| Handler address | 0122d240 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.GroupBox1.FileLoadButton` |
| Handler node | `function:0122d240` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Load"] -->|OnClick| handler["FUN_0122d240"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["FUN_00416ba0"]
    handler --> call4["FUN_00416dc0"]
    handler --> call5["FUN_004170c0"]
    handler --> call6["FUN_00441920"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000122D240__FUN_0122d240.c](../../../DecompiledSources/Tina16/functions/000000000122D240__FUN_0122d240.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.GroupBox1.FileLoadButton.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 14

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00416ba0` — FUN_00416ba0
- `function:00416dc0` — FUN_00416dc0
- `function:004170c0` — FUN_004170c0
- `function:00441920` — FUN_00441920
- `function:0064dbe0` — FUN_0064dbe0
- `function:0064de00` — VCL control text setter with change suppression
- `function:00724270` — FUN_00724270
- `function:00724380` — FUN_00724380
- `function:00b90440` — FUN_00b90440
- `function:01182570` — FUN_01182570
- `function:01229220` — FUN_01229220
- `function:0122b3a0` — FUN_0122b3a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0009_Analog_form1_Analog_form1_GroupBox1_FileLoadButton_Glyph_Data.png`](../../../glyph/0009_Analog_form1_Analog_form1_GroupBox1_FileLoadButton_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
