# Vendor specified pin list

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmICWizard |
| Component path | frmICWizard.gbPinLayout.rbVendor |
| Control class | TRadioButton |
| Caption | Vendor specified pin list |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbVendorClick |
| Handler address | 01784ea0 |
| Graph node | `resource:dfm:frmICWizard/frmICWizard.gbPinLayout.rbVendor` |
| Handler node | `function:01784ea0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Vendor specified pin list"] -->|OnClick| handler["FUN_01784ea0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001784EA0__FUN_01784ea0.c](../../../DecompiledSources/Tina16/functions/0000000001784EA0__FUN_01784ea0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmICWizard.gbPinLayout.rbVendor.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Color of pin labels at distance 47.
- Rank 2: Number of pins at distance 74.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
