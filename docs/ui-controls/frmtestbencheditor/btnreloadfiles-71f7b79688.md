# Reload files

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmTestBenchEditor |
| Component path | frmTestBenchEditor.pnlMain.pnlFileSelector.pnlSetRoot.btnReloadFiles |
| Control class | TButton |
| Caption | Reload files |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnReloadFilesClick |
| Handler address | 012c56c0 |
| Graph node | `resource:dfm:frmTestBenchEditor/frmTestBenchEditor.pnlMain.pnlFileSelector.pnlSetRoot.btnReloadFiles` |
| Handler node | `function:012c56c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Reload files"] -->|OnClick| handler["FUN_012c56c0"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["VCL control Unicode text reader"]
    handler --> call3["FUN_006ded30"]
    handler --> call4["FUN_006dee70"]
    handler --> call5["FUN_006df4b0"]
    handler --> call6["FUN_006df690"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012C56C0__FUN_012c56c0.c](../../../DecompiledSources/Tina16/functions/00000000012C56C0__FUN_012c56c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmTestBenchEditor.pnlMain.pnlFileSelector.pnlSetRoot.btnReloadFiles.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 12

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:0064dd90` — VCL control Unicode text reader
- `function:006ded30` — FUN_006ded30
- `function:006dee70` — FUN_006dee70
- `function:006df4b0` — FUN_006df4b0
- `function:006df690` — FUN_006df690
- `function:006df710` — FUN_006df710
- `function:006e1e60` — FUN_006e1e60
- `function:006e23c0` — FUN_006e23c0
- `function:006e24b0` — FUN_006e24b0
- `function:012c28a0` — FUN_012c28a0
- `function:012c7620` — FUN_012c7620

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Circuit folder at distance 308.
- Rank 2: Result folder at distance 332.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
