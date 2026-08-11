# Text Options

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PyMainForm |
| Component path | PyMainForm.MainMenu.Edit1.mnTextOptions |
| Control class | TMenuItem |
| Caption | Text Options |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnTextOptionsClick |
| Handler address | 0146f270 |
| Graph node | `resource:dfm:PyMainForm/PyMainForm.MainMenu.Edit1.mnTextOptions` |
| Handler node | `function:0146f270` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Text Options"] -->|OnClick| handler["FUN_0146f270"]
    handler --> call1["FUN_01470c00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146F270__FUN_0146f270.c](../../../DecompiledSources/Tina16/functions/000000000146F270__FUN_0146f270.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PyMainForm.MainMenu.Edit1.mnTextOptions.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01470c00` — Handles 1 Delphi UI event: PyMainForm.Panel1.Panel2.sbSetFont.OnClick.

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
