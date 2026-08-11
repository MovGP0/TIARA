# Delete temporary files

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LocalLLMForm |
| Component path | LocalLLMForm.MainMenu1.mnTools.mnDeleteTempFiles |
| Control class | TMenuItem |
| Caption | Delete temporary files |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnDeleteTempFilesClick |
| Handler address | 01a530e0 |
| Graph node | `resource:dfm:LocalLLMForm/LocalLLMForm.MainMenu1.mnTools.mnDeleteTempFiles` |
| Handler node | `function:01a530e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Delete temporary files"] -->|OnClick| handler["FUN_01a530e0"]
    handler --> call1["FUN_0072d440"]
    handler --> call2["FUN_01b1e2f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A530E0__FUN_01a530e0.c](../../../DecompiledSources/Tina16/functions/0000000001A530E0__FUN_01a530e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LocalLLMForm.MainMenu1.mnTools.mnDeleteTempFiles.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0072d440` — FUN_0072d440
- `function:01b1e2f0` — FUN_01b1e2f0

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
