# Dotted

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmDesignTool |
| Component path | frmDesignTool.pmBackground.Border1.DottedMnu |
| Control class | TMenuItem |
| Caption | Dotted |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DottedMnuClick |
| Handler address | 0149a9c0 |
| Graph node | `resource:dfm:frmDesignTool/frmDesignTool.pmBackground.Border1.DottedMnu` |
| Handler node | `function:0149a9c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Dotted"] -->|OnClick| handler["FUN_0149a9c0"]
    handler --> call1["FUN_007e2d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000149A9C0__FUN_0149a9c0.c](../../../DecompiledSources/Tina16/functions/000000000149A9C0__FUN_0149a9c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmDesignTool.pmBackground.Border1.DottedMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:007e2d20` — FUN_007e2d20

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
