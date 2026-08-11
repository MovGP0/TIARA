# mnAddWatch

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FlowChartMainForm |
| Component path | FlowChartMainForm.pcMain.tsCode.Debugger.mnPopupRegisters.mnAddWatch |
| Control class | TMenuItem |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbAddWatchClick |
| Handler address | 010536e0 |
| Graph node | `resource:dfm:FlowChartMainForm/FlowChartMainForm.pcMain.tsCode.Debugger.mnPopupRegisters.mnAddWatch` |
| Handler node | `function:010536e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["mnAddWatch"] -->|OnClick| handler["FUN_010536e0"]
    handler --> call1["FUN_00f8f630"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010536E0__FUN_010536e0.c](../../../DecompiledSources/Tina16/functions/00000000010536E0__FUN_010536e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: FlowChartMainForm.pcMain.tsCode.Debugger.mnPopupRegisters.mnAddWatch.OnClick, FlowChartMainForm.pcMain.tsEditorAndCode.pnDebugger2.Debugger2.mnPopupRegisters.mnAddWatch.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00f8f630` — FUN_00f8f630

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
