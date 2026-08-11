# Environment variables

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | EditorOpsDlg |
| Component path | EditorOpsDlg.btnListEnvVars |
| Control class | TButton |
| Caption | Environment variables |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnListEnvVarsClick |
| Handler address | 01b7c620 |
| Graph node | `resource:dfm:EditorOpsDlg/EditorOpsDlg.btnListEnvVars` |
| Handler node | `function:01b7c620` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Environment variables"] -->|OnClick| handler["FUN_01b7c620"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_007fc180"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B7C620__FUN_01b7c620.c](../../../DecompiledSources/Tina16/functions/0000000001B7C620__FUN_01b7c620.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: EditorOpsDlg.btnListEnvVars.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Autosave interval (0 - no autosave) at distance 56.
- Rank 2: [min] at distance 256.
- Rank 3: Autosave history depth at distance 289.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
