# cbCategories

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLPickerForm |
| Component path | HDLPickerForm.cbCategories |
| Control class | TComboBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | cbCategoriesClick |
| Handler address | 01706a80 |
| Graph node | `resource:dfm:HDLPickerForm/HDLPickerForm.cbCategories` |
| Handler node | `function:01706a80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["cbCategories"] -->|OnClick| handler["FUN_01706a80"]
    handler --> call1["FUN_01706ab0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001706A80__FUN_01706a80.c](../../../DecompiledSources/Tina16/functions/0000000001706A80__FUN_01706a80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HDLPickerForm.cbCategories.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01706ab0` — FUN_01706ab0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Category:  at distance 70.
- Rank 2: 0000/0000 at distance 186.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
