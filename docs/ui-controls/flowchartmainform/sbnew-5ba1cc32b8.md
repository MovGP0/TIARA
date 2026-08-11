# New Flowchart

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FlowChartMainForm |
| Component path | FlowChartMainForm.pnToolbar.sbNew |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | New Flowchart |
| Text | Not present in the recovered resource. |
| Handler name | sbNewClick |
| Handler address | 0104f100 |
| Graph node | `resource:dfm:FlowChartMainForm/FlowChartMainForm.pnToolbar.sbNew` |
| Handler node | `function:0104f100` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["New Flowchart"] -->|OnClick| handler["FUN_0104f100"]
    handler --> call1["New flowchart command coordinator"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000104F100__FUN_0104f100.c](../../../DecompiledSources/Tina16/functions/000000000104F100__FUN_0104f100.c)
- Recovered role: New Flowchart toolbar forwarding handler
- Current graph summary: Forwards the New Flowchart toolbar click to the shared command. Handles 1 Delphi UI event: FlowChartMainForm.pnToolbar.sbNew.OnClick.
- Current graph behavior: Forwards the New Flowchart toolbar click to the shared command.
- Current graph evidence: The speed button has the hint New Flowchart and a two-frame new-document glyph. The function contains only a call to FUN_0104f160.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0104f160` — New flowchart command coordinator

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0162_FlowChartMainForm_FlowChartMainForm_pnToolbar_sbNew_Glyph_Data.png`](../../../glyph/0162_FlowChartMainForm_FlowChartMainForm_pnToolbar_sbNew_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
