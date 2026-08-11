# Run F9

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.mnMainMenu.mnRun.RunF91 |
| Control class | TMenuItem |
| Caption | Run F9 |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | RunF91Click |
| Handler address | 01498bc0 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.mnMainMenu.mnRun.RunF91` |
| Handler node | `function:01498bc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Run F9"] -->|OnClick| handler["FUN_01498bc0"]
    handler --> call1["FUN_01496950"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001498BC0__FUN_01498bc0.c](../../../DecompiledSources/Tina16/functions/0000000001498BC0__FUN_01498bc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.mnMainMenu.mnRun.RunF91.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01496950` — Handles 1 Delphi UI event: frmDesignTool.AdvancedPanel.gbInterpreter.pnPanelInterpreter.pnToolPanel.sbRun.OnClick.

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
