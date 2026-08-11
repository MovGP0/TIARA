# &OK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.mnFileEmbedded.mnOKE |
| Control class | TMenuItem |
| Caption | &OK |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnOKEClick |
| Handler address | 0179cea0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.mnFileEmbedded.mnOKE` |
| Handler node | `function:0179cea0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&OK"] -->|OnClick| handler["FUN_0179cea0"]
    handler --> call1["FUN_01795670"]
    handler --> call2["FUN_01797060"]
    handler --> call3["FUN_0179d460"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000179CEA0__FUN_0179cea0.c](../../../DecompiledSources/Tina16/functions/000000000179CEA0__FUN_0179cea0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: ShapeEdit.TopToolBar.GeneralTools.sbOKE.OnClick, ShapeEdit.MainMenu.mnFileEmbedded.mnOKE.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:01795670` — FUN_01795670
- `function:01797060` — FUN_01797060
- `function:0179d460` — FUN_0179d460

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
