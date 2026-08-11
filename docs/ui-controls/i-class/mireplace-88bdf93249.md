# &Replace...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.MainMenu.mEdit.miReplace |
| Control class | TMenuItem |
| Caption | &Replace... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miReplaceClick |
| Handler address | 017efa80 |
| Graph node | `resource:dfm:I_Class/I_Class.MainMenu.mEdit.miReplace` |
| Handler node | `function:017efa80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Replace..."] -->|OnClick| handler["FUN_017efa80"]
    handler --> call1["FUN_017f2f00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EFA80__FUN_017efa80.c](../../../DecompiledSources/Tina16/functions/00000000017EFA80__FUN_017efa80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.MainMenu.mEdit.miReplace.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:017f2f00` — FUN_017f2f00

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
