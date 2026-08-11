# Nyquist

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Response_form1 |
| Component path | Response_form1.SettingsGroupBox2.NyquistCheckBox1 |
| Control class | TCheckBox |
| Caption | Nyquist |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NyquistCheckBox1Click |
| Handler address | 0117a020 |
| Graph node | `resource:dfm:Response_form1/Response_form1.SettingsGroupBox2.NyquistCheckBox1` |
| Handler node | `function:0117a020` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Nyquist"] -->|OnClick| handler["FUN_0117a020"]
    handler --> call1["VCL control text setter with change suppression"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000117A020__FUN_0117a020.c](../../../DecompiledSources/Tina16/functions/000000000117A020__FUN_0117a020.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Response_form1.SettingsGroupBox2.NyquistCheckBox1.OnClick.
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
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Number of points at distance 64.
- Rank 2: Gain. min (dB) at distance 73.
- Rank 3: Stop freq.(Hz) at distance 97.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
