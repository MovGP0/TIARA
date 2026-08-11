# Options...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SteadyStateAnalDlg |
| Component path | SteadyStateAnalDlg.OptionsBitBtn |
| Control class | TBitBtn |
| Caption | Options... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OptionsBitBtnClick |
| Handler address | 01339b10 |
| Graph node | `resource:dfm:SteadyStateAnalDlg/SteadyStateAnalDlg.OptionsBitBtn` |
| Handler node | `function:01339b10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Options..."] -->|OnClick| handler["FUN_01339b10"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_01338660"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001339B10__FUN_01339b10.c](../../../DecompiledSources/Tina16/functions/0000000001339B10__FUN_01339b10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SteadyStateAnalDlg.OptionsBitBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:01338660` — FUN_01338660

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
