# Show template

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPreviewForm |
| Component path | frxPreviewForm.HiddenMenu.Showtemplate1 |
| Control class | TMenuItem |
| Caption | Show template |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Showtemplate1Click |
| Handler address | 018afe50 |
| Graph node | `resource:dfm:frxPreviewForm/frxPreviewForm.HiddenMenu.Showtemplate1` |
| Handler node | `function:018afe50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Show template"] -->|OnClick| handler["FUN_018afe50"]
    handler --> call1["FUN_018ab020"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018AFE50__FUN_018afe50.c](../../../DecompiledSources/Tina16/functions/00000000018AFE50__FUN_018afe50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPreviewForm.HiddenMenu.Showtemplate1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:018ab020` — FUN_018ab020

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
