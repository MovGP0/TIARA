# Run

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PyMainForm |
| Component path | PyMainForm.Panel1.Panel2.sbRun |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Run |
| Text | Not present in the recovered resource. |
| Handler name | sbRunClick |
| Handler address | 01470460 |
| Graph node | `resource:dfm:PyMainForm/PyMainForm.Panel1.Panel2.sbRun` |
| Handler node | `function:01470460` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Run"] -->|OnClick| handler["FUN_01470460"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00416cd0"]
    handler --> call4["FUN_00440a20"]
    handler --> call5["FUN_004412f0"]
    handler --> call6["FUN_007fc180"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001470460__FUN_01470460.c](../../../DecompiledSources/Tina16/functions/0000000001470460__FUN_01470460.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PyMainForm.Panel1.Panel2.sbRun.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 11

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:00440a20` — FUN_00440a20
- `function:004412f0` — FUN_004412f0
- `function:007fc180` — FUN_007fc180
- `function:013b9dc0` — FUN_013b9dc0
- `function:013bc030` — FUN_013bc030
- `function:013bd980` — FUN_013bd980
- `function:0146cfd0` — FUN_0146cfd0
- `function:01470c80` — FUN_01470c80

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0312_PyMainForm_PyMainForm_Panel1_Panel2_sbRun_Glyph_Data.png`](../../../glyph/0312_PyMainForm_PyMainForm_Panel1_Panel2_sbRun_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
