# Separate curves

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFMainMenu.DFViewMnu.SeparateCurvesMnu |
| Control class | TMenuItem |
| Caption | Separate curves |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SeparateCurvesMnuClick |
| Handler address | 01a78e30 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFMainMenu.DFViewMnu.SeparateCurvesMnu` |
| Handler node | `function:01a78e30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Separate curves"] -->|OnClick| handler["FUN_01a78e30"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_01a77f90"]
    handler --> call3["FUN_01a7fc90"]
    handler --> call4["FUN_01ae6250"]
    handler --> call5["FUN_01aed550"]
    handler --> call6["FUN_01aee720"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A78E30__FUN_01a78e30.c](../../../DecompiledSources/Tina16/functions/0000000001A78E30__FUN_01a78e30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFMainMenu.DFViewMnu.SeparateCurvesMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:01a77f90` — Handles 1 Delphi UI event: DFWindow.OnResize.
- `function:01a7fc90` — FUN_01a7fc90
- `function:01ae6250` — FUN_01ae6250
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

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
