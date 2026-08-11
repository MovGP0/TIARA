# sbHome

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FormHelp |
| Component path | FormHelp.FlowPanel1.sbHome |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbHomeClick |
| Handler address | 00b018f0 |
| Graph node | `resource:dfm:FormHelp/FormHelp.FlowPanel1.sbHome` |
| Handler node | `function:00b018f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["sbHome"] -->|OnClick| handler["FUN_00b018f0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00b01560"]
    handler --> call3["FUN_00b04450"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000B018F0__FUN_00b018f0.c](../../../DecompiledSources/Tina16/functions/0000000000B018F0__FUN_00b018f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FormHelp.FlowPanel1.sbHome.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00b01560` — FUN_00b01560
- `function:00b04450` — FUN_00b04450

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0175_FormHelp_FormHelp_FlowPanel1_sbHome_Glyph_Data.png`](../../../glyph/0175_FormHelp_FormHelp_FlowPanel1_sbHome_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
